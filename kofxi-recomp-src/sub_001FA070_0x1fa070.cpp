#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FA070
// Address: 0x1fa070 - 0x1fa1f8
void sub_001FA070_0x1fa070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FA070_0x1fa070");
#endif

    switch (ctx->pc) {
        case 0x1fa08cu: goto label_1fa08c;
        case 0x1fa0b0u: goto label_1fa0b0;
        case 0x1fa0c8u: goto label_1fa0c8;
        case 0x1fa0e4u: goto label_1fa0e4;
        case 0x1fa108u: goto label_1fa108;
        case 0x1fa128u: goto label_1fa128;
        case 0x1fa13cu: goto label_1fa13c;
        case 0x1fa168u: goto label_1fa168;
        case 0x1fa170u: goto label_1fa170;
        case 0x1fa188u: goto label_1fa188;
        case 0x1fa1a8u: goto label_1fa1a8;
        case 0x1fa1d0u: goto label_1fa1d0;
        case 0x1fa1dcu: goto label_1fa1dc;
        default: break;
    }

    ctx->pc = 0x1fa070u;

    // 0x1fa070: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fa070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fa074: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fa074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fa078: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fa078u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa07c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fa07cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fa080: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fa080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1fa084: 0xc07b648  jal         func_1ED920
    ctx->pc = 0x1FA084u;
    SET_GPR_U32(ctx, 31, 0x1FA08Cu);
    ctx->pc = 0x1FA088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA084u;
            // 0x1fa088: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED920u;
    if (runtime->hasFunction(0x1ED920u)) {
        auto targetFn = runtime->lookupFunction(0x1ED920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA08Cu; }
        if (ctx->pc != 0x1FA08Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED920_0x1ed920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA08Cu; }
        if (ctx->pc != 0x1FA08Cu) { return; }
    }
    ctx->pc = 0x1FA08Cu;
label_1fa08c:
    // 0x1fa08c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1fa08cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1fa090: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FA090u;
    {
        const bool branch_taken_0x1fa090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA090u;
            // 0x1fa094: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa090) {
            ctx->pc = 0x1FA0B0u;
            goto label_1fa0b0;
        }
    }
    ctx->pc = 0x1FA098u;
    // 0x1fa098: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fa098u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fa09c: 0x34a50151  ori         $a1, $a1, 0x151
    ctx->pc = 0x1fa09cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)337);
    // 0x1fa0a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fa0a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fa0a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fa0a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fa0a8: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1FA0A8u;
    ctx->pc = 0x1FA0ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA0A8u;
            // 0x1fa0ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    if (runtime->hasFunction(0x1ED700u)) {
        auto targetFn = runtime->lookupFunction(0x1ED700u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1FA0B0u;
label_1fa0b0:
    // 0x1fa0b0: 0xae113708  sw          $s1, 0x3708($s0)
    ctx->pc = 0x1fa0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 14088), GPR_U32(ctx, 17));
    // 0x1fa0b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fa0b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fa0b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fa0b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fa0bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fa0bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fa0c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA0C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA0C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA0C0u;
            // 0x1fa0c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FA0C8u;
label_1fa0c8:
    // 0x1fa0c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fa0c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fa0cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fa0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fa0d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fa0d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa0d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fa0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fa0d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fa0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1fa0dc: 0xc07b648  jal         func_1ED920
    ctx->pc = 0x1FA0DCu;
    SET_GPR_U32(ctx, 31, 0x1FA0E4u);
    ctx->pc = 0x1FA0E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA0DCu;
            // 0x1fa0e0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED920u;
    if (runtime->hasFunction(0x1ED920u)) {
        auto targetFn = runtime->lookupFunction(0x1ED920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA0E4u; }
        if (ctx->pc != 0x1FA0E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED920_0x1ed920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA0E4u; }
        if (ctx->pc != 0x1FA0E4u) { return; }
    }
    ctx->pc = 0x1FA0E4u;
label_1fa0e4:
    // 0x1fa0e4: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1fa0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1fa0e8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FA0E8u;
    {
        const bool branch_taken_0x1fa0e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA0ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA0E8u;
            // 0x1fa0ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa0e8) {
            ctx->pc = 0x1FA108u;
            goto label_1fa108;
        }
    }
    ctx->pc = 0x1FA0F0u;
    // 0x1fa0f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fa0f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fa0f4: 0x34a50152  ori         $a1, $a1, 0x152
    ctx->pc = 0x1fa0f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)338);
    // 0x1fa0f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fa0f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fa0fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fa0fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fa100: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1FA100u;
    ctx->pc = 0x1FA104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA100u;
            // 0x1fa104: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    if (runtime->hasFunction(0x1ED700u)) {
        auto targetFn = runtime->lookupFunction(0x1ED700u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1FA108u;
label_1fa108:
    // 0x1fa108: 0x8e033708  lw          $v1, 0x3708($s0)
    ctx->pc = 0x1fa108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 14088)));
    // 0x1fa10c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fa10cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fa110: 0xac710dc0  sw          $s1, 0xDC0($v1)
    ctx->pc = 0x1fa110u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3520), GPR_U32(ctx, 17));
    // 0x1fa114: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fa114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fa118: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fa118u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fa11c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA11Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA11Cu;
            // 0x1fa120: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FA124u;
    // 0x1fa124: 0x0  nop
    ctx->pc = 0x1fa124u;
    // NOP
label_1fa128:
    // 0x1fa128: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fa128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fa12c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fa12cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fa130: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1fa130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1fa134: 0xc07b648  jal         func_1ED920
    ctx->pc = 0x1FA134u;
    SET_GPR_U32(ctx, 31, 0x1FA13Cu);
    ctx->pc = 0x1FA138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA134u;
            // 0x1fa138: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED920u;
    if (runtime->hasFunction(0x1ED920u)) {
        auto targetFn = runtime->lookupFunction(0x1ED920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA13Cu; }
        if (ctx->pc != 0x1FA13Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED920_0x1ed920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA13Cu; }
        if (ctx->pc != 0x1FA13Cu) { return; }
    }
    ctx->pc = 0x1FA13Cu;
label_1fa13c:
    // 0x1fa13c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1fa13cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1fa140: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fa140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa144: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1fa144u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fa148: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FA148u;
    {
        const bool branch_taken_0x1fa148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA14Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA148u;
            // 0x1fa14c: 0x34a50153  ori         $a1, $a1, 0x153 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)339);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa148) {
            ctx->pc = 0x1FA168u;
            goto label_1fa168;
        }
    }
    ctx->pc = 0x1FA150u;
    // 0x1fa150: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fa150u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fa154: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1fa154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa158: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1fa158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fa15c: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1FA15Cu;
    ctx->pc = 0x1FA160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA15Cu;
            // 0x1fa160: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    if (runtime->hasFunction(0x1ED700u)) {
        auto targetFn = runtime->lookupFunction(0x1ED700u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1FA164u;
    // 0x1fa164: 0x0  nop
    ctx->pc = 0x1fa164u;
    // NOP
label_1fa168:
    // 0x1fa168: 0xc07eb90  jal         func_1FAE40
    ctx->pc = 0x1FA168u;
    SET_GPR_U32(ctx, 31, 0x1FA170u);
    ctx->pc = 0x1FA16Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA168u;
            // 0x1fa16c: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FAE40u;
    if (runtime->hasFunction(0x1FAE40u)) {
        auto targetFn = runtime->lookupFunction(0x1FAE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA170u; }
        if (ctx->pc != 0x1FA170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FAE40_0x1fae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA170u; }
        if (ctx->pc != 0x1FA170u) { return; }
    }
    ctx->pc = 0x1FA170u;
label_1fa170:
    // 0x1fa170: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fa170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa174: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1fa174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fa178: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fa178u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fa17c: 0x807dcbe  j           func_1F72F8
    ctx->pc = 0x1FA17Cu;
    ctx->pc = 0x1FA180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA17Cu;
            // 0x1fa180: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F72F8u;
    if (runtime->hasFunction(0x1F72F8u)) {
        auto targetFn = runtime->lookupFunction(0x1F72F8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001F72F8_0x1f72f8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1FA184u;
    // 0x1fa184: 0x0  nop
    ctx->pc = 0x1fa184u;
    // NOP
label_1fa188:
    // 0x1fa188: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fa188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fa18c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fa18cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fa190: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1fa190u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa194: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fa194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fa198: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fa198u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa19c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fa19cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1fa1a0: 0xc07b648  jal         func_1ED920
    ctx->pc = 0x1FA1A0u;
    SET_GPR_U32(ctx, 31, 0x1FA1A8u);
    ctx->pc = 0x1FA1A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA1A0u;
            // 0x1fa1a4: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED920u;
    if (runtime->hasFunction(0x1ED920u)) {
        auto targetFn = runtime->lookupFunction(0x1ED920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA1A8u; }
        if (ctx->pc != 0x1FA1A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED920_0x1ed920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA1A8u; }
        if (ctx->pc != 0x1FA1A8u) { return; }
    }
    ctx->pc = 0x1FA1A8u;
label_1fa1a8:
    // 0x1fa1a8: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1fa1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1fa1ac: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FA1ACu;
    {
        const bool branch_taken_0x1fa1ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA1B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA1ACu;
            // 0x1fa1b0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa1ac) {
            ctx->pc = 0x1FA1D0u;
            goto label_1fa1d0;
        }
    }
    ctx->pc = 0x1FA1B4u;
    // 0x1fa1b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fa1b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fa1b8: 0x34a50154  ori         $a1, $a1, 0x154
    ctx->pc = 0x1fa1b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)340);
    // 0x1fa1bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fa1bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fa1c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fa1c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fa1c4: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1FA1C4u;
    ctx->pc = 0x1FA1C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA1C4u;
            // 0x1fa1c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    if (runtime->hasFunction(0x1ED700u)) {
        auto targetFn = runtime->lookupFunction(0x1ED700u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1FA1CCu;
    // 0x1fa1cc: 0x0  nop
    ctx->pc = 0x1fa1ccu;
    // NOP
label_1fa1d0:
    // 0x1fa1d0: 0x8e243708  lw          $a0, 0x3708($s1)
    ctx->pc = 0x1fa1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 14088)));
    // 0x1fa1d4: 0xc07e87e  jal         func_1FA1F8
    ctx->pc = 0x1FA1D4u;
    SET_GPR_U32(ctx, 31, 0x1FA1DCu);
    ctx->pc = 0x1FA1D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA1D4u;
            // 0x1fa1d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FA1F8u;
    if (runtime->hasFunction(0x1FA1F8u)) {
        auto targetFn = runtime->lookupFunction(0x1FA1F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA1DCu; }
        if (ctx->pc != 0x1FA1DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FA1F8_0x1fa1f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA1DCu; }
        if (ctx->pc != 0x1FA1DCu) { return; }
    }
    ctx->pc = 0x1FA1DCu;
label_1fa1dc:
    // 0x1fa1dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fa1dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa1e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fa1e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fa1e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fa1e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fa1e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fa1e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fa1ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA1ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA1F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA1ECu;
            // 0x1fa1f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FA1F4u;
    // 0x1fa1f4: 0x0  nop
    ctx->pc = 0x1fa1f4u;
    // NOP
    ctx->pc = 0x1fa1f8u;
}
