#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A9460
// Address: 0x1a9460 - 0x1a96f8
void sub_001A9460_0x1a9460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A9460_0x1a9460");
#endif

    switch (ctx->pc) {
        case 0x1a9460u: goto label_1a9460;
        case 0x1a9464u: goto label_1a9464;
        case 0x1a9468u: goto label_1a9468;
        case 0x1a946cu: goto label_1a946c;
        case 0x1a9470u: goto label_1a9470;
        case 0x1a9474u: goto label_1a9474;
        case 0x1a9478u: goto label_1a9478;
        case 0x1a947cu: goto label_1a947c;
        case 0x1a9480u: goto label_1a9480;
        case 0x1a9484u: goto label_1a9484;
        case 0x1a9488u: goto label_1a9488;
        case 0x1a948cu: goto label_1a948c;
        case 0x1a9490u: goto label_1a9490;
        case 0x1a9494u: goto label_1a9494;
        case 0x1a9498u: goto label_1a9498;
        case 0x1a949cu: goto label_1a949c;
        case 0x1a94a0u: goto label_1a94a0;
        case 0x1a94a4u: goto label_1a94a4;
        case 0x1a94a8u: goto label_1a94a8;
        case 0x1a94acu: goto label_1a94ac;
        case 0x1a94b0u: goto label_1a94b0;
        case 0x1a94b4u: goto label_1a94b4;
        case 0x1a94b8u: goto label_1a94b8;
        case 0x1a94bcu: goto label_1a94bc;
        case 0x1a94c0u: goto label_1a94c0;
        case 0x1a94c4u: goto label_1a94c4;
        case 0x1a94c8u: goto label_1a94c8;
        case 0x1a94ccu: goto label_1a94cc;
        case 0x1a94d0u: goto label_1a94d0;
        case 0x1a94d4u: goto label_1a94d4;
        case 0x1a94d8u: goto label_1a94d8;
        case 0x1a94dcu: goto label_1a94dc;
        case 0x1a94e0u: goto label_1a94e0;
        case 0x1a94e4u: goto label_1a94e4;
        case 0x1a94e8u: goto label_1a94e8;
        case 0x1a94ecu: goto label_1a94ec;
        case 0x1a94f0u: goto label_1a94f0;
        case 0x1a94f4u: goto label_1a94f4;
        case 0x1a94f8u: goto label_1a94f8;
        case 0x1a94fcu: goto label_1a94fc;
        case 0x1a9500u: goto label_1a9500;
        case 0x1a9504u: goto label_1a9504;
        case 0x1a9508u: goto label_1a9508;
        case 0x1a950cu: goto label_1a950c;
        case 0x1a9510u: goto label_1a9510;
        case 0x1a9514u: goto label_1a9514;
        case 0x1a9518u: goto label_1a9518;
        case 0x1a951cu: goto label_1a951c;
        case 0x1a9520u: goto label_1a9520;
        case 0x1a9524u: goto label_1a9524;
        case 0x1a9528u: goto label_1a9528;
        case 0x1a952cu: goto label_1a952c;
        case 0x1a9530u: goto label_1a9530;
        case 0x1a9534u: goto label_1a9534;
        case 0x1a9538u: goto label_1a9538;
        case 0x1a953cu: goto label_1a953c;
        case 0x1a9540u: goto label_1a9540;
        case 0x1a9544u: goto label_1a9544;
        case 0x1a9548u: goto label_1a9548;
        case 0x1a954cu: goto label_1a954c;
        case 0x1a9550u: goto label_1a9550;
        case 0x1a9554u: goto label_1a9554;
        case 0x1a9558u: goto label_1a9558;
        case 0x1a955cu: goto label_1a955c;
        case 0x1a9560u: goto label_1a9560;
        case 0x1a9564u: goto label_1a9564;
        case 0x1a9568u: goto label_1a9568;
        case 0x1a956cu: goto label_1a956c;
        case 0x1a9570u: goto label_1a9570;
        case 0x1a9574u: goto label_1a9574;
        case 0x1a9578u: goto label_1a9578;
        case 0x1a957cu: goto label_1a957c;
        case 0x1a9580u: goto label_1a9580;
        case 0x1a9584u: goto label_1a9584;
        case 0x1a9588u: goto label_1a9588;
        case 0x1a958cu: goto label_1a958c;
        case 0x1a9590u: goto label_1a9590;
        case 0x1a9594u: goto label_1a9594;
        case 0x1a9598u: goto label_1a9598;
        case 0x1a959cu: goto label_1a959c;
        case 0x1a95a0u: goto label_1a95a0;
        case 0x1a95a4u: goto label_1a95a4;
        case 0x1a95a8u: goto label_1a95a8;
        case 0x1a95acu: goto label_1a95ac;
        case 0x1a95b0u: goto label_1a95b0;
        case 0x1a95b4u: goto label_1a95b4;
        case 0x1a95b8u: goto label_1a95b8;
        case 0x1a95bcu: goto label_1a95bc;
        case 0x1a95c0u: goto label_1a95c0;
        case 0x1a95c4u: goto label_1a95c4;
        case 0x1a95c8u: goto label_1a95c8;
        case 0x1a95ccu: goto label_1a95cc;
        case 0x1a95d0u: goto label_1a95d0;
        case 0x1a95d4u: goto label_1a95d4;
        case 0x1a95d8u: goto label_1a95d8;
        case 0x1a95dcu: goto label_1a95dc;
        case 0x1a95e0u: goto label_1a95e0;
        case 0x1a95e4u: goto label_1a95e4;
        case 0x1a95e8u: goto label_1a95e8;
        case 0x1a95ecu: goto label_1a95ec;
        case 0x1a95f0u: goto label_1a95f0;
        case 0x1a95f4u: goto label_1a95f4;
        case 0x1a95f8u: goto label_1a95f8;
        case 0x1a95fcu: goto label_1a95fc;
        case 0x1a9600u: goto label_1a9600;
        case 0x1a9604u: goto label_1a9604;
        case 0x1a9608u: goto label_1a9608;
        case 0x1a960cu: goto label_1a960c;
        case 0x1a9610u: goto label_1a9610;
        case 0x1a9614u: goto label_1a9614;
        case 0x1a9618u: goto label_1a9618;
        case 0x1a961cu: goto label_1a961c;
        case 0x1a9620u: goto label_1a9620;
        case 0x1a9624u: goto label_1a9624;
        case 0x1a9628u: goto label_1a9628;
        case 0x1a962cu: goto label_1a962c;
        case 0x1a9630u: goto label_1a9630;
        case 0x1a9634u: goto label_1a9634;
        case 0x1a9638u: goto label_1a9638;
        case 0x1a963cu: goto label_1a963c;
        case 0x1a9640u: goto label_1a9640;
        case 0x1a9644u: goto label_1a9644;
        case 0x1a9648u: goto label_1a9648;
        case 0x1a964cu: goto label_1a964c;
        case 0x1a9650u: goto label_1a9650;
        case 0x1a9654u: goto label_1a9654;
        case 0x1a9658u: goto label_1a9658;
        case 0x1a965cu: goto label_1a965c;
        case 0x1a9660u: goto label_1a9660;
        case 0x1a9664u: goto label_1a9664;
        case 0x1a9668u: goto label_1a9668;
        case 0x1a966cu: goto label_1a966c;
        case 0x1a9670u: goto label_1a9670;
        case 0x1a9674u: goto label_1a9674;
        case 0x1a9678u: goto label_1a9678;
        case 0x1a967cu: goto label_1a967c;
        case 0x1a9680u: goto label_1a9680;
        case 0x1a9684u: goto label_1a9684;
        case 0x1a9688u: goto label_1a9688;
        case 0x1a968cu: goto label_1a968c;
        case 0x1a9690u: goto label_1a9690;
        case 0x1a9694u: goto label_1a9694;
        case 0x1a9698u: goto label_1a9698;
        case 0x1a969cu: goto label_1a969c;
        case 0x1a96a0u: goto label_1a96a0;
        case 0x1a96a4u: goto label_1a96a4;
        case 0x1a96a8u: goto label_1a96a8;
        case 0x1a96acu: goto label_1a96ac;
        case 0x1a96b0u: goto label_1a96b0;
        case 0x1a96b4u: goto label_1a96b4;
        case 0x1a96b8u: goto label_1a96b8;
        case 0x1a96bcu: goto label_1a96bc;
        case 0x1a96c0u: goto label_1a96c0;
        case 0x1a96c4u: goto label_1a96c4;
        case 0x1a96c8u: goto label_1a96c8;
        case 0x1a96ccu: goto label_1a96cc;
        case 0x1a96d0u: goto label_1a96d0;
        case 0x1a96d4u: goto label_1a96d4;
        case 0x1a96d8u: goto label_1a96d8;
        case 0x1a96dcu: goto label_1a96dc;
        case 0x1a96e0u: goto label_1a96e0;
        case 0x1a96e4u: goto label_1a96e4;
        case 0x1a96e8u: goto label_1a96e8;
        case 0x1a96ecu: goto label_1a96ec;
        case 0x1a96f0u: goto label_1a96f0;
        case 0x1a96f4u: goto label_1a96f4;
        default: break;
    }

    ctx->pc = 0x1a9460u;

label_1a9460:
    // 0x1a9460: 0x3e00008  jr          $ra
label_1a9464:
    if (ctx->pc == 0x1A9464u) {
        ctx->pc = 0x1A9464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9460u;
        // 0x1a9464: 0xa0800001  sb          $zero, 0x1($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9468u;
        goto label_1a9468;
    }
    ctx->pc = 0x1A9460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9460u;
        // 0x1a9464: 0xa0800001  sb          $zero, 0x1($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A9468u;
label_1a9468:
    // 0x1a9468: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1a9468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1a946c:
    // 0x1a946c: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1a946cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_1a9470:
    // 0x1a9470: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1a9470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_1a9474:
    // 0x1a9474: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1a9474u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a9478:
    // 0x1a9478: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1a9478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_1a947c:
    // 0x1a947c: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1a947cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
label_1a9480:
    // 0x1a9480: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x1a9480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
label_1a9484:
    // 0x1a9484: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x1a9484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
label_1a9488:
    // 0x1a9488: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x1a9488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_1a948c:
    // 0x1a948c: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x1a948cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
label_1a9490:
    // 0x1a9490: 0xffbe0070  sd          $fp, 0x70($sp)
    ctx->pc = 0x1a9490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
label_1a9494:
    // 0x1a9494: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x1a9494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
label_1a9498:
    // 0x1a9498: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x1a9498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_1a949c:
    // 0x1a949c: 0xc6800020  lwc1        $f0, 0x20($s4)
    ctx->pc = 0x1a949cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a94a0:
    // 0x1a94a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a94a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1a94a4:
    // 0x1a94a4: 0xc6810024  lwc1        $f1, 0x24($s4)
    ctx->pc = 0x1a94a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a94a8:
    // 0x1a94a8: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x1a94a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_1a94ac:
    // 0x1a94ac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1a94acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1a94b0:
    // 0x1a94b0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a94b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1a94b4:
    // 0x1a94b4: 0x44120800  mfc1        $s2, $f1
    ctx->pc = 0x1a94b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
label_1a94b8:
    // 0x1a94b8: 0x18400083  blez        $v0, . + 4 + (0x83 << 2)
label_1a94bc:
    if (ctx->pc == 0x1A94BCu) {
        ctx->pc = 0x1A94BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A94B8u;
        // 0x1a94bc: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A94C0u;
        goto label_1a94c0;
    }
    ctx->pc = 0x1A94B8u;
    {
        const bool branch_taken_0x1a94b8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1A94BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A94B8u;
        // 0x1a94bc: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a94b8) {
            ctx->pc = 0x1A96C8u;
            goto label_1a96c8;
        }
    }
    ctx->pc = 0x1A94C0u;
label_1a94c0:
    // 0x1a94c0: 0x2697000c  addiu       $s7, $s4, 0xC
    ctx->pc = 0x1a94c0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
label_1a94c4:
    // 0x1a94c4: 0x26820014  addiu       $v0, $s4, 0x14
    ctx->pc = 0x1a94c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
label_1a94c8:
    // 0x1a94c8: 0xafb70028  sw          $s7, 0x28($sp)
    ctx->pc = 0x1a94c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 23));
label_1a94cc:
    // 0x1a94cc: 0x269e0004  addiu       $fp, $s4, 0x4
    ctx->pc = 0x1a94ccu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_1a94d0:
    // 0x1a94d0: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x1a94d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_1a94d4:
    // 0x1a94d4: 0x0  nop
    ctx->pc = 0x1a94d4u;
    // NOP
label_1a94d8:
    // 0x1a94d8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1a94d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1a94dc:
    // 0x1a94dc: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x1a94dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1a94e0:
    // 0x1a94e0: 0x38880  sll         $s1, $v1, 2
    ctx->pc = 0x1a94e0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a94e4:
    // 0x1a94e4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1a94e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a94e8:
    // 0x1a94e8: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1a94e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1a94ec:
    // 0x1a94ec: 0x40f809  jalr        $v0
label_1a94f0:
    if (ctx->pc == 0x1A94F0u) {
        ctx->pc = 0x1A94F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A94ECu;
        // 0x1a94f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A94F4u;
        goto label_1a94f4;
    }
    ctx->pc = 0x1A94ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A94F4u);
        ctx->pc = 0x1A94F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A94ECu;
        // 0x1a94f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A94ECu, 0x1A94F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A94F4u;
label_1a94f4:
    // 0x1a94f4: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
label_1a94f8:
    if (ctx->pc == 0x1A94F8u) {
        ctx->pc = 0x1A94F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A94F4u;
        // 0x1a94f8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A94FCu;
        goto label_1a94fc;
    }
    ctx->pc = 0x1A94F4u;
    {
        const bool branch_taken_0x1a94f4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a94f4) {
            ctx->pc = 0x1A94F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A94F4u;
            // 0x1a94f8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A94FCu;
            goto label_1a94fc;
        }
    }
    ctx->pc = 0x1A94FCu;
label_1a94fc:
    // 0x1a94fc: 0x287c2  srl         $s0, $v0, 31
    ctx->pc = 0x1a94fcu;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_1a9500:
    // 0x1a9500: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x1a9500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_1a9504:
    // 0x1a9504: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1a9504u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1a9508:
    // 0x1a9508: 0x108043  sra         $s0, $s0, 1
    ctx->pc = 0x1a9508u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
label_1a950c:
    // 0x1a950c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1a950cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a9510:
    // 0x1a9510: 0x212001a  div         $zero, $s0, $s2
    ctx->pc = 0x1a9510u;
    { int32_t divisor = GPR_S32(ctx, 18);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1a9514:
    // 0x1a9514: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1a9514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1a9518:
    // 0x1a9518: 0x8012  mflo        $s0
    ctx->pc = 0x1a9518u;
    SET_GPR_U64(ctx, 16, ctx->lo);
label_1a951c:
    // 0x1a951c: 0x40f809  jalr        $v0
label_1a9520:
    if (ctx->pc == 0x1A9520u) {
        ctx->pc = 0x1A9520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A951Cu;
        // 0x1a9520: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9524u;
        goto label_1a9524;
    }
    ctx->pc = 0x1A951Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A9524u);
        ctx->pc = 0x1A9520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A951Cu;
        // 0x1a9520: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A951Cu, 0x1A9524u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A9524u;
label_1a9524:
    // 0x1a9524: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x1a9524u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_1a9528:
    // 0x1a9528: 0x2444000f  addiu       $a0, $v0, 0xF
    ctx->pc = 0x1a9528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_1a952c:
    // 0x1a952c: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x1a952cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_1a9530:
    // 0x1a9530: 0x21903  sra         $v1, $v0, 4
    ctx->pc = 0x1a9530u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 4));
label_1a9534:
    // 0x1a9534: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x1a9534u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1a9538:
    // 0x1a9538: 0x202180b  movn        $v1, $s0, $v0
    ctx->pc = 0x1a9538u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 16));
label_1a953c:
    // 0x1a953c: 0x58600057  blezl       $v1, . + 4 + (0x57 << 2)
label_1a9540:
    if (ctx->pc == 0x1A9540u) {
        ctx->pc = 0x1A9540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A953Cu;
        // 0x1a9540: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9544u;
        goto label_1a9544;
    }
    ctx->pc = 0x1A953Cu;
    {
        const bool branch_taken_0x1a953c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1a953c) {
            ctx->pc = 0x1A9540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A953Cu;
            // 0x1a9540: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A969Cu;
            goto label_1a969c;
        }
    }
    ctx->pc = 0x1A9544u;
label_1a9544:
    // 0x1a9544: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1a9544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1a9548:
    // 0x1a9548: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x1a9548u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1a954c:
    // 0x1a954c: 0x8fb5002c  lw          $s5, 0x2C($sp)
    ctx->pc = 0x1a954cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1a9550:
    // 0x1a9550: 0x518821  addu        $s1, $v0, $s1
    ctx->pc = 0x1a9550u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1a9554:
    // 0x1a9554: 0xafb10024  sw          $s1, 0x24($sp)
    ctx->pc = 0x1a9554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 17));
label_1a9558:
    // 0x1a9558: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a9558u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a955c:
    // 0x1a955c: 0x1a400025  blez        $s2, . + 4 + (0x25 << 2)
label_1a9560:
    if (ctx->pc == 0x1A9560u) {
        ctx->pc = 0x1A9560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A955Cu;
        // 0x1a9560: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9564u;
        goto label_1a9564;
    }
    ctx->pc = 0x1A955Cu;
    {
        const bool branch_taken_0x1a955c = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x1A9560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A955Cu;
        // 0x1a9560: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a955c) {
            ctx->pc = 0x1A95F4u;
            goto label_1a95f4;
        }
    }
    ctx->pc = 0x1A9564u;
label_1a9564:
    // 0x1a9564: 0x3c0882d  daddu       $s1, $fp, $zero
    ctx->pc = 0x1a9564u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1a9568:
    // 0x1a9568: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1a9568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a956c:
    // 0x1a956c: 0x0  nop
    ctx->pc = 0x1a956cu;
    // NOP
label_1a9570:
    // 0x1a9570: 0x2503023  subu        $a2, $s2, $s0
    ctx->pc = 0x1a9570u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_1a9574:
    // 0x1a9574: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1a9574u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a9578:
    // 0x1a9578: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x1a9578u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_1a957c:
    // 0x1a957c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1a957cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a9580:
    // 0x1a9580: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1a9580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1a9584:
    // 0x1a9584: 0x40f809  jalr        $v0
label_1a9588:
    if (ctx->pc == 0x1A9588u) {
        ctx->pc = 0x1A9588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9584u;
        // 0x1a9588: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A958Cu;
        goto label_1a958c;
    }
    ctx->pc = 0x1A9584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A958Cu);
        ctx->pc = 0x1A9588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9584u;
        // 0x1a9588: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9584u, 0x1A958Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A958Cu;
label_1a958c:
    // 0x1a958c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1a958cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1a9590:
    // 0x1a9590: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x1a9590u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_1a9594:
    // 0x1a9594: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a9594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1a9598:
    // 0x1a9598: 0x34043  sra         $t0, $v1, 1
    ctx->pc = 0x1a9598u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 3), 1));
label_1a959c:
    // 0x1a959c: 0x1900000b  blez        $t0, . + 4 + (0xB << 2)
label_1a95a0:
    if (ctx->pc == 0x1A95A0u) {
        ctx->pc = 0x1A95A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A959Cu;
        // 0x1a95a0: 0x8fa70000  lw          $a3, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A95A4u;
        goto label_1a95a4;
    }
    ctx->pc = 0x1A959Cu;
    {
        const bool branch_taken_0x1a959c = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x1A95A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A959Cu;
        // 0x1a95a0: 0x8fa70000  lw          $a3, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a959c) {
            ctx->pc = 0x1A95CCu;
            goto label_1a95cc;
        }
    }
    ctx->pc = 0x1A95A4u;
label_1a95a4:
    // 0x1a95a4: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x1a95a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1a95a8:
    // 0x1a95a8: 0x84e40000  lh          $a0, 0x0($a3)
    ctx->pc = 0x1a95a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_1a95ac:
    // 0x1a95ac: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x1a95acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
label_1a95b0:
    // 0x1a95b0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1a95b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_1a95b4:
    // 0x1a95b4: 0x42823  negu        $a1, $a0
    ctx->pc = 0x1a95b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_1a95b8:
    // 0x1a95b8: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x1a95b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
label_1a95bc:
    // 0x1a95bc: 0xa2200b  movn        $a0, $a1, $v0
    ctx->pc = 0x1a95bcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
label_1a95c0:
    // 0x1a95c0: 0x264182a  slt         $v1, $s3, $a0
    ctx->pc = 0x1a95c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1a95c4:
    // 0x1a95c4: 0x14c0fff8  bnez        $a2, . + 4 + (-0x8 << 2)
label_1a95c8:
    if (ctx->pc == 0x1A95C8u) {
        ctx->pc = 0x1A95C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A95C4u;
        // 0x1a95c8: 0x83980b  movn        $s3, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A95CCu;
        goto label_1a95cc;
    }
    ctx->pc = 0x1A95C4u;
    {
        const bool branch_taken_0x1a95c4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A95C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A95C4u;
        // 0x1a95c8: 0x83980b  movn        $s3, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a95c4) {
            ctx->pc = 0x1A95A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a95a8;
        }
    }
    ctx->pc = 0x1A95CCu;
label_1a95cc:
    // 0x1a95cc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1a95ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a95d0:
    // 0x1a95d0: 0x2088021  addu        $s0, $s0, $t0
    ctx->pc = 0x1a95d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
label_1a95d4:
    // 0x1a95d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a95d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a95d8:
    // 0x1a95d8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1a95d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a95dc:
    // 0x1a95dc: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1a95dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1a95e0:
    // 0x1a95e0: 0x40f809  jalr        $v0
label_1a95e4:
    if (ctx->pc == 0x1A95E4u) {
        ctx->pc = 0x1A95E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A95E0u;
        // 0x1a95e4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A95E8u;
        goto label_1a95e8;
    }
    ctx->pc = 0x1A95E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A95E8u);
        ctx->pc = 0x1A95E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A95E0u;
        // 0x1a95e4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A95E0u, 0x1A95E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A95E8u;
label_1a95e8:
    // 0x1a95e8: 0x212182a  slt         $v1, $s0, $s2
    ctx->pc = 0x1a95e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_1a95ec:
    // 0x1a95ec: 0x5460ffe0  bnel        $v1, $zero, . + 4 + (-0x20 << 2)
label_1a95f0:
    if (ctx->pc == 0x1A95F0u) {
        ctx->pc = 0x1A95F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A95ECu;
        // 0x1a95f0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A95F4u;
        goto label_1a95f4;
    }
    ctx->pc = 0x1A95ECu;
    {
        const bool branch_taken_0x1a95ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a95ec) {
            ctx->pc = 0x1A95F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A95ECu;
            // 0x1a95f0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A9570u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a9570;
        }
    }
    ctx->pc = 0x1A95F4u;
label_1a95f4:
    // 0x1a95f4: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x1a95f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_1a95f8:
    // 0x1a95f8: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x1a95f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1a95fc:
    // 0x1a95fc: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x1a95fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1a9600:
    // 0x1a9600: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a9600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a9604:
    // 0x1a9604: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1a9604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a9608:
    // 0x1a9608: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1a9608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1a960c:
    // 0x1a960c: 0x40f809  jalr        $v0
label_1a9610:
    if (ctx->pc == 0x1A9610u) {
        ctx->pc = 0x1A9610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A960Cu;
        // 0x1a9610: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9614u;
        goto label_1a9614;
    }
    ctx->pc = 0x1A960Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A9614u);
        ctx->pc = 0x1A9610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A960Cu;
        // 0x1a9610: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A960Cu, 0x1A9614u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A9614u;
label_1a9614:
    // 0x1a9614: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1a9614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_1a9618:
    // 0x1a9618: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_1a961c:
    if (ctx->pc == 0x1A961Cu) {
        ctx->pc = 0x1A961Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9618u;
        // 0x1a961c: 0x8fa70010  lw          $a3, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9620u;
        goto label_1a9620;
    }
    ctx->pc = 0x1A9618u;
    {
        const bool branch_taken_0x1a9618 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A961Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9618u;
        // 0x1a961c: 0x8fa70010  lw          $a3, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9618) {
            ctx->pc = 0x1A9640u;
            goto label_1a9640;
        }
    }
    ctx->pc = 0x1A9620u;
label_1a9620:
    // 0x1a9620: 0x0  nop
    ctx->pc = 0x1a9620u;
    // NOP
label_1a9624:
    // 0x1a9624: 0x0  nop
    ctx->pc = 0x1a9624u;
    // NOP
label_1a9628:
    // 0x1a9628: 0x0  nop
    ctx->pc = 0x1a9628u;
    // NOP
label_1a962c:
    // 0x1a962c: 0x0  nop
    ctx->pc = 0x1a962cu;
    // NOP
label_1a9630:
    // 0x1a9630: 0x0  nop
    ctx->pc = 0x1a9630u;
    // NOP
label_1a9634:
    // 0x1a9634: 0x1000fffa  b           . + 4 + (-0x6 << 2)
label_1a9638:
    if (ctx->pc == 0x1A9638u) {
        ctx->pc = 0x1A963Cu;
        goto label_1a963c;
    }
    ctx->pc = 0x1A9634u;
    {
        const bool branch_taken_0x1a9634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9634) {
            ctx->pc = 0x1A9620u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a9620;
        }
    }
    ctx->pc = 0x1A963Cu;
label_1a963c:
    // 0x1a963c: 0x0  nop
    ctx->pc = 0x1a963cu;
    // NOP
label_1a9640:
    // 0x1a9640: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x1a9640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1a9644:
    // 0x1a9644: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x1a9644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_1a9648:
    // 0x1a9648: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1a9648u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1a964c:
    // 0x1a964c: 0xacf30000  sw          $s3, 0x0($a3)
    ctx->pc = 0x1a964cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 19));
label_1a9650:
    // 0x1a9650: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a9650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a9654:
    // 0x1a9654: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1a9654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a9658:
    // 0x1a9658: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x1a9658u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
label_1a965c:
    // 0x1a965c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1a965cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1a9660:
    // 0x1a9660: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1a9660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a9664:
    // 0x1a9664: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x1a9664u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
label_1a9668:
    // 0x1a9668: 0x8c680020  lw          $t0, 0x20($v1)
    ctx->pc = 0x1a9668u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1a966c:
    // 0x1a966c: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x1a966cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_1a9670:
    // 0x1a9670: 0xacf2000c  sw          $s2, 0xC($a3)
    ctx->pc = 0x1a9670u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 18));
label_1a9674:
    // 0x1a9674: 0x100f809  jalr        $t0
label_1a9678:
    if (ctx->pc == 0x1A9678u) {
        ctx->pc = 0x1A9678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9674u;
        // 0x1a9678: 0xace30008  sw          $v1, 0x8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A967Cu;
        goto label_1a967c;
    }
    ctx->pc = 0x1A9674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 8);
        SET_GPR_U32(ctx, 31, 0x1A967Cu);
        ctx->pc = 0x1A9678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9674u;
        // 0x1a9678: 0xace30008  sw          $v1, 0x8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9674u, 0x1A967Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A967Cu;
label_1a967c:
    // 0x1a967c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1a967cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1a9680:
    // 0x1a9680: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1a9680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1a9684:
    // 0x1a9684: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x1a9684u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_1a9688:
    // 0x1a9688: 0x8e83002c  lw          $v1, 0x2C($s4)
    ctx->pc = 0x1a9688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_1a968c:
    // 0x1a968c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a968cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1a9690:
    // 0x1a9690: 0x16c0ffb1  bnez        $s6, . + 4 + (-0x4F << 2)
label_1a9694:
    if (ctx->pc == 0x1A9694u) {
        ctx->pc = 0x1A9694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9690u;
        // 0x1a9694: 0xae83002c  sw          $v1, 0x2C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9698u;
        goto label_1a9698;
    }
    ctx->pc = 0x1A9690u;
    {
        const bool branch_taken_0x1a9690 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9690u;
        // 0x1a9694: 0xae83002c  sw          $v1, 0x2C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9690) {
            ctx->pc = 0x1A9558u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a9558;
        }
    }
    ctx->pc = 0x1A9698u;
label_1a9698:
    // 0x1a9698: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1a9698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1a969c:
    // 0x1a969c: 0x26f70004  addiu       $s7, $s7, 0x4
    ctx->pc = 0x1a969cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
label_1a96a0:
    // 0x1a96a0: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x1a96a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_1a96a4:
    // 0x1a96a4: 0x27de0004  addiu       $fp, $fp, 0x4
    ctx->pc = 0x1a96a4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
label_1a96a8:
    // 0x1a96a8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a96a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1a96ac:
    // 0x1a96ac: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x1a96acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
label_1a96b0:
    // 0x1a96b0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1a96b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1a96b4:
    // 0x1a96b4: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1a96b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1a96b8:
    // 0x1a96b8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1a96b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_1a96bc:
    // 0x1a96bc: 0x1440ff86  bnez        $v0, . + 4 + (-0x7A << 2)
label_1a96c0:
    if (ctx->pc == 0x1A96C0u) {
        ctx->pc = 0x1A96C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A96BCu;
        // 0x1a96c0: 0xafa3002c  sw          $v1, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A96C4u;
        goto label_1a96c4;
    }
    ctx->pc = 0x1A96BCu;
    {
        const bool branch_taken_0x1a96bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A96C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A96BCu;
        // 0x1a96c0: 0xafa3002c  sw          $v1, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a96bc) {
            ctx->pc = 0x1A94D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a94d8;
        }
    }
    ctx->pc = 0x1A96C4u;
label_1a96c4:
    // 0x1a96c4: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1a96c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a96c8:
    // 0x1a96c8: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1a96c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1a96cc:
    // 0x1a96cc: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1a96ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a96d0:
    // 0x1a96d0: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x1a96d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1a96d4:
    // 0x1a96d4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1a96d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1a96d8:
    // 0x1a96d8: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x1a96d8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_1a96dc:
    // 0x1a96dc: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x1a96dcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1a96e0:
    // 0x1a96e0: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x1a96e0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_1a96e4:
    // 0x1a96e4: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x1a96e4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1a96e8:
    // 0x1a96e8: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x1a96e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_1a96ec:
    // 0x1a96ec: 0x3e00008  jr          $ra
label_1a96f0:
    if (ctx->pc == 0x1A96F0u) {
        ctx->pc = 0x1A96F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A96ECu;
        // 0x1a96f0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A96F4u;
        goto label_1a96f4;
    }
    ctx->pc = 0x1A96ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A96F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A96ECu;
        // 0x1a96f0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A96ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A96F4u;
label_1a96f4:
    // 0x1a96f4: 0x0  nop
    ctx->pc = 0x1a96f4u;
    // NOP
}
