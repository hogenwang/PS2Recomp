#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002EA4D0
// Address: 0x2ea4d0 - 0x2ea640
void sub_002EA4D0_0x2ea4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EA4D0_0x2ea4d0");
#endif

    switch (ctx->pc) {
        case 0x2ea4fcu: goto label_2ea4fc;
        case 0x2ea514u: goto label_2ea514;
        case 0x2ea52cu: goto label_2ea52c;
        case 0x2ea544u: goto label_2ea544;
        case 0x2ea55cu: goto label_2ea55c;
        case 0x2ea578u: goto label_2ea578;
        case 0x2ea58cu: goto label_2ea58c;
        case 0x2ea59cu: goto label_2ea59c;
        case 0x2ea5b8u: goto label_2ea5b8;
        case 0x2ea5c0u: goto label_2ea5c0;
        case 0x2ea5d8u: goto label_2ea5d8;
        case 0x2ea608u: goto label_2ea608;
        case 0x2ea614u: goto label_2ea614;
        case 0x2ea628u: goto label_2ea628;
        default: break;
    }

    ctx->pc = 0x2ea4d0u;

    // 0x2ea4d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ea4d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ea4d4: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x2ea4d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x2ea4d8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2ea4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2ea4dc: 0x24c60110  addiu       $a2, $a2, 0x110
    ctx->pc = 0x2ea4dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 272));
    // 0x2ea4e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ea4e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ea4e4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2ea4e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea4e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ea4e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea4ec: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ea4ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ea4f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ea4f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea4f4: 0xc0ba8b8  jal         func_2EA2E0
    ctx->pc = 0x2EA4F4u;
    SET_GPR_U32(ctx, 31, 0x2EA4FCu);
    ctx->pc = 0x2EA4F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA4F4u;
            // 0x2ea4f8: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EA2E0u;
    if (runtime->hasFunction(0x2EA2E0u)) {
        auto targetFn = runtime->lookupFunction(0x2EA2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA4FCu; }
        if (ctx->pc != 0x2EA4FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EA2E0_0x2ea2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA4FCu; }
        if (ctx->pc != 0x2EA4FCu) { return; }
    }
    ctx->pc = 0x2EA4FCu;
label_2ea4fc:
    // 0x2ea4fc: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x2ea4fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x2ea500: 0xae022638  sw          $v0, 0x2638($s0)
    ctx->pc = 0x2ea500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 9784), GPR_U32(ctx, 2));
    // 0x2ea504: 0x24c60128  addiu       $a2, $a2, 0x128
    ctx->pc = 0x2ea504u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 296));
    // 0x2ea508: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ea508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea50c: 0xc0ba8b8  jal         func_2EA2E0
    ctx->pc = 0x2EA50Cu;
    SET_GPR_U32(ctx, 31, 0x2EA514u);
    ctx->pc = 0x2EA510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA50Cu;
            // 0x2ea510: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EA2E0u;
    if (runtime->hasFunction(0x2EA2E0u)) {
        auto targetFn = runtime->lookupFunction(0x2EA2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA514u; }
        if (ctx->pc != 0x2EA514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EA2E0_0x2ea2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA514u; }
        if (ctx->pc != 0x2EA514u) { return; }
    }
    ctx->pc = 0x2EA514u;
label_2ea514:
    // 0x2ea514: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x2ea514u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x2ea518: 0xae02263c  sw          $v0, 0x263C($s0)
    ctx->pc = 0x2ea518u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 9788), GPR_U32(ctx, 2));
    // 0x2ea51c: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x2ea51cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x2ea520: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ea520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea524: 0xc0ba8b8  jal         func_2EA2E0
    ctx->pc = 0x2EA524u;
    SET_GPR_U32(ctx, 31, 0x2EA52Cu);
    ctx->pc = 0x2EA528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA524u;
            // 0x2ea528: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EA2E0u;
    if (runtime->hasFunction(0x2EA2E0u)) {
        auto targetFn = runtime->lookupFunction(0x2EA2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA52Cu; }
        if (ctx->pc != 0x2EA52Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EA2E0_0x2ea2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA52Cu; }
        if (ctx->pc != 0x2EA52Cu) { return; }
    }
    ctx->pc = 0x2EA52Cu;
label_2ea52c:
    // 0x2ea52c: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x2ea52cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x2ea530: 0xae022640  sw          $v0, 0x2640($s0)
    ctx->pc = 0x2ea530u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 9792), GPR_U32(ctx, 2));
    // 0x2ea534: 0x24c60160  addiu       $a2, $a2, 0x160
    ctx->pc = 0x2ea534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 352));
    // 0x2ea538: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ea538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea53c: 0xc0ba8b8  jal         func_2EA2E0
    ctx->pc = 0x2EA53Cu;
    SET_GPR_U32(ctx, 31, 0x2EA544u);
    ctx->pc = 0x2EA540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA53Cu;
            // 0x2ea540: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EA2E0u;
    if (runtime->hasFunction(0x2EA2E0u)) {
        auto targetFn = runtime->lookupFunction(0x2EA2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA544u; }
        if (ctx->pc != 0x2EA544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EA2E0_0x2ea2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA544u; }
        if (ctx->pc != 0x2EA544u) { return; }
    }
    ctx->pc = 0x2EA544u;
label_2ea544:
    // 0x2ea544: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x2ea544u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x2ea548: 0xae022644  sw          $v0, 0x2644($s0)
    ctx->pc = 0x2ea548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 9796), GPR_U32(ctx, 2));
    // 0x2ea54c: 0x24c60178  addiu       $a2, $a2, 0x178
    ctx->pc = 0x2ea54cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 376));
    // 0x2ea550: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ea550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ea554: 0xc0ba8b8  jal         func_2EA2E0
    ctx->pc = 0x2EA554u;
    SET_GPR_U32(ctx, 31, 0x2EA55Cu);
    ctx->pc = 0x2EA558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA554u;
            // 0x2ea558: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EA2E0u;
    if (runtime->hasFunction(0x2EA2E0u)) {
        auto targetFn = runtime->lookupFunction(0x2EA2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA55Cu; }
        if (ctx->pc != 0x2EA55Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EA2E0_0x2ea2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA55Cu; }
        if (ctx->pc != 0x2EA55Cu) { return; }
    }
    ctx->pc = 0x2EA55Cu;
label_2ea55c:
    // 0x2ea55c: 0xae110138  sw          $s1, 0x138($s0)
    ctx->pc = 0x2ea55cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 17));
    // 0x2ea560: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x2ea560u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
    // 0x2ea564: 0xae022e8c  sw          $v0, 0x2E8C($s0)
    ctx->pc = 0x2ea564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11916), GPR_U32(ctx, 2));
    // 0x2ea568: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2ea568u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea56c: 0x24a5a800  addiu       $a1, $a1, -0x5800
    ctx->pc = 0x2ea56cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944768));
    // 0x2ea570: 0xc098a5e  jal         func_262978
    ctx->pc = 0x2EA570u;
    SET_GPR_U32(ctx, 31, 0x2EA578u);
    ctx->pc = 0x2EA574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA570u;
            // 0x2ea574: 0x8e2400a4  lw          $a0, 0xA4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262978u;
    if (runtime->hasFunction(0x262978u)) {
        auto targetFn = runtime->lookupFunction(0x262978u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA578u; }
        if (ctx->pc != 0x2EA578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00262978_0x262978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA578u; }
        if (ctx->pc != 0x2EA578u) { return; }
    }
    ctx->pc = 0x2EA578u;
label_2ea578:
    // 0x2ea578: 0x8e2400a8  lw          $a0, 0xA8($s1)
    ctx->pc = 0x2ea578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
    // 0x2ea57c: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x2ea57cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
    // 0x2ea580: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2ea580u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea584: 0xc098a5e  jal         func_262978
    ctx->pc = 0x2EA584u;
    SET_GPR_U32(ctx, 31, 0x2EA58Cu);
    ctx->pc = 0x2EA588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA584u;
            // 0x2ea588: 0x24a5aa30  addiu       $a1, $a1, -0x55D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262978u;
    if (runtime->hasFunction(0x262978u)) {
        auto targetFn = runtime->lookupFunction(0x262978u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA58Cu; }
        if (ctx->pc != 0x2EA58Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00262978_0x262978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA58Cu; }
        if (ctx->pc != 0x2EA58Cu) { return; }
    }
    ctx->pc = 0x2EA58Cu;
label_2ea58c:
    // 0x2ea58c: 0x8e2500b0  lw          $a1, 0xB0($s1)
    ctx->pc = 0x2ea58cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x2ea590: 0x26042648  addiu       $a0, $s0, 0x2648
    ctx->pc = 0x2ea590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 9800));
    // 0x2ea594: 0xc098af4  jal         func_262BD0
    ctx->pc = 0x2EA594u;
    SET_GPR_U32(ctx, 31, 0x2EA59Cu);
    ctx->pc = 0x2EA598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA594u;
            // 0x2ea598: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262BD0u;
    if (runtime->hasFunction(0x262BD0u)) {
        auto targetFn = runtime->lookupFunction(0x262BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA59Cu; }
        if (ctx->pc != 0x2EA59Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00262BD0_0x262bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA59Cu; }
        if (ctx->pc != 0x2EA59Cu) { return; }
    }
    ctx->pc = 0x2EA59Cu;
label_2ea59c:
    // 0x2ea59c: 0x3c06002f  lui         $a2, 0x2F
    ctx->pc = 0x2ea59cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)47 << 16));
    // 0x2ea5a0: 0x3c07002f  lui         $a3, 0x2F
    ctx->pc = 0x2ea5a0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)47 << 16));
    // 0x2ea5a4: 0x26040118  addiu       $a0, $s0, 0x118
    ctx->pc = 0x2ea5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 280));
    // 0x2ea5a8: 0x24c6acb0  addiu       $a2, $a2, -0x5350
    ctx->pc = 0x2ea5a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945968));
    // 0x2ea5ac: 0x24e7acd0  addiu       $a3, $a3, -0x5330
    ctx->pc = 0x2ea5acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294946000));
    // 0x2ea5b0: 0xc08dc00  jal         func_237000
    ctx->pc = 0x2EA5B0u;
    SET_GPR_U32(ctx, 31, 0x2EA5B8u);
    ctx->pc = 0x2EA5B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA5B0u;
            // 0x2ea5b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x237000u;
    if (runtime->hasFunction(0x237000u)) {
        auto targetFn = runtime->lookupFunction(0x237000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA5B8u; }
        if (ctx->pc != 0x2EA5B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00237000_0x237000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA5B8u; }
        if (ctx->pc != 0x2EA5B8u) { return; }
    }
    ctx->pc = 0x2EA5B8u;
label_2ea5b8:
    // 0x2ea5b8: 0xc0bab06  jal         func_2EAC18
    ctx->pc = 0x2EA5B8u;
    SET_GPR_U32(ctx, 31, 0x2EA5C0u);
    ctx->pc = 0x2EA5BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA5B8u;
            // 0x2ea5bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EAC18u;
    if (runtime->hasFunction(0x2EAC18u)) {
        auto targetFn = runtime->lookupFunction(0x2EAC18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA5C0u; }
        if (ctx->pc != 0x2EA5C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EAC18_0x2eac18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA5C0u; }
        if (ctx->pc != 0x2EA5C0u) { return; }
    }
    ctx->pc = 0x2EA5C0u;
label_2ea5c0:
    // 0x2ea5c0: 0xae100000  sw          $s0, 0x0($s0)
    ctx->pc = 0x2ea5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
    // 0x2ea5c4: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2ea5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2ea5c8: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x2ea5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x2ea5cc: 0x24a50190  addiu       $a1, $a1, 0x190
    ctx->pc = 0x2ea5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 400));
    // 0x2ea5d0: 0xc04a966  jal         func_12A598
    ctx->pc = 0x2EA5D0u;
    SET_GPR_U32(ctx, 31, 0x2EA5D8u);
    ctx->pc = 0x2EA5D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA5D0u;
            // 0x2ea5d4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (runtime->hasFunction(0x12A598u)) {
        auto targetFn = runtime->lookupFunction(0x12A598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA5D8u; }
        if (ctx->pc != 0x2EA5D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A598_0x12a598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA5D8u; }
        if (ctx->pc != 0x2EA5D8u) { return; }
    }
    ctx->pc = 0x2EA5D8u;
label_2ea5d8:
    // 0x2ea5d8: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x2ea5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x2ea5dc: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x2ea5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
    // 0x2ea5e0: 0x2463aef0  addiu       $v1, $v1, -0x5110
    ctx->pc = 0x2ea5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946544));
    // 0x2ea5e4: 0x24a5a6c8  addiu       $a1, $a1, -0x5938
    ctx->pc = 0x2ea5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944456));
    // 0x2ea5e8: 0x240205dc  addiu       $v0, $zero, 0x5DC
    ctx->pc = 0x2ea5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
    // 0x2ea5ec: 0x24068822  addiu       $a2, $zero, -0x77DE
    ctx->pc = 0x2ea5ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294936610));
    // 0x2ea5f0: 0xfe020040  sd          $v0, 0x40($s0)
    ctx->pc = 0x2ea5f0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 2));
    // 0x2ea5f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ea5f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea5f8: 0xa6060030  sh          $a2, 0x30($s0)
    ctx->pc = 0x2ea5f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 6));
    // 0x2ea5fc: 0xae0300cc  sw          $v1, 0xCC($s0)
    ctx->pc = 0x2ea5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 3));
    // 0x2ea600: 0xc08d10e  jal         func_234438
    ctx->pc = 0x2EA600u;
    SET_GPR_U32(ctx, 31, 0x2EA608u);
    ctx->pc = 0x2EA604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA600u;
            // 0x2ea604: 0xae0500c8  sw          $a1, 0xC8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234438u;
    if (runtime->hasFunction(0x234438u)) {
        auto targetFn = runtime->lookupFunction(0x234438u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA608u; }
        if (ctx->pc != 0x2EA608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234438_0x234438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA608u; }
        if (ctx->pc != 0x2EA608u) { return; }
    }
    ctx->pc = 0x2EA608u;
label_2ea608:
    // 0x2ea608: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ea608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea60c: 0xc08d9de  jal         func_236778
    ctx->pc = 0x2EA60Cu;
    SET_GPR_U32(ctx, 31, 0x2EA614u);
    ctx->pc = 0x2EA610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA60Cu;
            // 0x2ea610: 0x26052e80  addiu       $a1, $s0, 0x2E80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 11904));
        ctx->in_delay_slot = false;
    ctx->pc = 0x236778u;
    if (runtime->hasFunction(0x236778u)) {
        auto targetFn = runtime->lookupFunction(0x236778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA614u; }
        if (ctx->pc != 0x2EA614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00236778_0x236778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA614u; }
        if (ctx->pc != 0x2EA614u) { return; }
    }
    ctx->pc = 0x2EA614u;
label_2ea614:
    // 0x2ea614: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ea614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea618: 0x26040028  addiu       $a0, $s0, 0x28
    ctx->pc = 0x2ea618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x2ea61c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2ea61cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ea620: 0xc08ce36  jal         func_2338D8
    ctx->pc = 0x2EA620u;
    SET_GPR_U32(ctx, 31, 0x2EA628u);
    ctx->pc = 0x2EA624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA620u;
            // 0x2ea624: 0x2407000e  addiu       $a3, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2338D8u;
    if (runtime->hasFunction(0x2338D8u)) {
        auto targetFn = runtime->lookupFunction(0x2338D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA628u; }
        if (ctx->pc != 0x2EA628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002338D8_0x2338d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA628u; }
        if (ctx->pc != 0x2EA628u) { return; }
    }
    ctx->pc = 0x2EA628u;
label_2ea628:
    // 0x2ea628: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ea628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ea62c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ea62cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea630: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2ea630u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ea634: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ea634u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ea638: 0x3e00008  jr          $ra
    ctx->pc = 0x2EA638u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EA63Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA638u;
            // 0x2ea63c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2EA640u;
    ctx->pc = 0x2ea640u;
}
