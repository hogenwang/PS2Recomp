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

// Function: sub_002BFB20
// Address: 0x2bfb20 - 0x2bfbc0
void sub_002BFB20_0x2bfb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BFB20_0x2bfb20");
#endif

    switch (ctx->pc) {
        case 0x2bfb50u: goto label_2bfb50;
        case 0x2bfb78u: goto label_2bfb78;
        case 0x2bfb90u: goto label_2bfb90;
        case 0x2bfba8u: goto label_2bfba8;
        default: break;
    }

    ctx->pc = 0x2bfb20u;

    // 0x2bfb20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bfb20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2bfb24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2bfb24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfb28: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2bfb28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2bfb2c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2bfb2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2bfb30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bfb30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfb34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2bfb34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bfb38: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2bfb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2bfb3c: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x2bfb3cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bfb40: 0x1900000b  blez        $t0, . + 4 + (0xB << 2)
    ctx->pc = 0x2BFB40u;
    {
        const bool branch_taken_0x2bfb40 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x2BFB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFB40u;
        // 0x2bfb44: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfb40) {
            ctx->pc = 0x2BFB70u;
            goto label_2bfb70;
        }
    }
    ctx->pc = 0x2BFB48u;
    // 0x2bfb48: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2bfb48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2bfb4c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2bfb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_2bfb50:
    // 0x2bfb50: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2bfb50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2bfb54: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2bfb54u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bfb58: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2bfb58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2bfb5c: 0x1083000e  beq         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2BFB5Cu;
    {
        const bool branch_taken_0x2bfb5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2BFB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFB5Cu;
        // 0x2bfb60: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfb5c) {
            ctx->pc = 0x2BFB98u;
            goto label_2bfb98;
        }
    }
    ctx->pc = 0x2BFB64u;
    // 0x2bfb64: 0xc8102a  slt         $v0, $a2, $t0
    ctx->pc = 0x2bfb64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x2bfb68: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2BFB68u;
    {
        const bool branch_taken_0x2bfb68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BFB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFB68u;
        // 0x2bfb6c: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfb68) {
            ctx->pc = 0x2BFB50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2bfb50;
        }
    }
    ctx->pc = 0x2BFB70u;
label_2bfb70:
    // 0x2bfb70: 0xc0afdcc  jal         func_2BF730
    ctx->pc = 0x2BFB70u;
    SET_GPR_U32(ctx, 31, 0x2BFB78u);
    ctx->pc = 0x2BF730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF730u, 0x2BFB70u, 0x2BFB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFB78u;
label_2bfb78:
    // 0x2bfb78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bfb78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfb7c: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x2BFB7Cu;
    {
        const bool branch_taken_0x2bfb7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFB7Cu;
        // 0x2bfb80: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfb7c) {
            ctx->pc = 0x2BFBA8u;
            goto label_2bfba8;
        }
    }
    ctx->pc = 0x2BFB84u;
    // 0x2bfb84: 0xae110010  sw          $s1, 0x10($s0)
    ctx->pc = 0x2bfb84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
    // 0x2bfb88: 0xc0af10e  jal         func_2BC438
    ctx->pc = 0x2BFB88u;
    SET_GPR_U32(ctx, 31, 0x2BFB90u);
    ctx->pc = 0x2BFB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFB88u;
    // 0x2bfb8c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC438u, 0x2BFB88u, 0x2BFB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFB90u;
label_2bfb90:
    // 0x2bfb90: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BFB90u;
    {
        const bool branch_taken_0x2bfb90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bfb90) {
            ctx->pc = 0x2BFBA0u;
            goto label_2bfba0;
        }
    }
    ctx->pc = 0x2BFB98u;
label_2bfb98:
    // 0x2bfb98: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2BFB98u;
    {
        const bool branch_taken_0x2bfb98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFB98u;
        // 0x2bfb9c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfb98) {
            ctx->pc = 0x2BFBACu;
            goto label_2bfbac;
        }
    }
    ctx->pc = 0x2BFBA0u;
label_2bfba0:
    // 0x2bfba0: 0xc0afdec  jal         func_2BF7B0
    ctx->pc = 0x2BFBA0u;
    SET_GPR_U32(ctx, 31, 0x2BFBA8u);
    ctx->pc = 0x2BFBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFBA0u;
    // 0x2bfba4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF7B0u, 0x2BFBA0u, 0x2BFBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFBA8u;
label_2bfba8:
    // 0x2bfba8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2bfba8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bfbac:
    // 0x2bfbac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2bfbacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bfbb0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2bfbb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bfbb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bfbb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bfbb8: 0x3e00008  jr          $ra
    ctx->pc = 0x2BFBB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BFBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFBB8u;
        // 0x2bfbbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BFBB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BFBC0u;
}
