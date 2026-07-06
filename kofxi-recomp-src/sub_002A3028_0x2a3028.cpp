#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A3028
// Address: 0x2a3028 - 0x2a30e0
void sub_002A3028_0x2a3028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A3028_0x2a3028");
#endif

    switch (ctx->pc) {
        case 0x2a3028u: goto label_2a3028;
        case 0x2a302cu: goto label_2a302c;
        case 0x2a3030u: goto label_2a3030;
        case 0x2a3034u: goto label_2a3034;
        case 0x2a3038u: goto label_2a3038;
        case 0x2a303cu: goto label_2a303c;
        case 0x2a3040u: goto label_2a3040;
        case 0x2a3044u: goto label_2a3044;
        case 0x2a3048u: goto label_2a3048;
        case 0x2a304cu: goto label_2a304c;
        case 0x2a3050u: goto label_2a3050;
        case 0x2a3054u: goto label_2a3054;
        case 0x2a3058u: goto label_2a3058;
        case 0x2a305cu: goto label_2a305c;
        case 0x2a3060u: goto label_2a3060;
        case 0x2a3064u: goto label_2a3064;
        case 0x2a3068u: goto label_2a3068;
        case 0x2a306cu: goto label_2a306c;
        case 0x2a3070u: goto label_2a3070;
        case 0x2a3074u: goto label_2a3074;
        case 0x2a3078u: goto label_2a3078;
        case 0x2a307cu: goto label_2a307c;
        case 0x2a3080u: goto label_2a3080;
        case 0x2a3084u: goto label_2a3084;
        case 0x2a3088u: goto label_2a3088;
        case 0x2a308cu: goto label_2a308c;
        case 0x2a3090u: goto label_2a3090;
        case 0x2a3094u: goto label_2a3094;
        case 0x2a3098u: goto label_2a3098;
        case 0x2a309cu: goto label_2a309c;
        case 0x2a30a0u: goto label_2a30a0;
        case 0x2a30a4u: goto label_2a30a4;
        case 0x2a30a8u: goto label_2a30a8;
        case 0x2a30acu: goto label_2a30ac;
        case 0x2a30b0u: goto label_2a30b0;
        case 0x2a30b4u: goto label_2a30b4;
        case 0x2a30b8u: goto label_2a30b8;
        case 0x2a30bcu: goto label_2a30bc;
        case 0x2a30c0u: goto label_2a30c0;
        case 0x2a30c4u: goto label_2a30c4;
        case 0x2a30c8u: goto label_2a30c8;
        case 0x2a30ccu: goto label_2a30cc;
        case 0x2a30d0u: goto label_2a30d0;
        case 0x2a30d4u: goto label_2a30d4;
        case 0x2a30d8u: goto label_2a30d8;
        case 0x2a30dcu: goto label_2a30dc;
        default: break;
    }

    ctx->pc = 0x2a3028u;

label_2a3028:
    // 0x2a3028: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2a3028u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_2a302c:
    // 0x2a302c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a302cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2a3030:
    // 0x2a3030: 0x8c626a1c  lw          $v0, 0x6A1C($v1)
    ctx->pc = 0x2a3030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27164)));
label_2a3034:
    // 0x2a3034: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a3034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2a3038:
    // 0x2a3038: 0x40f809  jalr        $v0
label_2a303c:
    if (ctx->pc == 0x2A303Cu) {
        ctx->pc = 0x2A3040u;
        goto label_2a3040;
    }
    ctx->pc = 0x2A3038u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A3040u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A3040u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A3040u; }
            if (ctx->pc != 0x2A3040u) { return; }
        }
        }
    }
    ctx->pc = 0x2A3040u;
label_2a3040:
    // 0x2a3040: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a3040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a3044:
    // 0x2a3044: 0x3e00008  jr          $ra
label_2a3048:
    if (ctx->pc == 0x2A3048u) {
        ctx->pc = 0x2A3048u;
            // 0x2a3048: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2A304Cu;
        goto label_2a304c;
    }
    ctx->pc = 0x2A3044u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3044u;
            // 0x2a3048: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A304Cu;
label_2a304c:
    // 0x2a304c: 0x0  nop
    ctx->pc = 0x2a304cu;
    // NOP
label_2a3050:
    // 0x2a3050: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a3050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2a3054:
    // 0x2a3054: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a3054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2a3058:
    // 0x2a3058: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a3058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2a305c:
    // 0x2a305c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2a3060:
    if (ctx->pc == 0x2A3060u) {
        ctx->pc = 0x2A3060u;
            // 0x2a3060: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A3064u;
        goto label_2a3064;
    }
    ctx->pc = 0x2A305Cu;
    {
        const bool branch_taken_0x2a305c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A305Cu;
            // 0x2a3060: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a305c) {
            ctx->pc = 0x2A306Cu;
            goto label_2a306c;
        }
    }
    ctx->pc = 0x2A3064u;
label_2a3064:
    // 0x2a3064: 0xc0a8c0a  jal         func_2A3028
label_2a3068:
    if (ctx->pc == 0x2A3068u) {
        ctx->pc = 0x2A306Cu;
        goto label_2a306c;
    }
    ctx->pc = 0x2A3064u;
    SET_GPR_U32(ctx, 31, 0x2A306Cu);
    ctx->pc = 0x2A3028u;
    goto label_2a3028;
    ctx->pc = 0x2A306Cu;
label_2a306c:
    // 0x2a306c: 0xc0a8bf6  jal         func_2A2FD8
label_2a3070:
    if (ctx->pc == 0x2A3070u) {
        ctx->pc = 0x2A3070u;
            // 0x2a3070: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A3074u;
        goto label_2a3074;
    }
    ctx->pc = 0x2A306Cu;
    SET_GPR_U32(ctx, 31, 0x2A3074u);
    ctx->pc = 0x2A3070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A306Cu;
            // 0x2a3070: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (runtime->hasFunction(0x2A2FD8u)) {
        auto targetFn = runtime->lookupFunction(0x2A2FD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3074u; }
        if (ctx->pc != 0x2A3074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2FD8_0x2a2fd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3074u; }
        if (ctx->pc != 0x2A3074u) { return; }
    }
    ctx->pc = 0x2A3074u;
label_2a3074:
    // 0x2a3074: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a3074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2a3078:
    // 0x2a3078: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a3078u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a307c:
    // 0x2a307c: 0x3e00008  jr          $ra
label_2a3080:
    if (ctx->pc == 0x2A3080u) {
        ctx->pc = 0x2A3080u;
            // 0x2a3080: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2A3084u;
        goto label_2a3084;
    }
    ctx->pc = 0x2A307Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A307Cu;
            // 0x2a3080: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A3084u;
label_2a3084:
    // 0x2a3084: 0x0  nop
    ctx->pc = 0x2a3084u;
    // NOP
label_2a3088:
    // 0x2a3088: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a3088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2a308c:
    // 0x2a308c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2a308cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_2a3090:
    // 0x2a3090: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a3090u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a3094:
    // 0x2a3094: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_2a3098:
    if (ctx->pc == 0x2A3098u) {
        ctx->pc = 0x2A3098u;
            // 0x2a3098: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->pc = 0x2A309Cu;
        goto label_2a309c;
    }
    ctx->pc = 0x2A3094u;
    {
        const bool branch_taken_0x2a3094 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3094u;
            // 0x2a3098: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3094) {
            ctx->pc = 0x2A30CCu;
            goto label_2a30cc;
        }
    }
    ctx->pc = 0x2A309Cu;
label_2a309c:
    // 0x2a309c: 0xc0afc22  jal         func_2BF088
label_2a30a0:
    if (ctx->pc == 0x2A30A0u) {
        ctx->pc = 0x2A30A0u;
            // 0x2a30a0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A30A4u;
        goto label_2a30a4;
    }
    ctx->pc = 0x2A309Cu;
    SET_GPR_U32(ctx, 31, 0x2A30A4u);
    ctx->pc = 0x2A30A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A309Cu;
            // 0x2a30a0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BF088u;
    if (runtime->hasFunction(0x2BF088u)) {
        auto targetFn = runtime->lookupFunction(0x2BF088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A30A4u; }
        if (ctx->pc != 0x2A30A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BF088_0x2bf088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A30A4u; }
        if (ctx->pc != 0x2A30A4u) { return; }
    }
    ctx->pc = 0x2A30A4u;
label_2a30a4:
    // 0x2a30a4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_2a30a8:
    if (ctx->pc == 0x2A30A8u) {
        ctx->pc = 0x2A30A8u;
            // 0x2a30a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A30ACu;
        goto label_2a30ac;
    }
    ctx->pc = 0x2A30A4u;
    {
        const bool branch_taken_0x2a30a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A30A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A30A4u;
            // 0x2a30a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a30a4) {
            ctx->pc = 0x2A30D0u;
            goto label_2a30d0;
        }
    }
    ctx->pc = 0x2A30ACu;
label_2a30ac:
    // 0x2a30ac: 0x6ba3000f  ldl         $v1, 0xF($sp)
    ctx->pc = 0x2a30acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_2a30b0:
    // 0x2a30b0: 0x6fa30008  ldr         $v1, 0x8($sp)
    ctx->pc = 0x2a30b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_2a30b4:
    // 0x2a30b4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2a30b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2a30b8:
    // 0x2a30b8: 0xb2030007  sdl         $v1, 0x7($s0)
    ctx->pc = 0x2a30b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2a30bc:
    // 0x2a30bc: 0xb6030000  sdr         $v1, 0x0($s0)
    ctx->pc = 0x2a30bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2a30c0:
    // 0x2a30c0: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x2a30c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
label_2a30c4:
    // 0x2a30c4: 0x10000002  b           . + 4 + (0x2 << 2)
label_2a30c8:
    if (ctx->pc == 0x2A30C8u) {
        ctx->pc = 0x2A30C8u;
            // 0x2a30c8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A30CCu;
        goto label_2a30cc;
    }
    ctx->pc = 0x2A30C4u;
    {
        const bool branch_taken_0x2a30c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A30C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A30C4u;
            // 0x2a30c8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a30c4) {
            ctx->pc = 0x2A30D0u;
            goto label_2a30d0;
        }
    }
    ctx->pc = 0x2A30CCu;
label_2a30cc:
    // 0x2a30cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a30ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a30d0:
    // 0x2a30d0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2a30d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2a30d4:
    // 0x2a30d4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2a30d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2a30d8:
    // 0x2a30d8: 0x3e00008  jr          $ra
label_2a30dc:
    if (ctx->pc == 0x2A30DCu) {
        ctx->pc = 0x2A30DCu;
            // 0x2a30dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2A30E0u;
        goto label_fallthrough_0x2a30d8;
    }
    ctx->pc = 0x2A30D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A30DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A30D8u;
            // 0x2a30dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2a30d8:
    ctx->pc = 0x2A30E0u;
    ctx->pc = 0x2a30e0u;
}
