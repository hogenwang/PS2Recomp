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

// Function: sub_001B39B8
// Address: 0x1b39b8 - 0x1b3a88
void sub_001B39B8_0x1b39b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B39B8_0x1b39b8");
#endif

    switch (ctx->pc) {
        case 0x1b3a08u: goto label_1b3a08;
        case 0x1b3a18u: goto label_1b3a18;
        case 0x1b3a20u: goto label_1b3a20;
        case 0x1b3a28u: goto label_1b3a28;
        default: break;
    }

    ctx->pc = 0x1b39b8u;

    // 0x1b39b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b39b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b39bc: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1b39bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1b39c0: 0x3c160037  lui         $s6, 0x37
    ctx->pc = 0x1b39c0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)55 << 16));
    // 0x1b39c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b39c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b39c8: 0x26c330f0  addiu       $v1, $s6, 0x30F0
    ctx->pc = 0x1b39c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 12528));
    // 0x1b39cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b39ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b39d0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b39d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b39d4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1b39d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1b39d8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1b39d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1b39dc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1b39dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1b39e0: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1b39e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1b39e4: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x1b39e4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b39e8: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1B39E8u;
    {
        const bool branch_taken_0x1b39e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B39ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B39E8u;
        // 0x1b39ec: 0x3c150037  lui         $s5, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b39e8) {
            ctx->pc = 0x1B3A40u;
            goto label_1b3a40;
        }
    }
    ctx->pc = 0x1B39F0u;
    // 0x1b39f0: 0x3c140037  lui         $s4, 0x37
    ctx->pc = 0x1b39f0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)55 << 16));
    // 0x1b39f4: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x1b39f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b39f8: 0x26b230e8  addiu       $s2, $s5, 0x30E8
    ctx->pc = 0x1b39f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 12520));
    // 0x1b39fc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1b39fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b3a00: 0x2690309c  addiu       $s0, $s4, 0x309C
    ctx->pc = 0x1b3a00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 12444));
    // 0x1b3a04: 0x0  nop
    ctx->pc = 0x1b3a04u;
    // NOP
label_1b3a08:
    // 0x1b3a08: 0xfe510000  sd          $s1, 0x0($s2)
    ctx->pc = 0x1b3a08u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 17));
    // 0x1b3a0c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b3a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b3a10: 0xc0432bc  jal         func_10CAF0
    ctx->pc = 0x1B3A10u;
    SET_GPR_U32(ctx, 31, 0x1B3A18u);
    ctx->pc = 0x1B3A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3A10u;
    // 0x1b3a14: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CAF0u, 0x1B3A10u, 0x1B3A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3A18u;
label_1b3a18:
    // 0x1b3a18: 0xc0432e4  jal         func_10CB90
    ctx->pc = 0x1B3A18u;
    SET_GPR_U32(ctx, 31, 0x1B3A20u);
    ctx->pc = 0x1B3A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3A18u;
    // 0x1b3a1c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CB90u, 0x1B3A18u, 0x1B3A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3A20u;
label_1b3a20:
    // 0x1b3a20: 0xc06cc66  jal         func_1B3198
    ctx->pc = 0x1B3A20u;
    SET_GPR_U32(ctx, 31, 0x1B3A28u);
    ctx->pc = 0x1B3A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3A20u;
    // 0x1b3a24: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3198u, 0x1B3A20u, 0x1B3A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3A28u;
label_1b3a28:
    // 0x1b3a28: 0xde630000  ld          $v1, 0x0($s3)
    ctx->pc = 0x1b3a28u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b3a2c: 0x1060fff6  beqz        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1B3A2Cu;
    {
        const bool branch_taken_0x1b3a2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3A2Cu;
        // 0x1b3a30: 0x26c230f0  addiu       $v0, $s6, 0x30F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 12528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3a2c) {
            ctx->pc = 0x1B3A08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b3a08;
        }
    }
    ctx->pc = 0x1B3A34u;
    // 0x1b3a34: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B3A34u;
    {
        const bool branch_taken_0x1b3a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3A34u;
        // 0x1b3a38: 0xdfb60030  ld          $s6, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3a34) {
            ctx->pc = 0x1B3A4Cu;
            goto label_1b3a4c;
        }
    }
    ctx->pc = 0x1B3A3Cu;
    // 0x1b3a3c: 0x0  nop
    ctx->pc = 0x1b3a3cu;
    // NOP
label_1b3a40:
    // 0x1b3a40: 0x3c140037  lui         $s4, 0x37
    ctx->pc = 0x1b3a40u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)55 << 16));
    // 0x1b3a44: 0x26c230f0  addiu       $v0, $s6, 0x30F0
    ctx->pc = 0x1b3a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 12528));
    // 0x1b3a48: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1b3a48u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b3a4c:
    // 0x1b3a4c: 0x26a330e8  addiu       $v1, $s5, 0x30E8
    ctx->pc = 0x1b3a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 12520));
    // 0x1b3a50: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1b3a50u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b3a54: 0x2684309c  addiu       $a0, $s4, 0x309C
    ctx->pc = 0x1b3a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 12444));
    // 0x1b3a58: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1b3a58u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b3a5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b3a5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3a60: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b3a60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b3a64: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b3a64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b3a68: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b3a68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b3a6c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1b3a6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b3a70: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x1b3a70u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x1b3a74: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x1b3a74u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    // 0x1b3a78: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1b3a78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1b3a7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3A7Cu;
        // 0x1b3a80: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3A7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3A84u;
    // 0x1b3a84: 0x0  nop
    ctx->pc = 0x1b3a84u;
    // NOP
}
