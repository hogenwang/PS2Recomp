#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C5458
// Address: 0x1c5458 - 0x1c55b8
void sub_001C5458_0x1c5458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C5458_0x1c5458");
#endif

    switch (ctx->pc) {
        case 0x1c5488u: goto label_1c5488;
        case 0x1c5494u: goto label_1c5494;
        case 0x1c549cu: goto label_1c549c;
        case 0x1c54a8u: goto label_1c54a8;
        case 0x1c54b4u: goto label_1c54b4;
        case 0x1c54c8u: goto label_1c54c8;
        case 0x1c54d8u: goto label_1c54d8;
        case 0x1c54e4u: goto label_1c54e4;
        case 0x1c54f8u: goto label_1c54f8;
        case 0x1c5508u: goto label_1c5508;
        case 0x1c5518u: goto label_1c5518;
        case 0x1c5538u: goto label_1c5538;
        case 0x1c554cu: goto label_1c554c;
        case 0x1c5558u: goto label_1c5558;
        case 0x1c5568u: goto label_1c5568;
        case 0x1c5570u: goto label_1c5570;
        case 0x1c5578u: goto label_1c5578;
        case 0x1c5588u: goto label_1c5588;
        case 0x1c5590u: goto label_1c5590;
        case 0x1c5598u: goto label_1c5598;
        default: break;
    }

    ctx->pc = 0x1c5458u;

    // 0x1c5458: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x1c5458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x1c545c: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x1c545cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c5460: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x1c5460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x1c5464: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c5464u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5468: 0xffb30118  sd          $s3, 0x118($sp)
    ctx->pc = 0x1c5468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 19));
    // 0x1c546c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1c546cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5470: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c5470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5474: 0xffb20110  sd          $s2, 0x110($sp)
    ctx->pc = 0x1c5474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 18));
    // 0x1c5478: 0xffb10108  sd          $s1, 0x108($sp)
    ctx->pc = 0x1c5478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 17));
    // 0x1c547c: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x1c547cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x1c5480: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1C5480u;
    SET_GPR_U32(ctx, 31, 0x1C5488u);
    ctx->pc = 0x1C5484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5480u;
            // 0x1c5484: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5488u; }
        if (ctx->pc != 0x1C5488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5488u; }
        if (ctx->pc != 0x1C5488u) { return; }
    }
    ctx->pc = 0x1C5488u;
label_1c5488:
    // 0x1c5488: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c5488u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c548c: 0xc071426  jal         func_1C5098
    ctx->pc = 0x1C548Cu;
    SET_GPR_U32(ctx, 31, 0x1C5494u);
    ctx->pc = 0x1C5490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C548Cu;
            // 0x1c5490: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C5098u;
    if (runtime->hasFunction(0x1C5098u)) {
        auto targetFn = runtime->lookupFunction(0x1C5098u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5494u; }
        if (ctx->pc != 0x1C5494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5098_0x1c5098(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5494u; }
        if (ctx->pc != 0x1C5494u) { return; }
    }
    ctx->pc = 0x1C5494u;
label_1c5494:
    // 0x1c5494: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C5494u;
    SET_GPR_U32(ctx, 31, 0x1C549Cu);
    ctx->pc = 0x1C5498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5494u;
            // 0x1c5498: 0x24046000  addiu       $a0, $zero, 0x6000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (runtime->hasFunction(0x1C1330u)) {
        auto targetFn = runtime->lookupFunction(0x1C1330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C549Cu; }
        if (ctx->pc != 0x1C549Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1330_0x1c1330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C549Cu; }
        if (ctx->pc != 0x1C549Cu) { return; }
    }
    ctx->pc = 0x1C549Cu;
label_1c549c:
    // 0x1c549c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c549cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c54a0: 0xc070590  jal         func_1C1640
    ctx->pc = 0x1C54A0u;
    SET_GPR_U32(ctx, 31, 0x1C54A8u);
    ctx->pc = 0x1C54A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C54A0u;
            // 0x1c54a4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1640u;
    if (runtime->hasFunction(0x1C1640u)) {
        auto targetFn = runtime->lookupFunction(0x1C1640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C54A8u; }
        if (ctx->pc != 0x1C54A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1640_0x1c1640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C54A8u; }
        if (ctx->pc != 0x1C54A8u) { return; }
    }
    ctx->pc = 0x1C54A8u;
label_1c54a8:
    // 0x1c54a8: 0x24046001  addiu       $a0, $zero, 0x6001
    ctx->pc = 0x1c54a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24577));
    // 0x1c54ac: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C54ACu;
    SET_GPR_U32(ctx, 31, 0x1C54B4u);
    ctx->pc = 0x1C54B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C54ACu;
            // 0x1c54b0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (runtime->hasFunction(0x1C1330u)) {
        auto targetFn = runtime->lookupFunction(0x1C1330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C54B4u; }
        if (ctx->pc != 0x1C54B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1330_0x1c1330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C54B4u; }
        if (ctx->pc != 0x1C54B4u) { return; }
    }
    ctx->pc = 0x1C54B4u;
label_1c54b4:
    // 0x1c54b4: 0x24046100  addiu       $a0, $zero, 0x6100
    ctx->pc = 0x1c54b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24832));
    // 0x1c54b8: 0x6400038  bltz        $s2, . + 4 + (0x38 << 2)
    ctx->pc = 0x1C54B8u;
    {
        const bool branch_taken_0x1c54b8 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x1C54BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C54B8u;
            // 0x1c54bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c54b8) {
            ctx->pc = 0x1C559Cu;
            goto label_1c559c;
        }
    }
    ctx->pc = 0x1C54C0u;
    // 0x1c54c0: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C54C0u;
    SET_GPR_U32(ctx, 31, 0x1C54C8u);
    ctx->pc = 0x1C1330u;
    if (runtime->hasFunction(0x1C1330u)) {
        auto targetFn = runtime->lookupFunction(0x1C1330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C54C8u; }
        if (ctx->pc != 0x1C54C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1330_0x1c1330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C54C8u; }
        if (ctx->pc != 0x1C54C8u) { return; }
    }
    ctx->pc = 0x1C54C8u;
label_1c54c8:
    // 0x1c54c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c54c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c54cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c54ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c54d0: 0xc070544  jal         func_1C1510
    ctx->pc = 0x1C54D0u;
    SET_GPR_U32(ctx, 31, 0x1C54D8u);
    ctx->pc = 0x1C54D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C54D0u;
            // 0x1c54d4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1510u;
    if (runtime->hasFunction(0x1C1510u)) {
        auto targetFn = runtime->lookupFunction(0x1C1510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C54D8u; }
        if (ctx->pc != 0x1C54D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1510_0x1c1510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C54D8u; }
        if (ctx->pc != 0x1C54D8u) { return; }
    }
    ctx->pc = 0x1C54D8u;
label_1c54d8:
    // 0x1c54d8: 0x24046101  addiu       $a0, $zero, 0x6101
    ctx->pc = 0x1c54d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24833));
    // 0x1c54dc: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C54DCu;
    SET_GPR_U32(ctx, 31, 0x1C54E4u);
    ctx->pc = 0x1C54E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C54DCu;
            // 0x1c54e0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (runtime->hasFunction(0x1C1330u)) {
        auto targetFn = runtime->lookupFunction(0x1C1330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C54E4u; }
        if (ctx->pc != 0x1C54E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1330_0x1c1330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C54E4u; }
        if (ctx->pc != 0x1C54E4u) { return; }
    }
    ctx->pc = 0x1C54E4u;
label_1c54e4:
    // 0x1c54e4: 0x24046200  addiu       $a0, $zero, 0x6200
    ctx->pc = 0x1c54e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25088));
    // 0x1c54e8: 0x620002c  bltz        $s1, . + 4 + (0x2C << 2)
    ctx->pc = 0x1C54E8u;
    {
        const bool branch_taken_0x1c54e8 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x1C54ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C54E8u;
            // 0x1c54ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c54e8) {
            ctx->pc = 0x1C559Cu;
            goto label_1c559c;
        }
    }
    ctx->pc = 0x1C54F0u;
    // 0x1c54f0: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C54F0u;
    SET_GPR_U32(ctx, 31, 0x1C54F8u);
    ctx->pc = 0x1C1330u;
    if (runtime->hasFunction(0x1C1330u)) {
        auto targetFn = runtime->lookupFunction(0x1C1330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C54F8u; }
        if (ctx->pc != 0x1C54F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1330_0x1c1330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C54F8u; }
        if (ctx->pc != 0x1C54F8u) { return; }
    }
    ctx->pc = 0x1C54F8u;
label_1c54f8:
    // 0x1c54f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c54f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c54fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c54fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5500: 0xc070544  jal         func_1C1510
    ctx->pc = 0x1C5500u;
    SET_GPR_U32(ctx, 31, 0x1C5508u);
    ctx->pc = 0x1C5504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5500u;
            // 0x1c5504: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1510u;
    if (runtime->hasFunction(0x1C1510u)) {
        auto targetFn = runtime->lookupFunction(0x1C1510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5508u; }
        if (ctx->pc != 0x1C5508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1510_0x1c1510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5508u; }
        if (ctx->pc != 0x1C5508u) { return; }
    }
    ctx->pc = 0x1C5508u;
label_1c5508:
    // 0x1c5508: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x1c5508u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c550c: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x1c550cu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x1c5510: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C5510u;
    SET_GPR_U32(ctx, 31, 0x1C5518u);
    ctx->pc = 0x1C5514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5510u;
            // 0x1c5514: 0x24046201  addiu       $a0, $zero, 0x6201 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25089));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (runtime->hasFunction(0x1C1330u)) {
        auto targetFn = runtime->lookupFunction(0x1C1330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5518u; }
        if (ctx->pc != 0x1C5518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1330_0x1c1330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5518u; }
        if (ctx->pc != 0x1C5518u) { return; }
    }
    ctx->pc = 0x1C5518u;
label_1c5518:
    // 0x1c5518: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x1c5518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1c551c: 0x2a231001  slti        $v1, $s1, 0x1001
    ctx->pc = 0x1c551cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4097) ? 1 : 0);
    // 0x1c5520: 0x43880a  movz        $s1, $v0, $v1
    ctx->pc = 0x1c5520u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    // 0x1c5524: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c5524u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5528: 0x600001c  bltz        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1C5528u;
    {
        const bool branch_taken_0x1c5528 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1C552Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5528u;
            // 0x1c552c: 0x24046300  addiu       $a0, $zero, 0x6300 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5528) {
            ctx->pc = 0x1C559Cu;
            goto label_1c559c;
        }
    }
    ctx->pc = 0x1C5530u;
    // 0x1c5530: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C5530u;
    SET_GPR_U32(ctx, 31, 0x1C5538u);
    ctx->pc = 0x1C1330u;
    if (runtime->hasFunction(0x1C1330u)) {
        auto targetFn = runtime->lookupFunction(0x1C1330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5538u; }
        if (ctx->pc != 0x1C5538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1330_0x1c1330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5538u; }
        if (ctx->pc != 0x1C5538u) { return; }
    }
    ctx->pc = 0x1C5538u;
label_1c5538:
    // 0x1c5538: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c5538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c553c: 0x11303c  dsll32      $a2, $s1, 0
    ctx->pc = 0x1c553cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1c5540: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x1c5540u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x1c5544: 0xc0705c0  jal         func_1C1700
    ctx->pc = 0x1C5544u;
    SET_GPR_U32(ctx, 31, 0x1C554Cu);
    ctx->pc = 0x1C5548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5544u;
            // 0x1c5548: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1700u;
    if (runtime->hasFunction(0x1C1700u)) {
        auto targetFn = runtime->lookupFunction(0x1C1700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C554Cu; }
        if (ctx->pc != 0x1C554Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1700_0x1c1700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C554Cu; }
        if (ctx->pc != 0x1C554Cu) { return; }
    }
    ctx->pc = 0x1C554Cu;
label_1c554c:
    // 0x1c554c: 0x24046301  addiu       $a0, $zero, 0x6301
    ctx->pc = 0x1c554cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25345));
    // 0x1c5550: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C5550u;
    SET_GPR_U32(ctx, 31, 0x1C5558u);
    ctx->pc = 0x1C5554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5550u;
            // 0x1c5554: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (runtime->hasFunction(0x1C1330u)) {
        auto targetFn = runtime->lookupFunction(0x1C1330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5558u; }
        if (ctx->pc != 0x1C5558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1330_0x1c1330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5558u; }
        if (ctx->pc != 0x1C5558u) { return; }
    }
    ctx->pc = 0x1C5558u;
label_1c5558:
    // 0x1c5558: 0x6010009  bgez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C5558u;
    {
        const bool branch_taken_0x1c5558 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1C555Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5558u;
            // 0x1c555c: 0x24046500  addiu       $a0, $zero, 0x6500 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5558) {
            ctx->pc = 0x1C5580u;
            goto label_1c5580;
        }
    }
    ctx->pc = 0x1C5560u;
    // 0x1c5560: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C5560u;
    SET_GPR_U32(ctx, 31, 0x1C5568u);
    ctx->pc = 0x1C1330u;
    if (runtime->hasFunction(0x1C1330u)) {
        auto targetFn = runtime->lookupFunction(0x1C1330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5568u; }
        if (ctx->pc != 0x1C5568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1330_0x1c1330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5568u; }
        if (ctx->pc != 0x1C5568u) { return; }
    }
    ctx->pc = 0x1C5568u;
label_1c5568:
    // 0x1c5568: 0xc0705aa  jal         func_1C16A8
    ctx->pc = 0x1C5568u;
    SET_GPR_U32(ctx, 31, 0x1C5570u);
    ctx->pc = 0x1C556Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5568u;
            // 0x1c556c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C16A8u;
    if (runtime->hasFunction(0x1C16A8u)) {
        auto targetFn = runtime->lookupFunction(0x1C16A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5570u; }
        if (ctx->pc != 0x1C5570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C16A8_0x1c16a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5570u; }
        if (ctx->pc != 0x1C5570u) { return; }
    }
    ctx->pc = 0x1C5570u;
label_1c5570:
    // 0x1c5570: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C5570u;
    SET_GPR_U32(ctx, 31, 0x1C5578u);
    ctx->pc = 0x1C5574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5570u;
            // 0x1c5574: 0x24046501  addiu       $a0, $zero, 0x6501 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25857));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (runtime->hasFunction(0x1C1330u)) {
        auto targetFn = runtime->lookupFunction(0x1C1330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5578u; }
        if (ctx->pc != 0x1C5578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1330_0x1c1330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5578u; }
        if (ctx->pc != 0x1C5578u) { return; }
    }
    ctx->pc = 0x1C5578u;
label_1c5578:
    // 0x1c5578: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C5578u;
    {
        const bool branch_taken_0x1c5578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C557Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5578u;
            // 0x1c557c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5578) {
            ctx->pc = 0x1C559Cu;
            goto label_1c559c;
        }
    }
    ctx->pc = 0x1C5580u;
label_1c5580:
    // 0x1c5580: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C5580u;
    SET_GPR_U32(ctx, 31, 0x1C5588u);
    ctx->pc = 0x1C5584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5580u;
            // 0x1c5584: 0x24046400  addiu       $a0, $zero, 0x6400 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25600));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (runtime->hasFunction(0x1C1330u)) {
        auto targetFn = runtime->lookupFunction(0x1C1330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5588u; }
        if (ctx->pc != 0x1C5588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1330_0x1c1330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5588u; }
        if (ctx->pc != 0x1C5588u) { return; }
    }
    ctx->pc = 0x1C5588u;
label_1c5588:
    // 0x1c5588: 0xc0705aa  jal         func_1C16A8
    ctx->pc = 0x1C5588u;
    SET_GPR_U32(ctx, 31, 0x1C5590u);
    ctx->pc = 0x1C558Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5588u;
            // 0x1c558c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C16A8u;
    if (runtime->hasFunction(0x1C16A8u)) {
        auto targetFn = runtime->lookupFunction(0x1C16A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5590u; }
        if (ctx->pc != 0x1C5590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C16A8_0x1c16a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5590u; }
        if (ctx->pc != 0x1C5590u) { return; }
    }
    ctx->pc = 0x1C5590u;
label_1c5590:
    // 0x1c5590: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C5590u;
    SET_GPR_U32(ctx, 31, 0x1C5598u);
    ctx->pc = 0x1C5594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5590u;
            // 0x1c5594: 0x24046401  addiu       $a0, $zero, 0x6401 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25601));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (runtime->hasFunction(0x1C1330u)) {
        auto targetFn = runtime->lookupFunction(0x1C1330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5598u; }
        if (ctx->pc != 0x1C5598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1330_0x1c1330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5598u; }
        if (ctx->pc != 0x1C5598u) { return; }
    }
    ctx->pc = 0x1C5598u;
label_1c5598:
    // 0x1c5598: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c5598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c559c:
    // 0x1c559c: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x1c559cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1c55a0: 0xdfb10108  ld          $s1, 0x108($sp)
    ctx->pc = 0x1c55a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1c55a4: 0xdfb20110  ld          $s2, 0x110($sp)
    ctx->pc = 0x1c55a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1c55a8: 0xdfb30118  ld          $s3, 0x118($sp)
    ctx->pc = 0x1c55a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1c55ac: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x1c55acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1c55b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C55B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C55B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C55B0u;
            // 0x1c55b4: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C55B8u;
    ctx->pc = 0x1c55b8u;
}
