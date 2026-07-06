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

// Function: sub_00262978
// Address: 0x262978 - 0x262a30
void sub_00262978_0x262978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00262978_0x262978");
#endif

    switch (ctx->pc) {
        case 0x2629b0u: goto label_2629b0;
        case 0x2629b8u: goto label_2629b8;
        case 0x2629d0u: goto label_2629d0;
        case 0x262a08u: goto label_262a08;
        default: break;
    }

    ctx->pc = 0x262978u;

    // 0x262978: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x262978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x26297c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x26297cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x262980: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x262980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x262984: 0x3c14003a  lui         $s4, 0x3A
    ctx->pc = 0x262984u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)58 << 16));
    // 0x262988: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x262988u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26298c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x26298cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x262990: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x262990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x262994: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x262994u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262998: 0x8e841a10  lw          $a0, 0x1A10($s4)
    ctx->pc = 0x262998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 6672)));
    // 0x26299c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x26299cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2629a0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2629a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2629a4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2629a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2629a8: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x2629A8u;
    SET_GPR_U32(ctx, 31, 0x2629B0u);
    ctx->pc = 0x2629ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2629A8u;
    // 0x2629ac: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCA0u, 0x2629A8u, 0x2629B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2629B0u;
label_2629b0:
    // 0x2629b0: 0xc098a02  jal         func_262808
    ctx->pc = 0x2629B0u;
    SET_GPR_U32(ctx, 31, 0x2629B8u);
    ctx->pc = 0x2629B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2629B0u;
    // 0x2629b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262808u, 0x2629B0u, 0x2629B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2629B8u;
label_2629b8:
    // 0x2629b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2629B8u;
    {
        const bool branch_taken_0x2629b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2629b8) {
            ctx->pc = 0x2629C8u;
            goto label_2629c8;
        }
    }
    ctx->pc = 0x2629C0u;
    // 0x2629c0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2629C0u;
    {
        const bool branch_taken_0x2629c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2629C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2629C0u;
        // 0x2629c4: 0x2411ffe7  addiu       $s1, $zero, -0x19 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2629c0) {
            ctx->pc = 0x262A00u;
            goto label_262a00;
        }
    }
    ctx->pc = 0x2629C8u;
label_2629c8:
    // 0x2629c8: 0xc098552  jal         func_261548
    ctx->pc = 0x2629C8u;
    SET_GPR_U32(ctx, 31, 0x2629D0u);
    ctx->pc = 0x2629CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2629C8u;
    // 0x2629cc: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x2629C8u, 0x2629D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2629D0u;
label_2629d0:
    // 0x2629d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2629D0u;
    {
        const bool branch_taken_0x2629d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2629D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2629D0u;
        // 0x2629d4: 0x3c0401c1  lui         $a0, 0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2629d0) {
            ctx->pc = 0x2629E0u;
            goto label_2629e0;
        }
    }
    ctx->pc = 0x2629D8u;
    // 0x2629d8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2629D8u;
    {
        const bool branch_taken_0x2629d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2629DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2629D8u;
        // 0x2629dc: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2629d8) {
            ctx->pc = 0x262A00u;
            goto label_262a00;
        }
    }
    ctx->pc = 0x2629E0u;
label_2629e0:
    // 0x2629e0: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x2629e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x2629e4: 0x8c83d778  lw          $v1, -0x2888($a0)
    ctx->pc = 0x2629e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294956920)));
    // 0x2629e8: 0xac520008  sw          $s2, 0x8($v0)
    ctx->pc = 0x2629e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 18));
    // 0x2629ec: 0xac53000c  sw          $s3, 0xC($v0)
    ctx->pc = 0x2629ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 19));
    // 0x2629f0: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2629F0u;
    {
        const bool branch_taken_0x2629f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2629F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2629F0u;
        // 0x2629f4: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2629f0) {
            ctx->pc = 0x2629FCu;
            goto label_2629fc;
        }
    }
    ctx->pc = 0x2629F8u;
    // 0x2629f8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2629f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2629fc:
    // 0x2629fc: 0xac82d778  sw          $v0, -0x2888($a0)
    ctx->pc = 0x2629fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294956920), GPR_U32(ctx, 2));
label_262a00:
    // 0x262a00: 0xc043320  jal         func_10CC80
    ctx->pc = 0x262A00u;
    SET_GPR_U32(ctx, 31, 0x262A08u);
    ctx->pc = 0x262A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262A00u;
    // 0x262a04: 0x8e841a10  lw          $a0, 0x1A10($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 6672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x262A00u, 0x262A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262A08u;
label_262a08:
    // 0x262a08: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x262a08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262a0c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x262a0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x262a10: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x262a10u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x262a14: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x262a14u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x262a18: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x262a18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x262a1c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x262a1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x262a20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x262a20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x262a24: 0x3e00008  jr          $ra
    ctx->pc = 0x262A24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x262A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262A24u;
        // 0x262a28: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262A24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x262A2Cu;
    // 0x262a2c: 0x0  nop
    ctx->pc = 0x262a2cu;
    // NOP
}
