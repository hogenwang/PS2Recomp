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

// Function: sub_00274CD0
// Address: 0x274cd0 - 0x274db0
void sub_00274CD0_0x274cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00274CD0_0x274cd0");
#endif

    switch (ctx->pc) {
        case 0x274d0cu: goto label_274d0c;
        case 0x274d60u: goto label_274d60;
        case 0x274d64u: goto label_274d64;
        case 0x274d8cu: goto label_274d8c;
        case 0x274d9cu: goto label_274d9c;
        default: break;
    }

    ctx->pc = 0x274cd0u;

    // 0x274cd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x274cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x274cd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x274cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x274cd8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x274cd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274cdc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x274cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x274ce0: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x274ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
    // 0x274ce4: 0x24634d2c  addiu       $v1, $v1, 0x4D2C
    ctx->pc = 0x274ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19756));
    // 0x274ce8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x274ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x274cec: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x274CECu;
    {
        const bool branch_taken_0x274cec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x274cec) {
            ctx->pc = 0x274D0Cu;
            goto label_274d0c;
        }
    }
    ctx->pc = 0x274CF4u;
    // 0x274cf4: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x274cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x274cf8: 0x24844d40  addiu       $a0, $a0, 0x4D40
    ctx->pc = 0x274cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19776));
    // 0x274cfc: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x274cfcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x274d00: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x274d00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x274d04: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x274D04u;
    SET_GPR_U32(ctx, 31, 0x274D0Cu);
    ctx->pc = 0x274D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274D04u;
    // 0x274d08: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E050u, 0x274D04u, 0x274D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274D0Cu;
label_274d0c:
    // 0x274d0c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x274D0Cu;
    {
        const bool branch_taken_0x274d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274d0c) {
            ctx->pc = 0x274D40u;
            goto label_274d40;
        }
    }
    ctx->pc = 0x274D14u;
    // 0x274d14: 0x459020  add         $s2, $v0, $a1
    ctx->pc = 0x274d14u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 5);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
    // 0x274d18: 0xdd51a6c7  ld          $s1, -0x5939($t2)
    ctx->pc = 0x274d18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 10), 4294944455)));
    // 0x274d1c: 0xa0f62fb9  sb          $s6, 0x2FB9($a3)
    ctx->pc = 0x274d1cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 12217), (uint8_t)GPR_U32(ctx, 22));
    // 0x274d20: 0xdcc9e9e7  ld          $t1, -0x1619($a2)
    ctx->pc = 0x274d20u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 4294961639)));
    // 0x274d24: 0xffaad102  sd          $t2, -0x2EFE($sp)
    ctx->pc = 0x274d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 4294955266), GPR_U64(ctx, 10));
    // 0x274d28: 0x2ffa020  add         $s4, $s7, $ra
    ctx->pc = 0x274d28u;
    {     int32_t rs_val = GPR_S32(ctx, 23);     int32_t rt_val = GPR_S32(ctx, 31);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
    // 0x274d2c: 0x0  nop
    ctx->pc = 0x274d2cu;
    // NOP
    // 0x274d30: 0x44d04fd8  .word       0x44D04FD8                   # ctc1        $s0, $9 # 000007D8 <InstrIdType: R5900_COP1>
    ctx->pc = 0x274d30u;
    // CTC1 to FCR9 ignored
    // 0x274d34: 0x971e2764  lhu         $fp, 0x2764($t8)
    ctx->pc = 0x274d34u;
    SET_GPR_U32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 10084)));
    // 0x274d38: 0x44d04fd4  .word       0x44D04FD4                   # ctc1        $s0, $9 # 000007D4 <InstrIdType: R5900_COP1>
    ctx->pc = 0x274d38u;
    // CTC1 to FCR9 ignored
    // 0x274d3c: 0x0  nop
    ctx->pc = 0x274d3cu;
    // NOP
label_274d40:
    // 0x274d40: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x274d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x274d44: 0x1da2ef77  .word       0x1DA2EF77                   # bgtz        $t5, . + 4 + (-0x1089 << 2) # 00020000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x274D44u;
    {
        const bool branch_taken_0x274d44 = (GPR_S32(ctx, 13) > 0);
        ctx->pc = 0x274D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274D44u;
        // 0x274d48: 0xa04333fe  sb          $v1, 0x33FE($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 13310), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274d44) {
            ctx->pc = 0x270B24u;
            return;
        }
    }
    ctx->pc = 0x274D4Cu;
    // 0x274d4c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x274D4Cu;
    {
        const bool branch_taken_0x274d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274d4c) {
            ctx->pc = 0x274D7Cu;
            goto label_274d7c;
        }
    }
    ctx->pc = 0x274D54u;
    // 0x274d54: 0xa3c75249  sb          $a3, 0x5249($fp)
    ctx->pc = 0x274d54u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 21065), (uint8_t)GPR_U32(ctx, 7));
    // 0x274d58: 0xc2d7ea0  jal         func_B5FA80
    ctx->pc = 0x274D58u;
    SET_GPR_U32(ctx, 31, 0x274D60u);
    ctx->pc = 0x274D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274D58u;
    // 0x274d5c: 0xcfa4b98  jal         func_3E92E60 (Delay Slot)
    // JAL 0x3E92E60 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xB5FA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xB5FA80u, 0x274D58u, 0x274D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274D60u;
label_274d60:
    // 0x274d60: 0x8f70749d  lw          $s0, 0x749D($k1)
    ctx->pc = 0x274d60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 27), 29853)));
label_274d64:
    // 0x274d64: 0x1eb3020  add         $a2, $t7, $t3
    ctx->pc = 0x274d64u;
    {     int32_t rs_val = GPR_S32(ctx, 15);     int32_t rt_val = GPR_S32(ctx, 11);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
    // 0x274d68: 0x8c8ded7d  lw          $t5, -0x1283($a0)
    ctx->pc = 0x274d68u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294962557)));
    // 0x274d6c: 0x44d08df4  .word       0x44D08DF4                   # ctc1        $s0, $17 # 000005F4 <InstrIdType: R5900_COP1>
    ctx->pc = 0x274d6cu;
    // CTC1 to FCR17 ignored
    // 0x274d70: 0x971e2765  lhu         $fp, 0x2765($t8)
    ctx->pc = 0x274d70u;
    SET_GPR_U32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 10085)));
    // 0x274d74: 0x44d08df8  .word       0x44D08DF8                   # ctc1        $s0, $17 # 000005F8 <InstrIdType: R5900_COP1>
    ctx->pc = 0x274d74u;
    // CTC1 to FCR17 ignored
    // 0x274d78: 0x0  nop
    ctx->pc = 0x274d78u;
    // NOP
label_274d7c:
    // 0x274d7c: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x274d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x274d80: 0x24424d6c  addiu       $v0, $v0, 0x4D6C
    ctx->pc = 0x274d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19820));
    // 0x274d84: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x274d84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x274d88: 0x24844d4c  addiu       $a0, $a0, 0x4D4C
    ctx->pc = 0x274d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19788));
label_274d8c:
    // 0x274d8c: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x274d8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x274d90: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x274d90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x274d94: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x274D94u;
    SET_GPR_U32(ctx, 31, 0x274D9Cu);
    ctx->pc = 0x274D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274D94u;
    // 0x274d98: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E050u, 0x274D94u, 0x274D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274D9Cu;
label_274d9c:
    // 0x274d9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x274d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x274da0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x274da0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x274da4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x274da4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x274da8: 0x3e00008  jr          $ra
    ctx->pc = 0x274DA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274DA8u;
        // 0x274dac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274DA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x274DB0u;
}
