#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002FD4A0
// Address: 0x2fd4a0 - 0x2fd760
void sub_002FD4A0_0x2fd4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FD4A0_0x2fd4a0");
#endif

    switch (ctx->pc) {
        case 0x2fd4ccu: goto label_2fd4cc;
        case 0x2fd4e4u: goto label_2fd4e4;
        case 0x2fd4f8u: goto label_2fd4f8;
        case 0x2fd510u: goto label_2fd510;
        case 0x2fd528u: goto label_2fd528;
        case 0x2fd558u: goto label_2fd558;
        case 0x2fd574u: goto label_2fd574;
        case 0x2fd590u: goto label_2fd590;
        case 0x2fd5acu: goto label_2fd5ac;
        case 0x2fd5c8u: goto label_2fd5c8;
        case 0x2fd5e4u: goto label_2fd5e4;
        case 0x2fd600u: goto label_2fd600;
        case 0x2fd61cu: goto label_2fd61c;
        case 0x2fd638u: goto label_2fd638;
        case 0x2fd654u: goto label_2fd654;
        case 0x2fd670u: goto label_2fd670;
        case 0x2fd68cu: goto label_2fd68c;
        case 0x2fd6a8u: goto label_2fd6a8;
        case 0x2fd6c4u: goto label_2fd6c4;
        case 0x2fd6e0u: goto label_2fd6e0;
        case 0x2fd6fcu: goto label_2fd6fc;
        case 0x2fd708u: goto label_2fd708;
        default: break;
    }

    ctx->pc = 0x2fd4a0u;

    // 0x2fd4a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fd4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2fd4a4: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x2fd4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2fd4a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fd4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2fd4ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fd4acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd4b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fd4b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2fd4b4: 0xa7a2002e  sh          $v0, 0x2E($sp)
    ctx->pc = 0x2fd4b4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 46), (uint16_t)GPR_U32(ctx, 2));
    // 0x2fd4b8: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x2fd4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x2fd4bc: 0x8c440c50  lw          $a0, 0xC50($v0)
    ctx->pc = 0x2fd4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3152)));
    // 0x2fd4c0: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2fd4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2fd4c4: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2FD4C4u;
    SET_GPR_U32(ctx, 31, 0x2FD4CCu);
    ctx->pc = 0x2FD4C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD4C4u;
            // 0x2fd4c8: 0x344695b8  ori         $a2, $v0, 0x95B8 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38328);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD4CCu; }
        if (ctx->pc != 0x2FD4CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD4CCu; }
        if (ctx->pc != 0x2FD4CCu) { return; }
    }
    ctx->pc = 0x2FD4CCu;
label_2fd4cc:
    // 0x2fd4cc: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x2fd4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x2fd4d0: 0x27a5002e  addiu       $a1, $sp, 0x2E
    ctx->pc = 0x2fd4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 46));
    // 0x2fd4d4: 0x8c500c50  lw          $s0, 0xC50($v0)
    ctx->pc = 0x2fd4d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3152)));
    // 0x2fd4d8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2fd4d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fd4dc: 0xc049c48  jal         func_127120
    ctx->pc = 0x2FD4DCu;
    SET_GPR_U32(ctx, 31, 0x2FD4E4u);
    ctx->pc = 0x2FD4E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD4DCu;
            // 0x2fd4e0: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD4E4u; }
        if (ctx->pc != 0x2FD4E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD4E4u; }
        if (ctx->pc != 0x2FD4E4u) { return; }
    }
    ctx->pc = 0x2FD4E4u;
label_2fd4e4:
    // 0x2fd4e4: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x2fd4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x2fd4e8: 0x26040006  addiu       $a0, $s0, 0x6
    ctx->pc = 0x2fd4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
    // 0x2fd4ec: 0x24a5f240  addiu       $a1, $a1, -0xDC0
    ctx->pc = 0x2fd4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963776));
    // 0x2fd4f0: 0xc049c48  jal         func_127120
    ctx->pc = 0x2FD4F0u;
    SET_GPR_U32(ctx, 31, 0x2FD4F8u);
    ctx->pc = 0x2FD4F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD4F0u;
            // 0x2fd4f4: 0x3406c000  ori         $a2, $zero, 0xC000 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD4F8u; }
        if (ctx->pc != 0x2FD4F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD4F8u; }
        if (ctx->pc != 0x2FD4F8u) { return; }
    }
    ctx->pc = 0x2FD4F8u;
label_2fd4f8:
    // 0x2fd4f8: 0x3401c006  ori         $at, $zero, 0xC006
    ctx->pc = 0x2fd4f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49158);
    // 0x2fd4fc: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x2fd4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x2fd500: 0x2012021  addu        $a0, $s0, $at
    ctx->pc = 0x2fd500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2fd504: 0x24a5ef90  addiu       $a1, $a1, -0x1070
    ctx->pc = 0x2fd504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963088));
    // 0x2fd508: 0xc049c48  jal         func_127120
    ctx->pc = 0x2FD508u;
    SET_GPR_U32(ctx, 31, 0x2FD510u);
    ctx->pc = 0x2FD50Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD508u;
            // 0x2fd50c: 0x240602a8  addiu       $a2, $zero, 0x2A8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 680));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD510u; }
        if (ctx->pc != 0x2FD510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD510u; }
        if (ctx->pc != 0x2FD510u) { return; }
    }
    ctx->pc = 0x2FD510u;
label_2fd510:
    // 0x2fd510: 0x3401c2ae  ori         $at, $zero, 0xC2AE
    ctx->pc = 0x2fd510u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49838);
    // 0x2fd514: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x2fd514u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x2fd518: 0x2012021  addu        $a0, $s0, $at
    ctx->pc = 0x2fd518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2fd51c: 0x24a5ece0  addiu       $a1, $a1, -0x1320
    ctx->pc = 0x2fd51cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962400));
    // 0x2fd520: 0xc049c48  jal         func_127120
    ctx->pc = 0x2FD520u;
    SET_GPR_U32(ctx, 31, 0x2FD528u);
    ctx->pc = 0x2FD524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD520u;
            // 0x2fd524: 0x240602a8  addiu       $a2, $zero, 0x2A8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 680));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD528u; }
        if (ctx->pc != 0x2FD528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD528u; }
        if (ctx->pc != 0x2FD528u) { return; }
    }
    ctx->pc = 0x2FD528u;
label_2fd528:
    // 0x2fd528: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x2fd528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x2fd52c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2fd52cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2fd530: 0x9066b288  lbu         $a2, -0x4D78($v1)
    ctx->pc = 0x2fd530u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947464)));
    // 0x2fd534: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2fd534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2fd538: 0x3401c557  ori         $at, $zero, 0xC557
    ctx->pc = 0x2fd538u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50519);
    // 0x2fd53c: 0x3c05009d  lui         $a1, 0x9D
    ctx->pc = 0x2fd53cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)157 << 16));
    // 0x2fd540: 0x2012021  addu        $a0, $s0, $at
    ctx->pc = 0x2fd540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2fd544: 0x24a5b290  addiu       $a1, $a1, -0x4D70
    ctx->pc = 0x2fd544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947472));
    // 0x2fd548: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2fd548u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2fd54c: 0xa046c556  sb          $a2, -0x3AAA($v0)
    ctx->pc = 0x2fd54cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294952278), (uint8_t)GPR_U32(ctx, 6));
    // 0x2fd550: 0xc049c48  jal         func_127120
    ctx->pc = 0x2FD550u;
    SET_GPR_U32(ctx, 31, 0x2FD558u);
    ctx->pc = 0x2FD554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD550u;
            // 0x2fd554: 0x3466cc24  ori         $a2, $v1, 0xCC24 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52260);
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD558u; }
        if (ctx->pc != 0x2FD558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD558u; }
        if (ctx->pc != 0x2FD558u) { return; }
    }
    ctx->pc = 0x2FD558u;
label_2fd558:
    // 0x2fd558: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2fd558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2fd55c: 0x3c05009d  lui         $a1, 0x9D
    ctx->pc = 0x2fd55cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)157 << 16));
    // 0x2fd560: 0x3421917b  ori         $at, $at, 0x917B
    ctx->pc = 0x2fd560u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37243);
    // 0x2fd564: 0x24a5b280  addiu       $a1, $a1, -0x4D80
    ctx->pc = 0x2fd564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947456));
    // 0x2fd568: 0x2012021  addu        $a0, $s0, $at
    ctx->pc = 0x2fd568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2fd56c: 0xc049c48  jal         func_127120
    ctx->pc = 0x2FD56Cu;
    SET_GPR_U32(ctx, 31, 0x2FD574u);
    ctx->pc = 0x2FD570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD56Cu;
            // 0x2fd570: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD574u; }
        if (ctx->pc != 0x2FD574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD574u; }
        if (ctx->pc != 0x2FD574u) { return; }
    }
    ctx->pc = 0x2FD574u;
label_2fd574:
    // 0x2fd574: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2fd574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2fd578: 0x3c05009d  lui         $a1, 0x9D
    ctx->pc = 0x2fd578u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)157 << 16));
    // 0x2fd57c: 0x34219182  ori         $at, $at, 0x9182
    ctx->pc = 0x2fd57cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37250);
    // 0x2fd580: 0x24a5b270  addiu       $a1, $a1, -0x4D90
    ctx->pc = 0x2fd580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947440));
    // 0x2fd584: 0x2012021  addu        $a0, $s0, $at
    ctx->pc = 0x2fd584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2fd588: 0xc049c48  jal         func_127120
    ctx->pc = 0x2FD588u;
    SET_GPR_U32(ctx, 31, 0x2FD590u);
    ctx->pc = 0x2FD58Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD588u;
            // 0x2fd58c: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD590u; }
        if (ctx->pc != 0x2FD590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD590u; }
        if (ctx->pc != 0x2FD590u) { return; }
    }
    ctx->pc = 0x2FD590u;
label_2fd590:
    // 0x2fd590: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2fd590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2fd594: 0x3c05009d  lui         $a1, 0x9D
    ctx->pc = 0x2fd594u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)157 << 16));
    // 0x2fd598: 0x3421918d  ori         $at, $at, 0x918D
    ctx->pc = 0x2fd598u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37261);
    // 0x2fd59c: 0x24a5b268  addiu       $a1, $a1, -0x4D98
    ctx->pc = 0x2fd59cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947432));
    // 0x2fd5a0: 0x2012021  addu        $a0, $s0, $at
    ctx->pc = 0x2fd5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2fd5a4: 0xc049c48  jal         func_127120
    ctx->pc = 0x2FD5A4u;
    SET_GPR_U32(ctx, 31, 0x2FD5ACu);
    ctx->pc = 0x2FD5A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD5A4u;
            // 0x2fd5a8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD5ACu; }
        if (ctx->pc != 0x2FD5ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD5ACu; }
        if (ctx->pc != 0x2FD5ACu) { return; }
    }
    ctx->pc = 0x2FD5ACu;
label_2fd5ac:
    // 0x2fd5ac: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2fd5acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2fd5b0: 0x3c05009d  lui         $a1, 0x9D
    ctx->pc = 0x2fd5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)157 << 16));
    // 0x2fd5b4: 0x34219191  ori         $at, $at, 0x9191
    ctx->pc = 0x2fd5b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37265);
    // 0x2fd5b8: 0x24a5b250  addiu       $a1, $a1, -0x4DB0
    ctx->pc = 0x2fd5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947408));
    // 0x2fd5bc: 0x2012021  addu        $a0, $s0, $at
    ctx->pc = 0x2fd5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2fd5c0: 0xc049c48  jal         func_127120
    ctx->pc = 0x2FD5C0u;
    SET_GPR_U32(ctx, 31, 0x2FD5C8u);
    ctx->pc = 0x2FD5C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD5C0u;
            // 0x2fd5c4: 0x24060012  addiu       $a2, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD5C8u; }
        if (ctx->pc != 0x2FD5C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD5C8u; }
        if (ctx->pc != 0x2FD5C8u) { return; }
    }
    ctx->pc = 0x2FD5C8u;
label_2fd5c8:
    // 0x2fd5c8: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2fd5c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2fd5cc: 0x3c05009d  lui         $a1, 0x9D
    ctx->pc = 0x2fd5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)157 << 16));
    // 0x2fd5d0: 0x342191a3  ori         $at, $at, 0x91A3
    ctx->pc = 0x2fd5d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37283);
    // 0x2fd5d4: 0x24a5b240  addiu       $a1, $a1, -0x4DC0
    ctx->pc = 0x2fd5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947392));
    // 0x2fd5d8: 0x2012021  addu        $a0, $s0, $at
    ctx->pc = 0x2fd5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2fd5dc: 0xc049c48  jal         func_127120
    ctx->pc = 0x2FD5DCu;
    SET_GPR_U32(ctx, 31, 0x2FD5E4u);
    ctx->pc = 0x2FD5E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD5DCu;
            // 0x2fd5e0: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD5E4u; }
        if (ctx->pc != 0x2FD5E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD5E4u; }
        if (ctx->pc != 0x2FD5E4u) { return; }
    }
    ctx->pc = 0x2FD5E4u;
label_2fd5e4:
    // 0x2fd5e4: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2fd5e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2fd5e8: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x2fd5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x2fd5ec: 0x342191ae  ori         $at, $at, 0x91AE
    ctx->pc = 0x2fd5ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37294);
    // 0x2fd5f0: 0x24a5ec50  addiu       $a1, $a1, -0x13B0
    ctx->pc = 0x2fd5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962256));
    // 0x2fd5f4: 0x2012021  addu        $a0, $s0, $at
    ctx->pc = 0x2fd5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2fd5f8: 0xc049c48  jal         func_127120
    ctx->pc = 0x2FD5F8u;
    SET_GPR_U32(ctx, 31, 0x2FD600u);
    ctx->pc = 0x2FD5FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD5F8u;
            // 0x2fd5fc: 0x2406002a  addiu       $a2, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD600u; }
        if (ctx->pc != 0x2FD600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD600u; }
        if (ctx->pc != 0x2FD600u) { return; }
    }
    ctx->pc = 0x2FD600u;
label_2fd600:
    // 0x2fd600: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2fd600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2fd604: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x2fd604u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x2fd608: 0x342191d8  ori         $at, $at, 0x91D8
    ctx->pc = 0x2fd608u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37336);
    // 0x2fd60c: 0x24a5ec90  addiu       $a1, $a1, -0x1370
    ctx->pc = 0x2fd60cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962320));
    // 0x2fd610: 0x2012021  addu        $a0, $s0, $at
    ctx->pc = 0x2fd610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2fd614: 0xc049c48  jal         func_127120
    ctx->pc = 0x2FD614u;
    SET_GPR_U32(ctx, 31, 0x2FD61Cu);
    ctx->pc = 0x2FD618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD614u;
            // 0x2fd618: 0x2406004a  addiu       $a2, $zero, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD61Cu; }
        if (ctx->pc != 0x2FD61Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD61Cu; }
        if (ctx->pc != 0x2FD61Cu) { return; }
    }
    ctx->pc = 0x2FD61Cu;
label_2fd61c:
    // 0x2fd61c: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2fd61cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2fd620: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x2fd620u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x2fd624: 0x34219222  ori         $at, $at, 0x9222
    ctx->pc = 0x2fd624u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37410);
    // 0x2fd628: 0x24a5ec80  addiu       $a1, $a1, -0x1380
    ctx->pc = 0x2fd628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962304));
    // 0x2fd62c: 0x2012021  addu        $a0, $s0, $at
    ctx->pc = 0x2fd62cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2fd630: 0xc049c48  jal         func_127120
    ctx->pc = 0x2FD630u;
    SET_GPR_U32(ctx, 31, 0x2FD638u);
    ctx->pc = 0x2FD634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD630u;
            // 0x2fd634: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD638u; }
        if (ctx->pc != 0x2FD638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD638u; }
        if (ctx->pc != 0x2FD638u) { return; }
    }
    ctx->pc = 0x2FD638u;
label_2fd638:
    // 0x2fd638: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2fd638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2fd63c: 0x3c050093  lui         $a1, 0x93
    ctx->pc = 0x2fd63cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)147 << 16));
    // 0x2fd640: 0x34219224  ori         $at, $at, 0x9224
    ctx->pc = 0x2fd640u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37412);
    // 0x2fd644: 0x24a5edf0  addiu       $a1, $a1, -0x1210
    ctx->pc = 0x2fd644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962672));
    // 0x2fd648: 0x2012021  addu        $a0, $s0, $at
    ctx->pc = 0x2fd648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2fd64c: 0xc049c48  jal         func_127120
    ctx->pc = 0x2FD64Cu;
    SET_GPR_U32(ctx, 31, 0x2FD654u);
    ctx->pc = 0x2FD650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD64Cu;
            // 0x2fd650: 0x240600a0  addiu       $a2, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD654u; }
        if (ctx->pc != 0x2FD654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD654u; }
        if (ctx->pc != 0x2FD654u) { return; }
    }
    ctx->pc = 0x2FD654u;
label_2fd654:
    // 0x2fd654: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2fd654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2fd658: 0x3c050093  lui         $a1, 0x93
    ctx->pc = 0x2fd658u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)147 << 16));
    // 0x2fd65c: 0x342192c4  ori         $at, $at, 0x92C4
    ctx->pc = 0x2fd65cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37572);
    // 0x2fd660: 0x24a5ed50  addiu       $a1, $a1, -0x12B0
    ctx->pc = 0x2fd660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962512));
    // 0x2fd664: 0x2012021  addu        $a0, $s0, $at
    ctx->pc = 0x2fd664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2fd668: 0xc049c48  jal         func_127120
    ctx->pc = 0x2FD668u;
    SET_GPR_U32(ctx, 31, 0x2FD670u);
    ctx->pc = 0x2FD66Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD668u;
            // 0x2fd66c: 0x240600a0  addiu       $a2, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD670u; }
        if (ctx->pc != 0x2FD670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD670u; }
        if (ctx->pc != 0x2FD670u) { return; }
    }
    ctx->pc = 0x2FD670u;
label_2fd670:
    // 0x2fd670: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2fd670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2fd674: 0x3c050093  lui         $a1, 0x93
    ctx->pc = 0x2fd674u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)147 << 16));
    // 0x2fd678: 0x34219364  ori         $at, $at, 0x9364
    ctx->pc = 0x2fd678u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37732);
    // 0x2fd67c: 0x24a5ee90  addiu       $a1, $a1, -0x1170
    ctx->pc = 0x2fd67cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962832));
    // 0x2fd680: 0x2012021  addu        $a0, $s0, $at
    ctx->pc = 0x2fd680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2fd684: 0xc049c48  jal         func_127120
    ctx->pc = 0x2FD684u;
    SET_GPR_U32(ctx, 31, 0x2FD68Cu);
    ctx->pc = 0x2FD688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD684u;
            // 0x2fd688: 0x240600a0  addiu       $a2, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD68Cu; }
        if (ctx->pc != 0x2FD68Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD68Cu; }
        if (ctx->pc != 0x2FD68Cu) { return; }
    }
    ctx->pc = 0x2FD68Cu;
label_2fd68c:
    // 0x2fd68c: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2fd68cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2fd690: 0x3c050093  lui         $a1, 0x93
    ctx->pc = 0x2fd690u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)147 << 16));
    // 0x2fd694: 0x34219404  ori         $at, $at, 0x9404
    ctx->pc = 0x2fd694u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37892);
    // 0x2fd698: 0x24a5ec50  addiu       $a1, $a1, -0x13B0
    ctx->pc = 0x2fd698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962256));
    // 0x2fd69c: 0x2012021  addu        $a0, $s0, $at
    ctx->pc = 0x2fd69cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2fd6a0: 0xc049c48  jal         func_127120
    ctx->pc = 0x2FD6A0u;
    SET_GPR_U32(ctx, 31, 0x2FD6A8u);
    ctx->pc = 0x2FD6A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD6A0u;
            // 0x2fd6a4: 0x24060078  addiu       $a2, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD6A8u; }
        if (ctx->pc != 0x2FD6A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD6A8u; }
        if (ctx->pc != 0x2FD6A8u) { return; }
    }
    ctx->pc = 0x2FD6A8u;
label_2fd6a8:
    // 0x2fd6a8: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2fd6a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2fd6ac: 0x3c050093  lui         $a1, 0x93
    ctx->pc = 0x2fd6acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)147 << 16));
    // 0x2fd6b0: 0x3421947c  ori         $at, $at, 0x947C
    ctx->pc = 0x2fd6b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)38012);
    // 0x2fd6b4: 0x24a5ecd0  addiu       $a1, $a1, -0x1330
    ctx->pc = 0x2fd6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962384));
    // 0x2fd6b8: 0x2012021  addu        $a0, $s0, $at
    ctx->pc = 0x2fd6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2fd6bc: 0xc049c48  jal         func_127120
    ctx->pc = 0x2FD6BCu;
    SET_GPR_U32(ctx, 31, 0x2FD6C4u);
    ctx->pc = 0x2FD6C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD6BCu;
            // 0x2fd6c0: 0x24060078  addiu       $a2, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD6C4u; }
        if (ctx->pc != 0x2FD6C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD6C4u; }
        if (ctx->pc != 0x2FD6C4u) { return; }
    }
    ctx->pc = 0x2FD6C4u;
label_2fd6c4:
    // 0x2fd6c4: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2fd6c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2fd6c8: 0x3c0501e0  lui         $a1, 0x1E0
    ctx->pc = 0x2fd6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)480 << 16));
    // 0x2fd6cc: 0x342194f4  ori         $at, $at, 0x94F4
    ctx->pc = 0x2fd6ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)38132);
    // 0x2fd6d0: 0x24a5bea8  addiu       $a1, $a1, -0x4158
    ctx->pc = 0x2fd6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950568));
    // 0x2fd6d4: 0x2012021  addu        $a0, $s0, $at
    ctx->pc = 0x2fd6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2fd6d8: 0xc049c48  jal         func_127120
    ctx->pc = 0x2FD6D8u;
    SET_GPR_U32(ctx, 31, 0x2FD6E0u);
    ctx->pc = 0x2FD6DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD6D8u;
            // 0x2fd6dc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD6E0u; }
        if (ctx->pc != 0x2FD6E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD6E0u; }
        if (ctx->pc != 0x2FD6E0u) { return; }
    }
    ctx->pc = 0x2FD6E0u;
label_2fd6e0:
    // 0x2fd6e0: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2fd6e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2fd6e4: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x2fd6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x2fd6e8: 0x342194f8  ori         $at, $at, 0x94F8
    ctx->pc = 0x2fd6e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)38136);
    // 0x2fd6ec: 0x24a5ec40  addiu       $a1, $a1, -0x13C0
    ctx->pc = 0x2fd6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962240));
    // 0x2fd6f0: 0x2012021  addu        $a0, $s0, $at
    ctx->pc = 0x2fd6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2fd6f4: 0xc049c48  jal         func_127120
    ctx->pc = 0x2FD6F4u;
    SET_GPR_U32(ctx, 31, 0x2FD6FCu);
    ctx->pc = 0x2FD6F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD6F4u;
            // 0x2fd6f8: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD6FCu; }
        if (ctx->pc != 0x2FD6FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD6FCu; }
        if (ctx->pc != 0x2FD6FCu) { return; }
    }
    ctx->pc = 0x2FD6FCu;
label_2fd6fc:
    // 0x2fd6fc: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x2fd6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x2fd700: 0xc0bf4b0  jal         func_2FD2C0
    ctx->pc = 0x2FD700u;
    SET_GPR_U32(ctx, 31, 0x2FD708u);
    ctx->pc = 0x2FD704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD700u;
            // 0x2fd704: 0x8c440c50  lw          $a0, 0xC50($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3152)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FD2C0u;
    if (runtime->hasFunction(0x2FD2C0u)) {
        auto targetFn = runtime->lookupFunction(0x2FD2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD708u; }
        if (ctx->pc != 0x2FD708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FD2C0_0x2fd2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD708u; }
        if (ctx->pc != 0x2FD708u) { return; }
    }
    ctx->pc = 0x2FD708u;
label_2fd708:
    // 0x2fd708: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x2fd708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x2fd70c: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2fd70cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2fd710: 0x8c430c50  lw          $v1, 0xC50($v0)
    ctx->pc = 0x2fd710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3152)));
    // 0x2fd714: 0x342194fe  ori         $at, $at, 0x94FE
    ctx->pc = 0x2fd714u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)38142);
    // 0x2fd718: 0x2012021  addu        $a0, $s0, $at
    ctx->pc = 0x2fd718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2fd71c: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2fd71cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2fd720: 0x344295b8  ori         $v0, $v0, 0x95B8
    ctx->pc = 0x2fd720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38328);
    // 0x2fd724: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2fd724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2fd728: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2fd728u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2fd72c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FD72Cu;
    {
        const bool branch_taken_0x2fd72c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fd72c) {
            ctx->pc = 0x2FD730u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD72Cu;
            // 0x2fd730: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FD744u;
            goto label_2fd744;
        }
    }
    ctx->pc = 0x2FD734u;
    // 0x2fd734: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fd734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fd738: 0xb8020001  swr         $v0, 0x1($zero)
    ctx->pc = 0x2fd738u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 1); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2fd73c: 0xa8020004  swl         $v0, 0x4($zero)
    ctx->pc = 0x2fd73cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2fd740: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fd740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2fd744:
    // 0x2fd744: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fd744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fd748: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fd748u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fd74c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FD74Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FD750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD74Cu;
            // 0x2fd750: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FD754u;
    // 0x2fd754: 0x0  nop
    ctx->pc = 0x2fd754u;
    // NOP
    // 0x2fd758: 0x0  nop
    ctx->pc = 0x2fd758u;
    // NOP
    // 0x2fd75c: 0x0  nop
    ctx->pc = 0x2fd75cu;
    // NOP
    ctx->pc = 0x2fd760u;
}
