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

// Function: sub_0033DF10
// Address: 0x33df10 - 0x33dfc0
void sub_0033DF10_0x33df10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033DF10_0x33df10");
#endif

    switch (ctx->pc) {
        case 0x33dfa8u: goto label_33dfa8;
        default: break;
    }

    ctx->pc = 0x33df10u;

    // 0x33df10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33df10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33df14: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x33df14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x33df18: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x33df18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x33df1c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x33DF1Cu;
    {
        const bool branch_taken_0x33df1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33DF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DF1Cu;
        // 0x33df20: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33df1c) {
            ctx->pc = 0x33DF30u;
            goto label_33df30;
        }
    }
    ctx->pc = 0x33DF24u;
    // 0x33df24: 0x3c09009c  lui         $t1, 0x9C
    ctx->pc = 0x33df24u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)156 << 16));
    // 0x33df28: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x33DF28u;
    {
        const bool branch_taken_0x33df28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33DF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DF28u;
        // 0x33df2c: 0x2529dd98  addiu       $t1, $t1, -0x2268 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294958488));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33df28) {
            ctx->pc = 0x33DF38u;
            goto label_33df38;
        }
    }
    ctx->pc = 0x33DF30u;
label_33df30:
    // 0x33df30: 0x3c09009c  lui         $t1, 0x9C
    ctx->pc = 0x33df30u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)156 << 16));
    // 0x33df34: 0x2529db50  addiu       $t1, $t1, -0x24B0
    ctx->pc = 0x33df34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294957904));
label_33df38:
    // 0x33df38: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x33DF38u;
    {
        const bool branch_taken_0x33df38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33df38) {
            ctx->pc = 0x33DF4Cu;
            goto label_33df4c;
        }
    }
    ctx->pc = 0x33DF40u;
    // 0x33df40: 0x3c08009c  lui         $t0, 0x9C
    ctx->pc = 0x33df40u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)156 << 16));
    // 0x33df44: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x33DF44u;
    {
        const bool branch_taken_0x33df44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33DF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DF44u;
        // 0x33df48: 0x2508db50  addiu       $t0, $t0, -0x24B0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957904));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33df44) {
            ctx->pc = 0x33DF54u;
            goto label_33df54;
        }
    }
    ctx->pc = 0x33DF4Cu;
label_33df4c:
    // 0x33df4c: 0x3c08009c  lui         $t0, 0x9C
    ctx->pc = 0x33df4cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)156 << 16));
    // 0x33df50: 0x2508dd98  addiu       $t0, $t0, -0x2268
    ctx->pc = 0x33df50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958488));
label_33df54:
    // 0x33df54: 0x50600002  beql        $v1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x33DF54u;
    {
        const bool branch_taken_0x33df54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33df54) {
            ctx->pc = 0x33DF58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33DF54u;
            // 0x33df58: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33DF60u;
            goto label_33df60;
        }
    }
    ctx->pc = 0x33DF5Cu;
    // 0x33df5c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x33df5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_33df60:
    // 0x33df60: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x33df60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x33df64: 0x306700ff  andi        $a3, $v1, 0xFF
    ctx->pc = 0x33df64u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33df68: 0x62140  sll         $a0, $a2, 5
    ctx->pc = 0x33df68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x33df6c: 0x9103014d  lbu         $v1, 0x14D($t0)
    ctx->pc = 0x33df6cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 333)));
    // 0x33df70: 0x892821  addu        $a1, $a0, $t1
    ctx->pc = 0x33df70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x33df74: 0x90a4014d  lbu         $a0, 0x14D($a1)
    ctx->pc = 0x33df74u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 333)));
    // 0x33df78: 0x5064000c  beql        $v1, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x33DF78u;
    {
        const bool branch_taken_0x33df78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x33df78) {
            ctx->pc = 0x33DF7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33DF78u;
            // 0x33df7c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33DFACu;
            goto label_33dfac;
        }
    }
    ctx->pc = 0x33DF80u;
    // 0x33df80: 0x9103016d  lbu         $v1, 0x16D($t0)
    ctx->pc = 0x33df80u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 365)));
    // 0x33df84: 0x10640008  beq         $v1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x33DF84u;
    {
        const bool branch_taken_0x33df84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x33df84) {
            ctx->pc = 0x33DFA8u;
            goto label_33dfa8;
        }
    }
    ctx->pc = 0x33DF8Cu;
    // 0x33df8c: 0x9103018d  lbu         $v1, 0x18D($t0)
    ctx->pc = 0x33df8cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 397)));
    // 0x33df90: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33DF90u;
    {
        const bool branch_taken_0x33df90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x33df90) {
            ctx->pc = 0x33DFA8u;
            goto label_33dfa8;
        }
    }
    ctx->pc = 0x33DF98u;
    // 0x33df98: 0x30e200ff  andi        $v0, $a3, 0xFF
    ctx->pc = 0x33df98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x33df9c: 0x24a4014c  addiu       $a0, $a1, 0x14C
    ctx->pc = 0x33df9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 332));
    // 0x33dfa0: 0xc0c449c  jal         func_311270
    ctx->pc = 0x33DFA0u;
    SET_GPR_U32(ctx, 31, 0x33DFA8u);
    ctx->pc = 0x33DFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33DFA0u;
    // 0x33dfa4: 0x462821  addu        $a1, $v0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x311270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311270u, 0x33DFA0u, 0x33DFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33DFA8u;
label_33dfa8:
    // 0x33dfa8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33dfa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33dfac:
    // 0x33dfac: 0x3e00008  jr          $ra
    ctx->pc = 0x33DFACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33DFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DFACu;
        // 0x33dfb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33DFACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33DFB4u;
    // 0x33dfb4: 0x0  nop
    ctx->pc = 0x33dfb4u;
    // NOP
    // 0x33dfb8: 0x0  nop
    ctx->pc = 0x33dfb8u;
    // NOP
    // 0x33dfbc: 0x0  nop
    ctx->pc = 0x33dfbcu;
    // NOP
    if (ctx->pc == 0x33dfbcu) { ctx->pc = 0x33dfc0u; }
}
