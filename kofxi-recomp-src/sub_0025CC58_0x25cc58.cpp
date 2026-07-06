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

// Function: sub_0025CC58
// Address: 0x25cc58 - 0x25ccd0
void sub_0025CC58_0x25cc58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025CC58_0x25cc58");
#endif

    switch (ctx->pc) {
        case 0x25cc78u: goto label_25cc78;
        case 0x25cc90u: goto label_25cc90;
        case 0x25cca8u: goto label_25cca8;
        default: break;
    }

    ctx->pc = 0x25cc58u;

    // 0x25cc58: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25cc58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25cc5c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x25cc5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x25cc60: 0x3c12003a  lui         $s2, 0x3A
    ctx->pc = 0x25cc60u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)58 << 16));
    // 0x25cc64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25cc64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25cc68: 0x8e441750  lw          $a0, 0x1750($s2)
    ctx->pc = 0x25cc68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5968)));
    // 0x25cc6c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x25cc6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x25cc70: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x25CC70u;
    SET_GPR_U32(ctx, 31, 0x25CC78u);
    ctx->pc = 0x25CC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CC70u;
    // 0x25cc74: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCA0u, 0x25CC70u, 0x25CC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CC78u;
label_25cc78:
    // 0x25cc78: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x25cc78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x25cc7c: 0x8c70ae90  lw          $s0, -0x5170($v1)
    ctx->pc = 0x25cc7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946448)));
    // 0x25cc80: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x25CC80u;
    {
        const bool branch_taken_0x25cc80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CC80u;
        // 0x25cc84: 0x2411fffd  addiu       $s1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cc80) {
            ctx->pc = 0x25CCB4u;
            goto label_25ccb4;
        }
    }
    ctx->pc = 0x25CC88u;
    // 0x25cc88: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x25cc88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x25cc8c: 0x0  nop
    ctx->pc = 0x25cc8cu;
    // NOP
label_25cc90:
    // 0x25cc90: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x25cc90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x25cc94: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25CC94u;
    {
        const bool branch_taken_0x25cc94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CC94u;
        // 0x25cc98: 0x711024  and         $v0, $v1, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cc94) {
            ctx->pc = 0x25CCA8u;
            goto label_25cca8;
        }
    }
    ctx->pc = 0x25CC9Cu;
    // 0x25cc9c: 0x86040044  lh          $a0, 0x44($s0)
    ctx->pc = 0x25cc9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x25cca0: 0xc043320  jal         func_10CC80
    ctx->pc = 0x25CCA0u;
    SET_GPR_U32(ctx, 31, 0x25CCA8u);
    ctx->pc = 0x25CCA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CCA0u;
    // 0x25cca4: 0xae020040  sw          $v0, 0x40($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x25CCA0u, 0x25CCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CCA8u;
label_25cca8:
    // 0x25cca8: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x25cca8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25ccac: 0x5600fff8  bnel        $s0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x25CCACu;
    {
        const bool branch_taken_0x25ccac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x25ccac) {
            ctx->pc = 0x25CCB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25CCACu;
            // 0x25ccb0: 0x8e030040  lw          $v1, 0x40($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25CC90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25cc90;
        }
    }
    ctx->pc = 0x25CCB4u;
label_25ccb4:
    // 0x25ccb4: 0x8e441750  lw          $a0, 0x1750($s2)
    ctx->pc = 0x25ccb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5968)));
    // 0x25ccb8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x25ccb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25ccbc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x25ccbcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25ccc0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x25ccc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25ccc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25ccc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25ccc8: 0x8043320  j           func_10CC80
    ctx->pc = 0x25CCC8u;
    ctx->pc = 0x25CCCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CCC8u;
    // 0x25cccc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    sub_0010CC80_0x10cc80(rdram, ctx, runtime); return;
    ctx->pc = 0x25CCD0u;
}
