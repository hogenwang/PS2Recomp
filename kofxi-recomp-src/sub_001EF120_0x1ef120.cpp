#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EF120
// Address: 0x1ef120 - 0x1ef1a8
void sub_001EF120_0x1ef120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EF120_0x1ef120");
#endif

    switch (ctx->pc) {
        case 0x1ef140u: goto label_1ef140;
        case 0x1ef154u: goto label_1ef154;
        case 0x1ef168u: goto label_1ef168;
        case 0x1ef190u: goto label_1ef190;
        default: break;
    }

    ctx->pc = 0x1ef120u;

    // 0x1ef120: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ef120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ef124: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ef124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ef128: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ef128u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef12c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ef12cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ef130: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ef130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ef134: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1ef134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1ef138: 0xc07bc6a  jal         func_1EF1A8
    ctx->pc = 0x1EF138u;
    SET_GPR_U32(ctx, 31, 0x1EF140u);
    ctx->pc = 0x1EF13Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF138u;
            // 0x1ef13c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EF1A8u;
    if (runtime->hasFunction(0x1EF1A8u)) {
        auto targetFn = runtime->lookupFunction(0x1EF1A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF140u; }
        if (ctx->pc != 0x1EF140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EF1A8_0x1ef1a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF140u; }
        if (ctx->pc != 0x1EF140u) { return; }
    }
    ctx->pc = 0x1EF140u;
label_1ef140:
    // 0x1ef140: 0x10520013  beq         $v0, $s2, . + 4 + (0x13 << 2)
    ctx->pc = 0x1EF140u;
    {
        const bool branch_taken_0x1ef140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x1EF144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF140u;
            // 0x1ef144: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef140) {
            ctx->pc = 0x1EF190u;
            goto label_1ef190;
        }
    }
    ctx->pc = 0x1EF148u;
    // 0x1ef148: 0x8e301fdc  lw          $s0, 0x1FDC($s1)
    ctx->pc = 0x1ef148u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8156)));
    // 0x1ef14c: 0xc07ad5c  jal         func_1EB570
    ctx->pc = 0x1EF14Cu;
    SET_GPR_U32(ctx, 31, 0x1EF154u);
    ctx->pc = 0x1EF150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF14Cu;
            // 0x1ef150: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EB570u;
    if (runtime->hasFunction(0x1EB570u)) {
        auto targetFn = runtime->lookupFunction(0x1EB570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF154u; }
        if (ctx->pc != 0x1EF154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EB570_0x1eb570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF154u; }
        if (ctx->pc != 0x1EF154u) { return; }
    }
    ctx->pc = 0x1EF154u;
label_1ef154:
    // 0x1ef154: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ef154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef158: 0x1452000d  bne         $v0, $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x1EF158u;
    {
        const bool branch_taken_0x1ef158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x1EF15Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF158u;
            // 0x1ef15c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef158) {
            ctx->pc = 0x1EF190u;
            goto label_1ef190;
        }
    }
    ctx->pc = 0x1EF160u;
    // 0x1ef160: 0xc07bcb6  jal         func_1EF2D8
    ctx->pc = 0x1EF160u;
    SET_GPR_U32(ctx, 31, 0x1EF168u);
    ctx->pc = 0x1EF2D8u;
    if (runtime->hasFunction(0x1EF2D8u)) {
        auto targetFn = runtime->lookupFunction(0x1EF2D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF168u; }
        if (ctx->pc != 0x1EF168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EF2D8_0x1ef2d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF168u; }
        if (ctx->pc != 0x1EF168u) { return; }
    }
    ctx->pc = 0x1EF168u;
label_1ef168:
    // 0x1ef168: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1EF168u;
    {
        const bool branch_taken_0x1ef168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF16Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF168u;
            // 0x1ef16c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef168) {
            ctx->pc = 0x1EF190u;
            goto label_1ef190;
        }
    }
    ctx->pc = 0x1EF170u;
    // 0x1ef170: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ef170u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ef174: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ef174u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ef178: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ef178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ef17c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ef17cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ef180: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1ef180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ef184: 0x807bc8e  j           func_1EF238
    ctx->pc = 0x1EF184u;
    ctx->pc = 0x1EF188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF184u;
            // 0x1ef188: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EF238u;
    {
        auto targetFn = runtime->lookupFunction(0x1EF238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1EF18Cu;
    // 0x1ef18c: 0x0  nop
    ctx->pc = 0x1ef18cu;
    // NOP
label_1ef190:
    // 0x1ef190: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ef190u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ef194: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ef194u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ef198: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ef198u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ef19c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1ef19cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ef1a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF1A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF1A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF1A0u;
            // 0x1ef1a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EF1A8u;
    ctx->pc = 0x1ef1a8u;
}
