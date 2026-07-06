#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021F018
// Address: 0x21f018 - 0x21f090
void sub_0021F018_0x21f018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021F018_0x21f018");
#endif

    switch (ctx->pc) {
        case 0x21f058u: goto label_21f058;
        case 0x21f074u: goto label_21f074;
        default: break;
    }

    ctx->pc = 0x21f018u;

    // 0x21f018: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21f018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21f01c: 0x3c0e003a  lui         $t6, 0x3A
    ctx->pc = 0x21f01cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)58 << 16));
    // 0x21f020: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21f020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21f024: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21f024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21f028: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21f028u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f02c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21f02cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21f030: 0x25d1b8e8  addiu       $s1, $t6, -0x4718
    ctx->pc = 0x21f030u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 14), 4294949096));
    // 0x21f034: 0x81cfb8e8  lb          $t7, -0x4718($t6)
    ctx->pc = 0x21f034u;
    SET_GPR_S32(ctx, 15, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 4294949096)));
    // 0x21f038: 0x26260215  addiu       $a2, $s1, 0x215
    ctx->pc = 0x21f038u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 533));
    // 0x21f03c: 0x15e00008  bnez        $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x21F03Cu;
    {
        const bool branch_taken_0x21f03c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F03Cu;
            // 0x21f040: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f03c) {
            ctx->pc = 0x21F060u;
            goto label_21f060;
        }
    }
    ctx->pc = 0x21F044u;
    // 0x21f044: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x21f044u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x21f048: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x21f048u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x21f04c: 0x24a51dc0  addiu       $a1, $a1, 0x1DC0
    ctx->pc = 0x21f04cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7616));
    // 0x21f050: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x21F050u;
    SET_GPR_U32(ctx, 31, 0x21F058u);
    ctx->pc = 0x21F054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F050u;
            // 0x21f054: 0x24e71ff0  addiu       $a3, $a3, 0x1FF0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (runtime->hasFunction(0x1297C8u)) {
        auto targetFn = runtime->lookupFunction(0x1297C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F058u; }
        if (ctx->pc != 0x21F058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001297C8_0x1297c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F058u; }
        if (ctx->pc != 0x21F058u) { return; }
    }
    ctx->pc = 0x21F058u;
label_21f058:
    // 0x21f058: 0x240f0063  addiu       $t7, $zero, 0x63
    ctx->pc = 0x21f058u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x21f05c: 0xae2f0010  sw          $t7, 0x10($s1)
    ctx->pc = 0x21f05cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 15));
label_21f060:
    // 0x21f060: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x21f060u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x21f064: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f068: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x21f068u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f06c: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x21F06Cu;
    SET_GPR_U32(ctx, 31, 0x21F074u);
    ctx->pc = 0x21F070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F06Cu;
            // 0x21f070: 0x24a51c08  addiu       $a1, $a1, 0x1C08 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (runtime->hasFunction(0x1297C8u)) {
        auto targetFn = runtime->lookupFunction(0x1297C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F074u; }
        if (ctx->pc != 0x21F074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001297C8_0x1297c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F074u; }
        if (ctx->pc != 0x21F074u) { return; }
    }
    ctx->pc = 0x21F074u;
label_21f074:
    // 0x21f074: 0x8e2f0010  lw          $t7, 0x10($s1)
    ctx->pc = 0x21f074u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x21f078: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21f078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21f07c: 0xae0f0010  sw          $t7, 0x10($s0)
    ctx->pc = 0x21f07cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 15));
    // 0x21f080: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21f080u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21f084: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21f084u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f088: 0x3e00008  jr          $ra
    ctx->pc = 0x21F088u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F08Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F088u;
            // 0x21f08c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21F090u;
    ctx->pc = 0x21f090u;
}
