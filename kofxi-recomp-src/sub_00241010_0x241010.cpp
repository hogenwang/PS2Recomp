#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00241010
// Address: 0x241010 - 0x241090
void sub_00241010_0x241010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00241010_0x241010");
#endif

    switch (ctx->pc) {
        case 0x241044u: goto label_241044;
        case 0x241058u: goto label_241058;
        case 0x241068u: goto label_241068;
        default: break;
    }

    ctx->pc = 0x241010u;

    // 0x241010: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x241010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x241014: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x241014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x241018: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x241018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24101c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x24101cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241020: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x241020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x241024: 0x30b0ffff  andi        $s0, $a1, 0xFFFF
    ctx->pc = 0x241024u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x241028: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x241028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x24102c: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x24102cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x241030: 0x24a56498  addiu       $a1, $a1, 0x6498
    ctx->pc = 0x241030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25752));
    // 0x241034: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x241034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x241038: 0x92260000  lbu         $a2, 0x0($s1)
    ctx->pc = 0x241038u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x24103c: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x24103Cu;
    SET_GPR_U32(ctx, 31, 0x241044u);
    ctx->pc = 0x241040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24103Cu;
            // 0x241040: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241044u; }
        if (ctx->pc != 0x241044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241044u; }
        if (ctx->pc != 0x241044u) { return; }
    }
    ctx->pc = 0x241044u;
label_241044:
    // 0x241044: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x241044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x241048: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x241048u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x24104c: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x24104Cu;
    {
        const bool branch_taken_0x24104c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x241050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24104Cu;
            // 0x241050: 0x3c12003f  lui         $s2, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24104c) {
            ctx->pc = 0x241078u;
            goto label_241078;
        }
    }
    ctx->pc = 0x241054u;
    // 0x241054: 0x0  nop
    ctx->pc = 0x241054u;
    // NOP
label_241058:
    // 0x241058: 0x92260000  lbu         $a2, 0x0($s1)
    ctx->pc = 0x241058u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x24105c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x24105cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x241060: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x241060u;
    SET_GPR_U32(ctx, 31, 0x241068u);
    ctx->pc = 0x241064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241060u;
            // 0x241064: 0x264564a0  addiu       $a1, $s2, 0x64A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 25760));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241068u; }
        if (ctx->pc != 0x241068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241068u; }
        if (ctx->pc != 0x241068u) { return; }
    }
    ctx->pc = 0x241068u;
label_241068:
    // 0x241068: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x241068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x24106c: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x24106cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x241070: 0x1600fff9  bnez        $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x241070u;
    {
        const bool branch_taken_0x241070 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x241074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241070u;
            // 0x241074: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241070) {
            ctx->pc = 0x241058u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_241058;
        }
    }
    ctx->pc = 0x241078u;
label_241078:
    // 0x241078: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x241078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24107c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x24107cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x241080: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x241080u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x241084: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x241084u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x241088: 0x3e00008  jr          $ra
    ctx->pc = 0x241088u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24108Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241088u;
            // 0x24108c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x241090u;
    ctx->pc = 0x241090u;
}
