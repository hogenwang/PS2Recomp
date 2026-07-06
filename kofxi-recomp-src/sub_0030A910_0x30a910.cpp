#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0030A910
// Address: 0x30a910 - 0x30aa00
void sub_0030A910_0x30a910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030A910_0x30a910");
#endif

    switch (ctx->pc) {
        case 0x30a928u: goto label_30a928;
        case 0x30a940u: goto label_30a940;
        case 0x30a98cu: goto label_30a98c;
        case 0x30a9a0u: goto label_30a9a0;
        case 0x30a9bcu: goto label_30a9bc;
        case 0x30a9d0u: goto label_30a9d0;
        default: break;
    }

    ctx->pc = 0x30a910u;

    // 0x30a910: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30a910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30a914: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30a914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30a918: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30a918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30a91c: 0x3c1001d3  lui         $s0, 0x1D3
    ctx->pc = 0x30a91cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)467 << 16));
    // 0x30a920: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x30A920u;
    {
        const bool branch_taken_0x30a920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A920u;
        // 0x30a924: 0x26103dc0  addiu       $s0, $s0, 0x3DC0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 15808));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a920) {
            ctx->pc = 0x30A9D8u;
            goto label_30a9d8;
        }
    }
    ctx->pc = 0x30A928u;
label_30a928:
    // 0x30a928: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30a928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30a92c: 0x4102b  sltu        $v0, $zero, $a0
    ctx->pc = 0x30a92cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x30a930: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x30a930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x30a934: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x30A934u;
    {
        const bool branch_taken_0x30a934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a934) {
            ctx->pc = 0x30A960u;
            goto label_30a960;
        }
    }
    ctx->pc = 0x30A93Cu;
    // 0x30a93c: 0x0  nop
    ctx->pc = 0x30a93cu;
    // NOP
label_30a940:
    // 0x30a940: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x30a940u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x30a944: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30a944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30a948: 0x4102b  sltu        $v0, $zero, $a0
    ctx->pc = 0x30a948u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x30a94c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x30a94cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x30a950: 0x0  nop
    ctx->pc = 0x30a950u;
    // NOP
    // 0x30a954: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x30A954u;
    {
        const bool branch_taken_0x30a954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30a954) {
            ctx->pc = 0x30A940u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30a940;
        }
    }
    ctx->pc = 0x30A95Cu;
    // 0x30a95c: 0x0  nop
    ctx->pc = 0x30a95cu;
    // NOP
label_30a960:
    // 0x30a960: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x30a960u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x30a964: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x30a964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x30a968: 0x8ca30024  lw          $v1, 0x24($a1)
    ctx->pc = 0x30a968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x30a96c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x30a96cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x30a970: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x30A970u;
    {
        const bool branch_taken_0x30a970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a970) {
            ctx->pc = 0x30A9A8u;
            goto label_30a9a8;
        }
    }
    ctx->pc = 0x30A978u;
    // 0x30a978: 0x8ca20158  lw          $v0, 0x158($a1)
    ctx->pc = 0x30a978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 344)));
    // 0x30a97c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30A97Cu;
    {
        const bool branch_taken_0x30a97c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a97c) {
            ctx->pc = 0x30A998u;
            goto label_30a998;
        }
    }
    ctx->pc = 0x30A984u;
    // 0x30a984: 0xc0c2864  jal         func_30A190
    ctx->pc = 0x30A984u;
    SET_GPR_U32(ctx, 31, 0x30A98Cu);
    ctx->pc = 0x30A190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A190u, 0x30A984u, 0x30A98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A98Cu;
label_30a98c:
    // 0x30a98c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x30A98Cu;
    {
        const bool branch_taken_0x30a98c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a98c) {
            ctx->pc = 0x30A9D0u;
            goto label_30a9d0;
        }
    }
    ctx->pc = 0x30A994u;
    // 0x30a994: 0x0  nop
    ctx->pc = 0x30a994u;
    // NOP
label_30a998:
    // 0x30a998: 0xc0c28fc  jal         func_30A3F0
    ctx->pc = 0x30A998u;
    SET_GPR_U32(ctx, 31, 0x30A9A0u);
    ctx->pc = 0x30A3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A3F0u, 0x30A998u, 0x30A9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A9A0u;
label_30a9a0:
    // 0x30a9a0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x30A9A0u;
    {
        const bool branch_taken_0x30a9a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a9a0) {
            ctx->pc = 0x30A9D0u;
            goto label_30a9d0;
        }
    }
    ctx->pc = 0x30A9A8u;
label_30a9a8:
    // 0x30a9a8: 0x8ca20158  lw          $v0, 0x158($a1)
    ctx->pc = 0x30a9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 344)));
    // 0x30a9ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30A9ACu;
    {
        const bool branch_taken_0x30a9ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a9ac) {
            ctx->pc = 0x30A9C8u;
            goto label_30a9c8;
        }
    }
    ctx->pc = 0x30A9B4u;
    // 0x30a9b4: 0xc0c27b0  jal         func_309EC0
    ctx->pc = 0x30A9B4u;
    SET_GPR_U32(ctx, 31, 0x30A9BCu);
    ctx->pc = 0x309EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309EC0u, 0x30A9B4u, 0x30A9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A9BCu;
label_30a9bc:
    // 0x30a9bc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x30A9BCu;
    {
        const bool branch_taken_0x30a9bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a9bc) {
            ctx->pc = 0x30A9D0u;
            goto label_30a9d0;
        }
    }
    ctx->pc = 0x30A9C4u;
    // 0x30a9c4: 0x0  nop
    ctx->pc = 0x30a9c4u;
    // NOP
label_30a9c8:
    // 0x30a9c8: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x30A9C8u;
    SET_GPR_U32(ctx, 31, 0x30A9D0u);
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x30A9C8u, 0x30A9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A9D0u;
label_30a9d0:
    // 0x30a9d0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x30a9d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x30a9d4: 0x0  nop
    ctx->pc = 0x30a9d4u;
    // NOP
label_30a9d8:
    // 0x30a9d8: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x30a9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x30a9dc: 0x8c653ba8  lw          $a1, 0x3BA8($v1)
    ctx->pc = 0x30a9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15272)));
    // 0x30a9e0: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x30a9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x30a9e4: 0x24a4ffff  addiu       $a0, $a1, -0x1
    ctx->pc = 0x30a9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x30a9e8: 0x14a0ffcf  bnez        $a1, . + 4 + (-0x31 << 2)
    ctx->pc = 0x30A9E8u;
    {
        const bool branch_taken_0x30a9e8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x30A9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A9E8u;
        // 0x30a9ec: 0xac643ba8  sw          $a0, 0x3BA8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 15272), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a9e8) {
            ctx->pc = 0x30A928u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30a928;
        }
    }
    ctx->pc = 0x30A9F0u;
    // 0x30a9f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30a9f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30a9f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30a9f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30a9f8: 0x3e00008  jr          $ra
    ctx->pc = 0x30A9F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30A9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A9F8u;
        // 0x30a9fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30A9F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30AA00u;
}
