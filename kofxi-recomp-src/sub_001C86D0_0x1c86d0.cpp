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

// Function: sub_001C86D0
// Address: 0x1c86d0 - 0x1c89c8
void sub_001C86D0_0x1c86d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C86D0_0x1c86d0");
#endif

    switch (ctx->pc) {
        case 0x1c86d0u: goto label_1c86d0;
        case 0x1c86d4u: goto label_1c86d4;
        case 0x1c86d8u: goto label_1c86d8;
        case 0x1c86dcu: goto label_1c86dc;
        case 0x1c86e0u: goto label_1c86e0;
        case 0x1c86e4u: goto label_1c86e4;
        case 0x1c86e8u: goto label_1c86e8;
        case 0x1c86ecu: goto label_1c86ec;
        case 0x1c86f0u: goto label_1c86f0;
        case 0x1c86f4u: goto label_1c86f4;
        case 0x1c86f8u: goto label_1c86f8;
        case 0x1c86fcu: goto label_1c86fc;
        case 0x1c8700u: goto label_1c8700;
        case 0x1c8704u: goto label_1c8704;
        case 0x1c8708u: goto label_1c8708;
        case 0x1c870cu: goto label_1c870c;
        case 0x1c8710u: goto label_1c8710;
        case 0x1c8714u: goto label_1c8714;
        case 0x1c8718u: goto label_1c8718;
        case 0x1c871cu: goto label_1c871c;
        case 0x1c8720u: goto label_1c8720;
        case 0x1c8724u: goto label_1c8724;
        case 0x1c8728u: goto label_1c8728;
        case 0x1c872cu: goto label_1c872c;
        case 0x1c8730u: goto label_1c8730;
        case 0x1c8734u: goto label_1c8734;
        case 0x1c8738u: goto label_1c8738;
        case 0x1c873cu: goto label_1c873c;
        case 0x1c8740u: goto label_1c8740;
        case 0x1c8744u: goto label_1c8744;
        case 0x1c8748u: goto label_1c8748;
        case 0x1c874cu: goto label_1c874c;
        case 0x1c8750u: goto label_1c8750;
        case 0x1c8754u: goto label_1c8754;
        case 0x1c8758u: goto label_1c8758;
        case 0x1c875cu: goto label_1c875c;
        case 0x1c8760u: goto label_1c8760;
        case 0x1c8764u: goto label_1c8764;
        case 0x1c8768u: goto label_1c8768;
        case 0x1c876cu: goto label_1c876c;
        case 0x1c8770u: goto label_1c8770;
        case 0x1c8774u: goto label_1c8774;
        case 0x1c8778u: goto label_1c8778;
        case 0x1c877cu: goto label_1c877c;
        case 0x1c8780u: goto label_1c8780;
        case 0x1c8784u: goto label_1c8784;
        case 0x1c8788u: goto label_1c8788;
        case 0x1c878cu: goto label_1c878c;
        case 0x1c8790u: goto label_1c8790;
        case 0x1c8794u: goto label_1c8794;
        case 0x1c8798u: goto label_1c8798;
        case 0x1c879cu: goto label_1c879c;
        case 0x1c87a0u: goto label_1c87a0;
        case 0x1c87a4u: goto label_1c87a4;
        case 0x1c87a8u: goto label_1c87a8;
        case 0x1c87acu: goto label_1c87ac;
        case 0x1c87b0u: goto label_1c87b0;
        case 0x1c87b4u: goto label_1c87b4;
        case 0x1c87b8u: goto label_1c87b8;
        case 0x1c87bcu: goto label_1c87bc;
        case 0x1c87c0u: goto label_1c87c0;
        case 0x1c87c4u: goto label_1c87c4;
        case 0x1c87c8u: goto label_1c87c8;
        case 0x1c87ccu: goto label_1c87cc;
        case 0x1c87d0u: goto label_1c87d0;
        case 0x1c87d4u: goto label_1c87d4;
        case 0x1c87d8u: goto label_1c87d8;
        case 0x1c87dcu: goto label_1c87dc;
        case 0x1c87e0u: goto label_1c87e0;
        case 0x1c87e4u: goto label_1c87e4;
        case 0x1c87e8u: goto label_1c87e8;
        case 0x1c87ecu: goto label_1c87ec;
        case 0x1c87f0u: goto label_1c87f0;
        case 0x1c87f4u: goto label_1c87f4;
        case 0x1c87f8u: goto label_1c87f8;
        case 0x1c87fcu: goto label_1c87fc;
        case 0x1c8800u: goto label_1c8800;
        case 0x1c8804u: goto label_1c8804;
        case 0x1c8808u: goto label_1c8808;
        case 0x1c880cu: goto label_1c880c;
        case 0x1c8810u: goto label_1c8810;
        case 0x1c8814u: goto label_1c8814;
        case 0x1c8818u: goto label_1c8818;
        case 0x1c881cu: goto label_1c881c;
        case 0x1c8820u: goto label_1c8820;
        case 0x1c8824u: goto label_1c8824;
        case 0x1c8828u: goto label_1c8828;
        case 0x1c882cu: goto label_1c882c;
        case 0x1c8830u: goto label_1c8830;
        case 0x1c8834u: goto label_1c8834;
        case 0x1c8838u: goto label_1c8838;
        case 0x1c883cu: goto label_1c883c;
        case 0x1c8840u: goto label_1c8840;
        case 0x1c8844u: goto label_1c8844;
        case 0x1c8848u: goto label_1c8848;
        case 0x1c884cu: goto label_1c884c;
        case 0x1c8850u: goto label_1c8850;
        case 0x1c8854u: goto label_1c8854;
        case 0x1c8858u: goto label_1c8858;
        case 0x1c885cu: goto label_1c885c;
        case 0x1c8860u: goto label_1c8860;
        case 0x1c8864u: goto label_1c8864;
        case 0x1c8868u: goto label_1c8868;
        case 0x1c886cu: goto label_1c886c;
        case 0x1c8870u: goto label_1c8870;
        case 0x1c8874u: goto label_1c8874;
        case 0x1c8878u: goto label_1c8878;
        case 0x1c887cu: goto label_1c887c;
        case 0x1c8880u: goto label_1c8880;
        case 0x1c8884u: goto label_1c8884;
        case 0x1c8888u: goto label_1c8888;
        case 0x1c888cu: goto label_1c888c;
        case 0x1c8890u: goto label_1c8890;
        case 0x1c8894u: goto label_1c8894;
        case 0x1c8898u: goto label_1c8898;
        case 0x1c889cu: goto label_1c889c;
        case 0x1c88a0u: goto label_1c88a0;
        case 0x1c88a4u: goto label_1c88a4;
        case 0x1c88a8u: goto label_1c88a8;
        case 0x1c88acu: goto label_1c88ac;
        case 0x1c88b0u: goto label_1c88b0;
        case 0x1c88b4u: goto label_1c88b4;
        case 0x1c88b8u: goto label_1c88b8;
        case 0x1c88bcu: goto label_1c88bc;
        case 0x1c88c0u: goto label_1c88c0;
        case 0x1c88c4u: goto label_1c88c4;
        case 0x1c88c8u: goto label_1c88c8;
        case 0x1c88ccu: goto label_1c88cc;
        case 0x1c88d0u: goto label_1c88d0;
        case 0x1c88d4u: goto label_1c88d4;
        case 0x1c88d8u: goto label_1c88d8;
        case 0x1c88dcu: goto label_1c88dc;
        case 0x1c88e0u: goto label_1c88e0;
        case 0x1c88e4u: goto label_1c88e4;
        case 0x1c88e8u: goto label_1c88e8;
        case 0x1c88ecu: goto label_1c88ec;
        case 0x1c88f0u: goto label_1c88f0;
        case 0x1c88f4u: goto label_1c88f4;
        case 0x1c88f8u: goto label_1c88f8;
        case 0x1c88fcu: goto label_1c88fc;
        case 0x1c8900u: goto label_1c8900;
        case 0x1c8904u: goto label_1c8904;
        case 0x1c8908u: goto label_1c8908;
        case 0x1c890cu: goto label_1c890c;
        case 0x1c8910u: goto label_1c8910;
        case 0x1c8914u: goto label_1c8914;
        case 0x1c8918u: goto label_1c8918;
        case 0x1c891cu: goto label_1c891c;
        case 0x1c8920u: goto label_1c8920;
        case 0x1c8924u: goto label_1c8924;
        case 0x1c8928u: goto label_1c8928;
        case 0x1c892cu: goto label_1c892c;
        case 0x1c8930u: goto label_1c8930;
        case 0x1c8934u: goto label_1c8934;
        case 0x1c8938u: goto label_1c8938;
        case 0x1c893cu: goto label_1c893c;
        case 0x1c8940u: goto label_1c8940;
        case 0x1c8944u: goto label_1c8944;
        case 0x1c8948u: goto label_1c8948;
        case 0x1c894cu: goto label_1c894c;
        case 0x1c8950u: goto label_1c8950;
        case 0x1c8954u: goto label_1c8954;
        case 0x1c8958u: goto label_1c8958;
        case 0x1c895cu: goto label_1c895c;
        case 0x1c8960u: goto label_1c8960;
        case 0x1c8964u: goto label_1c8964;
        case 0x1c8968u: goto label_1c8968;
        case 0x1c896cu: goto label_1c896c;
        case 0x1c8970u: goto label_1c8970;
        case 0x1c8974u: goto label_1c8974;
        case 0x1c8978u: goto label_1c8978;
        case 0x1c897cu: goto label_1c897c;
        case 0x1c8980u: goto label_1c8980;
        case 0x1c8984u: goto label_1c8984;
        case 0x1c8988u: goto label_1c8988;
        case 0x1c898cu: goto label_1c898c;
        case 0x1c8990u: goto label_1c8990;
        case 0x1c8994u: goto label_1c8994;
        case 0x1c8998u: goto label_1c8998;
        case 0x1c899cu: goto label_1c899c;
        case 0x1c89a0u: goto label_1c89a0;
        case 0x1c89a4u: goto label_1c89a4;
        case 0x1c89a8u: goto label_1c89a8;
        case 0x1c89acu: goto label_1c89ac;
        case 0x1c89b0u: goto label_1c89b0;
        case 0x1c89b4u: goto label_1c89b4;
        case 0x1c89b8u: goto label_1c89b8;
        case 0x1c89bcu: goto label_1c89bc;
        case 0x1c89c0u: goto label_1c89c0;
        case 0x1c89c4u: goto label_1c89c4;
        default: break;
    }

    ctx->pc = 0x1c86d0u;

label_1c86d0:
    // 0x1c86d0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c86d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1c86d4:
    // 0x1c86d4: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c86d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1c86d8:
    // 0x1c86d8: 0x8c435328  lw          $v1, 0x5328($v0)
    ctx->pc = 0x1c86d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21288)));
label_1c86dc:
    // 0x1c86dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c86dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1c86e0:
    // 0x1c86e0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c86e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1c86e4:
    // 0x1c86e4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c86e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1c86e8:
    // 0x1c86e8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c86e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1c86ec:
    // 0x1c86ec: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1c86ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_1c86f0:
    // 0x1c86f0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1c86f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_1c86f4:
    // 0x1c86f4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1c86f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_1c86f8:
    // 0x1c86f8: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1c86f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_1c86fc:
    // 0x1c86fc: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x1c86fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
label_1c8700:
    // 0x1c8700: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_1c8704:
    if (ctx->pc == 0x1C8704u) {
        ctx->pc = 0x1C8704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8700u;
        // 0x1c8704: 0xffbf0048  sd          $ra, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8708u;
        goto label_1c8708;
    }
    ctx->pc = 0x1C8700u;
    {
        const bool branch_taken_0x1c8700 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8700u;
        // 0x1c8704: 0xffbf0048  sd          $ra, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8700) {
            ctx->pc = 0x1C8728u;
            goto label_1c8728;
        }
    }
    ctx->pc = 0x1C8708u;
label_1c8708:
    // 0x1c8708: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1c8708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_1c870c:
    // 0x1c870c: 0x3c150038  lui         $s5, 0x38
    ctx->pc = 0x1c870cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)56 << 16));
label_1c8710:
    // 0x1c8710: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1c8710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1c8714:
    // 0x1c8714: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1c8714u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
label_1c8718:
    // 0x1c8718: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x1c8718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
label_1c871c:
    // 0x1c871c: 0xaea35320  sw          $v1, 0x5320($s5)
    ctx->pc = 0x1c871cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 21280), GPR_U32(ctx, 3));
label_1c8720:
    // 0x1c8720: 0x10000002  b           . + 4 + (0x2 << 2)
label_1c8724:
    if (ctx->pc == 0x1C8724u) {
        ctx->pc = 0x1C8724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8720u;
        // 0x1c8724: 0xac825324  sw          $v0, 0x5324($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 21284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8728u;
        goto label_1c8728;
    }
    ctx->pc = 0x1C8720u;
    {
        const bool branch_taken_0x1c8720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8720u;
        // 0x1c8724: 0xac825324  sw          $v0, 0x5324($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 21284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8720) {
            ctx->pc = 0x1C872Cu;
            goto label_1c872c;
        }
    }
    ctx->pc = 0x1C8728u;
label_1c8728:
    // 0x1c8728: 0x3c150038  lui         $s5, 0x38
    ctx->pc = 0x1c8728u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)56 << 16));
label_1c872c:
    // 0x1c872c: 0x3c130038  lui         $s3, 0x38
    ctx->pc = 0x1c872cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)56 << 16));
label_1c8730:
    // 0x1c8730: 0x2670532c  addiu       $s0, $s3, 0x532C
    ctx->pc = 0x1c8730u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 21292));
label_1c8734:
    // 0x1c8734: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c8734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c8738:
    // 0x1c8738: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
label_1c873c:
    if (ctx->pc == 0x1C873Cu) {
        ctx->pc = 0x1C873Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8738u;
        // 0x1c873c: 0x3c100038  lui         $s0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8740u;
        goto label_1c8740;
    }
    ctx->pc = 0x1C8738u;
    {
        const bool branch_taken_0x1c8738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c8738) {
            ctx->pc = 0x1C873Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C8738u;
            // 0x1c873c: 0x3c100038  lui         $s0, 0x38 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C87D0u;
            goto label_1c87d0;
        }
    }
    ctx->pc = 0x1C8740u;
label_1c8740:
    // 0x1c8740: 0x3c120038  lui         $s2, 0x38
    ctx->pc = 0x1c8740u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)56 << 16));
label_1c8744:
    // 0x1c8744: 0x26515324  addiu       $s1, $s2, 0x5324
    ctx->pc = 0x1c8744u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 21284));
label_1c8748:
    // 0x1c8748: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1c8748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1c874c:
    // 0x1c874c: 0xc045448  jal         func_115120
label_1c8750:
    if (ctx->pc == 0x1C8750u) {
        ctx->pc = 0x1C8750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C874Cu;
        // 0x1c8750: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8754u;
        goto label_1c8754;
    }
    ctx->pc = 0x1C874Cu;
    SET_GPR_U32(ctx, 31, 0x1C8754u);
    ctx->pc = 0x1C8750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C874Cu;
    // 0x1c8750: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115120u, 0x1C874Cu, 0x1C8754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8754u;
label_1c8754:
    // 0x1c8754: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_1c8758:
    if (ctx->pc == 0x1C8758u) {
        ctx->pc = 0x1C8758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8754u;
        // 0x1c8758: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C875Cu;
        goto label_1c875c;
    }
    ctx->pc = 0x1C8754u;
    {
        const bool branch_taken_0x1c8754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8754u;
        // 0x1c8758: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8754) {
            ctx->pc = 0x1C8790u;
            goto label_1c8790;
        }
    }
    ctx->pc = 0x1C875Cu;
label_1c875c:
    // 0x1c875c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1c875cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1c8760:
    // 0x1c8760: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c8760u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1c8764:
    // 0x1c8764: 0x2484b380  addiu       $a0, $a0, -0x4C80
    ctx->pc = 0x1c8764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947712));
label_1c8768:
    // 0x1c8768: 0xc06d212  jal         func_1B4848
label_1c876c:
    if (ctx->pc == 0x1C876Cu) {
        ctx->pc = 0x1C876Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8768u;
        // 0x1c876c: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8770u;
        goto label_1c8770;
    }
    ctx->pc = 0x1C8768u;
    SET_GPR_U32(ctx, 31, 0x1C8770u);
    ctx->pc = 0x1C876Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8768u;
    // 0x1c876c: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4848u, 0x1C8768u, 0x1C8770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8770u;
label_1c8770:
    // 0x1c8770: 0x0  nop
    ctx->pc = 0x1c8770u;
    // NOP
label_1c8774:
    // 0x1c8774: 0x0  nop
    ctx->pc = 0x1c8774u;
    // NOP
label_1c8778:
    // 0x1c8778: 0x0  nop
    ctx->pc = 0x1c8778u;
    // NOP
label_1c877c:
    // 0x1c877c: 0x0  nop
    ctx->pc = 0x1c877cu;
    // NOP
label_1c8780:
    // 0x1c8780: 0x0  nop
    ctx->pc = 0x1c8780u;
    // NOP
label_1c8784:
    // 0x1c8784: 0x1000fffa  b           . + 4 + (-0x6 << 2)
label_1c8788:
    if (ctx->pc == 0x1C8788u) {
        ctx->pc = 0x1C878Cu;
        goto label_1c878c;
    }
    ctx->pc = 0x1C8784u;
    {
        const bool branch_taken_0x1c8784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8784) {
            ctx->pc = 0x1C8770u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c8770;
        }
    }
    ctx->pc = 0x1C878Cu;
label_1c878c:
    // 0x1c878c: 0x0  nop
    ctx->pc = 0x1c878cu;
    // NOP
label_1c8790:
    // 0x1c8790: 0x2670532c  addiu       $s0, $s3, 0x532C
    ctx->pc = 0x1c8790u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 21292));
label_1c8794:
    // 0x1c8794: 0x8e455324  lw          $a1, 0x5324($s2)
    ctx->pc = 0x1c8794u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 21284)));
label_1c8798:
    // 0x1c8798: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1c8798u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c879c:
    // 0x1c879c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c879cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1c87a0:
    // 0x1c87a0: 0x2484b3c8  addiu       $a0, $a0, -0x4C38
    ctx->pc = 0x1c87a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947784));
label_1c87a4:
    // 0x1c87a4: 0xc06d212  jal         func_1B4848
label_1c87a8:
    if (ctx->pc == 0x1C87A8u) {
        ctx->pc = 0x1C87A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C87A4u;
        // 0x1c87a8: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C87ACu;
        goto label_1c87ac;
    }
    ctx->pc = 0x1C87A4u;
    SET_GPR_U32(ctx, 31, 0x1C87ACu);
    ctx->pc = 0x1C87A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C87A4u;
    // 0x1c87a8: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4848u, 0x1C87A4u, 0x1C87ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C87ACu;
label_1c87ac:
    // 0x1c87ac: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1c87acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c87b0:
    // 0x1c87b0: 0x2405ffc0  addiu       $a1, $zero, -0x40
    ctx->pc = 0x1c87b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
label_1c87b4:
    // 0x1c87b4: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1c87b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
label_1c87b8:
    // 0x1c87b8: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x1c87b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_1c87bc:
    // 0x1c87bc: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x1c87bcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
label_1c87c0:
    // 0x1c87c0: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1c87c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_1c87c4:
    // 0x1c87c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c87c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c87c8:
    // 0x1c87c8: 0xa0825334  sb          $v0, 0x5334($a0)
    ctx->pc = 0x1c87c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 21300), (uint8_t)GPR_U32(ctx, 2));
label_1c87cc:
    // 0x1c87cc: 0xae035330  sw          $v1, 0x5330($s0)
    ctx->pc = 0x1c87ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 21296), GPR_U32(ctx, 3));
label_1c87d0:
    // 0x1c87d0: 0x3c140038  lui         $s4, 0x38
    ctx->pc = 0x1c87d0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)56 << 16));
label_1c87d4:
    // 0x1c87d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c87d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c87d8:
    // 0x1c87d8: 0x26845380  addiu       $a0, $s4, 0x5380
    ctx->pc = 0x1c87d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 21376));
label_1c87dc:
    // 0x1c87dc: 0xc049cb6  jal         func_1272D8
label_1c87e0:
    if (ctx->pc == 0x1C87E0u) {
        ctx->pc = 0x1C87E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C87DCu;
        // 0x1c87e0: 0x24060300  addiu       $a2, $zero, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C87E4u;
        goto label_1c87e4;
    }
    ctx->pc = 0x1C87DCu;
    SET_GPR_U32(ctx, 31, 0x1C87E4u);
    ctx->pc = 0x1C87E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C87DCu;
    // 0x1c87e0: 0x24060300  addiu       $a2, $zero, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x1C87DCu, 0x1C87E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C87E4u;
label_1c87e4:
    // 0x1c87e4: 0x8e115330  lw          $s1, 0x5330($s0)
    ctx->pc = 0x1c87e4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 21296)));
label_1c87e8:
    // 0x1c87e8: 0x8ea25320  lw          $v0, 0x5320($s5)
    ctx->pc = 0x1c87e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 21280)));
label_1c87ec:
    // 0x1c87ec: 0x1840006a  blez        $v0, . + 4 + (0x6A << 2)
label_1c87f0:
    if (ctx->pc == 0x1C87F0u) {
        ctx->pc = 0x1C87F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C87ECu;
        // 0x1c87f0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C87F4u;
        goto label_1c87f4;
    }
    ctx->pc = 0x1C87ECu;
    {
        const bool branch_taken_0x1c87ec = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1C87F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C87ECu;
        // 0x1c87f0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c87ec) {
            ctx->pc = 0x1C8998u;
            goto label_1c8998;
        }
    }
    ctx->pc = 0x1C87F4u;
label_1c87f4:
    // 0x1c87f4: 0x3c160038  lui         $s6, 0x38
    ctx->pc = 0x1c87f4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)56 << 16));
label_1c87f8:
    // 0x1c87f8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1c87f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c87fc:
    // 0x1c87fc: 0x3c1e003f  lui         $fp, 0x3F
    ctx->pc = 0x1c87fcu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)63 << 16));
label_1c8800:
    // 0x1c8800: 0x3c17003f  lui         $s7, 0x3F
    ctx->pc = 0x1c8800u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)63 << 16));
label_1c8804:
    // 0x1c8804: 0x26825380  addiu       $v0, $s4, 0x5380
    ctx->pc = 0x1c8804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 21376));
label_1c8808:
    // 0x1c8808: 0x3223003f  andi        $v1, $s1, 0x3F
    ctx->pc = 0x1c8808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)63);
label_1c880c:
    // 0x1c880c: 0x2628021  addu        $s0, $s3, $v0
    ctx->pc = 0x1c880cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_1c8810:
    // 0x1c8810: 0x26730018  addiu       $s3, $s3, 0x18
    ctx->pc = 0x1c8810u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
label_1c8814:
    // 0x1c8814: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_1c8818:
    if (ctx->pc == 0x1C8818u) {
        ctx->pc = 0x1C8818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8814u;
        // 0x1c8818: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C881Cu;
        goto label_1c881c;
    }
    ctx->pc = 0x1C8814u;
    {
        const bool branch_taken_0x1c8814 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8814u;
        // 0x1c8818: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8814) {
            ctx->pc = 0x1C8848u;
            goto label_1c8848;
        }
    }
    ctx->pc = 0x1C881Cu;
label_1c881c:
    // 0x1c881c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1c881cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_1c8820:
    // 0x1c8820: 0xc06d212  jal         func_1B4848
label_1c8824:
    if (ctx->pc == 0x1C8824u) {
        ctx->pc = 0x1C8824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8820u;
        // 0x1c8824: 0x2444b3f8  addiu       $a0, $v0, -0x4C08 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947832));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8828u;
        goto label_1c8828;
    }
    ctx->pc = 0x1C8820u;
    SET_GPR_U32(ctx, 31, 0x1C8828u);
    ctx->pc = 0x1C8824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8820u;
    // 0x1c8824: 0x2444b3f8  addiu       $a0, $v0, -0x4C08 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4848u, 0x1C8820u, 0x1C8828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8828u;
label_1c8828:
    // 0x1c8828: 0x0  nop
    ctx->pc = 0x1c8828u;
    // NOP
label_1c882c:
    // 0x1c882c: 0x0  nop
    ctx->pc = 0x1c882cu;
    // NOP
label_1c8830:
    // 0x1c8830: 0x0  nop
    ctx->pc = 0x1c8830u;
    // NOP
label_1c8834:
    // 0x1c8834: 0x0  nop
    ctx->pc = 0x1c8834u;
    // NOP
label_1c8838:
    // 0x1c8838: 0x0  nop
    ctx->pc = 0x1c8838u;
    // NOP
label_1c883c:
    // 0x1c883c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
label_1c8840:
    if (ctx->pc == 0x1C8840u) {
        ctx->pc = 0x1C8844u;
        goto label_1c8844;
    }
    ctx->pc = 0x1C883Cu;
    {
        const bool branch_taken_0x1c883c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c883c) {
            ctx->pc = 0x1C8828u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c8828;
        }
    }
    ctx->pc = 0x1C8844u;
label_1c8844:
    // 0x1c8844: 0x0  nop
    ctx->pc = 0x1c8844u;
    // NOP
label_1c8848:
    // 0x1c8848: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c8848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c884c:
    // 0x1c884c: 0x26310100  addiu       $s1, $s1, 0x100
    ctx->pc = 0x1c884cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
label_1c8850:
    // 0x1c8850: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c8850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c8854:
    // 0x1c8854: 0xc07346c  jal         func_1CD1B0
label_1c8858:
    if (ctx->pc == 0x1C8858u) {
        ctx->pc = 0x1C8858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8854u;
        // 0x1c8858: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C885Cu;
        goto label_1c885c;
    }
    ctx->pc = 0x1C8854u;
    SET_GPR_U32(ctx, 31, 0x1C885Cu);
    ctx->pc = 0x1C8858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8854u;
    // 0x1c8858: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1B0u, 0x1C8854u, 0x1C885Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C885Cu;
label_1c885c:
    // 0x1c885c: 0x121a00  sll         $v1, $s2, 8
    ctx->pc = 0x1c885cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
label_1c8860:
    // 0x1c8860: 0x26c55680  addiu       $a1, $s6, 0x5680
    ctx->pc = 0x1c8860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 22144));
label_1c8864:
    // 0x1c8864: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c8864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c8868:
    // 0x1c8868: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x1c8868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1c886c:
    // 0x1c886c: 0x3223003f  andi        $v1, $s1, 0x3F
    ctx->pc = 0x1c886cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)63);
label_1c8870:
    // 0x1c8870: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1c8870u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1c8874:
    // 0x1c8874: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x1c8874u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1c8878:
    // 0x1c8878: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_1c887c:
    if (ctx->pc == 0x1C887Cu) {
        ctx->pc = 0x1C887Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8878u;
        // 0x1c887c: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8880u;
        goto label_1c8880;
    }
    ctx->pc = 0x1C8878u;
    {
        const bool branch_taken_0x1c8878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C887Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8878u;
        // 0x1c887c: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8878) {
            ctx->pc = 0x1C88B0u;
            goto label_1c88b0;
        }
    }
    ctx->pc = 0x1C8880u;
label_1c8880:
    // 0x1c8880: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1c8880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_1c8884:
    // 0x1c8884: 0xc06d212  jal         func_1B4848
label_1c8888:
    if (ctx->pc == 0x1C8888u) {
        ctx->pc = 0x1C8888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8884u;
        // 0x1c8888: 0x2444b428  addiu       $a0, $v0, -0x4BD8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947880));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C888Cu;
        goto label_1c888c;
    }
    ctx->pc = 0x1C8884u;
    SET_GPR_U32(ctx, 31, 0x1C888Cu);
    ctx->pc = 0x1C8888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8884u;
    // 0x1c8888: 0x2444b428  addiu       $a0, $v0, -0x4BD8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4848u, 0x1C8884u, 0x1C888Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C888Cu;
label_1c888c:
    // 0x1c888c: 0x0  nop
    ctx->pc = 0x1c888cu;
    // NOP
label_1c8890:
    // 0x1c8890: 0x0  nop
    ctx->pc = 0x1c8890u;
    // NOP
label_1c8894:
    // 0x1c8894: 0x0  nop
    ctx->pc = 0x1c8894u;
    // NOP
label_1c8898:
    // 0x1c8898: 0x0  nop
    ctx->pc = 0x1c8898u;
    // NOP
label_1c889c:
    // 0x1c889c: 0x0  nop
    ctx->pc = 0x1c889cu;
    // NOP
label_1c88a0:
    // 0x1c88a0: 0x0  nop
    ctx->pc = 0x1c88a0u;
    // NOP
label_1c88a4:
    // 0x1c88a4: 0x1000fffa  b           . + 4 + (-0x6 << 2)
label_1c88a8:
    if (ctx->pc == 0x1C88A8u) {
        ctx->pc = 0x1C88ACu;
        goto label_1c88ac;
    }
    ctx->pc = 0x1C88A4u;
    {
        const bool branch_taken_0x1c88a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c88a4) {
            ctx->pc = 0x1C8890u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c8890;
        }
    }
    ctx->pc = 0x1C88ACu;
label_1c88ac:
    // 0x1c88ac: 0x0  nop
    ctx->pc = 0x1c88acu;
    // NOP
label_1c88b0:
    // 0x1c88b0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1c88b4:
    if (ctx->pc == 0x1C88B4u) {
        ctx->pc = 0x1C88B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C88B0u;
        // 0x1c88b4: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C88B8u;
        goto label_1c88b8;
    }
    ctx->pc = 0x1C88B0u;
    {
        const bool branch_taken_0x1c88b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C88B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C88B0u;
        // 0x1c88b4: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c88b0) {
            ctx->pc = 0x1C88E0u;
            goto label_1c88e0;
        }
    }
    ctx->pc = 0x1C88B8u;
label_1c88b8:
    // 0x1c88b8: 0xc06d212  jal         func_1B4848
label_1c88bc:
    if (ctx->pc == 0x1C88BCu) {
        ctx->pc = 0x1C88BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C88B8u;
        // 0x1c88bc: 0x2444b460  addiu       $a0, $v0, -0x4BA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947936));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C88C0u;
        goto label_1c88c0;
    }
    ctx->pc = 0x1C88B8u;
    SET_GPR_U32(ctx, 31, 0x1C88C0u);
    ctx->pc = 0x1C88BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C88B8u;
    // 0x1c88bc: 0x2444b460  addiu       $a0, $v0, -0x4BA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4848u, 0x1C88B8u, 0x1C88C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C88C0u;
label_1c88c0:
    // 0x1c88c0: 0x0  nop
    ctx->pc = 0x1c88c0u;
    // NOP
label_1c88c4:
    // 0x1c88c4: 0x0  nop
    ctx->pc = 0x1c88c4u;
    // NOP
label_1c88c8:
    // 0x1c88c8: 0x0  nop
    ctx->pc = 0x1c88c8u;
    // NOP
label_1c88cc:
    // 0x1c88cc: 0x0  nop
    ctx->pc = 0x1c88ccu;
    // NOP
label_1c88d0:
    // 0x1c88d0: 0x0  nop
    ctx->pc = 0x1c88d0u;
    // NOP
label_1c88d4:
    // 0x1c88d4: 0x1000fffa  b           . + 4 + (-0x6 << 2)
label_1c88d8:
    if (ctx->pc == 0x1C88D8u) {
        ctx->pc = 0x1C88DCu;
        goto label_1c88dc;
    }
    ctx->pc = 0x1C88D4u;
    {
        const bool branch_taken_0x1c88d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c88d4) {
            ctx->pc = 0x1C88C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c88c0;
        }
    }
    ctx->pc = 0x1C88DCu;
label_1c88dc:
    // 0x1c88dc: 0x0  nop
    ctx->pc = 0x1c88dcu;
    // NOP
label_1c88e0:
    // 0x1c88e0: 0xc073058  jal         func_1CC160
label_1c88e4:
    if (ctx->pc == 0x1C88E4u) {
        ctx->pc = 0x1C88E8u;
        goto label_1c88e8;
    }
    ctx->pc = 0x1C88E0u;
    SET_GPR_U32(ctx, 31, 0x1C88E8u);
    ctx->pc = 0x1CC160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC160u, 0x1C88E0u, 0x1C88E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C88E8u;
label_1c88e8:
    // 0x1c88e8: 0x24034000  addiu       $v1, $zero, 0x4000
    ctx->pc = 0x1c88e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_1c88ec:
    // 0x1c88ec: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1c88ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_1c88f0:
    // 0x1c88f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c88f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c88f4:
    // 0x1c88f4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_1c88f8:
    if (ctx->pc == 0x1C88F8u) {
        ctx->pc = 0x1C88F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C88F4u;
        // 0x1c88f8: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C88FCu;
        goto label_1c88fc;
    }
    ctx->pc = 0x1C88F4u;
    {
        const bool branch_taken_0x1c88f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C88F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C88F4u;
        // 0x1c88f8: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c88f4) {
            ctx->pc = 0x1C8928u;
            goto label_1c8928;
        }
    }
    ctx->pc = 0x1C88FCu;
label_1c88fc:
    // 0x1c88fc: 0xc06d212  jal         func_1B4848
label_1c8900:
    if (ctx->pc == 0x1C8900u) {
        ctx->pc = 0x1C8900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C88FCu;
        // 0x1c8900: 0x27c4b490  addiu       $a0, $fp, -0x4B70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294947984));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8904u;
        goto label_1c8904;
    }
    ctx->pc = 0x1C88FCu;
    SET_GPR_U32(ctx, 31, 0x1C8904u);
    ctx->pc = 0x1C8900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C88FCu;
    // 0x1c8900: 0x27c4b490  addiu       $a0, $fp, -0x4B70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294947984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4848u, 0x1C88FCu, 0x1C8904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8904u;
label_1c8904:
    // 0x1c8904: 0x0  nop
    ctx->pc = 0x1c8904u;
    // NOP
label_1c8908:
    // 0x1c8908: 0x0  nop
    ctx->pc = 0x1c8908u;
    // NOP
label_1c890c:
    // 0x1c890c: 0x0  nop
    ctx->pc = 0x1c890cu;
    // NOP
label_1c8910:
    // 0x1c8910: 0x0  nop
    ctx->pc = 0x1c8910u;
    // NOP
label_1c8914:
    // 0x1c8914: 0x0  nop
    ctx->pc = 0x1c8914u;
    // NOP
label_1c8918:
    // 0x1c8918: 0x0  nop
    ctx->pc = 0x1c8918u;
    // NOP
label_1c891c:
    // 0x1c891c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
label_1c8920:
    if (ctx->pc == 0x1C8920u) {
        ctx->pc = 0x1C8924u;
        goto label_1c8924;
    }
    ctx->pc = 0x1C891Cu;
    {
        const bool branch_taken_0x1c891c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c891c) {
            ctx->pc = 0x1C8908u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c8908;
        }
    }
    ctx->pc = 0x1C8924u;
label_1c8924:
    // 0x1c8924: 0x0  nop
    ctx->pc = 0x1c8924u;
    // NOP
label_1c8928:
    // 0x1c8928: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1c8928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1c892c:
    // 0x1c892c: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x1c892cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_1c8930:
    // 0x1c8930: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1c8930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1c8934:
    // 0x1c8934: 0xae110010  sw          $s1, 0x10($s0)
    ctx->pc = 0x1c8934u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
label_1c8938:
    // 0x1c8938: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1c8938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1c893c:
    // 0x1c893c: 0x40f809  jalr        $v0
label_1c8940:
    if (ctx->pc == 0x1C8940u) {
        ctx->pc = 0x1C8940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C893Cu;
        // 0x1c8940: 0x26314000  addiu       $s1, $s1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8944u;
        goto label_1c8944;
    }
    ctx->pc = 0x1C893Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C8944u);
        ctx->pc = 0x1C8940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C893Cu;
        // 0x1c8940: 0x26314000  addiu       $s1, $s1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C893Cu, 0x1C8944u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C8944u;
label_1c8944:
    // 0x1c8944: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1c8944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1c8948:
    // 0x1c8948: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1c8948u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1c894c:
    // 0x1c894c: 0xc073642  jal         func_1CD908
label_1c8950:
    if (ctx->pc == 0x1C8950u) {
        ctx->pc = 0x1C8950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C894Cu;
        // 0x1c8950: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8954u;
        goto label_1c8954;
    }
    ctx->pc = 0x1C894Cu;
    SET_GPR_U32(ctx, 31, 0x1C8954u);
    ctx->pc = 0x1C8950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C894Cu;
    // 0x1c8950: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD908u, 0x1C894Cu, 0x1C8954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8954u;
label_1c8954:
    // 0x1c8954: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_1c8958:
    if (ctx->pc == 0x1C8958u) {
        ctx->pc = 0x1C8958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8954u;
        // 0x1c8958: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C895Cu;
        goto label_1c895c;
    }
    ctx->pc = 0x1C8954u;
    {
        const bool branch_taken_0x1c8954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8954u;
        // 0x1c8958: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8954) {
            ctx->pc = 0x1C8988u;
            goto label_1c8988;
        }
    }
    ctx->pc = 0x1C895Cu;
label_1c895c:
    // 0x1c895c: 0xc06d212  jal         func_1B4848
label_1c8960:
    if (ctx->pc == 0x1C8960u) {
        ctx->pc = 0x1C8960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C895Cu;
        // 0x1c8960: 0x26e4b4c8  addiu       $a0, $s7, -0x4B38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294948040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8964u;
        goto label_1c8964;
    }
    ctx->pc = 0x1C895Cu;
    SET_GPR_U32(ctx, 31, 0x1C8964u);
    ctx->pc = 0x1C8960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C895Cu;
    // 0x1c8960: 0x26e4b4c8  addiu       $a0, $s7, -0x4B38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294948040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4848u, 0x1C895Cu, 0x1C8964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8964u;
label_1c8964:
    // 0x1c8964: 0x0  nop
    ctx->pc = 0x1c8964u;
    // NOP
label_1c8968:
    // 0x1c8968: 0x0  nop
    ctx->pc = 0x1c8968u;
    // NOP
label_1c896c:
    // 0x1c896c: 0x0  nop
    ctx->pc = 0x1c896cu;
    // NOP
label_1c8970:
    // 0x1c8970: 0x0  nop
    ctx->pc = 0x1c8970u;
    // NOP
label_1c8974:
    // 0x1c8974: 0x0  nop
    ctx->pc = 0x1c8974u;
    // NOP
label_1c8978:
    // 0x1c8978: 0x0  nop
    ctx->pc = 0x1c8978u;
    // NOP
label_1c897c:
    // 0x1c897c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
label_1c8980:
    if (ctx->pc == 0x1C8980u) {
        ctx->pc = 0x1C8984u;
        goto label_1c8984;
    }
    ctx->pc = 0x1C897Cu;
    {
        const bool branch_taken_0x1c897c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c897c) {
            ctx->pc = 0x1C8968u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c8968;
        }
    }
    ctx->pc = 0x1C8984u;
label_1c8984:
    // 0x1c8984: 0x0  nop
    ctx->pc = 0x1c8984u;
    // NOP
label_1c8988:
    // 0x1c8988: 0x8ea25320  lw          $v0, 0x5320($s5)
    ctx->pc = 0x1c8988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 21280)));
label_1c898c:
    // 0x1c898c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1c898cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1c8990:
    // 0x1c8990: 0x1440ff9d  bnez        $v0, . + 4 + (-0x63 << 2)
label_1c8994:
    if (ctx->pc == 0x1C8994u) {
        ctx->pc = 0x1C8994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8990u;
        // 0x1c8994: 0x26825380  addiu       $v0, $s4, 0x5380 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 21376));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8998u;
        goto label_1c8998;
    }
    ctx->pc = 0x1C8990u;
    {
        const bool branch_taken_0x1c8990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8990u;
        // 0x1c8994: 0x26825380  addiu       $v0, $s4, 0x5380 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 21376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8990) {
            ctx->pc = 0x1C8808u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c8808;
        }
    }
    ctx->pc = 0x1C8998u;
label_1c8998:
    // 0x1c8998: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c8998u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c899c:
    // 0x1c899c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c899cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1c89a0:
    // 0x1c89a0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c89a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c89a4:
    // 0x1c89a4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c89a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1c89a8:
    // 0x1c89a8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1c89a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1c89ac:
    // 0x1c89ac: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1c89acu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1c89b0:
    // 0x1c89b0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1c89b0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1c89b4:
    // 0x1c89b4: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1c89b4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1c89b8:
    // 0x1c89b8: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x1c89b8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1c89bc:
    // 0x1c89bc: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1c89bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1c89c0:
    // 0x1c89c0: 0x3e00008  jr          $ra
label_1c89c4:
    if (ctx->pc == 0x1C89C4u) {
        ctx->pc = 0x1C89C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C89C0u;
        // 0x1c89c4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C89C8u;
        goto label_fallthrough_0x1c89c0;
    }
    ctx->pc = 0x1C89C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C89C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C89C0u;
        // 0x1c89c4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C89C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1c89c0:
    ctx->pc = 0x1C89C8u;
}
