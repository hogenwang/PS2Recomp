#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E94C8
// Address: 0x1e94c8 - 0x1e9648
void sub_001E94C8_0x1e94c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E94C8_0x1e94c8");
#endif

    switch (ctx->pc) {
        case 0x1e94c8u: goto label_1e94c8;
        case 0x1e94ccu: goto label_1e94cc;
        case 0x1e94d0u: goto label_1e94d0;
        case 0x1e94d4u: goto label_1e94d4;
        case 0x1e94d8u: goto label_1e94d8;
        case 0x1e94dcu: goto label_1e94dc;
        case 0x1e94e0u: goto label_1e94e0;
        case 0x1e94e4u: goto label_1e94e4;
        case 0x1e94e8u: goto label_1e94e8;
        case 0x1e94ecu: goto label_1e94ec;
        case 0x1e94f0u: goto label_1e94f0;
        case 0x1e94f4u: goto label_1e94f4;
        case 0x1e94f8u: goto label_1e94f8;
        case 0x1e94fcu: goto label_1e94fc;
        case 0x1e9500u: goto label_1e9500;
        case 0x1e9504u: goto label_1e9504;
        case 0x1e9508u: goto label_1e9508;
        case 0x1e950cu: goto label_1e950c;
        case 0x1e9510u: goto label_1e9510;
        case 0x1e9514u: goto label_1e9514;
        case 0x1e9518u: goto label_1e9518;
        case 0x1e951cu: goto label_1e951c;
        case 0x1e9520u: goto label_1e9520;
        case 0x1e9524u: goto label_1e9524;
        case 0x1e9528u: goto label_1e9528;
        case 0x1e952cu: goto label_1e952c;
        case 0x1e9530u: goto label_1e9530;
        case 0x1e9534u: goto label_1e9534;
        case 0x1e9538u: goto label_1e9538;
        case 0x1e953cu: goto label_1e953c;
        case 0x1e9540u: goto label_1e9540;
        case 0x1e9544u: goto label_1e9544;
        case 0x1e9548u: goto label_1e9548;
        case 0x1e954cu: goto label_1e954c;
        case 0x1e9550u: goto label_1e9550;
        case 0x1e9554u: goto label_1e9554;
        case 0x1e9558u: goto label_1e9558;
        case 0x1e955cu: goto label_1e955c;
        case 0x1e9560u: goto label_1e9560;
        case 0x1e9564u: goto label_1e9564;
        case 0x1e9568u: goto label_1e9568;
        case 0x1e956cu: goto label_1e956c;
        case 0x1e9570u: goto label_1e9570;
        case 0x1e9574u: goto label_1e9574;
        case 0x1e9578u: goto label_1e9578;
        case 0x1e957cu: goto label_1e957c;
        case 0x1e9580u: goto label_1e9580;
        case 0x1e9584u: goto label_1e9584;
        case 0x1e9588u: goto label_1e9588;
        case 0x1e958cu: goto label_1e958c;
        case 0x1e9590u: goto label_1e9590;
        case 0x1e9594u: goto label_1e9594;
        case 0x1e9598u: goto label_1e9598;
        case 0x1e959cu: goto label_1e959c;
        case 0x1e95a0u: goto label_1e95a0;
        case 0x1e95a4u: goto label_1e95a4;
        case 0x1e95a8u: goto label_1e95a8;
        case 0x1e95acu: goto label_1e95ac;
        case 0x1e95b0u: goto label_1e95b0;
        case 0x1e95b4u: goto label_1e95b4;
        case 0x1e95b8u: goto label_1e95b8;
        case 0x1e95bcu: goto label_1e95bc;
        case 0x1e95c0u: goto label_1e95c0;
        case 0x1e95c4u: goto label_1e95c4;
        case 0x1e95c8u: goto label_1e95c8;
        case 0x1e95ccu: goto label_1e95cc;
        case 0x1e95d0u: goto label_1e95d0;
        case 0x1e95d4u: goto label_1e95d4;
        case 0x1e95d8u: goto label_1e95d8;
        case 0x1e95dcu: goto label_1e95dc;
        case 0x1e95e0u: goto label_1e95e0;
        case 0x1e95e4u: goto label_1e95e4;
        case 0x1e95e8u: goto label_1e95e8;
        case 0x1e95ecu: goto label_1e95ec;
        case 0x1e95f0u: goto label_1e95f0;
        case 0x1e95f4u: goto label_1e95f4;
        case 0x1e95f8u: goto label_1e95f8;
        case 0x1e95fcu: goto label_1e95fc;
        case 0x1e9600u: goto label_1e9600;
        case 0x1e9604u: goto label_1e9604;
        case 0x1e9608u: goto label_1e9608;
        case 0x1e960cu: goto label_1e960c;
        case 0x1e9610u: goto label_1e9610;
        case 0x1e9614u: goto label_1e9614;
        case 0x1e9618u: goto label_1e9618;
        case 0x1e961cu: goto label_1e961c;
        case 0x1e9620u: goto label_1e9620;
        case 0x1e9624u: goto label_1e9624;
        case 0x1e9628u: goto label_1e9628;
        case 0x1e962cu: goto label_1e962c;
        case 0x1e9630u: goto label_1e9630;
        case 0x1e9634u: goto label_1e9634;
        case 0x1e9638u: goto label_1e9638;
        case 0x1e963cu: goto label_1e963c;
        case 0x1e9640u: goto label_1e9640;
        case 0x1e9644u: goto label_1e9644;
        default: break;
    }

    ctx->pc = 0x1e94c8u;

label_1e94c8:
    // 0x1e94c8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e94c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1e94cc:
    // 0x1e94cc: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1e94ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_1e94d0:
    // 0x1e94d0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e94d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e94d4:
    // 0x1e94d4: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x1e94d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
label_1e94d8:
    // 0x1e94d8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e94d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e94dc:
    // 0x1e94dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e94dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e94e0:
    // 0x1e94e0: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x1e94e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_1e94e4:
    // 0x1e94e4: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x1e94e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
label_1e94e8:
    // 0x1e94e8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1e94e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1e94ec:
    // 0x1e94ec: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1e94ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1e94f0:
    // 0x1e94f0: 0xc06e4dc  jal         func_1B9370
label_1e94f4:
    if (ctx->pc == 0x1E94F4u) {
        ctx->pc = 0x1E94F4u;
            // 0x1e94f4: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E94F8u;
        goto label_1e94f8;
    }
    ctx->pc = 0x1E94F0u;
    SET_GPR_U32(ctx, 31, 0x1E94F8u);
    ctx->pc = 0x1E94F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E94F0u;
            // 0x1e94f4: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9370u;
    if (runtime->hasFunction(0x1B9370u)) {
        auto targetFn = runtime->lookupFunction(0x1B9370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E94F8u; }
        if (ctx->pc != 0x1E94F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9370_0x1b9370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E94F8u; }
        if (ctx->pc != 0x1E94F8u) { return; }
    }
    ctx->pc = 0x1E94F8u;
label_1e94f8:
    // 0x1e94f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e94f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e94fc:
    // 0x1e94fc: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1e94fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1e9500:
    // 0x1e9500: 0x27a60034  addiu       $a2, $sp, 0x34
    ctx->pc = 0x1e9500u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
label_1e9504:
    // 0x1e9504: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1e9504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
label_1e9508:
    // 0x1e9508: 0xc06e5bc  jal         func_1B96F0
label_1e950c:
    if (ctx->pc == 0x1E950Cu) {
        ctx->pc = 0x1E950Cu;
            // 0x1e950c: 0xac621520  sw          $v0, 0x1520($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 5408), GPR_U32(ctx, 2));
        ctx->pc = 0x1E9510u;
        goto label_1e9510;
    }
    ctx->pc = 0x1E9508u;
    SET_GPR_U32(ctx, 31, 0x1E9510u);
    ctx->pc = 0x1E950Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9508u;
            // 0x1e950c: 0xac621520  sw          $v0, 0x1520($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 5408), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B96F0u;
    if (runtime->hasFunction(0x1B96F0u)) {
        auto targetFn = runtime->lookupFunction(0x1B96F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9510u; }
        if (ctx->pc != 0x1E9510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B96F0_0x1b96f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9510u; }
        if (ctx->pc != 0x1E9510u) { return; }
    }
    ctx->pc = 0x1E9510u;
label_1e9510:
    // 0x1e9510: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x1e9510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_1e9514:
    // 0x1e9514: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1e9514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1e9518:
    // 0x1e9518: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x1e9518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_1e951c:
    // 0x1e951c: 0xc080d86  jal         func_203618
label_1e9520:
    if (ctx->pc == 0x1E9520u) {
        ctx->pc = 0x1E9520u;
            // 0x1e9520: 0xffa20000  sd          $v0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
        ctx->pc = 0x1E9524u;
        goto label_1e9524;
    }
    ctx->pc = 0x1E951Cu;
    SET_GPR_U32(ctx, 31, 0x1E9524u);
    ctx->pc = 0x1E9520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E951Cu;
            // 0x1e9520: 0xffa20000  sd          $v0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x203618u;
    if (runtime->hasFunction(0x203618u)) {
        auto targetFn = runtime->lookupFunction(0x203618u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9524u; }
        if (ctx->pc != 0x1E9524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00203618_0x203618(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9524u; }
        if (ctx->pc != 0x1E9524u) { return; }
    }
    ctx->pc = 0x1E9524u;
label_1e9524:
    // 0x1e9524: 0xc080dda  jal         func_203768
label_1e9528:
    if (ctx->pc == 0x1E9528u) {
        ctx->pc = 0x1E9528u;
            // 0x1e9528: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->pc = 0x1E952Cu;
        goto label_1e952c;
    }
    ctx->pc = 0x1E9524u;
    SET_GPR_U32(ctx, 31, 0x1E952Cu);
    ctx->pc = 0x1E9528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9524u;
            // 0x1e9528: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x203768u;
    if (runtime->hasFunction(0x203768u)) {
        auto targetFn = runtime->lookupFunction(0x203768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E952Cu; }
        if (ctx->pc != 0x1E952Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00203768_0x203768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E952Cu; }
        if (ctx->pc != 0x1E952Cu) { return; }
    }
    ctx->pc = 0x1E952Cu;
label_1e952c:
    // 0x1e952c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e952cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1e9530:
    // 0x1e9530: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1e9530u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1e9534:
    // 0x1e9534: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e9534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e9538:
    // 0x1e9538: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x1e9538u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1e953c:
    // 0x1e953c: 0xc07f716  jal         func_1FDC58
label_1e9540:
    if (ctx->pc == 0x1E9540u) {
        ctx->pc = 0x1E9540u;
            // 0x1e9540: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->pc = 0x1E9544u;
        goto label_1e9544;
    }
    ctx->pc = 0x1E953Cu;
    SET_GPR_U32(ctx, 31, 0x1E9544u);
    ctx->pc = 0x1E9540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E953Cu;
            // 0x1e9540: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FDC58u;
    if (runtime->hasFunction(0x1FDC58u)) {
        auto targetFn = runtime->lookupFunction(0x1FDC58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9544u; }
        if (ctx->pc != 0x1E9544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FDC58_0x1fdc58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9544u; }
        if (ctx->pc != 0x1E9544u) { return; }
    }
    ctx->pc = 0x1E9544u;
label_1e9544:
    // 0x1e9544: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1e9544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1e9548:
    // 0x1e9548: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1e9548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1e954c:
    // 0x1e954c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1e954cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1e9550:
    // 0x1e9550: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1e9550u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1e9554:
    // 0x1e9554: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1e9554u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_1e9558:
    // 0x1e9558: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x1e9558u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1e955c:
    // 0x1e955c: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x1e955cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1e9560:
    // 0x1e9560: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x1e9560u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_1e9564:
    // 0x1e9564: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1e9564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1e9568:
    // 0x1e9568: 0x3e00008  jr          $ra
label_1e956c:
    if (ctx->pc == 0x1E956Cu) {
        ctx->pc = 0x1E956Cu;
            // 0x1e956c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x1E9570u;
        goto label_1e9570;
    }
    ctx->pc = 0x1E9568u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E956Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9568u;
            // 0x1e956c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E9570u;
label_1e9570:
    // 0x1e9570: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e9570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e9574:
    // 0x1e9574: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e9574u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e9578:
    // 0x1e9578: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e9578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1e957c:
    // 0x1e957c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e957cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e9580:
    // 0x1e9580: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e9580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1e9584:
    // 0x1e9584: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1e9584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1e9588:
    // 0x1e9588: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1e9588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1e958c:
    // 0x1e958c: 0x8e23205c  lw          $v1, 0x205C($s1)
    ctx->pc = 0x1e958cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8284)));
label_1e9590:
    // 0x1e9590: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x1e9590u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1e9594:
    // 0x1e9594: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
label_1e9598:
    if (ctx->pc == 0x1E9598u) {
        ctx->pc = 0x1E9598u;
            // 0x1e9598: 0x8c720004  lw          $s2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->pc = 0x1E959Cu;
        goto label_1e959c;
    }
    ctx->pc = 0x1E9594u;
    {
        const bool branch_taken_0x1e9594 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9594u;
            // 0x1e9598: 0x8c720004  lw          $s2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9594) {
            ctx->pc = 0x1E9630u;
            goto label_1e9630;
        }
    }
    ctx->pc = 0x1E959Cu;
label_1e959c:
    // 0x1e959c: 0x3c0201c0  lui         $v0, 0x1C0
    ctx->pc = 0x1e959cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)448 << 16));
label_1e95a0:
    // 0x1e95a0: 0x24473c90  addiu       $a3, $v0, 0x3C90
    ctx->pc = 0x1e95a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 15504));
label_1e95a4:
    // 0x1e95a4: 0x6864000f  ldl         $a0, 0xF($v1)
    ctx->pc = 0x1e95a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_1e95a8:
    // 0x1e95a8: 0x6c640008  ldr         $a0, 0x8($v1)
    ctx->pc = 0x1e95a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_1e95ac:
    // 0x1e95ac: 0x68650017  ldl         $a1, 0x17($v1)
    ctx->pc = 0x1e95acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_1e95b0:
    // 0x1e95b0: 0x6c650010  ldr         $a1, 0x10($v1)
    ctx->pc = 0x1e95b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_1e95b4:
    // 0x1e95b4: 0x6866001f  ldl         $a2, 0x1F($v1)
    ctx->pc = 0x1e95b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1e95b8:
    // 0x1e95b8: 0x6c660018  ldr         $a2, 0x18($v1)
    ctx->pc = 0x1e95b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1e95bc:
    // 0x1e95bc: 0xb0e40007  sdl         $a0, 0x7($a3)
    ctx->pc = 0x1e95bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1e95c0:
    // 0x1e95c0: 0xb4e40000  sdr         $a0, 0x0($a3)
    ctx->pc = 0x1e95c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1e95c4:
    // 0x1e95c4: 0xb0e5000f  sdl         $a1, 0xF($a3)
    ctx->pc = 0x1e95c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1e95c8:
    // 0x1e95c8: 0xb4e50008  sdr         $a1, 0x8($a3)
    ctx->pc = 0x1e95c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1e95cc:
    // 0x1e95cc: 0xb0e60017  sdl         $a2, 0x17($a3)
    ctx->pc = 0x1e95ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1e95d0:
    // 0x1e95d0: 0xb4e60010  sdr         $a2, 0x10($a3)
    ctx->pc = 0x1e95d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1e95d4:
    // 0x1e95d4: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x1e95d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1e95d8:
    // 0x1e95d8: 0xc07e368  jal         func_1F8DA0
label_1e95dc:
    if (ctx->pc == 0x1E95DCu) {
        ctx->pc = 0x1E95DCu;
            // 0x1e95dc: 0xace40018  sw          $a0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 4));
        ctx->pc = 0x1E95E0u;
        goto label_1e95e0;
    }
    ctx->pc = 0x1E95D8u;
    SET_GPR_U32(ctx, 31, 0x1E95E0u);
    ctx->pc = 0x1E95DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E95D8u;
            // 0x1e95dc: 0xace40018  sw          $a0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F8DA0u;
    if (runtime->hasFunction(0x1F8DA0u)) {
        auto targetFn = runtime->lookupFunction(0x1F8DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E95E0u; }
        if (ctx->pc != 0x1E95E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F8DA0_0x1f8da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E95E0u; }
        if (ctx->pc != 0x1E95E0u) { return; }
    }
    ctx->pc = 0x1E95E0u;
label_1e95e0:
    // 0x1e95e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e95e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e95e4:
    // 0x1e95e4: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
label_1e95e8:
    if (ctx->pc == 0x1E95E8u) {
        ctx->pc = 0x1E95E8u;
            // 0x1e95e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E95ECu;
        goto label_1e95ec;
    }
    ctx->pc = 0x1E95E4u;
    {
        const bool branch_taken_0x1e95e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E95E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E95E4u;
            // 0x1e95e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e95e4) {
            ctx->pc = 0x1E9600u;
            goto label_1e9600;
        }
    }
    ctx->pc = 0x1E95ECu;
label_1e95ec:
    // 0x1e95ec: 0xc07a592  jal         func_1E9648
label_1e95f0:
    if (ctx->pc == 0x1E95F0u) {
        ctx->pc = 0x1E95F0u;
            // 0x1e95f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E95F4u;
        goto label_1e95f4;
    }
    ctx->pc = 0x1E95ECu;
    SET_GPR_U32(ctx, 31, 0x1E95F4u);
    ctx->pc = 0x1E95F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E95ECu;
            // 0x1e95f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E9648u;
    if (runtime->hasFunction(0x1E9648u)) {
        auto targetFn = runtime->lookupFunction(0x1E9648u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E95F4u; }
        if (ctx->pc != 0x1E95F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E9648_0x1e9648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E95F4u; }
        if (ctx->pc != 0x1E95F4u) { return; }
    }
    ctx->pc = 0x1E95F4u;
label_1e95f4:
    // 0x1e95f4: 0x10000007  b           . + 4 + (0x7 << 2)
label_1e95f8:
    if (ctx->pc == 0x1E95F8u) {
        ctx->pc = 0x1E95F8u;
            // 0x1e95f8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E95FCu;
        goto label_1e95fc;
    }
    ctx->pc = 0x1E95F4u;
    {
        const bool branch_taken_0x1e95f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E95F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E95F4u;
            // 0x1e95f8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e95f4) {
            ctx->pc = 0x1E9614u;
            goto label_1e9614;
        }
    }
    ctx->pc = 0x1E95FCu;
label_1e95fc:
    // 0x1e95fc: 0x0  nop
    ctx->pc = 0x1e95fcu;
    // NOP
label_1e9600:
    // 0x1e9600: 0xc07a5a8  jal         func_1E96A0
label_1e9604:
    if (ctx->pc == 0x1E9604u) {
        ctx->pc = 0x1E9608u;
        goto label_1e9608;
    }
    ctx->pc = 0x1E9600u;
    SET_GPR_U32(ctx, 31, 0x1E9608u);
    ctx->pc = 0x1E96A0u;
    if (runtime->hasFunction(0x1E96A0u)) {
        auto targetFn = runtime->lookupFunction(0x1E96A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9608u; }
        if (ctx->pc != 0x1E9608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E96A0_0x1e96a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9608u; }
        if (ctx->pc != 0x1E9608u) { return; }
    }
    ctx->pc = 0x1E9608u;
label_1e9608:
    // 0x1e9608: 0xc07a59a  jal         func_1E9668
label_1e960c:
    if (ctx->pc == 0x1E960Cu) {
        ctx->pc = 0x1E960Cu;
            // 0x1e960c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E9610u;
        goto label_1e9610;
    }
    ctx->pc = 0x1E9608u;
    SET_GPR_U32(ctx, 31, 0x1E9610u);
    ctx->pc = 0x1E960Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9608u;
            // 0x1e960c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E9668u;
    if (runtime->hasFunction(0x1E9668u)) {
        auto targetFn = runtime->lookupFunction(0x1E9668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9610u; }
        if (ctx->pc != 0x1E9610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E9668_0x1e9668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9610u; }
        if (ctx->pc != 0x1E9610u) { return; }
    }
    ctx->pc = 0x1E9610u;
label_1e9610:
    // 0x1e9610: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e9610u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e9614:
    // 0x1e9614: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1e9614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1e9618:
    // 0x1e9618: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1e9618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1e961c:
    // 0x1e961c: 0x40f809  jalr        $v0
label_1e9620:
    if (ctx->pc == 0x1E9620u) {
        ctx->pc = 0x1E9620u;
            // 0x1e9620: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E9624u;
        goto label_1e9624;
    }
    ctx->pc = 0x1E961Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E9624u);
        ctx->pc = 0x1E9620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E961Cu;
            // 0x1e9620: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E9624u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E9624u; }
            if (ctx->pc != 0x1E9624u) { return; }
        }
        }
    }
    ctx->pc = 0x1E9624u;
label_1e9624:
    // 0x1e9624: 0xc080d6a  jal         func_2035A8
label_1e9628:
    if (ctx->pc == 0x1E9628u) {
        ctx->pc = 0x1E962Cu;
        goto label_1e962c;
    }
    ctx->pc = 0x1E9624u;
    SET_GPR_U32(ctx, 31, 0x1E962Cu);
    ctx->pc = 0x2035A8u;
    if (runtime->hasFunction(0x2035A8u)) {
        auto targetFn = runtime->lookupFunction(0x2035A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E962Cu; }
        if (ctx->pc != 0x1E962Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002035A8_0x2035a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E962Cu; }
        if (ctx->pc != 0x1E962Cu) { return; }
    }
    ctx->pc = 0x1E962Cu;
label_1e962c:
    // 0x1e962c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e962cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e9630:
    // 0x1e9630: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e9630u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e9634:
    // 0x1e9634: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e9634u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1e9638:
    // 0x1e9638: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e9638u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e963c:
    // 0x1e963c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1e963cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1e9640:
    // 0x1e9640: 0x3e00008  jr          $ra
label_1e9644:
    if (ctx->pc == 0x1E9644u) {
        ctx->pc = 0x1E9644u;
            // 0x1e9644: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1E9648u;
        goto label_fallthrough_0x1e9640;
    }
    ctx->pc = 0x1E9640u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9640u;
            // 0x1e9644: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1e9640:
    ctx->pc = 0x1E9648u;
    ctx->pc = 0x1e9648u;
}
