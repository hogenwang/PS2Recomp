#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00192D60
// Address: 0x192d60 - 0x193970
void sub_00192D60_0x192d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00192D60_0x192d60");
#endif

    switch (ctx->pc) {
        case 0x192da0u: goto label_192da0;
        case 0x192dd4u: goto label_192dd4;
        case 0x192e30u: goto label_192e30;
        case 0x192ec8u: goto label_192ec8;
        case 0x192edcu: goto label_192edc;
        case 0x192ee8u: goto label_192ee8;
        case 0x192f3cu: goto label_192f3c;
        case 0x192f98u: goto label_192f98;
        case 0x192fe0u: goto label_192fe0;
        case 0x19304cu: goto label_19304c;
        case 0x193060u: goto label_193060;
        case 0x19306cu: goto label_19306c;
        case 0x1930c0u: goto label_1930c0;
        case 0x19311cu: goto label_19311c;
        case 0x193164u: goto label_193164;
        case 0x1931c8u: goto label_1931c8;
        case 0x193224u: goto label_193224;
        case 0x19327cu: goto label_19327c;
        case 0x193290u: goto label_193290;
        case 0x19329cu: goto label_19329c;
        case 0x1932e4u: goto label_1932e4;
        case 0x19333cu: goto label_19333c;
        case 0x193354u: goto label_193354;
        case 0x1933b0u: goto label_1933b0;
        case 0x193408u: goto label_193408;
        case 0x19341cu: goto label_19341c;
        case 0x193428u: goto label_193428;
        case 0x193470u: goto label_193470;
        case 0x1934c8u: goto label_1934c8;
        case 0x193540u: goto label_193540;
        case 0x193558u: goto label_193558;
        case 0x193564u: goto label_193564;
        case 0x1935b8u: goto label_1935b8;
        case 0x193610u: goto label_193610;
        case 0x193624u: goto label_193624;
        case 0x193630u: goto label_193630;
        case 0x193684u: goto label_193684;
        case 0x1936f8u: goto label_1936f8;
        case 0x193710u: goto label_193710;
        case 0x19371cu: goto label_19371c;
        case 0x193770u: goto label_193770;
        case 0x1937c8u: goto label_1937c8;
        case 0x1937dcu: goto label_1937dc;
        case 0x1937e8u: goto label_1937e8;
        case 0x19383cu: goto label_19383c;
        case 0x1938e4u: goto label_1938e4;
        case 0x193940u: goto label_193940;
        default: break;
    }

    ctx->pc = 0x192d60u;

label_192d60:
    // 0x192d60: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x192d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x192d64: 0x90439780  lbu         $v1, -0x6880($v0)
    ctx->pc = 0x192d64u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x192d68: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x192d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x192d6c: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x192D6Cu;
    {
        const bool branch_taken_0x192d6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x192d6c) {
            ctx->pc = 0x192D70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x192D6Cu;
            // 0x192d70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x192D98u;
            goto label_192d98;
        }
    }
    ctx->pc = 0x192D74u;
    // 0x192d74: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x192d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x192d78: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x192D78u;
    {
        const bool branch_taken_0x192d78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x192d78) {
            ctx->pc = 0x192D94u;
            goto label_192d94;
        }
    }
    ctx->pc = 0x192D80u;
    // 0x192d80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x192d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192d84: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x192D84u;
    {
        const bool branch_taken_0x192d84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x192d84) {
            ctx->pc = 0x192D94u;
            goto label_192d94;
        }
    }
    ctx->pc = 0x192D8Cu;
    // 0x192d8c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x192D8Cu;
    {
        const bool branch_taken_0x192d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192D90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192D8Cu;
            // 0x192d90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192d8c) {
            ctx->pc = 0x192D98u;
            goto label_192d98;
        }
    }
    ctx->pc = 0x192D94u;
label_192d94:
    // 0x192d94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x192d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_192d98:
    // 0x192d98: 0x3e00008  jr          $ra
    ctx->pc = 0x192D98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x192DA0u;
label_192da0:
    // 0x192da0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x192da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x192da4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x192da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x192da8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x192da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x192dac: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x192dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x192db0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x192db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x192db4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x192db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x192db8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x192db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x192dbc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x192dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x192dc0: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x192dc0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x192dc4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x192dc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192dc8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x192dc8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x192dcc: 0xc0d50ac  jal         func_3542B0
    ctx->pc = 0x192DCCu;
    SET_GPR_U32(ctx, 31, 0x192DD4u);
    ctx->pc = 0x192DD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192DCCu;
            // 0x192dd0: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x3542B0u;
    if (runtime->hasFunction(0x3542B0u)) {
        auto targetFn = runtime->lookupFunction(0x3542B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192DD4u; }
        if (ctx->pc != 0x192DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003542B0_0x3542b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192DD4u; }
        if (ctx->pc != 0x192DD4u) { return; }
    }
    ctx->pc = 0x192DD4u;
label_192dd4:
    // 0x192dd4: 0x544002db  bnel        $v0, $zero, . + 4 + (0x2DB << 2)
    ctx->pc = 0x192DD4u;
    {
        const bool branch_taken_0x192dd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x192dd4) {
            ctx->pc = 0x192DD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x192DD4u;
            // 0x192dd8: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x193944u;
            goto label_193944;
        }
    }
    ctx->pc = 0x192DDCu;
    // 0x192ddc: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x192ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x192de0: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x192de0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x192de4: 0x8c63d918  lw          $v1, -0x26E8($v1)
    ctx->pc = 0x192de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957336)));
    // 0x192de8: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x192de8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x192dec: 0x2484db50  addiu       $a0, $a0, -0x24B0
    ctx->pc = 0x192decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957904));
    // 0x192df0: 0x8cb10000  lw          $s1, 0x0($a1)
    ctx->pc = 0x192df0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x192df4: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x192df4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x192df8: 0x1128c0  sll         $a1, $s1, 3
    ctx->pc = 0x192df8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x192dfc: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x192dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x192e00: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x192e00u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x192e04: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x192e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x192e08: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x192e08u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x192e0c: 0x10600290  beqz        $v1, . + 4 + (0x290 << 2)
    ctx->pc = 0x192E0Cu;
    {
        const bool branch_taken_0x192e0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x192E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192E0Cu;
            // 0x192e10: 0x858021  addu        $s0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192e0c) {
            ctx->pc = 0x193850u;
            goto label_193850;
        }
    }
    ctx->pc = 0x192E14u;
    // 0x192e14: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x192e14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x192e18: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x192e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x192e1c: 0x90659780  lbu         $a1, -0x6880($v1)
    ctx->pc = 0x192e1cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940544)));
    // 0x192e20: 0x54a40005  bnel        $a1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x192E20u;
    {
        const bool branch_taken_0x192e20 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x192e20) {
            ctx->pc = 0x192E24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x192E20u;
            // 0x192e24: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x192E38u;
            goto label_192e38;
        }
    }
    ctx->pc = 0x192E28u;
    // 0x192e28: 0xc0828f8  jal         func_20A3E0
    ctx->pc = 0x192E28u;
    SET_GPR_U32(ctx, 31, 0x192E30u);
    ctx->pc = 0x20A3E0u;
    if (runtime->hasFunction(0x20A3E0u)) {
        auto targetFn = runtime->lookupFunction(0x20A3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192E30u; }
        if (ctx->pc != 0x192E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020A3E0_0x20a3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192E30u; }
        if (ctx->pc != 0x192E30u) { return; }
    }
    ctx->pc = 0x192E30u;
label_192e30:
    // 0x192e30: 0x10000287  b           . + 4 + (0x287 << 2)
    ctx->pc = 0x192E30u;
    {
        const bool branch_taken_0x192e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x192e30) {
            ctx->pc = 0x193850u;
            goto label_193850;
        }
    }
    ctx->pc = 0x192E38u;
label_192e38:
    // 0x192e38: 0x10a302c1  beq         $a1, $v1, . + 4 + (0x2C1 << 2)
    ctx->pc = 0x192E38u;
    {
        const bool branch_taken_0x192e38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x192e38) {
            ctx->pc = 0x193940u;
            goto label_193940;
        }
    }
    ctx->pc = 0x192E40u;
    // 0x192e40: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x192e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x192e44: 0x54a300ca  bnel        $a1, $v1, . + 4 + (0xCA << 2)
    ctx->pc = 0x192E44u;
    {
        const bool branch_taken_0x192e44 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x192e44) {
            ctx->pc = 0x192E48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x192E44u;
            // 0x192e48: 0x9203000a  lbu         $v1, 0xA($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x193170u;
            goto label_193170;
        }
    }
    ctx->pc = 0x192E4Cu;
    // 0x192e4c: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x192e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x192e50: 0x90639720  lbu         $v1, -0x68E0($v1)
    ctx->pc = 0x192e50u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940448)));
    // 0x192e54: 0x162300c5  bne         $s1, $v1, . + 4 + (0xC5 << 2)
    ctx->pc = 0x192E54u;
    {
        const bool branch_taken_0x192e54 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x192e54) {
            ctx->pc = 0x19316Cu;
            goto label_19316c;
        }
    }
    ctx->pc = 0x192E5Cu;
    // 0x192e5c: 0x14600062  bnez        $v1, . + 4 + (0x62 << 2)
    ctx->pc = 0x192E5Cu;
    {
        const bool branch_taken_0x192e5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x192e5c) {
            ctx->pc = 0x192FE8u;
            goto label_192fe8;
        }
    }
    ctx->pc = 0x192E64u;
    // 0x192e64: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x192e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x192e68: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x192e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x192e6c: 0x9042f35a  lbu         $v0, -0xCA6($v0)
    ctx->pc = 0x192e6cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964058)));
    // 0x192e70: 0x5443004b  bnel        $v0, $v1, . + 4 + (0x4B << 2)
    ctx->pc = 0x192E70u;
    {
        const bool branch_taken_0x192e70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x192e70) {
            ctx->pc = 0x192E74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x192E70u;
            // 0x192e74: 0x3c034280  lui         $v1, 0x4280 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x192FA0u;
            goto label_192fa0;
        }
    }
    ctx->pc = 0x192E78u;
    // 0x192e78: 0x96020014  lhu         $v0, 0x14($s0)
    ctx->pc = 0x192e78u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x192e7c: 0x50400036  beql        $v0, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x192E7Cu;
    {
        const bool branch_taken_0x192e7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x192e7c) {
            ctx->pc = 0x192E80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x192E7Cu;
            // 0x192e80: 0x3c034280  lui         $v1, 0x4280 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x192F58u;
            goto label_192f58;
        }
    }
    ctx->pc = 0x192E84u;
    // 0x192e84: 0x3c034280  lui         $v1, 0x4280
    ctx->pc = 0x192e84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
    // 0x192e88: 0x3c024150  lui         $v0, 0x4150
    ctx->pc = 0x192e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16720 << 16));
    // 0x192e8c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x192e8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x192e90: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x192e90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x192e94: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x192e94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x192e98: 0x3c034178  lui         $v1, 0x4178
    ctx->pc = 0x192e98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16760 << 16));
    // 0x192e9c: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x192e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x192ea0: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x192ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x192ea4: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x192ea4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x192ea8: 0x24846120  addiu       $a0, $a0, 0x6120
    ctx->pc = 0x192ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24864));
    // 0x192eac: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x192eacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x192eb0: 0x24a5d538  addiu       $a1, $a1, -0x2AC8
    ctx->pc = 0x192eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956344));
    // 0x192eb4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x192eb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192eb8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x192eb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192ebc: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x192ebcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x192ec0: 0xc05e230  jal         func_1788C0
    ctx->pc = 0x192EC0u;
    SET_GPR_U32(ctx, 31, 0x192EC8u);
    ctx->pc = 0x192EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192EC0u;
            // 0x192ec4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1788C0u;
    if (runtime->hasFunction(0x1788C0u)) {
        auto targetFn = runtime->lookupFunction(0x1788C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192EC8u; }
        if (ctx->pc != 0x192EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001788C0_0x1788c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192EC8u; }
        if (ctx->pc != 0x192EC8u) { return; }
    }
    ctx->pc = 0x192EC8u;
label_192ec8:
    // 0x192ec8: 0x96060014  lhu         $a2, 0x14($s0)
    ctx->pc = 0x192ec8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x192ecc: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x192eccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x192ed0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x192ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x192ed4: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x192ED4u;
    SET_GPR_U32(ctx, 31, 0x192EDCu);
    ctx->pc = 0x192ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192ED4u;
            // 0x192ed8: 0x24a5e8c8  addiu       $a1, $a1, -0x1738 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (runtime->hasFunction(0x1297C8u)) {
        auto targetFn = runtime->lookupFunction(0x1297C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192EDCu; }
        if (ctx->pc != 0x192EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001297C8_0x1297c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192EDCu; }
        if (ctx->pc != 0x192EDCu) { return; }
    }
    ctx->pc = 0x192EDCu;
label_192edc:
    // 0x192edc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x192edcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192ee0: 0x24130078  addiu       $s3, $zero, 0x78
    ctx->pc = 0x192ee0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x192ee4: 0x27b20080  addiu       $s2, $sp, 0x80
    ctx->pc = 0x192ee4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_192ee8:
    // 0x192ee8: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x192ee8u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192eec: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x192eecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x192ef0: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x192ef0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x192ef4: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x192ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x192ef8: 0x3c094150  lui         $t1, 0x4150
    ctx->pc = 0x192ef8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16720 << 16));
    // 0x192efc: 0x3c034178  lui         $v1, 0x4178
    ctx->pc = 0x192efcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16760 << 16));
    // 0x192f00: 0x2445ffe4  addiu       $a1, $v0, -0x1C
    ctx->pc = 0x192f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967268));
    // 0x192f04: 0x248460c0  addiu       $a0, $a0, 0x60C0
    ctx->pc = 0x192f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24768));
    // 0x192f08: 0x530c0  sll         $a2, $a1, 3
    ctx->pc = 0x192f08u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x192f0c: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x192f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x192f10: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x192f10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x192f14: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x192f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x192f18: 0x24a5d538  addiu       $a1, $a1, -0x2AC8
    ctx->pc = 0x192f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956344));
    // 0x192f1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x192f1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192f20: 0x44896800  mtc1        $t1, $f13
    ctx->pc = 0x192f20u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x192f24: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x192f24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192f28: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x192f28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x192f2c: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x192f2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x192f30: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x192f30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x192f34: 0xc05e230  jal         func_1788C0
    ctx->pc = 0x192F34u;
    SET_GPR_U32(ctx, 31, 0x192F3Cu);
    ctx->pc = 0x192F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192F34u;
            // 0x192f38: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1788C0u;
    if (runtime->hasFunction(0x1788C0u)) {
        auto targetFn = runtime->lookupFunction(0x1788C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192F3Cu; }
        if (ctx->pc != 0x192F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001788C0_0x1788c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192F3Cu; }
        if (ctx->pc != 0x192F3Cu) { return; }
    }
    ctx->pc = 0x192F3Cu;
label_192f3c:
    // 0x192f3c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x192f3cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x192f40: 0x2673000e  addiu       $s3, $s3, 0xE
    ctx->pc = 0x192f40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 14));
    // 0x192f44: 0x2a830002  slti        $v1, $s4, 0x2
    ctx->pc = 0x192f44u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x192f48: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x192F48u;
    {
        const bool branch_taken_0x192f48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x192F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192F48u;
            // 0x192f4c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192f48) {
            ctx->pc = 0x192EE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_192ee8;
        }
    }
    ctx->pc = 0x192F50u;
    // 0x192f50: 0x1000023f  b           . + 4 + (0x23F << 2)
    ctx->pc = 0x192F50u;
    {
        const bool branch_taken_0x192f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x192f50) {
            ctx->pc = 0x193850u;
            goto label_193850;
        }
    }
    ctx->pc = 0x192F58u;
label_192f58:
    // 0x192f58: 0x3c024150  lui         $v0, 0x4150
    ctx->pc = 0x192f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16720 << 16));
    // 0x192f5c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x192f5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x192f60: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x192f60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x192f64: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x192f64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x192f68: 0x3c034178  lui         $v1, 0x4178
    ctx->pc = 0x192f68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16760 << 16));
    // 0x192f6c: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x192f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x192f70: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x192f70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x192f74: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x192f74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x192f78: 0x24846118  addiu       $a0, $a0, 0x6118
    ctx->pc = 0x192f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24856));
    // 0x192f7c: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x192f7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x192f80: 0x24a5d538  addiu       $a1, $a1, -0x2AC8
    ctx->pc = 0x192f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956344));
    // 0x192f84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x192f84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192f88: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x192f88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192f8c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x192f8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x192f90: 0xc05e230  jal         func_1788C0
    ctx->pc = 0x192F90u;
    SET_GPR_U32(ctx, 31, 0x192F98u);
    ctx->pc = 0x192F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192F90u;
            // 0x192f94: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1788C0u;
    if (runtime->hasFunction(0x1788C0u)) {
        auto targetFn = runtime->lookupFunction(0x1788C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192F98u; }
        if (ctx->pc != 0x192F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001788C0_0x1788c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192F98u; }
        if (ctx->pc != 0x192F98u) { return; }
    }
    ctx->pc = 0x192F98u;
label_192f98:
    // 0x192f98: 0x1000022d  b           . + 4 + (0x22D << 2)
    ctx->pc = 0x192F98u;
    {
        const bool branch_taken_0x192f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x192f98) {
            ctx->pc = 0x193850u;
            goto label_193850;
        }
    }
    ctx->pc = 0x192FA0u;
label_192fa0:
    // 0x192fa0: 0x3c024150  lui         $v0, 0x4150
    ctx->pc = 0x192fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16720 << 16));
    // 0x192fa4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x192fa4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x192fa8: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x192fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x192fac: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x192facu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x192fb0: 0x3c034178  lui         $v1, 0x4178
    ctx->pc = 0x192fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16760 << 16));
    // 0x192fb4: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x192fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x192fb8: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x192fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x192fbc: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x192fbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x192fc0: 0x24846118  addiu       $a0, $a0, 0x6118
    ctx->pc = 0x192fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24856));
    // 0x192fc4: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x192fc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x192fc8: 0x24a5d538  addiu       $a1, $a1, -0x2AC8
    ctx->pc = 0x192fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956344));
    // 0x192fcc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x192fccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192fd0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x192fd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192fd4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x192fd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x192fd8: 0xc05e230  jal         func_1788C0
    ctx->pc = 0x192FD8u;
    SET_GPR_U32(ctx, 31, 0x192FE0u);
    ctx->pc = 0x192FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192FD8u;
            // 0x192fdc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1788C0u;
    if (runtime->hasFunction(0x1788C0u)) {
        auto targetFn = runtime->lookupFunction(0x1788C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192FE0u; }
        if (ctx->pc != 0x192FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001788C0_0x1788c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192FE0u; }
        if (ctx->pc != 0x192FE0u) { return; }
    }
    ctx->pc = 0x192FE0u;
label_192fe0:
    // 0x192fe0: 0x1000021b  b           . + 4 + (0x21B << 2)
    ctx->pc = 0x192FE0u;
    {
        const bool branch_taken_0x192fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x192fe0) {
            ctx->pc = 0x193850u;
            goto label_193850;
        }
    }
    ctx->pc = 0x192FE8u;
label_192fe8:
    // 0x192fe8: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x192fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x192fec: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x192fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x192ff0: 0x9042f35a  lbu         $v0, -0xCA6($v0)
    ctx->pc = 0x192ff0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964058)));
    // 0x192ff4: 0x5443004b  bnel        $v0, $v1, . + 4 + (0x4B << 2)
    ctx->pc = 0x192FF4u;
    {
        const bool branch_taken_0x192ff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x192ff4) {
            ctx->pc = 0x192FF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x192FF4u;
            // 0x192ff8: 0x3c0343f4  lui         $v1, 0x43F4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17396 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x193124u;
            goto label_193124;
        }
    }
    ctx->pc = 0x192FFCu;
    // 0x192ffc: 0x96020014  lhu         $v0, 0x14($s0)
    ctx->pc = 0x192ffcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x193000: 0x50400036  beql        $v0, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x193000u;
    {
        const bool branch_taken_0x193000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x193000) {
            ctx->pc = 0x193004u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x193000u;
            // 0x193004: 0x3c0343f4  lui         $v1, 0x43F4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17396 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1930DCu;
            goto label_1930dc;
        }
    }
    ctx->pc = 0x193008u;
    // 0x193008: 0x3c0343f8  lui         $v1, 0x43F8
    ctx->pc = 0x193008u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17400 << 16));
    // 0x19300c: 0x3c024150  lui         $v0, 0x4150
    ctx->pc = 0x19300cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16720 << 16));
    // 0x193010: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x193010u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x193014: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x193014u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x193018: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x193018u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x19301c: 0x3c034178  lui         $v1, 0x4178
    ctx->pc = 0x19301cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16760 << 16));
    // 0x193020: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x193020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x193024: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x193024u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x193028: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x193028u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x19302c: 0x24846120  addiu       $a0, $a0, 0x6120
    ctx->pc = 0x19302cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24864));
    // 0x193030: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x193030u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x193034: 0x24a5d538  addiu       $a1, $a1, -0x2AC8
    ctx->pc = 0x193034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956344));
    // 0x193038: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x193038u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19303c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x19303cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x193040: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x193040u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x193044: 0xc05e230  jal         func_1788C0
    ctx->pc = 0x193044u;
    SET_GPR_U32(ctx, 31, 0x19304Cu);
    ctx->pc = 0x193048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193044u;
            // 0x193048: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1788C0u;
    if (runtime->hasFunction(0x1788C0u)) {
        auto targetFn = runtime->lookupFunction(0x1788C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19304Cu; }
        if (ctx->pc != 0x19304Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001788C0_0x1788c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19304Cu; }
        if (ctx->pc != 0x19304Cu) { return; }
    }
    ctx->pc = 0x19304Cu;
label_19304c:
    // 0x19304c: 0x96060014  lhu         $a2, 0x14($s0)
    ctx->pc = 0x19304cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x193050: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x193050u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x193054: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x193054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x193058: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x193058u;
    SET_GPR_U32(ctx, 31, 0x193060u);
    ctx->pc = 0x19305Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193058u;
            // 0x19305c: 0x24a5e8c8  addiu       $a1, $a1, -0x1738 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (runtime->hasFunction(0x1297C8u)) {
        auto targetFn = runtime->lookupFunction(0x1297C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193060u; }
        if (ctx->pc != 0x193060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001297C8_0x1297c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193060u; }
        if (ctx->pc != 0x193060u) { return; }
    }
    ctx->pc = 0x193060u;
label_193060:
    // 0x193060: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x193060u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193064: 0x24140228  addiu       $s4, $zero, 0x228
    ctx->pc = 0x193064u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
    // 0x193068: 0x27b30080  addiu       $s3, $sp, 0x80
    ctx->pc = 0x193068u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_19306c:
    // 0x19306c: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x19306cu;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193070: 0x82620000  lb          $v0, 0x0($s3)
    ctx->pc = 0x193070u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x193074: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x193074u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x193078: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x193078u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x19307c: 0x3c094150  lui         $t1, 0x4150
    ctx->pc = 0x19307cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16720 << 16));
    // 0x193080: 0x3c034178  lui         $v1, 0x4178
    ctx->pc = 0x193080u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16760 << 16));
    // 0x193084: 0x2445ffe4  addiu       $a1, $v0, -0x1C
    ctx->pc = 0x193084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967268));
    // 0x193088: 0x248460c0  addiu       $a0, $a0, 0x60C0
    ctx->pc = 0x193088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24768));
    // 0x19308c: 0x530c0  sll         $a2, $a1, 3
    ctx->pc = 0x19308cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x193090: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x193090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x193094: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x193094u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x193098: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x193098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x19309c: 0x24a5d538  addiu       $a1, $a1, -0x2AC8
    ctx->pc = 0x19309cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956344));
    // 0x1930a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1930a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1930a4: 0x44896800  mtc1        $t1, $f13
    ctx->pc = 0x1930a4u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1930a8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1930a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1930ac: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1930acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1930b0: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x1930b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1930b4: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x1930b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1930b8: 0xc05e230  jal         func_1788C0
    ctx->pc = 0x1930B8u;
    SET_GPR_U32(ctx, 31, 0x1930C0u);
    ctx->pc = 0x1930BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1930B8u;
            // 0x1930bc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1788C0u;
    if (runtime->hasFunction(0x1788C0u)) {
        auto targetFn = runtime->lookupFunction(0x1788C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1930C0u; }
        if (ctx->pc != 0x1930C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001788C0_0x1788c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1930C0u; }
        if (ctx->pc != 0x1930C0u) { return; }
    }
    ctx->pc = 0x1930C0u;
label_1930c0:
    // 0x1930c0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1930c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1930c4: 0x2694000e  addiu       $s4, $s4, 0xE
    ctx->pc = 0x1930c4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 14));
    // 0x1930c8: 0x2a430002  slti        $v1, $s2, 0x2
    ctx->pc = 0x1930c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1930cc: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1930CCu;
    {
        const bool branch_taken_0x1930cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1930D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1930CCu;
            // 0x1930d0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1930cc) {
            ctx->pc = 0x19306Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19306c;
        }
    }
    ctx->pc = 0x1930D4u;
    // 0x1930d4: 0x100001de  b           . + 4 + (0x1DE << 2)
    ctx->pc = 0x1930D4u;
    {
        const bool branch_taken_0x1930d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1930d4) {
            ctx->pc = 0x193850u;
            goto label_193850;
        }
    }
    ctx->pc = 0x1930DCu;
label_1930dc:
    // 0x1930dc: 0x3c024150  lui         $v0, 0x4150
    ctx->pc = 0x1930dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16720 << 16));
    // 0x1930e0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1930e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1930e4: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1930e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x1930e8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1930e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1930ec: 0x3c034178  lui         $v1, 0x4178
    ctx->pc = 0x1930ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16760 << 16));
    // 0x1930f0: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x1930f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x1930f4: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x1930f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x1930f8: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x1930f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1930fc: 0x24846118  addiu       $a0, $a0, 0x6118
    ctx->pc = 0x1930fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24856));
    // 0x193100: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x193100u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x193104: 0x24a5d538  addiu       $a1, $a1, -0x2AC8
    ctx->pc = 0x193104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956344));
    // 0x193108: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x193108u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19310c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x19310cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x193110: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x193110u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x193114: 0xc05e230  jal         func_1788C0
    ctx->pc = 0x193114u;
    SET_GPR_U32(ctx, 31, 0x19311Cu);
    ctx->pc = 0x193118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193114u;
            // 0x193118: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1788C0u;
    if (runtime->hasFunction(0x1788C0u)) {
        auto targetFn = runtime->lookupFunction(0x1788C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19311Cu; }
        if (ctx->pc != 0x19311Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001788C0_0x1788c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19311Cu; }
        if (ctx->pc != 0x19311Cu) { return; }
    }
    ctx->pc = 0x19311Cu;
label_19311c:
    // 0x19311c: 0x100001cc  b           . + 4 + (0x1CC << 2)
    ctx->pc = 0x19311Cu;
    {
        const bool branch_taken_0x19311c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19311c) {
            ctx->pc = 0x193850u;
            goto label_193850;
        }
    }
    ctx->pc = 0x193124u;
label_193124:
    // 0x193124: 0x3c024150  lui         $v0, 0x4150
    ctx->pc = 0x193124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16720 << 16));
    // 0x193128: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x193128u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19312c: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x19312cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x193130: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x193130u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x193134: 0x3c034178  lui         $v1, 0x4178
    ctx->pc = 0x193134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16760 << 16));
    // 0x193138: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x193138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x19313c: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x19313cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x193140: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x193140u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x193144: 0x24846118  addiu       $a0, $a0, 0x6118
    ctx->pc = 0x193144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24856));
    // 0x193148: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x193148u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x19314c: 0x24a5d538  addiu       $a1, $a1, -0x2AC8
    ctx->pc = 0x19314cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956344));
    // 0x193150: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x193150u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193154: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x193154u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x193158: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x193158u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19315c: 0xc05e230  jal         func_1788C0
    ctx->pc = 0x19315Cu;
    SET_GPR_U32(ctx, 31, 0x193164u);
    ctx->pc = 0x193160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19315Cu;
            // 0x193160: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1788C0u;
    if (runtime->hasFunction(0x1788C0u)) {
        auto targetFn = runtime->lookupFunction(0x1788C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193164u; }
        if (ctx->pc != 0x193164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001788C0_0x1788c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193164u; }
        if (ctx->pc != 0x193164u) { return; }
    }
    ctx->pc = 0x193164u;
label_193164:
    // 0x193164: 0x100001ba  b           . + 4 + (0x1BA << 2)
    ctx->pc = 0x193164u;
    {
        const bool branch_taken_0x193164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193164) {
            ctx->pc = 0x193850u;
            goto label_193850;
        }
    }
    ctx->pc = 0x19316Cu;
label_19316c:
    // 0x19316c: 0x9203000a  lbu         $v1, 0xA($s0)
    ctx->pc = 0x19316cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
label_193170:
    // 0x193170: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x193170u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x193174: 0x146701b6  bne         $v1, $a3, . + 4 + (0x1B6 << 2)
    ctx->pc = 0x193174u;
    {
        const bool branch_taken_0x193174 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x193174) {
            ctx->pc = 0x193850u;
            goto label_193850;
        }
    }
    ctx->pc = 0x19317Cu;
    // 0x19317c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19317cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x193180: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x193180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x193184: 0x9063db10  lbu         $v1, -0x24F0($v1)
    ctx->pc = 0x193184u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957840)));
    // 0x193188: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x193188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x19318c: 0x146400d0  bne         $v1, $a0, . + 4 + (0xD0 << 2)
    ctx->pc = 0x19318Cu;
    {
        const bool branch_taken_0x19318c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x19318c) {
            ctx->pc = 0x1934D0u;
            goto label_1934d0;
        }
    }
    ctx->pc = 0x193194u;
    // 0x193194: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x193194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x193198: 0x10a301ad  beq         $a1, $v1, . + 4 + (0x1AD << 2)
    ctx->pc = 0x193198u;
    {
        const bool branch_taken_0x193198 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x193198) {
            ctx->pc = 0x193850u;
            goto label_193850;
        }
    }
    ctx->pc = 0x1931A0u;
    // 0x1931a0: 0x52270068  beql        $s1, $a3, . + 4 + (0x68 << 2)
    ctx->pc = 0x1931A0u;
    {
        const bool branch_taken_0x1931a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 7));
        if (branch_taken_0x1931a0) {
            ctx->pc = 0x1931A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1931A0u;
            // 0x1931a4: 0x96020014  lhu         $v0, 0x14($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x193344u;
            goto label_193344;
        }
    }
    ctx->pc = 0x1931A8u;
    // 0x1931a8: 0x52200003  beql        $s1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1931A8u;
    {
        const bool branch_taken_0x1931a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1931a8) {
            ctx->pc = 0x1931ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1931A8u;
            // 0x1931ac: 0x96020014  lhu         $v0, 0x14($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1931B8u;
            goto label_1931b8;
        }
    }
    ctx->pc = 0x1931B0u;
    // 0x1931b0: 0x100001a7  b           . + 4 + (0x1A7 << 2)
    ctx->pc = 0x1931B0u;
    {
        const bool branch_taken_0x1931b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1931b0) {
            ctx->pc = 0x193850u;
            goto label_193850;
        }
    }
    ctx->pc = 0x1931B8u;
label_1931b8:
    // 0x1931b8: 0x50400051  beql        $v0, $zero, . + 4 + (0x51 << 2)
    ctx->pc = 0x1931B8u;
    {
        const bool branch_taken_0x1931b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1931b8) {
            ctx->pc = 0x1931BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1931B8u;
            // 0x1931bc: 0x3c034280  lui         $v1, 0x4280 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x193300u;
            goto label_193300;
        }
    }
    ctx->pc = 0x1931C0u;
    // 0x1931c0: 0xc064b58  jal         func_192D60
    ctx->pc = 0x1931C0u;
    SET_GPR_U32(ctx, 31, 0x1931C8u);
    ctx->pc = 0x192D60u;
    goto label_192d60;
    ctx->pc = 0x1931C8u;
label_1931c8:
    // 0x1931c8: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x1931C8u;
    {
        const bool branch_taken_0x1931c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1931c8) {
            ctx->pc = 0x1931CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1931C8u;
            // 0x1931cc: 0x3c024400  lui         $v0, 0x4400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19322Cu;
            goto label_19322c;
        }
    }
    ctx->pc = 0x1931D0u;
    // 0x1931d0: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x1931d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x1931d4: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1931d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1931d8: 0x4482b000  mtc1        $v0, $f22
    ctx->pc = 0x1931d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1931dc: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1931dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x1931e0: 0x3c024178  lui         $v0, 0x4178
    ctx->pc = 0x1931e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16760 << 16));
    // 0x1931e4: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x1931e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x1931e8: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x1931e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1931ec: 0x24846128  addiu       $a0, $a0, 0x6128
    ctx->pc = 0x1931ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24872));
    // 0x1931f0: 0x3c024130  lui         $v0, 0x4130
    ctx->pc = 0x1931f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16688 << 16));
    // 0x1931f4: 0x24a5d538  addiu       $a1, $a1, -0x2AC8
    ctx->pc = 0x1931f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956344));
    // 0x1931f8: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1931f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1931fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1931fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193200: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x193200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x193204: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x193204u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x193208: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x193208u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19320c: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x19320cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193210: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x193210u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x193214: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x193214u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193218: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x193218u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x19321c: 0xc05e230  jal         func_1788C0
    ctx->pc = 0x19321Cu;
    SET_GPR_U32(ctx, 31, 0x193224u);
    ctx->pc = 0x193220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19321Cu;
            // 0x193220: 0x4600b3c6  mov.s       $f15, $f22 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1788C0u;
    if (runtime->hasFunction(0x1788C0u)) {
        auto targetFn = runtime->lookupFunction(0x1788C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193224u; }
        if (ctx->pc != 0x193224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001788C0_0x1788c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193224u; }
        if (ctx->pc != 0x193224u) { return; }
    }
    ctx->pc = 0x193224u;
label_193224:
    // 0x193224: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x193224u;
    {
        const bool branch_taken_0x193224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193224u;
            // 0x193228: 0x96060014  lhu         $a2, 0x14($s0) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193224) {
            ctx->pc = 0x193280u;
            goto label_193280;
        }
    }
    ctx->pc = 0x19322Cu;
label_19322c:
    // 0x19322c: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x19322cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x193230: 0x4482b000  mtc1        $v0, $f22
    ctx->pc = 0x193230u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x193234: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x193234u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x193238: 0x3c024178  lui         $v0, 0x4178
    ctx->pc = 0x193238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16760 << 16));
    // 0x19323c: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x19323cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x193240: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x193240u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x193244: 0x24846120  addiu       $a0, $a0, 0x6120
    ctx->pc = 0x193244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24864));
    // 0x193248: 0x3c024130  lui         $v0, 0x4130
    ctx->pc = 0x193248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16688 << 16));
    // 0x19324c: 0x24a5d538  addiu       $a1, $a1, -0x2AC8
    ctx->pc = 0x19324cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956344));
    // 0x193250: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x193250u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x193254: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x193254u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193258: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x193258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x19325c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x19325cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x193260: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x193260u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x193264: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x193264u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193268: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x193268u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x19326c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x19326cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193270: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x193270u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x193274: 0xc05e230  jal         func_1788C0
    ctx->pc = 0x193274u;
    SET_GPR_U32(ctx, 31, 0x19327Cu);
    ctx->pc = 0x193278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193274u;
            // 0x193278: 0x4600b3c6  mov.s       $f15, $f22 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1788C0u;
    if (runtime->hasFunction(0x1788C0u)) {
        auto targetFn = runtime->lookupFunction(0x1788C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19327Cu; }
        if (ctx->pc != 0x19327Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001788C0_0x1788c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19327Cu; }
        if (ctx->pc != 0x19327Cu) { return; }
    }
    ctx->pc = 0x19327Cu;
label_19327c:
    // 0x19327c: 0x96060014  lhu         $a2, 0x14($s0)
    ctx->pc = 0x19327cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
label_193280:
    // 0x193280: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x193280u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x193284: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x193284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x193288: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x193288u;
    SET_GPR_U32(ctx, 31, 0x193290u);
    ctx->pc = 0x19328Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193288u;
            // 0x19328c: 0x24a5e8c8  addiu       $a1, $a1, -0x1738 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (runtime->hasFunction(0x1297C8u)) {
        auto targetFn = runtime->lookupFunction(0x1297C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193290u; }
        if (ctx->pc != 0x193290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001297C8_0x1297c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193290u; }
        if (ctx->pc != 0x193290u) { return; }
    }
    ctx->pc = 0x193290u;
label_193290:
    // 0x193290: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x193290u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193294: 0x24150078  addiu       $s5, $zero, 0x78
    ctx->pc = 0x193294u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x193298: 0x27b40080  addiu       $s4, $sp, 0x80
    ctx->pc = 0x193298u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_19329c:
    // 0x19329c: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x19329cu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1932a0: 0x82830000  lb          $v1, 0x0($s4)
    ctx->pc = 0x1932a0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1932a4: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1932a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1932a8: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x1932a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x1932ac: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x1932acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x1932b0: 0x244260c0  addiu       $v0, $v0, 0x60C0
    ctx->pc = 0x1932b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24768));
    // 0x1932b4: 0x2463ffe4  addiu       $v1, $v1, -0x1C
    ctx->pc = 0x1932b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967268));
    // 0x1932b8: 0x24a5d538  addiu       $a1, $a1, -0x2AC8
    ctx->pc = 0x1932b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956344));
    // 0x1932bc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1932bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1932c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1932c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1932c4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1932c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1932c8: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1932c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1932cc: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1932ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1932d0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1932d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1932d4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1932d4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1932d8: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x1932d8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x1932dc: 0xc05e230  jal         func_1788C0
    ctx->pc = 0x1932DCu;
    SET_GPR_U32(ctx, 31, 0x1932E4u);
    ctx->pc = 0x1932E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1932DCu;
            // 0x1932e0: 0x4600b3c6  mov.s       $f15, $f22 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1788C0u;
    if (runtime->hasFunction(0x1788C0u)) {
        auto targetFn = runtime->lookupFunction(0x1788C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1932E4u; }
        if (ctx->pc != 0x1932E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001788C0_0x1788c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1932E4u; }
        if (ctx->pc != 0x1932E4u) { return; }
    }
    ctx->pc = 0x1932E4u;
label_1932e4:
    // 0x1932e4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1932e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1932e8: 0x26b5000e  addiu       $s5, $s5, 0xE
    ctx->pc = 0x1932e8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 14));
    // 0x1932ec: 0x2a430002  slti        $v1, $s2, 0x2
    ctx->pc = 0x1932ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1932f0: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1932F0u;
    {
        const bool branch_taken_0x1932f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1932F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1932F0u;
            // 0x1932f4: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1932f0) {
            ctx->pc = 0x19329Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19329c;
        }
    }
    ctx->pc = 0x1932F8u;
    // 0x1932f8: 0x10000155  b           . + 4 + (0x155 << 2)
    ctx->pc = 0x1932F8u;
    {
        const bool branch_taken_0x1932f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1932f8) {
            ctx->pc = 0x193850u;
            goto label_193850;
        }
    }
    ctx->pc = 0x193300u;
label_193300:
    // 0x193300: 0x3c024130  lui         $v0, 0x4130
    ctx->pc = 0x193300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16688 << 16));
    // 0x193304: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x193304u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x193308: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x193308u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x19330c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x19330cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x193310: 0x3c034178  lui         $v1, 0x4178
    ctx->pc = 0x193310u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16760 << 16));
    // 0x193314: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x193314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x193318: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x193318u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x19331c: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x19331cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x193320: 0x24846118  addiu       $a0, $a0, 0x6118
    ctx->pc = 0x193320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24856));
    // 0x193324: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x193324u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x193328: 0x24a5d538  addiu       $a1, $a1, -0x2AC8
    ctx->pc = 0x193328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956344));
    // 0x19332c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19332cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193330: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x193330u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x193334: 0xc05e230  jal         func_1788C0
    ctx->pc = 0x193334u;
    SET_GPR_U32(ctx, 31, 0x19333Cu);
    ctx->pc = 0x193338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193334u;
            // 0x193338: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1788C0u;
    if (runtime->hasFunction(0x1788C0u)) {
        auto targetFn = runtime->lookupFunction(0x1788C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19333Cu; }
        if (ctx->pc != 0x19333Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001788C0_0x1788c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19333Cu; }
        if (ctx->pc != 0x19333Cu) { return; }
    }
    ctx->pc = 0x19333Cu;
label_19333c:
    // 0x19333c: 0x10000144  b           . + 4 + (0x144 << 2)
    ctx->pc = 0x19333Cu;
    {
        const bool branch_taken_0x19333c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19333c) {
            ctx->pc = 0x193850u;
            goto label_193850;
        }
    }
    ctx->pc = 0x193344u;
label_193344:
    // 0x193344: 0x50400051  beql        $v0, $zero, . + 4 + (0x51 << 2)
    ctx->pc = 0x193344u;
    {
        const bool branch_taken_0x193344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x193344) {
            ctx->pc = 0x193348u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x193344u;
            // 0x193348: 0x3c0343f4  lui         $v1, 0x43F4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17396 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19348Cu;
            goto label_19348c;
        }
    }
    ctx->pc = 0x19334Cu;
    // 0x19334c: 0xc064b58  jal         func_192D60
    ctx->pc = 0x19334Cu;
    SET_GPR_U32(ctx, 31, 0x193354u);
    ctx->pc = 0x192D60u;
    goto label_192d60;
    ctx->pc = 0x193354u;
label_193354:
    // 0x193354: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x193354u;
    {
        const bool branch_taken_0x193354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x193354) {
            ctx->pc = 0x193358u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x193354u;
            // 0x193358: 0x3c024400  lui         $v0, 0x4400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1933B8u;
            goto label_1933b8;
        }
    }
    ctx->pc = 0x19335Cu;
    // 0x19335c: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x19335cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x193360: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x193360u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x193364: 0x4482b000  mtc1        $v0, $f22
    ctx->pc = 0x193364u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x193368: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x193368u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x19336c: 0x3c024178  lui         $v0, 0x4178
    ctx->pc = 0x19336cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16760 << 16));
    // 0x193370: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x193370u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x193374: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x193374u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x193378: 0x24846128  addiu       $a0, $a0, 0x6128
    ctx->pc = 0x193378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24872));
    // 0x19337c: 0x3c024130  lui         $v0, 0x4130
    ctx->pc = 0x19337cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16688 << 16));
    // 0x193380: 0x24a5d538  addiu       $a1, $a1, -0x2AC8
    ctx->pc = 0x193380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956344));
    // 0x193384: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x193384u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x193388: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x193388u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19338c: 0x3c0243f8  lui         $v0, 0x43F8
    ctx->pc = 0x19338cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17400 << 16));
    // 0x193390: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x193390u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x193394: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x193394u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x193398: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x193398u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19339c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x19339cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1933a0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1933a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1933a4: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x1933a4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x1933a8: 0xc05e230  jal         func_1788C0
    ctx->pc = 0x1933A8u;
    SET_GPR_U32(ctx, 31, 0x1933B0u);
    ctx->pc = 0x1933ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1933A8u;
            // 0x1933ac: 0x4600b3c6  mov.s       $f15, $f22 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1788C0u;
    if (runtime->hasFunction(0x1788C0u)) {
        auto targetFn = runtime->lookupFunction(0x1788C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1933B0u; }
        if (ctx->pc != 0x1933B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001788C0_0x1788c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1933B0u; }
        if (ctx->pc != 0x1933B0u) { return; }
    }
    ctx->pc = 0x1933B0u;
label_1933b0:
    // 0x1933b0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1933B0u;
    {
        const bool branch_taken_0x1933b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1933B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1933B0u;
            // 0x1933b4: 0x96060014  lhu         $a2, 0x14($s0) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1933b0) {
            ctx->pc = 0x19340Cu;
            goto label_19340c;
        }
    }
    ctx->pc = 0x1933B8u;
label_1933b8:
    // 0x1933b8: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1933b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1933bc: 0x4482b000  mtc1        $v0, $f22
    ctx->pc = 0x1933bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1933c0: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1933c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x1933c4: 0x3c024178  lui         $v0, 0x4178
    ctx->pc = 0x1933c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16760 << 16));
    // 0x1933c8: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x1933c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x1933cc: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x1933ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1933d0: 0x24846120  addiu       $a0, $a0, 0x6120
    ctx->pc = 0x1933d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24864));
    // 0x1933d4: 0x3c024130  lui         $v0, 0x4130
    ctx->pc = 0x1933d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16688 << 16));
    // 0x1933d8: 0x24a5d538  addiu       $a1, $a1, -0x2AC8
    ctx->pc = 0x1933d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956344));
    // 0x1933dc: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1933dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1933e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1933e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1933e4: 0x3c0243f8  lui         $v0, 0x43F8
    ctx->pc = 0x1933e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17400 << 16));
    // 0x1933e8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1933e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1933ec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1933ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1933f0: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1933f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1933f4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1933f4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1933f8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1933f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1933fc: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x1933fcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x193400: 0xc05e230  jal         func_1788C0
    ctx->pc = 0x193400u;
    SET_GPR_U32(ctx, 31, 0x193408u);
    ctx->pc = 0x193404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193400u;
            // 0x193404: 0x4600b3c6  mov.s       $f15, $f22 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1788C0u;
    if (runtime->hasFunction(0x1788C0u)) {
        auto targetFn = runtime->lookupFunction(0x1788C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193408u; }
        if (ctx->pc != 0x193408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001788C0_0x1788c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193408u; }
        if (ctx->pc != 0x193408u) { return; }
    }
    ctx->pc = 0x193408u;
label_193408:
    // 0x193408: 0x96060014  lhu         $a2, 0x14($s0)
    ctx->pc = 0x193408u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
label_19340c:
    // 0x19340c: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x19340cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x193410: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x193410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x193414: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x193414u;
    SET_GPR_U32(ctx, 31, 0x19341Cu);
    ctx->pc = 0x193418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193414u;
            // 0x193418: 0x24a5e8c8  addiu       $a1, $a1, -0x1738 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (runtime->hasFunction(0x1297C8u)) {
        auto targetFn = runtime->lookupFunction(0x1297C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19341Cu; }
        if (ctx->pc != 0x19341Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001297C8_0x1297c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19341Cu; }
        if (ctx->pc != 0x19341Cu) { return; }
    }
    ctx->pc = 0x19341Cu;
label_19341c:
    // 0x19341c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x19341cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193420: 0x24150228  addiu       $s5, $zero, 0x228
    ctx->pc = 0x193420u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
    // 0x193424: 0x27b40080  addiu       $s4, $sp, 0x80
    ctx->pc = 0x193424u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_193428:
    // 0x193428: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x193428u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19342c: 0x82830000  lb          $v1, 0x0($s4)
    ctx->pc = 0x19342cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x193430: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x193430u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x193434: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x193434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x193438: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x193438u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x19343c: 0x244260c0  addiu       $v0, $v0, 0x60C0
    ctx->pc = 0x19343cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24768));
    // 0x193440: 0x2463ffe4  addiu       $v1, $v1, -0x1C
    ctx->pc = 0x193440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967268));
    // 0x193444: 0x24a5d538  addiu       $a1, $a1, -0x2AC8
    ctx->pc = 0x193444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956344));
    // 0x193448: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x193448u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x19344c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19344cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193450: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x193450u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x193454: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x193454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x193458: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x193458u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19345c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x19345cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193460: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x193460u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x193464: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x193464u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x193468: 0xc05e230  jal         func_1788C0
    ctx->pc = 0x193468u;
    SET_GPR_U32(ctx, 31, 0x193470u);
    ctx->pc = 0x19346Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193468u;
            // 0x19346c: 0x4600b3c6  mov.s       $f15, $f22 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1788C0u;
    if (runtime->hasFunction(0x1788C0u)) {
        auto targetFn = runtime->lookupFunction(0x1788C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193470u; }
        if (ctx->pc != 0x193470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001788C0_0x1788c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193470u; }
        if (ctx->pc != 0x193470u) { return; }
    }
    ctx->pc = 0x193470u;
label_193470:
    // 0x193470: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x193470u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x193474: 0x26b5000e  addiu       $s5, $s5, 0xE
    ctx->pc = 0x193474u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 14));
    // 0x193478: 0x2a430002  slti        $v1, $s2, 0x2
    ctx->pc = 0x193478u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x19347c: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x19347Cu;
    {
        const bool branch_taken_0x19347c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x193480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19347Cu;
            // 0x193480: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19347c) {
            ctx->pc = 0x193428u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_193428;
        }
    }
    ctx->pc = 0x193484u;
    // 0x193484: 0x100000f2  b           . + 4 + (0xF2 << 2)
    ctx->pc = 0x193484u;
    {
        const bool branch_taken_0x193484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193484) {
            ctx->pc = 0x193850u;
            goto label_193850;
        }
    }
    ctx->pc = 0x19348Cu;
label_19348c:
    // 0x19348c: 0x3c024130  lui         $v0, 0x4130
    ctx->pc = 0x19348cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16688 << 16));
    // 0x193490: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x193490u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x193494: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x193494u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x193498: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x193498u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x19349c: 0x3c034178  lui         $v1, 0x4178
    ctx->pc = 0x19349cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16760 << 16));
    // 0x1934a0: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x1934a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x1934a4: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x1934a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x1934a8: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x1934a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1934ac: 0x24846118  addiu       $a0, $a0, 0x6118
    ctx->pc = 0x1934acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24856));
    // 0x1934b0: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x1934b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1934b4: 0x24a5d538  addiu       $a1, $a1, -0x2AC8
    ctx->pc = 0x1934b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956344));
    // 0x1934b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1934b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1934bc: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1934bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1934c0: 0xc05e230  jal         func_1788C0
    ctx->pc = 0x1934C0u;
    SET_GPR_U32(ctx, 31, 0x1934C8u);
    ctx->pc = 0x1934C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1934C0u;
            // 0x1934c4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1788C0u;
    if (runtime->hasFunction(0x1788C0u)) {
        auto targetFn = runtime->lookupFunction(0x1788C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1934C8u; }
        if (ctx->pc != 0x1934C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001788C0_0x1788c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1934C8u; }
        if (ctx->pc != 0x1934C8u) { return; }
    }
    ctx->pc = 0x1934C8u;
label_1934c8:
    // 0x1934c8: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x1934C8u;
    {
        const bool branch_taken_0x1934c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1934c8) {
            ctx->pc = 0x193850u;
            goto label_193850;
        }
    }
    ctx->pc = 0x1934D0u;
label_1934d0:
    // 0x1934d0: 0x52270073  beql        $s1, $a3, . + 4 + (0x73 << 2)
    ctx->pc = 0x1934D0u;
    {
        const bool branch_taken_0x1934d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 7));
        if (branch_taken_0x1934d0) {
            ctx->pc = 0x1934D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1934D0u;
            // 0x1934d4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1936A0u;
            goto label_1936a0;
        }
    }
    ctx->pc = 0x1934D8u;
    // 0x1934d8: 0x52200003  beql        $s1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1934D8u;
    {
        const bool branch_taken_0x1934d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1934d8) {
            ctx->pc = 0x1934DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1934D8u;
            // 0x1934dc: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1934E8u;
            goto label_1934e8;
        }
    }
    ctx->pc = 0x1934E0u;
    // 0x1934e0: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x1934E0u;
    {
        const bool branch_taken_0x1934e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1934e0) {
            ctx->pc = 0x193850u;
            goto label_193850;
        }
    }
    ctx->pc = 0x1934E8u;
label_1934e8:
    // 0x1934e8: 0x50a20005  beql        $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1934E8u;
    {
        const bool branch_taken_0x1934e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1934e8) {
            ctx->pc = 0x1934ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1934E8u;
            // 0x1934ec: 0x3c034280  lui         $v1, 0x4280 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x193500u;
            goto label_193500;
        }
    }
    ctx->pc = 0x1934F0u;
    // 0x1934f0: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1934f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1934f4: 0x54a20037  bnel        $a1, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x1934F4u;
    {
        const bool branch_taken_0x1934f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1934f4) {
            ctx->pc = 0x1934F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1934F4u;
            // 0x1934f8: 0x3c034280  lui         $v1, 0x4280 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1935D4u;
            goto label_1935d4;
        }
    }
    ctx->pc = 0x1934FCu;
    // 0x1934fc: 0x3c034280  lui         $v1, 0x4280
    ctx->pc = 0x1934fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
label_193500:
    // 0x193500: 0x3c024150  lui         $v0, 0x4150
    ctx->pc = 0x193500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16720 << 16));
    // 0x193504: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x193504u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x193508: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x193508u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x19350c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x19350cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x193510: 0x3c034178  lui         $v1, 0x4178
    ctx->pc = 0x193510u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16760 << 16));
    // 0x193514: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x193514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x193518: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x193518u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x19351c: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x19351cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x193520: 0x24846120  addiu       $a0, $a0, 0x6120
    ctx->pc = 0x193520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24864));
    // 0x193524: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x193524u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x193528: 0x24a5d538  addiu       $a1, $a1, -0x2AC8
    ctx->pc = 0x193528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956344));
    // 0x19352c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19352cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193530: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x193530u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x193534: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x193534u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x193538: 0xc05e230  jal         func_1788C0
    ctx->pc = 0x193538u;
    SET_GPR_U32(ctx, 31, 0x193540u);
    ctx->pc = 0x19353Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193538u;
            // 0x19353c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1788C0u;
    if (runtime->hasFunction(0x1788C0u)) {
        auto targetFn = runtime->lookupFunction(0x1788C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193540u; }
        if (ctx->pc != 0x193540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001788C0_0x1788c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193540u; }
        if (ctx->pc != 0x193540u) { return; }
    }
    ctx->pc = 0x193540u;
label_193540:
    // 0x193540: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x193540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x193544: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x193544u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x193548: 0x8c46da10  lw          $a2, -0x25F0($v0)
    ctx->pc = 0x193548u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957584)));
    // 0x19354c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x19354cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x193550: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x193550u;
    SET_GPR_U32(ctx, 31, 0x193558u);
    ctx->pc = 0x193554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193550u;
            // 0x193554: 0x24a5e8d0  addiu       $a1, $a1, -0x1730 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (runtime->hasFunction(0x1297C8u)) {
        auto targetFn = runtime->lookupFunction(0x1297C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193558u; }
        if (ctx->pc != 0x193558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001297C8_0x1297c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193558u; }
        if (ctx->pc != 0x193558u) { return; }
    }
    ctx->pc = 0x193558u;
label_193558:
    // 0x193558: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x193558u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19355c: 0x24140078  addiu       $s4, $zero, 0x78
    ctx->pc = 0x19355cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x193560: 0x27b30080  addiu       $s3, $sp, 0x80
    ctx->pc = 0x193560u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_193564:
    // 0x193564: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x193564u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193568: 0x82620000  lb          $v0, 0x0($s3)
    ctx->pc = 0x193568u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x19356c: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x19356cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x193570: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x193570u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x193574: 0x3c094150  lui         $t1, 0x4150
    ctx->pc = 0x193574u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16720 << 16));
    // 0x193578: 0x3c034178  lui         $v1, 0x4178
    ctx->pc = 0x193578u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16760 << 16));
    // 0x19357c: 0x2445ffe4  addiu       $a1, $v0, -0x1C
    ctx->pc = 0x19357cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967268));
    // 0x193580: 0x248460c0  addiu       $a0, $a0, 0x60C0
    ctx->pc = 0x193580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24768));
    // 0x193584: 0x530c0  sll         $a2, $a1, 3
    ctx->pc = 0x193584u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x193588: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x193588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x19358c: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x19358cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x193590: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x193590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x193594: 0x24a5d538  addiu       $a1, $a1, -0x2AC8
    ctx->pc = 0x193594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956344));
    // 0x193598: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x193598u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19359c: 0x44896800  mtc1        $t1, $f13
    ctx->pc = 0x19359cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1935a0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1935a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1935a4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1935a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1935a8: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x1935a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1935ac: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x1935acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1935b0: 0xc05e230  jal         func_1788C0
    ctx->pc = 0x1935B0u;
    SET_GPR_U32(ctx, 31, 0x1935B8u);
    ctx->pc = 0x1935B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1935B0u;
            // 0x1935b4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1788C0u;
    if (runtime->hasFunction(0x1788C0u)) {
        auto targetFn = runtime->lookupFunction(0x1788C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1935B8u; }
        if (ctx->pc != 0x1935B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001788C0_0x1788c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1935B8u; }
        if (ctx->pc != 0x1935B8u) { return; }
    }
    ctx->pc = 0x1935B8u;
label_1935b8:
    // 0x1935b8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1935b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1935bc: 0x2694000e  addiu       $s4, $s4, 0xE
    ctx->pc = 0x1935bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 14));
    // 0x1935c0: 0x2a430003  slti        $v1, $s2, 0x3
    ctx->pc = 0x1935c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1935c4: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1935C4u;
    {
        const bool branch_taken_0x1935c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1935C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1935C4u;
            // 0x1935c8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1935c4) {
            ctx->pc = 0x193564u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_193564;
        }
    }
    ctx->pc = 0x1935CCu;
    // 0x1935cc: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x1935CCu;
    {
        const bool branch_taken_0x1935cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1935cc) {
            ctx->pc = 0x193850u;
            goto label_193850;
        }
    }
    ctx->pc = 0x1935D4u;
label_1935d4:
    // 0x1935d4: 0x3c024150  lui         $v0, 0x4150
    ctx->pc = 0x1935d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16720 << 16));
    // 0x1935d8: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1935d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1935dc: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1935dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x1935e0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1935e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1935e4: 0x3c034178  lui         $v1, 0x4178
    ctx->pc = 0x1935e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16760 << 16));
    // 0x1935e8: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x1935e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x1935ec: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x1935ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x1935f0: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x1935f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1935f4: 0x24846130  addiu       $a0, $a0, 0x6130
    ctx->pc = 0x1935f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24880));
    // 0x1935f8: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x1935f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1935fc: 0x24a5d538  addiu       $a1, $a1, -0x2AC8
    ctx->pc = 0x1935fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956344));
    // 0x193600: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x193600u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193604: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x193604u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x193608: 0xc05e230  jal         func_1788C0
    ctx->pc = 0x193608u;
    SET_GPR_U32(ctx, 31, 0x193610u);
    ctx->pc = 0x19360Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193608u;
            // 0x19360c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1788C0u;
    if (runtime->hasFunction(0x1788C0u)) {
        auto targetFn = runtime->lookupFunction(0x1788C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193610u; }
        if (ctx->pc != 0x193610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001788C0_0x1788c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193610u; }
        if (ctx->pc != 0x193610u) { return; }
    }
    ctx->pc = 0x193610u;
label_193610:
    // 0x193610: 0x8e060044  lw          $a2, 0x44($s0)
    ctx->pc = 0x193610u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x193614: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x193614u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x193618: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x193618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x19361c: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x19361Cu;
    SET_GPR_U32(ctx, 31, 0x193624u);
    ctx->pc = 0x193620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19361Cu;
            // 0x193620: 0x24a5e8d8  addiu       $a1, $a1, -0x1728 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (runtime->hasFunction(0x1297C8u)) {
        auto targetFn = runtime->lookupFunction(0x1297C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193624u; }
        if (ctx->pc != 0x193624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001297C8_0x1297c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193624u; }
        if (ctx->pc != 0x193624u) { return; }
    }
    ctx->pc = 0x193624u;
label_193624:
    // 0x193624: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x193624u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193628: 0x24140070  addiu       $s4, $zero, 0x70
    ctx->pc = 0x193628u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x19362c: 0x27b30080  addiu       $s3, $sp, 0x80
    ctx->pc = 0x19362cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_193630:
    // 0x193630: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x193630u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193634: 0x82620000  lb          $v0, 0x0($s3)
    ctx->pc = 0x193634u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x193638: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x193638u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x19363c: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x19363cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x193640: 0x3c094150  lui         $t1, 0x4150
    ctx->pc = 0x193640u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16720 << 16));
    // 0x193644: 0x3c034178  lui         $v1, 0x4178
    ctx->pc = 0x193644u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16760 << 16));
    // 0x193648: 0x2445ffe4  addiu       $a1, $v0, -0x1C
    ctx->pc = 0x193648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967268));
    // 0x19364c: 0x248460c0  addiu       $a0, $a0, 0x60C0
    ctx->pc = 0x19364cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24768));
    // 0x193650: 0x530c0  sll         $a2, $a1, 3
    ctx->pc = 0x193650u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x193654: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x193654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x193658: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x193658u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x19365c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x19365cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x193660: 0x24a5d538  addiu       $a1, $a1, -0x2AC8
    ctx->pc = 0x193660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956344));
    // 0x193664: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x193664u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193668: 0x44896800  mtc1        $t1, $f13
    ctx->pc = 0x193668u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x19366c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x19366cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x193670: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x193670u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x193674: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x193674u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x193678: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x193678u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x19367c: 0xc05e230  jal         func_1788C0
    ctx->pc = 0x19367Cu;
    SET_GPR_U32(ctx, 31, 0x193684u);
    ctx->pc = 0x193680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19367Cu;
            // 0x193680: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1788C0u;
    if (runtime->hasFunction(0x1788C0u)) {
        auto targetFn = runtime->lookupFunction(0x1788C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193684u; }
        if (ctx->pc != 0x193684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001788C0_0x1788c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193684u; }
        if (ctx->pc != 0x193684u) { return; }
    }
    ctx->pc = 0x193684u;
label_193684:
    // 0x193684: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x193684u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x193688: 0x2694000e  addiu       $s4, $s4, 0xE
    ctx->pc = 0x193688u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 14));
    // 0x19368c: 0x2a430008  slti        $v1, $s2, 0x8
    ctx->pc = 0x19368cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x193690: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x193690u;
    {
        const bool branch_taken_0x193690 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x193694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193690u;
            // 0x193694: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193690) {
            ctx->pc = 0x193630u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_193630;
        }
    }
    ctx->pc = 0x193698u;
    // 0x193698: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x193698u;
    {
        const bool branch_taken_0x193698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193698) {
            ctx->pc = 0x193850u;
            goto label_193850;
        }
    }
    ctx->pc = 0x1936A0u;
label_1936a0:
    // 0x1936a0: 0x50a20005  beql        $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1936A0u;
    {
        const bool branch_taken_0x1936a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1936a0) {
            ctx->pc = 0x1936A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1936A0u;
            // 0x1936a4: 0x3c0343f8  lui         $v1, 0x43F8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17400 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1936B8u;
            goto label_1936b8;
        }
    }
    ctx->pc = 0x1936A8u;
    // 0x1936a8: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1936a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1936ac: 0x54a20037  bnel        $a1, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x1936ACu;
    {
        const bool branch_taken_0x1936ac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1936ac) {
            ctx->pc = 0x1936B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1936ACu;
            // 0x1936b0: 0x3c0343d2  lui         $v1, 0x43D2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17362 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19378Cu;
            goto label_19378c;
        }
    }
    ctx->pc = 0x1936B4u;
    // 0x1936b4: 0x3c0343f8  lui         $v1, 0x43F8
    ctx->pc = 0x1936b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17400 << 16));
label_1936b8:
    // 0x1936b8: 0x3c024150  lui         $v0, 0x4150
    ctx->pc = 0x1936b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16720 << 16));
    // 0x1936bc: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1936bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1936c0: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1936c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x1936c4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1936c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1936c8: 0x3c034178  lui         $v1, 0x4178
    ctx->pc = 0x1936c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16760 << 16));
    // 0x1936cc: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x1936ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x1936d0: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x1936d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x1936d4: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x1936d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1936d8: 0x24846120  addiu       $a0, $a0, 0x6120
    ctx->pc = 0x1936d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24864));
    // 0x1936dc: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x1936dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1936e0: 0x24a5d538  addiu       $a1, $a1, -0x2AC8
    ctx->pc = 0x1936e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956344));
    // 0x1936e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1936e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1936e8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1936e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1936ec: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1936ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1936f0: 0xc05e230  jal         func_1788C0
    ctx->pc = 0x1936F0u;
    SET_GPR_U32(ctx, 31, 0x1936F8u);
    ctx->pc = 0x1936F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1936F0u;
            // 0x1936f4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1788C0u;
    if (runtime->hasFunction(0x1788C0u)) {
        auto targetFn = runtime->lookupFunction(0x1788C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1936F8u; }
        if (ctx->pc != 0x1936F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001788C0_0x1788c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1936F8u; }
        if (ctx->pc != 0x1936F8u) { return; }
    }
    ctx->pc = 0x1936F8u;
label_1936f8:
    // 0x1936f8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1936f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1936fc: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x1936fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x193700: 0x8c46da10  lw          $a2, -0x25F0($v0)
    ctx->pc = 0x193700u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957584)));
    // 0x193704: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x193704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x193708: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x193708u;
    SET_GPR_U32(ctx, 31, 0x193710u);
    ctx->pc = 0x19370Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193708u;
            // 0x19370c: 0x24a5e8d0  addiu       $a1, $a1, -0x1730 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (runtime->hasFunction(0x1297C8u)) {
        auto targetFn = runtime->lookupFunction(0x1297C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193710u; }
        if (ctx->pc != 0x193710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001297C8_0x1297c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193710u; }
        if (ctx->pc != 0x193710u) { return; }
    }
    ctx->pc = 0x193710u;
label_193710:
    // 0x193710: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x193710u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193714: 0x24140228  addiu       $s4, $zero, 0x228
    ctx->pc = 0x193714u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
    // 0x193718: 0x27b30080  addiu       $s3, $sp, 0x80
    ctx->pc = 0x193718u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_19371c:
    // 0x19371c: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x19371cu;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193720: 0x82620000  lb          $v0, 0x0($s3)
    ctx->pc = 0x193720u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x193724: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x193724u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x193728: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x193728u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x19372c: 0x3c094150  lui         $t1, 0x4150
    ctx->pc = 0x19372cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16720 << 16));
    // 0x193730: 0x3c034178  lui         $v1, 0x4178
    ctx->pc = 0x193730u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16760 << 16));
    // 0x193734: 0x2445ffe4  addiu       $a1, $v0, -0x1C
    ctx->pc = 0x193734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967268));
    // 0x193738: 0x248460c0  addiu       $a0, $a0, 0x60C0
    ctx->pc = 0x193738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24768));
    // 0x19373c: 0x530c0  sll         $a2, $a1, 3
    ctx->pc = 0x19373cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x193740: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x193740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x193744: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x193744u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x193748: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x193748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x19374c: 0x24a5d538  addiu       $a1, $a1, -0x2AC8
    ctx->pc = 0x19374cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956344));
    // 0x193750: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x193750u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193754: 0x44896800  mtc1        $t1, $f13
    ctx->pc = 0x193754u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x193758: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x193758u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19375c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x19375cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x193760: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x193760u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x193764: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x193764u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x193768: 0xc05e230  jal         func_1788C0
    ctx->pc = 0x193768u;
    SET_GPR_U32(ctx, 31, 0x193770u);
    ctx->pc = 0x19376Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193768u;
            // 0x19376c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1788C0u;
    if (runtime->hasFunction(0x1788C0u)) {
        auto targetFn = runtime->lookupFunction(0x1788C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193770u; }
        if (ctx->pc != 0x193770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001788C0_0x1788c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193770u; }
        if (ctx->pc != 0x193770u) { return; }
    }
    ctx->pc = 0x193770u;
label_193770:
    // 0x193770: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x193770u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x193774: 0x2694000e  addiu       $s4, $s4, 0xE
    ctx->pc = 0x193774u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 14));
    // 0x193778: 0x2a430003  slti        $v1, $s2, 0x3
    ctx->pc = 0x193778u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x19377c: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x19377Cu;
    {
        const bool branch_taken_0x19377c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x193780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19377Cu;
            // 0x193780: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19377c) {
            ctx->pc = 0x19371Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19371c;
        }
    }
    ctx->pc = 0x193784u;
    // 0x193784: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x193784u;
    {
        const bool branch_taken_0x193784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193784) {
            ctx->pc = 0x193850u;
            goto label_193850;
        }
    }
    ctx->pc = 0x19378Cu;
label_19378c:
    // 0x19378c: 0x3c024150  lui         $v0, 0x4150
    ctx->pc = 0x19378cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16720 << 16));
    // 0x193790: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x193790u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x193794: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x193794u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x193798: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x193798u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x19379c: 0x3c034178  lui         $v1, 0x4178
    ctx->pc = 0x19379cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16760 << 16));
    // 0x1937a0: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x1937a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x1937a4: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x1937a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x1937a8: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x1937a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1937ac: 0x24846130  addiu       $a0, $a0, 0x6130
    ctx->pc = 0x1937acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24880));
    // 0x1937b0: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x1937b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1937b4: 0x24a5d538  addiu       $a1, $a1, -0x2AC8
    ctx->pc = 0x1937b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956344));
    // 0x1937b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1937b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1937bc: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1937bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1937c0: 0xc05e230  jal         func_1788C0
    ctx->pc = 0x1937C0u;
    SET_GPR_U32(ctx, 31, 0x1937C8u);
    ctx->pc = 0x1937C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1937C0u;
            // 0x1937c4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1788C0u;
    if (runtime->hasFunction(0x1788C0u)) {
        auto targetFn = runtime->lookupFunction(0x1788C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1937C8u; }
        if (ctx->pc != 0x1937C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001788C0_0x1788c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1937C8u; }
        if (ctx->pc != 0x1937C8u) { return; }
    }
    ctx->pc = 0x1937C8u;
label_1937c8:
    // 0x1937c8: 0x8e060044  lw          $a2, 0x44($s0)
    ctx->pc = 0x1937c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1937cc: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x1937ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x1937d0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1937d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1937d4: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x1937D4u;
    SET_GPR_U32(ctx, 31, 0x1937DCu);
    ctx->pc = 0x1937D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1937D4u;
            // 0x1937d8: 0x24a5e8d8  addiu       $a1, $a1, -0x1728 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (runtime->hasFunction(0x1297C8u)) {
        auto targetFn = runtime->lookupFunction(0x1297C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1937DCu; }
        if (ctx->pc != 0x1937DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001297C8_0x1297c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1937DCu; }
        if (ctx->pc != 0x1937DCu) { return; }
    }
    ctx->pc = 0x1937DCu;
label_1937dc:
    // 0x1937dc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1937dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1937e0: 0x241401d8  addiu       $s4, $zero, 0x1D8
    ctx->pc = 0x1937e0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 472));
    // 0x1937e4: 0x27b30080  addiu       $s3, $sp, 0x80
    ctx->pc = 0x1937e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1937e8:
    // 0x1937e8: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x1937e8u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1937ec: 0x82620000  lb          $v0, 0x0($s3)
    ctx->pc = 0x1937ecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1937f0: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1937f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1937f4: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1937f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x1937f8: 0x3c094150  lui         $t1, 0x4150
    ctx->pc = 0x1937f8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16720 << 16));
    // 0x1937fc: 0x3c034178  lui         $v1, 0x4178
    ctx->pc = 0x1937fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16760 << 16));
    // 0x193800: 0x2445ffe4  addiu       $a1, $v0, -0x1C
    ctx->pc = 0x193800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967268));
    // 0x193804: 0x248460c0  addiu       $a0, $a0, 0x60C0
    ctx->pc = 0x193804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24768));
    // 0x193808: 0x530c0  sll         $a2, $a1, 3
    ctx->pc = 0x193808u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x19380c: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x19380cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x193810: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x193810u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x193814: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x193814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x193818: 0x24a5d538  addiu       $a1, $a1, -0x2AC8
    ctx->pc = 0x193818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956344));
    // 0x19381c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19381cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193820: 0x44896800  mtc1        $t1, $f13
    ctx->pc = 0x193820u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x193824: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x193824u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x193828: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x193828u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19382c: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x19382cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x193830: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x193830u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x193834: 0xc05e230  jal         func_1788C0
    ctx->pc = 0x193834u;
    SET_GPR_U32(ctx, 31, 0x19383Cu);
    ctx->pc = 0x193838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193834u;
            // 0x193838: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1788C0u;
    if (runtime->hasFunction(0x1788C0u)) {
        auto targetFn = runtime->lookupFunction(0x1788C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19383Cu; }
        if (ctx->pc != 0x19383Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001788C0_0x1788c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19383Cu; }
        if (ctx->pc != 0x19383Cu) { return; }
    }
    ctx->pc = 0x19383Cu;
label_19383c:
    // 0x19383c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x19383cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x193840: 0x2694000e  addiu       $s4, $s4, 0xE
    ctx->pc = 0x193840u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 14));
    // 0x193844: 0x2a430008  slti        $v1, $s2, 0x8
    ctx->pc = 0x193844u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x193848: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x193848u;
    {
        const bool branch_taken_0x193848 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19384Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193848u;
            // 0x19384c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193848) {
            ctx->pc = 0x1937E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1937e8;
        }
    }
    ctx->pc = 0x193850u;
label_193850:
    // 0x193850: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x193850u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x193854: 0x9063f35a  lbu         $v1, -0xCA6($v1)
    ctx->pc = 0x193854u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294964058)));
    // 0x193858: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x193858u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19385c: 0x14670038  bne         $v1, $a3, . + 4 + (0x38 << 2)
    ctx->pc = 0x19385Cu;
    {
        const bool branch_taken_0x19385c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x19385c) {
            ctx->pc = 0x193940u;
            goto label_193940;
        }
    }
    ctx->pc = 0x193864u;
    // 0x193864: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x193864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x193868: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x193868u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x19386c: 0xc461c8a8  lwc1        $f1, -0x3758($v1)
    ctx->pc = 0x19386cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294953128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x193870: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x193870u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193874: 0x0  nop
    ctx->pc = 0x193874u;
    // NOP
    // 0x193878: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x193878u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19387c: 0x45010030  bc1t        . + 4 + (0x30 << 2)
    ctx->pc = 0x19387Cu;
    {
        const bool branch_taken_0x19387c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19387c) {
            ctx->pc = 0x193940u;
            goto label_193940;
        }
    }
    ctx->pc = 0x193884u;
    // 0x193884: 0x52200019  beql        $s1, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x193884u;
    {
        const bool branch_taken_0x193884 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x193884) {
            ctx->pc = 0x193888u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x193884u;
            // 0x193888: 0x3c024278  lui         $v0, 0x4278 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17016 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1938ECu;
            goto label_1938ec;
        }
    }
    ctx->pc = 0x19388Cu;
    // 0x19388c: 0x3c02440a  lui         $v0, 0x440A
    ctx->pc = 0x19388cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17418 << 16));
    // 0x193890: 0x9204002c  lbu         $a0, 0x2C($s0)
    ctx->pc = 0x193890u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x193894: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x193894u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x193898: 0x3c05424c  lui         $a1, 0x424C
    ctx->pc = 0x193898u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16972 << 16));
    // 0x19389c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19389cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1938a0: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x1938a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x1938a4: 0xc440c8d4  lwc1        $f0, -0x372C($v0)
    ctx->pc = 0x1938a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1938a8: 0x3c084178  lui         $t0, 0x4178
    ctx->pc = 0x1938a8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16760 << 16));
    // 0x1938ac: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1938acu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1938b0: 0x24634c70  addiu       $v1, $v1, 0x4C70
    ctx->pc = 0x1938b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19568));
    // 0x1938b4: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1938b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1938b8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1938b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1938bc: 0x46000b40  add.s       $f13, $f1, $f0
    ctx->pc = 0x1938bcu;
    ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1938c0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1938c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1938c4: 0x3c034400  lui         $v1, 0x4400
    ctx->pc = 0x1938c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17408 << 16));
    // 0x1938c8: 0x24a54290  addiu       $a1, $a1, 0x4290
    ctx->pc = 0x1938c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17040));
    // 0x1938cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1938ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1938d0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1938d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1938d4: 0x44887000  mtc1        $t0, $f14
    ctx->pc = 0x1938d4u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1938d8: 0x44837800  mtc1        $v1, $f15
    ctx->pc = 0x1938d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1938dc: 0xc05e230  jal         func_1788C0
    ctx->pc = 0x1938DCu;
    SET_GPR_U32(ctx, 31, 0x1938E4u);
    ctx->pc = 0x1938E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1938DCu;
            // 0x1938e0: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1788C0u;
    if (runtime->hasFunction(0x1788C0u)) {
        auto targetFn = runtime->lookupFunction(0x1788C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1938E4u; }
        if (ctx->pc != 0x1938E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001788C0_0x1788c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1938E4u; }
        if (ctx->pc != 0x1938E4u) { return; }
    }
    ctx->pc = 0x1938E4u;
label_1938e4:
    // 0x1938e4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1938E4u;
    {
        const bool branch_taken_0x1938e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1938e4) {
            ctx->pc = 0x193940u;
            goto label_193940;
        }
    }
    ctx->pc = 0x1938ECu;
label_1938ec:
    // 0x1938ec: 0x9204002c  lbu         $a0, 0x2C($s0)
    ctx->pc = 0x1938ecu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1938f0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1938f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1938f4: 0x3c05424c  lui         $a1, 0x424C
    ctx->pc = 0x1938f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16972 << 16));
    // 0x1938f8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1938f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1938fc: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x1938fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x193900: 0xc440c8d4  lwc1        $f0, -0x372C($v0)
    ctx->pc = 0x193900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193904: 0x3c084178  lui         $t0, 0x4178
    ctx->pc = 0x193904u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16760 << 16));
    // 0x193908: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x193908u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19390c: 0x24634c70  addiu       $v1, $v1, 0x4C70
    ctx->pc = 0x19390cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19568));
    // 0x193910: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x193910u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x193914: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x193914u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x193918: 0x46000b40  add.s       $f13, $f1, $f0
    ctx->pc = 0x193918u;
    ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x19391c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x19391cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x193920: 0x3c034400  lui         $v1, 0x4400
    ctx->pc = 0x193920u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17408 << 16));
    // 0x193924: 0x24a54290  addiu       $a1, $a1, 0x4290
    ctx->pc = 0x193924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17040));
    // 0x193928: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x193928u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19392c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x19392cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193930: 0x44887000  mtc1        $t0, $f14
    ctx->pc = 0x193930u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x193934: 0x44837800  mtc1        $v1, $f15
    ctx->pc = 0x193934u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x193938: 0xc05e230  jal         func_1788C0
    ctx->pc = 0x193938u;
    SET_GPR_U32(ctx, 31, 0x193940u);
    ctx->pc = 0x19393Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193938u;
            // 0x19393c: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1788C0u;
    if (runtime->hasFunction(0x1788C0u)) {
        auto targetFn = runtime->lookupFunction(0x1788C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193940u; }
        if (ctx->pc != 0x193940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001788C0_0x1788c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193940u; }
        if (ctx->pc != 0x193940u) { return; }
    }
    ctx->pc = 0x193940u;
label_193940:
    // 0x193940: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x193940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_193944:
    // 0x193944: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x193944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x193948: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x193948u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19394c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x19394cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x193950: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x193950u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x193954: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x193954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x193958: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x193958u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19395c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x19395cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x193960: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x193960u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x193964: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x193964u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193968: 0x3e00008  jr          $ra
    ctx->pc = 0x193968u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19396Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193968u;
            // 0x19396c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x193970u;
    ctx->pc = 0x193970u;
}
