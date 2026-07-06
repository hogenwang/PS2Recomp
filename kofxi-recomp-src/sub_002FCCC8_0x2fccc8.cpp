#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002FCCC8
// Address: 0x2fccc8 - 0x2fcef8
void sub_002FCCC8_0x2fccc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FCCC8_0x2fccc8");
#endif

    switch (ctx->pc) {
        case 0x2fcce0u: goto label_2fcce0;
        case 0x2fccecu: goto label_2fccec;
        case 0x2fccf8u: goto label_2fccf8;
        case 0x2fcd04u: goto label_2fcd04;
        case 0x2fcd10u: goto label_2fcd10;
        case 0x2fcd1cu: goto label_2fcd1c;
        case 0x2fcd30u: goto label_2fcd30;
        case 0x2fcd48u: goto label_2fcd48;
        case 0x2fcd54u: goto label_2fcd54;
        case 0x2fcd60u: goto label_2fcd60;
        case 0x2fcd6cu: goto label_2fcd6c;
        case 0x2fcd78u: goto label_2fcd78;
        case 0x2fcd84u: goto label_2fcd84;
        case 0x2fcd98u: goto label_2fcd98;
        case 0x2fce50u: goto label_2fce50;
        default: break;
    }

    ctx->pc = 0x2fccc8u;

    // 0x2fccc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fccc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fcccc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fccccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fccd0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fccd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2fccd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fccd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fccd8: 0xc0bf32a  jal         func_2FCCA8
    ctx->pc = 0x2FCCD8u;
    SET_GPR_U32(ctx, 31, 0x2FCCE0u);
    ctx->pc = 0x2FCCDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCCD8u;
            // 0x2fccdc: 0x92040007  lbu         $a0, 0x7($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FCCA8u;
    if (runtime->hasFunction(0x2FCCA8u)) {
        auto targetFn = runtime->lookupFunction(0x2FCCA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCCE0u; }
        if (ctx->pc != 0x2FCCE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FCCA8_0x2fcca8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCCE0u; }
        if (ctx->pc != 0x2FCCE0u) { return; }
    }
    ctx->pc = 0x2FCCE0u;
label_2fcce0:
    // 0x2fcce0: 0x92040006  lbu         $a0, 0x6($s0)
    ctx->pc = 0x2fcce0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x2fcce4: 0xc0bf32a  jal         func_2FCCA8
    ctx->pc = 0x2FCCE4u;
    SET_GPR_U32(ctx, 31, 0x2FCCECu);
    ctx->pc = 0x2FCCE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCCE4u;
            // 0x2fcce8: 0xa2020007  sb          $v0, 0x7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FCCA8u;
    if (runtime->hasFunction(0x2FCCA8u)) {
        auto targetFn = runtime->lookupFunction(0x2FCCA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCCECu; }
        if (ctx->pc != 0x2FCCECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FCCA8_0x2fcca8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCCECu; }
        if (ctx->pc != 0x2FCCECu) { return; }
    }
    ctx->pc = 0x2FCCECu;
label_2fccec:
    // 0x2fccec: 0x92040005  lbu         $a0, 0x5($s0)
    ctx->pc = 0x2fccecu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x2fccf0: 0xc0bf32a  jal         func_2FCCA8
    ctx->pc = 0x2FCCF0u;
    SET_GPR_U32(ctx, 31, 0x2FCCF8u);
    ctx->pc = 0x2FCCF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCCF0u;
            // 0x2fccf4: 0xa2020006  sb          $v0, 0x6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FCCA8u;
    if (runtime->hasFunction(0x2FCCA8u)) {
        auto targetFn = runtime->lookupFunction(0x2FCCA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCCF8u; }
        if (ctx->pc != 0x2FCCF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FCCA8_0x2fcca8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCCF8u; }
        if (ctx->pc != 0x2FCCF8u) { return; }
    }
    ctx->pc = 0x2FCCF8u;
label_2fccf8:
    // 0x2fccf8: 0x92040003  lbu         $a0, 0x3($s0)
    ctx->pc = 0x2fccf8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x2fccfc: 0xc0bf32a  jal         func_2FCCA8
    ctx->pc = 0x2FCCFCu;
    SET_GPR_U32(ctx, 31, 0x2FCD04u);
    ctx->pc = 0x2FCD00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCCFCu;
            // 0x2fcd00: 0xa2020005  sb          $v0, 0x5($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FCCA8u;
    if (runtime->hasFunction(0x2FCCA8u)) {
        auto targetFn = runtime->lookupFunction(0x2FCCA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCD04u; }
        if (ctx->pc != 0x2FCD04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FCCA8_0x2fcca8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCD04u; }
        if (ctx->pc != 0x2FCD04u) { return; }
    }
    ctx->pc = 0x2FCD04u;
label_2fcd04:
    // 0x2fcd04: 0x92040002  lbu         $a0, 0x2($s0)
    ctx->pc = 0x2fcd04u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2fcd08: 0xc0bf32a  jal         func_2FCCA8
    ctx->pc = 0x2FCD08u;
    SET_GPR_U32(ctx, 31, 0x2FCD10u);
    ctx->pc = 0x2FCD0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCD08u;
            // 0x2fcd0c: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FCCA8u;
    if (runtime->hasFunction(0x2FCCA8u)) {
        auto targetFn = runtime->lookupFunction(0x2FCCA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCD10u; }
        if (ctx->pc != 0x2FCD10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FCCA8_0x2fcca8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCD10u; }
        if (ctx->pc != 0x2FCD10u) { return; }
    }
    ctx->pc = 0x2FCD10u;
label_2fcd10:
    // 0x2fcd10: 0x92040001  lbu         $a0, 0x1($s0)
    ctx->pc = 0x2fcd10u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x2fcd14: 0xc0bf32a  jal         func_2FCCA8
    ctx->pc = 0x2FCD14u;
    SET_GPR_U32(ctx, 31, 0x2FCD1Cu);
    ctx->pc = 0x2FCD18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCD14u;
            // 0x2fcd18: 0xa2020002  sb          $v0, 0x2($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FCCA8u;
    if (runtime->hasFunction(0x2FCCA8u)) {
        auto targetFn = runtime->lookupFunction(0x2FCCA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCD1Cu; }
        if (ctx->pc != 0x2FCD1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FCCA8_0x2fcca8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCD1Cu; }
        if (ctx->pc != 0x2FCD1Cu) { return; }
    }
    ctx->pc = 0x2FCD1Cu;
label_2fcd1c:
    // 0x2fcd1c: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x2fcd1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x2fcd20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fcd20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fcd24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fcd24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fcd28: 0x3e00008  jr          $ra
    ctx->pc = 0x2FCD28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FCD2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCD28u;
            // 0x2fcd2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FCD30u;
label_2fcd30:
    // 0x2fcd30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fcd30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fcd34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fcd34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fcd38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fcd38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2fcd3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fcd3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcd40: 0xc0bf31e  jal         func_2FCC78
    ctx->pc = 0x2FCD40u;
    SET_GPR_U32(ctx, 31, 0x2FCD48u);
    ctx->pc = 0x2FCD44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCD40u;
            // 0x2fcd44: 0x92040007  lbu         $a0, 0x7($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FCC78u;
    if (runtime->hasFunction(0x2FCC78u)) {
        auto targetFn = runtime->lookupFunction(0x2FCC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCD48u; }
        if (ctx->pc != 0x2FCD48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FCC78_0x2fcc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCD48u; }
        if (ctx->pc != 0x2FCD48u) { return; }
    }
    ctx->pc = 0x2FCD48u;
label_2fcd48:
    // 0x2fcd48: 0x92040006  lbu         $a0, 0x6($s0)
    ctx->pc = 0x2fcd48u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x2fcd4c: 0xc0bf31e  jal         func_2FCC78
    ctx->pc = 0x2FCD4Cu;
    SET_GPR_U32(ctx, 31, 0x2FCD54u);
    ctx->pc = 0x2FCD50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCD4Cu;
            // 0x2fcd50: 0xa2020007  sb          $v0, 0x7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FCC78u;
    if (runtime->hasFunction(0x2FCC78u)) {
        auto targetFn = runtime->lookupFunction(0x2FCC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCD54u; }
        if (ctx->pc != 0x2FCD54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FCC78_0x2fcc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCD54u; }
        if (ctx->pc != 0x2FCD54u) { return; }
    }
    ctx->pc = 0x2FCD54u;
label_2fcd54:
    // 0x2fcd54: 0x92040005  lbu         $a0, 0x5($s0)
    ctx->pc = 0x2fcd54u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x2fcd58: 0xc0bf31e  jal         func_2FCC78
    ctx->pc = 0x2FCD58u;
    SET_GPR_U32(ctx, 31, 0x2FCD60u);
    ctx->pc = 0x2FCD5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCD58u;
            // 0x2fcd5c: 0xa2020006  sb          $v0, 0x6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FCC78u;
    if (runtime->hasFunction(0x2FCC78u)) {
        auto targetFn = runtime->lookupFunction(0x2FCC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCD60u; }
        if (ctx->pc != 0x2FCD60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FCC78_0x2fcc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCD60u; }
        if (ctx->pc != 0x2FCD60u) { return; }
    }
    ctx->pc = 0x2FCD60u;
label_2fcd60:
    // 0x2fcd60: 0x92040003  lbu         $a0, 0x3($s0)
    ctx->pc = 0x2fcd60u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x2fcd64: 0xc0bf31e  jal         func_2FCC78
    ctx->pc = 0x2FCD64u;
    SET_GPR_U32(ctx, 31, 0x2FCD6Cu);
    ctx->pc = 0x2FCD68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCD64u;
            // 0x2fcd68: 0xa2020005  sb          $v0, 0x5($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FCC78u;
    if (runtime->hasFunction(0x2FCC78u)) {
        auto targetFn = runtime->lookupFunction(0x2FCC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCD6Cu; }
        if (ctx->pc != 0x2FCD6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FCC78_0x2fcc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCD6Cu; }
        if (ctx->pc != 0x2FCD6Cu) { return; }
    }
    ctx->pc = 0x2FCD6Cu;
label_2fcd6c:
    // 0x2fcd6c: 0x92040002  lbu         $a0, 0x2($s0)
    ctx->pc = 0x2fcd6cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2fcd70: 0xc0bf31e  jal         func_2FCC78
    ctx->pc = 0x2FCD70u;
    SET_GPR_U32(ctx, 31, 0x2FCD78u);
    ctx->pc = 0x2FCD74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCD70u;
            // 0x2fcd74: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FCC78u;
    if (runtime->hasFunction(0x2FCC78u)) {
        auto targetFn = runtime->lookupFunction(0x2FCC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCD78u; }
        if (ctx->pc != 0x2FCD78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FCC78_0x2fcc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCD78u; }
        if (ctx->pc != 0x2FCD78u) { return; }
    }
    ctx->pc = 0x2FCD78u;
label_2fcd78:
    // 0x2fcd78: 0x92040001  lbu         $a0, 0x1($s0)
    ctx->pc = 0x2fcd78u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x2fcd7c: 0xc0bf31e  jal         func_2FCC78
    ctx->pc = 0x2FCD7Cu;
    SET_GPR_U32(ctx, 31, 0x2FCD84u);
    ctx->pc = 0x2FCD80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCD7Cu;
            // 0x2fcd80: 0xa2020002  sb          $v0, 0x2($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FCC78u;
    if (runtime->hasFunction(0x2FCC78u)) {
        auto targetFn = runtime->lookupFunction(0x2FCC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCD84u; }
        if (ctx->pc != 0x2FCD84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FCC78_0x2fcc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCD84u; }
        if (ctx->pc != 0x2FCD84u) { return; }
    }
    ctx->pc = 0x2FCD84u;
label_2fcd84:
    // 0x2fcd84: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x2fcd84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x2fcd88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fcd88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fcd8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fcd8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fcd90: 0x3e00008  jr          $ra
    ctx->pc = 0x2FCD90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FCD94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCD90u;
            // 0x2fcd94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FCD98u;
label_2fcd98:
    // 0x2fcd98: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2fcd98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcd9c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fcd9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fcda0: 0x90a30005  lbu         $v1, 0x5($a1)
    ctx->pc = 0x2fcda0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
    // 0x2fcda4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2fcda4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2fcda8: 0x90a40007  lbu         $a0, 0x7($a1)
    ctx->pc = 0x2fcda8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 7)));
    // 0x2fcdac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2fcdacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2fcdb0: 0x24493050  addiu       $t1, $v0, 0x3050
    ctx->pc = 0x2fcdb0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 12368));
    // 0x2fcdb4: 0x69260007  ldl         $a2, 0x7($t1)
    ctx->pc = 0x2fcdb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2fcdb8: 0x6d260000  ldr         $a2, 0x0($t1)
    ctx->pc = 0x2fcdb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2fcdbc: 0x8927000b  lwl         $a3, 0xB($t1)
    ctx->pc = 0x2fcdbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
    // 0x2fcdc0: 0x99270008  lwr         $a3, 0x8($t1)
    ctx->pc = 0x2fcdc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x2fcdc4: 0xb3a60007  sdl         $a2, 0x7($sp)
    ctx->pc = 0x2fcdc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2fcdc8: 0xb7a60000  sdr         $a2, 0x0($sp)
    ctx->pc = 0x2fcdc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2fcdcc: 0xaba7000b  swl         $a3, 0xB($sp)
    ctx->pc = 0x2fcdccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2fcdd0: 0xbba70008  swr         $a3, 0x8($sp)
    ctx->pc = 0x2fcdd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2fcdd4: 0x30840003  andi        $a0, $a0, 0x3
    ctx->pc = 0x2fcdd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x2fcdd8: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FCDD8u;
    {
        const bool branch_taken_0x2fcdd8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FCDDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCDD8u;
            // 0x2fcddc: 0xa0a30005  sb          $v1, 0x5($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcdd8) {
            ctx->pc = 0x2FCDE8u;
            goto label_2fcde8;
        }
    }
    ctx->pc = 0x2FCDE0u;
    // 0x2fcde0: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x2fcde0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x2fcde4: 0xa3a20001  sb          $v0, 0x1($sp)
    ctx->pc = 0x2fcde4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
label_2fcde8:
    // 0x2fcde8: 0x90a20006  lbu         $v0, 0x6($a1)
    ctx->pc = 0x2fcde8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x2fcdec: 0x90a40005  lbu         $a0, 0x5($a1)
    ctx->pc = 0x2fcdecu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
    // 0x2fcdf0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2fcdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2fcdf4: 0x8043ffff  lb          $v1, -0x1($v0)
    ctx->pc = 0x2fcdf4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294967295)));
    // 0x2fcdf8: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x2fcdf8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2fcdfc: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2FCDFCu;
    {
        const bool branch_taken_0x2fcdfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCE00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCDFCu;
            // 0x2fce00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcdfc) {
            ctx->pc = 0x2FCE44u;
            goto label_2fce44;
        }
    }
    ctx->pc = 0x2FCE04u;
    // 0x2fce04: 0x90a30006  lbu         $v1, 0x6($a1)
    ctx->pc = 0x2fce04u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x2fce08: 0xa0a20005  sb          $v0, 0x5($a1)
    ctx->pc = 0x2fce08u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x2fce0c: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x2fce0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2fce10: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2fce10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2fce14: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x2fce14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2fce18: 0x1444000a  bne         $v0, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2FCE18u;
    {
        const bool branch_taken_0x2fce18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x2FCE1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCE18u;
            // 0x2fce1c: 0xa0a30006  sb          $v1, 0x6($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fce18) {
            ctx->pc = 0x2FCE44u;
            goto label_2fce44;
        }
    }
    ctx->pc = 0x2FCE20u;
    // 0x2fce20: 0x90a30007  lbu         $v1, 0x7($a1)
    ctx->pc = 0x2fce20u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 7)));
    // 0x2fce24: 0x24020063  addiu       $v0, $zero, 0x63
    ctx->pc = 0x2fce24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x2fce28: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FCE28u;
    {
        const bool branch_taken_0x2fce28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FCE2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCE28u;
            // 0x2fce2c: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fce28) {
            ctx->pc = 0x2FCE38u;
            goto label_2fce38;
        }
    }
    ctx->pc = 0x2FCE30u;
    // 0x2fce30: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2FCE30u;
    {
        const bool branch_taken_0x2fce30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCE34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCE30u;
            // 0x2fce34: 0xa0a00007  sb          $zero, 0x7($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 7), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fce30) {
            ctx->pc = 0x2FCE3Cu;
            goto label_2fce3c;
        }
    }
    ctx->pc = 0x2FCE38u;
label_2fce38:
    // 0x2fce38: 0xa0a20007  sb          $v0, 0x7($a1)
    ctx->pc = 0x2fce38u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 7), (uint8_t)GPR_U32(ctx, 2));
label_2fce3c:
    // 0x2fce3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fce3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fce40: 0xa0a20006  sb          $v0, 0x6($a1)
    ctx->pc = 0x2fce40u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 2));
label_2fce44:
    // 0x2fce44: 0x3e00008  jr          $ra
    ctx->pc = 0x2FCE44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FCE48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCE44u;
            // 0x2fce48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FCE4Cu;
    // 0x2fce4c: 0x0  nop
    ctx->pc = 0x2fce4cu;
    // NOP
label_2fce50:
    // 0x2fce50: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2fce50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fce54: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fce54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fce58: 0x90a30005  lbu         $v1, 0x5($a1)
    ctx->pc = 0x2fce58u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
    // 0x2fce5c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2fce5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2fce60: 0x90a40007  lbu         $a0, 0x7($a1)
    ctx->pc = 0x2fce60u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 7)));
    // 0x2fce64: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2fce64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2fce68: 0x24493050  addiu       $t1, $v0, 0x3050
    ctx->pc = 0x2fce68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 12368));
    // 0x2fce6c: 0x69260007  ldl         $a2, 0x7($t1)
    ctx->pc = 0x2fce6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2fce70: 0x6d260000  ldr         $a2, 0x0($t1)
    ctx->pc = 0x2fce70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2fce74: 0x8927000b  lwl         $a3, 0xB($t1)
    ctx->pc = 0x2fce74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
    // 0x2fce78: 0x99270008  lwr         $a3, 0x8($t1)
    ctx->pc = 0x2fce78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x2fce7c: 0xb3a60007  sdl         $a2, 0x7($sp)
    ctx->pc = 0x2fce7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2fce80: 0xb7a60000  sdr         $a2, 0x0($sp)
    ctx->pc = 0x2fce80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2fce84: 0xaba7000b  swl         $a3, 0xB($sp)
    ctx->pc = 0x2fce84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2fce88: 0xbba70008  swr         $a3, 0x8($sp)
    ctx->pc = 0x2fce88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2fce8c: 0x30840003  andi        $a0, $a0, 0x3
    ctx->pc = 0x2fce8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x2fce90: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FCE90u;
    {
        const bool branch_taken_0x2fce90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FCE94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCE90u;
            // 0x2fce94: 0xa0a30005  sb          $v1, 0x5($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fce90) {
            ctx->pc = 0x2FCEA0u;
            goto label_2fcea0;
        }
    }
    ctx->pc = 0x2FCE98u;
    // 0x2fce98: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x2fce98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x2fce9c: 0xa3a20001  sb          $v0, 0x1($sp)
    ctx->pc = 0x2fce9cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
label_2fcea0:
    // 0x2fcea0: 0x90a20005  lbu         $v0, 0x5($a1)
    ctx->pc = 0x2fcea0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
    // 0x2fcea4: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2FCEA4u;
    {
        const bool branch_taken_0x2fcea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fcea4) {
            ctx->pc = 0x2FCEECu;
            goto label_2fceec;
        }
    }
    ctx->pc = 0x2FCEACu;
    // 0x2fceac: 0x90a20006  lbu         $v0, 0x6($a1)
    ctx->pc = 0x2fceacu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x2fceb0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2fceb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2fceb4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2fceb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2fceb8: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2FCEB8u;
    {
        const bool branch_taken_0x2fceb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FCEBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCEB8u;
            // 0x2fcebc: 0xa0a20006  sb          $v0, 0x6($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fceb8) {
            ctx->pc = 0x2FCEDCu;
            goto label_2fcedc;
        }
    }
    ctx->pc = 0x2FCEC0u;
    // 0x2fcec0: 0x90a20007  lbu         $v0, 0x7($a1)
    ctx->pc = 0x2fcec0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 7)));
    // 0x2fcec4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2FCEC4u;
    {
        const bool branch_taken_0x2fcec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FCEC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCEC4u;
            // 0x2fcec8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcec4) {
            ctx->pc = 0x2FCED0u;
            goto label_2fced0;
        }
    }
    ctx->pc = 0x2FCECCu;
    // 0x2fcecc: 0x24020063  addiu       $v0, $zero, 0x63
    ctx->pc = 0x2fceccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
label_2fced0:
    // 0x2fced0: 0xa0a20007  sb          $v0, 0x7($a1)
    ctx->pc = 0x2fced0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 7), (uint8_t)GPR_U32(ctx, 2));
    // 0x2fced4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2fced4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2fced8: 0xa0a20006  sb          $v0, 0x6($a1)
    ctx->pc = 0x2fced8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 2));
label_2fcedc:
    // 0x2fcedc: 0x90a20006  lbu         $v0, 0x6($a1)
    ctx->pc = 0x2fcedcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x2fcee0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2fcee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2fcee4: 0x9043ffff  lbu         $v1, -0x1($v0)
    ctx->pc = 0x2fcee4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294967295)));
    // 0x2fcee8: 0xa0a30005  sb          $v1, 0x5($a1)
    ctx->pc = 0x2fcee8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 3));
label_2fceec:
    // 0x2fceec: 0x3e00008  jr          $ra
    ctx->pc = 0x2FCEECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FCEF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCEECu;
            // 0x2fcef0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FCEF4u;
    // 0x2fcef4: 0x0  nop
    ctx->pc = 0x2fcef4u;
    // NOP
    ctx->pc = 0x2fcef8u;
}
