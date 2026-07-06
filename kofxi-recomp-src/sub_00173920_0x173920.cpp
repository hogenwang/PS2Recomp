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

// Function: sub_00173920
// Address: 0x173920 - 0x1739c0
void sub_00173920_0x173920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173920_0x173920");
#endif

    switch (ctx->pc) {
        case 0x173954u: goto label_173954;
        case 0x173964u: goto label_173964;
        case 0x173998u: goto label_173998;
        case 0x1739a8u: goto label_1739a8;
        default: break;
    }

    ctx->pc = 0x173920u;

    // 0x173920: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x173920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x173924: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x173924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x173928: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x173928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17392c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17392cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173930: 0x1200001b  beqz        $s0, . + 4 + (0x1B << 2)
    ctx->pc = 0x173930u;
    {
        const bool branch_taken_0x173930 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x173930) {
            ctx->pc = 0x1739A0u;
            goto label_1739a0;
        }
    }
    ctx->pc = 0x173938u;
    // 0x173938: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x173938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x17393c: 0x8c426dc0  lw          $v0, 0x6DC0($v0)
    ctx->pc = 0x17393cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28096)));
    // 0x173940: 0x2c410080  sltiu       $at, $v0, 0x80
    ctx->pc = 0x173940u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x173944: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x173944u;
    {
        const bool branch_taken_0x173944 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x173944) {
            ctx->pc = 0x173990u;
            goto label_173990;
        }
    }
    ctx->pc = 0x17394Cu;
    // 0x17394c: 0xc05cde8  jal         func_1737A0
    ctx->pc = 0x17394Cu;
    SET_GPR_U32(ctx, 31, 0x173954u);
    ctx->pc = 0x173950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17394Cu;
    // 0x173950: 0x8e0400dc  lw          $a0, 0xDC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1737A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1737A0u, 0x17394Cu, 0x173954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173954u;
label_173954:
    // 0x173954: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x173954u;
    {
        const bool branch_taken_0x173954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x173954) {
            ctx->pc = 0x173964u;
            goto label_173964;
        }
    }
    ctx->pc = 0x17395Cu;
    // 0x17395c: 0xc068158  jal         func_1A0560
    ctx->pc = 0x17395Cu;
    SET_GPR_U32(ctx, 31, 0x173964u);
    ctx->pc = 0x1A0560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0560u, 0x17395Cu, 0x173964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173964u;
label_173964:
    // 0x173964: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x173964u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x173968: 0x3c05009b  lui         $a1, 0x9B
    ctx->pc = 0x173968u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)155 << 16));
    // 0x17396c: 0x8c646dc0  lw          $a0, 0x6DC0($v1)
    ctx->pc = 0x17396cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28096)));
    // 0x173970: 0x24a56bc0  addiu       $a1, $a1, 0x6BC0
    ctx->pc = 0x173970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27584));
    // 0x173974: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x173974u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x173978: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x173978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x17397c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x17397cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x173980: 0xac646dc0  sw          $a0, 0x6DC0($v1)
    ctx->pc = 0x173980u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28096), GPR_U32(ctx, 4));
    // 0x173984: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x173984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x173988: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x173988u;
    {
        const bool branch_taken_0x173988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17398Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173988u;
        // 0x17398c: 0xac700000  sw          $s0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173988) {
            ctx->pc = 0x1739A8u;
            goto label_1739a8;
        }
    }
    ctx->pc = 0x173990u;
label_173990:
    // 0x173990: 0xc068158  jal         func_1A0560
    ctx->pc = 0x173990u;
    SET_GPR_U32(ctx, 31, 0x173998u);
    ctx->pc = 0x1A0560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0560u, 0x173990u, 0x173998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173998u;
label_173998:
    // 0x173998: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x173998u;
    {
        const bool branch_taken_0x173998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17399Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173998u;
        // 0x17399c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173998) {
            ctx->pc = 0x1739ACu;
            goto label_1739ac;
        }
    }
    ctx->pc = 0x1739A0u;
label_1739a0:
    // 0x1739a0: 0xc068158  jal         func_1A0560
    ctx->pc = 0x1739A0u;
    SET_GPR_U32(ctx, 31, 0x1739A8u);
    ctx->pc = 0x1A0560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0560u, 0x1739A0u, 0x1739A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1739A8u;
label_1739a8:
    // 0x1739a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1739a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1739ac:
    // 0x1739ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1739acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1739b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1739B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1739B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1739B0u;
        // 0x1739b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1739B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1739B8u;
    // 0x1739b8: 0x0  nop
    ctx->pc = 0x1739b8u;
    // NOP
    // 0x1739bc: 0x0  nop
    ctx->pc = 0x1739bcu;
    // NOP
    if (ctx->pc == 0x1739bcu) { ctx->pc = 0x1739c0u; }
}
