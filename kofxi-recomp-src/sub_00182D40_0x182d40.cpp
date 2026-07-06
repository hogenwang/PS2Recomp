#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00182D40
// Address: 0x182d40 - 0x183340
void sub_00182D40_0x182d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00182D40_0x182d40");
#endif

    switch (ctx->pc) {
        case 0x182dbcu: goto label_182dbc;
        case 0x182e0cu: goto label_182e0c;
        case 0x182e1cu: goto label_182e1c;
        case 0x182ea0u: goto label_182ea0;
        case 0x182eb0u: goto label_182eb0;
        case 0x182f1cu: goto label_182f1c;
        case 0x182f54u: goto label_182f54;
        case 0x182f68u: goto label_182f68;
        case 0x182f78u: goto label_182f78;
        case 0x182fa8u: goto label_182fa8;
        case 0x183054u: goto label_183054;
        case 0x183110u: goto label_183110;
        case 0x183118u: goto label_183118;
        case 0x183194u: goto label_183194;
        case 0x1831a8u: goto label_1831a8;
        default: break;
    }

    ctx->pc = 0x182d40u;

    // 0x182d40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x182d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x182d44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x182d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x182d48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x182d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x182d4c: 0x8c870538  lw          $a3, 0x538($a0)
    ctx->pc = 0x182d4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1336)));
    // 0x182d50: 0x30e38000  andi        $v1, $a3, 0x8000
    ctx->pc = 0x182d50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32768);
    // 0x182d54: 0x14600176  bnez        $v1, . + 4 + (0x176 << 2)
    ctx->pc = 0x182D54u;
    {
        const bool branch_taken_0x182d54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x182D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182D54u;
            // 0x182d58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182d54) {
            ctx->pc = 0x183330u;
            goto label_183330;
        }
    }
    ctx->pc = 0x182D5Cu;
    // 0x182d5c: 0x8e060530  lw          $a2, 0x530($s0)
    ctx->pc = 0x182d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1328)));
    // 0x182d60: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x182d60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x182d64: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x182d64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x182d68: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x182D68u;
    {
        const bool branch_taken_0x182d68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x182d68) {
            ctx->pc = 0x182D6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x182D68u;
            // 0x182d6c: 0x82060514  lb          $a2, 0x514($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1300)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x182D94u;
            goto label_182d94;
        }
    }
    ctx->pc = 0x182D70u;
    // 0x182d70: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x182d70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x182d74: 0x5460016f  bnel        $v1, $zero, . + 4 + (0x16F << 2)
    ctx->pc = 0x182D74u;
    {
        const bool branch_taken_0x182d74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x182d74) {
            ctx->pc = 0x182D78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x182D74u;
            // 0x182d78: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x183334u;
            goto label_183334;
        }
    }
    ctx->pc = 0x182D7Cu;
    // 0x182d7c: 0x6187c  dsll32      $v1, $a2, 1
    ctx->pc = 0x182d7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 1));
    // 0x182d80: 0x3187e  dsrl32      $v1, $v1, 1
    ctx->pc = 0x182d80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
    // 0x182d84: 0xae030530  sw          $v1, 0x530($s0)
    ctx->pc = 0x182d84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1328), GPR_U32(ctx, 3));
    // 0x182d88: 0x10000169  b           . + 4 + (0x169 << 2)
    ctx->pc = 0x182D88u;
    {
        const bool branch_taken_0x182d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x182d88) {
            ctx->pc = 0x183330u;
            goto label_183330;
        }
    }
    ctx->pc = 0x182D90u;
    // 0x182d90: 0x82060514  lb          $a2, 0x514($s0)
    ctx->pc = 0x182d90u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1300)));
label_182d94:
    // 0x182d94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x182d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x182d98: 0x14c30006  bne         $a2, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x182D98u;
    {
        const bool branch_taken_0x182d98 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x182d98) {
            ctx->pc = 0x182DB4u;
            goto label_182db4;
        }
    }
    ctx->pc = 0x182DA0u;
    // 0x182da0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x182da0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x182da4: 0x34637fff  ori         $v1, $v1, 0x7FFF
    ctx->pc = 0x182da4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32767);
    // 0x182da8: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x182da8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x182dac: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x182DACu;
    {
        const bool branch_taken_0x182dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182DACu;
            // 0x182db0: 0xae030538  sw          $v1, 0x538($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1336), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182dac) {
            ctx->pc = 0x182F78u;
            goto label_182f78;
        }
    }
    ctx->pc = 0x182DB4u;
label_182db4:
    // 0x182db4: 0xc060b18  jal         func_182C60
    ctx->pc = 0x182DB4u;
    SET_GPR_U32(ctx, 31, 0x182DBCu);
    ctx->pc = 0x182C60u;
    if (runtime->hasFunction(0x182C60u)) {
        auto targetFn = runtime->lookupFunction(0x182C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182DBCu; }
        if (ctx->pc != 0x182DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182C60_0x182c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182DBCu; }
        if (ctx->pc != 0x182DBCu) { return; }
    }
    ctx->pc = 0x182DBCu;
label_182dbc:
    // 0x182dbc: 0x5040006f  beql        $v0, $zero, . + 4 + (0x6F << 2)
    ctx->pc = 0x182DBCu;
    {
        const bool branch_taken_0x182dbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x182dbc) {
            ctx->pc = 0x182DC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x182DBCu;
            // 0x182dc0: 0x8e030538  lw          $v1, 0x538($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1336)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x182F7Cu;
            goto label_182f7c;
        }
    }
    ctx->pc = 0x182DC4u;
    // 0x182dc4: 0x920204f0  lbu         $v0, 0x4F0($s0)
    ctx->pc = 0x182dc4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1264)));
    // 0x182dc8: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x182dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x182dcc: 0x54400051  bnel        $v0, $zero, . + 4 + (0x51 << 2)
    ctx->pc = 0x182DCCu;
    {
        const bool branch_taken_0x182dcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x182dcc) {
            ctx->pc = 0x182DD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x182DCCu;
            // 0x182dd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x182F14u;
            goto label_182f14;
        }
    }
    ctx->pc = 0x182DD4u;
    // 0x182dd4: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x182dd4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x182dd8: 0x284202a0  slti        $v0, $v0, 0x2A0
    ctx->pc = 0x182dd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)672) ? 1 : 0);
    // 0x182ddc: 0x1440004c  bnez        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x182DDCu;
    {
        const bool branch_taken_0x182ddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x182ddc) {
            ctx->pc = 0x182F10u;
            goto label_182f10;
        }
    }
    ctx->pc = 0x182DE4u;
    // 0x182de4: 0x8e030498  lw          $v1, 0x498($s0)
    ctx->pc = 0x182de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1176)));
    // 0x182de8: 0x30620400  andi        $v0, $v1, 0x400
    ctx->pc = 0x182de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x182dec: 0x50400024  beql        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x182DECu;
    {
        const bool branch_taken_0x182dec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x182dec) {
            ctx->pc = 0x182DF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x182DECu;
            // 0x182df0: 0x30620800  andi        $v0, $v1, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
            ctx->pc = 0x182E80u;
            goto label_182e80;
        }
    }
    ctx->pc = 0x182DF4u;
    // 0x182df4: 0x24020125  addiu       $v0, $zero, 0x125
    ctx->pc = 0x182df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
    // 0x182df8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182dfc: 0xa60200f2  sh          $v0, 0xF2($s0)
    ctx->pc = 0x182dfcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 242), (uint16_t)GPR_U32(ctx, 2));
    // 0x182e00: 0x960200f2  lhu         $v0, 0xF2($s0)
    ctx->pc = 0x182e00u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 242)));
    // 0x182e04: 0xc05fa8c  jal         func_17EA30
    ctx->pc = 0x182E04u;
    SET_GPR_U32(ctx, 31, 0x182E0Cu);
    ctx->pc = 0x182E08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182E04u;
            // 0x182e08: 0xa602050c  sh          $v0, 0x50C($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1292), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17EA30u;
    if (runtime->hasFunction(0x17EA30u)) {
        auto targetFn = runtime->lookupFunction(0x17EA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182E0Cu; }
        if (ctx->pc != 0x182E0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017EA30_0x17ea30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182E0Cu; }
        if (ctx->pc != 0x182E0Cu) { return; }
    }
    ctx->pc = 0x182E0Cu;
label_182e0c:
    // 0x182e0c: 0x2604028c  addiu       $a0, $s0, 0x28C
    ctx->pc = 0x182e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 652));
    // 0x182e10: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x182e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x182e14: 0xc04bbe8  jal         func_12EFA0
    ctx->pc = 0x182E14u;
    SET_GPR_U32(ctx, 31, 0x182E1Cu);
    ctx->pc = 0x182E18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182E14u;
            // 0x182e18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EFA0u;
    if (runtime->hasFunction(0x12EFA0u)) {
        auto targetFn = runtime->lookupFunction(0x12EFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182E1Cu; }
        if (ctx->pc != 0x182E1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012EFA0_0x12efa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182E1Cu; }
        if (ctx->pc != 0x182E1Cu) { return; }
    }
    ctx->pc = 0x182E1Cu;
label_182e1c:
    // 0x182e1c: 0x8e060498  lw          $a2, 0x498($s0)
    ctx->pc = 0x182e1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1176)));
    // 0x182e20: 0x2405f3ff  addiu       $a1, $zero, -0xC01
    ctx->pc = 0x182e20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294964223));
    // 0x182e24: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x182e24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x182e28: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x182e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x182e2c: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x182e2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x182e30: 0xae050498  sw          $a1, 0x498($s0)
    ctx->pc = 0x182e30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1176), GPR_U32(ctx, 5));
    // 0x182e34: 0x90639780  lbu         $v1, -0x6880($v1)
    ctx->pc = 0x182e34u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940544)));
    // 0x182e38: 0x1464013d  bne         $v1, $a0, . + 4 + (0x13D << 2)
    ctx->pc = 0x182E38u;
    {
        const bool branch_taken_0x182e38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x182e38) {
            ctx->pc = 0x183330u;
            goto label_183330;
        }
    }
    ctx->pc = 0x182E40u;
    // 0x182e40: 0x8e0400dc  lw          $a0, 0xDC($s0)
    ctx->pc = 0x182e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x182e44: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x182e44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x182e48: 0x90639720  lbu         $v1, -0x68E0($v1)
    ctx->pc = 0x182e48u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940448)));
    // 0x182e4c: 0x3084000c  andi        $a0, $a0, 0xC
    ctx->pc = 0x182e4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x182e50: 0x42082  srl         $a0, $a0, 2
    ctx->pc = 0x182e50u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
    // 0x182e54: 0x14830136  bne         $a0, $v1, . + 4 + (0x136 << 2)
    ctx->pc = 0x182E54u;
    {
        const bool branch_taken_0x182e54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x182e54) {
            ctx->pc = 0x183330u;
            goto label_183330;
        }
    }
    ctx->pc = 0x182E5Cu;
    // 0x182e5c: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x182e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x182e60: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x182e60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
    // 0x182e64: 0x8c65bedc  lw          $a1, -0x4124($v1)
    ctx->pc = 0x182e64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950620)));
    // 0x182e68: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x182e68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x182e6c: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x182e6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x182e70: 0xac64bedc  sw          $a0, -0x4124($v1)
    ctx->pc = 0x182e70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950620), GPR_U32(ctx, 4));
    // 0x182e74: 0x1000012e  b           . + 4 + (0x12E << 2)
    ctx->pc = 0x182E74u;
    {
        const bool branch_taken_0x182e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x182e74) {
            ctx->pc = 0x183330u;
            goto label_183330;
        }
    }
    ctx->pc = 0x182E7Cu;
    // 0x182e7c: 0x30620800  andi        $v0, $v1, 0x800
    ctx->pc = 0x182e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
label_182e80:
    // 0x182e80: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x182E80u;
    {
        const bool branch_taken_0x182e80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x182e80) {
            ctx->pc = 0x182F10u;
            goto label_182f10;
        }
    }
    ctx->pc = 0x182E88u;
    // 0x182e88: 0x24020126  addiu       $v0, $zero, 0x126
    ctx->pc = 0x182e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x182e8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182e90: 0xa60200f2  sh          $v0, 0xF2($s0)
    ctx->pc = 0x182e90u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 242), (uint16_t)GPR_U32(ctx, 2));
    // 0x182e94: 0x960200f2  lhu         $v0, 0xF2($s0)
    ctx->pc = 0x182e94u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 242)));
    // 0x182e98: 0xc05fa8c  jal         func_17EA30
    ctx->pc = 0x182E98u;
    SET_GPR_U32(ctx, 31, 0x182EA0u);
    ctx->pc = 0x182E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182E98u;
            // 0x182e9c: 0xa602050c  sh          $v0, 0x50C($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1292), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17EA30u;
    if (runtime->hasFunction(0x17EA30u)) {
        auto targetFn = runtime->lookupFunction(0x17EA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182EA0u; }
        if (ctx->pc != 0x182EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017EA30_0x17ea30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182EA0u; }
        if (ctx->pc != 0x182EA0u) { return; }
    }
    ctx->pc = 0x182EA0u;
label_182ea0:
    // 0x182ea0: 0x2604028c  addiu       $a0, $s0, 0x28C
    ctx->pc = 0x182ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 652));
    // 0x182ea4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x182ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x182ea8: 0xc04bbe8  jal         func_12EFA0
    ctx->pc = 0x182EA8u;
    SET_GPR_U32(ctx, 31, 0x182EB0u);
    ctx->pc = 0x182EACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182EA8u;
            // 0x182eac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EFA0u;
    if (runtime->hasFunction(0x12EFA0u)) {
        auto targetFn = runtime->lookupFunction(0x12EFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182EB0u; }
        if (ctx->pc != 0x182EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012EFA0_0x12efa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182EB0u; }
        if (ctx->pc != 0x182EB0u) { return; }
    }
    ctx->pc = 0x182EB0u;
label_182eb0:
    // 0x182eb0: 0x8e060498  lw          $a2, 0x498($s0)
    ctx->pc = 0x182eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1176)));
    // 0x182eb4: 0x2405f3ff  addiu       $a1, $zero, -0xC01
    ctx->pc = 0x182eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294964223));
    // 0x182eb8: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x182eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x182ebc: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x182ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x182ec0: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x182ec0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x182ec4: 0xae050498  sw          $a1, 0x498($s0)
    ctx->pc = 0x182ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1176), GPR_U32(ctx, 5));
    // 0x182ec8: 0x90639780  lbu         $v1, -0x6880($v1)
    ctx->pc = 0x182ec8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940544)));
    // 0x182ecc: 0x14640118  bne         $v1, $a0, . + 4 + (0x118 << 2)
    ctx->pc = 0x182ECCu;
    {
        const bool branch_taken_0x182ecc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x182ecc) {
            ctx->pc = 0x183330u;
            goto label_183330;
        }
    }
    ctx->pc = 0x182ED4u;
    // 0x182ed4: 0x8e0400dc  lw          $a0, 0xDC($s0)
    ctx->pc = 0x182ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x182ed8: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x182ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x182edc: 0x90639720  lbu         $v1, -0x68E0($v1)
    ctx->pc = 0x182edcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940448)));
    // 0x182ee0: 0x3084000c  andi        $a0, $a0, 0xC
    ctx->pc = 0x182ee0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x182ee4: 0x42082  srl         $a0, $a0, 2
    ctx->pc = 0x182ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
    // 0x182ee8: 0x14830111  bne         $a0, $v1, . + 4 + (0x111 << 2)
    ctx->pc = 0x182EE8u;
    {
        const bool branch_taken_0x182ee8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x182ee8) {
            ctx->pc = 0x183330u;
            goto label_183330;
        }
    }
    ctx->pc = 0x182EF0u;
    // 0x182ef0: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x182ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x182ef4: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x182ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
    // 0x182ef8: 0x8c65bedc  lw          $a1, -0x4124($v1)
    ctx->pc = 0x182ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950620)));
    // 0x182efc: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x182efcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x182f00: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x182f00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x182f04: 0xac64bedc  sw          $a0, -0x4124($v1)
    ctx->pc = 0x182f04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950620), GPR_U32(ctx, 4));
    // 0x182f08: 0x10000109  b           . + 4 + (0x109 << 2)
    ctx->pc = 0x182F08u;
    {
        const bool branch_taken_0x182f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x182f08) {
            ctx->pc = 0x183330u;
            goto label_183330;
        }
    }
    ctx->pc = 0x182F10u;
label_182f10:
    // 0x182f10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_182f14:
    // 0x182f14: 0xc0608cc  jal         func_182330
    ctx->pc = 0x182F14u;
    SET_GPR_U32(ctx, 31, 0x182F1Cu);
    ctx->pc = 0x182F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182F14u;
            // 0x182f18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182330u;
    if (runtime->hasFunction(0x182330u)) {
        auto targetFn = runtime->lookupFunction(0x182330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182F1Cu; }
        if (ctx->pc != 0x182F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182330_0x182330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182F1Cu; }
        if (ctx->pc != 0x182F1Cu) { return; }
    }
    ctx->pc = 0x182F1Cu;
label_182f1c:
    // 0x182f1c: 0x8e040538  lw          $a0, 0x538($s0)
    ctx->pc = 0x182f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1336)));
    // 0x182f20: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x182f20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x182f24: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x182f24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x182f28: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x182f28u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x182f2c: 0x2463fffa  addiu       $v1, $v1, -0x6
    ctx->pc = 0x182f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x182f30: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x182f30u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x182f34: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x182F34u;
    {
        const bool branch_taken_0x182f34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x182f34) {
            ctx->pc = 0x182F78u;
            goto label_182f78;
        }
    }
    ctx->pc = 0x182F3Cu;
    // 0x182f3c: 0x96030292  lhu         $v1, 0x292($s0)
    ctx->pc = 0x182f3cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 658)));
    // 0x182f40: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x182f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x182f44: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x182F44u;
    {
        const bool branch_taken_0x182f44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x182f44) {
            ctx->pc = 0x182F48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x182F44u;
            // 0x182f48: 0x2604028c  addiu       $a0, $s0, 0x28C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 652));
        ctx->in_delay_slot = false;
            ctx->pc = 0x182F6Cu;
            goto label_182f6c;
        }
    }
    ctx->pc = 0x182F4Cu;
    // 0x182f4c: 0xc0627c8  jal         func_189F20
    ctx->pc = 0x182F4Cu;
    SET_GPR_U32(ctx, 31, 0x182F54u);
    ctx->pc = 0x182F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182F4Cu;
            // 0x182f50: 0x8e0400dc  lw          $a0, 0xDC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x189F20u;
    if (runtime->hasFunction(0x189F20u)) {
        auto targetFn = runtime->lookupFunction(0x189F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182F54u; }
        if (ctx->pc != 0x182F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00189F20_0x189f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182F54u; }
        if (ctx->pc != 0x182F54u) { return; }
    }
    ctx->pc = 0x182F54u;
label_182f54:
    // 0x182f54: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x182f54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182f58: 0x24040031  addiu       $a0, $zero, 0x31
    ctx->pc = 0x182f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x182f5c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x182f5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182f60: 0xc05721c  jal         func_15C870
    ctx->pc = 0x182F60u;
    SET_GPR_U32(ctx, 31, 0x182F68u);
    ctx->pc = 0x182F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182F60u;
            // 0x182f64: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C870u;
    if (runtime->hasFunction(0x15C870u)) {
        auto targetFn = runtime->lookupFunction(0x15C870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182F68u; }
        if (ctx->pc != 0x182F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C870_0x15c870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182F68u; }
        if (ctx->pc != 0x182F68u) { return; }
    }
    ctx->pc = 0x182F68u;
label_182f68:
    // 0x182f68: 0x2604028c  addiu       $a0, $s0, 0x28C
    ctx->pc = 0x182f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 652));
label_182f6c:
    // 0x182f6c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x182f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x182f70: 0xc04bbe8  jal         func_12EFA0
    ctx->pc = 0x182F70u;
    SET_GPR_U32(ctx, 31, 0x182F78u);
    ctx->pc = 0x182F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182F70u;
            // 0x182f74: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EFA0u;
    if (runtime->hasFunction(0x12EFA0u)) {
        auto targetFn = runtime->lookupFunction(0x12EFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182F78u; }
        if (ctx->pc != 0x182F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012EFA0_0x12efa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182F78u; }
        if (ctx->pc != 0x182F78u) { return; }
    }
    ctx->pc = 0x182F78u;
label_182f78:
    // 0x182f78: 0x8e030538  lw          $v1, 0x538($s0)
    ctx->pc = 0x182f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1336)));
label_182f7c:
    // 0x182f7c: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x182f7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x182f80: 0x106000eb  beqz        $v1, . + 4 + (0xEB << 2)
    ctx->pc = 0x182F80u;
    {
        const bool branch_taken_0x182f80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x182f80) {
            ctx->pc = 0x183330u;
            goto label_183330;
        }
    }
    ctx->pc = 0x182F88u;
    // 0x182f88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x182f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x182f8c: 0xa2030514  sb          $v1, 0x514($s0)
    ctx->pc = 0x182f8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 3));
    // 0x182f90: 0x920304f0  lbu         $v1, 0x4F0($s0)
    ctx->pc = 0x182f90u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1264)));
    // 0x182f94: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x182f94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x182f98: 0x50600040  beql        $v1, $zero, . + 4 + (0x40 << 2)
    ctx->pc = 0x182F98u;
    {
        const bool branch_taken_0x182f98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x182f98) {
            ctx->pc = 0x182F9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x182F98u;
            // 0x182f9c: 0x8e030510  lw          $v1, 0x510($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1296)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18309Cu;
            goto label_18309c;
        }
    }
    ctx->pc = 0x182FA0u;
    // 0x182fa0: 0xc062794  jal         func_189E50
    ctx->pc = 0x182FA0u;
    SET_GPR_U32(ctx, 31, 0x182FA8u);
    ctx->pc = 0x182FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182FA0u;
            // 0x182fa4: 0x8e0400dc  lw          $a0, 0xDC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x189E50u;
    if (runtime->hasFunction(0x189E50u)) {
        auto targetFn = runtime->lookupFunction(0x189E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182FA8u; }
        if (ctx->pc != 0x182FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00189E50_0x189e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182FA8u; }
        if (ctx->pc != 0x182FA8u) { return; }
    }
    ctx->pc = 0x182FA8u;
label_182fa8:
    // 0x182fa8: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x182fa8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x182fac: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x182facu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x182fb0: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x182fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x182fb4: 0x3c03fffd  lui         $v1, 0xFFFD
    ctx->pc = 0x182fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65533 << 16));
    // 0x182fb8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x182fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x182fbc: 0x2484db57  addiu       $a0, $a0, -0x24A9
    ctx->pc = 0x182fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957911));
    // 0x182fc0: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x182fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x182fc4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x182fc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x182fc8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x182fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x182fcc: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x182fccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x182fd0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x182fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x182fd4: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x182fd4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x182fd8: 0x8e040510  lw          $a0, 0x510($s0)
    ctx->pc = 0x182fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x182fdc: 0x84840002  lh          $a0, 0x2($a0)
    ctx->pc = 0x182fdcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x182fe0: 0xa60400f2  sh          $a0, 0xF2($s0)
    ctx->pc = 0x182fe0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 242), (uint16_t)GPR_U32(ctx, 4));
    // 0x182fe4: 0x8e04049c  lw          $a0, 0x49C($s0)
    ctx->pc = 0x182fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1180)));
    // 0x182fe8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x182fe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x182fec: 0xae03049c  sw          $v1, 0x49C($s0)
    ctx->pc = 0x182fecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1180), GPR_U32(ctx, 3));
    // 0x182ff0: 0xae000518  sw          $zero, 0x518($s0)
    ctx->pc = 0x182ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1304), GPR_U32(ctx, 0));
    // 0x182ff4: 0xae00051c  sw          $zero, 0x51C($s0)
    ctx->pc = 0x182ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1308), GPR_U32(ctx, 0));
    // 0x182ff8: 0x960300f2  lhu         $v1, 0xF2($s0)
    ctx->pc = 0x182ff8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 242)));
    // 0x182ffc: 0xa603050c  sh          $v1, 0x50C($s0)
    ctx->pc = 0x182ffcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1292), (uint16_t)GPR_U32(ctx, 3));
    // 0x183000: 0x960400f2  lhu         $a0, 0xF2($s0)
    ctx->pc = 0x183000u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 242)));
    // 0x183004: 0x2883012b  slti        $v1, $a0, 0x12B
    ctx->pc = 0x183004u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)299) ? 1 : 0);
    // 0x183008: 0x54600013  bnel        $v1, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x183008u;
    {
        const bool branch_taken_0x183008 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x183008) {
            ctx->pc = 0x18300Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x183008u;
            // 0x18300c: 0x8e030538  lw          $v1, 0x538($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1336)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x183058u;
            goto label_183058;
        }
    }
    ctx->pc = 0x183010u;
    // 0x183010: 0x2881012e  slti        $at, $a0, 0x12E
    ctx->pc = 0x183010u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)302) ? 1 : 0);
    // 0x183014: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x183014u;
    {
        const bool branch_taken_0x183014 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x183014) {
            ctx->pc = 0x183054u;
            goto label_183054;
        }
    }
    ctx->pc = 0x18301Cu;
    // 0x18301c: 0x9202057f  lbu         $v0, 0x57F($s0)
    ctx->pc = 0x18301cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1407)));
    // 0x183020: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x183020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x183024: 0x50430006  beql        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x183024u;
    {
        const bool branch_taken_0x183024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x183024) {
            ctx->pc = 0x183028u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x183024u;
            // 0x183028: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
            ctx->pc = 0x183040u;
            goto label_183040;
        }
    }
    ctx->pc = 0x18302Cu;
    // 0x18302c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x18302cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x183030: 0xa20200f6  sb          $v0, 0xF6($s0)
    ctx->pc = 0x183030u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 246), (uint8_t)GPR_U32(ctx, 2));
    // 0x183034: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x183034u;
    {
        const bool branch_taken_0x183034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183034u;
            // 0x183038: 0xa203057f  sb          $v1, 0x57F($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1407), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183034) {
            ctx->pc = 0x183044u;
            goto label_183044;
        }
    }
    ctx->pc = 0x18303Cu;
    // 0x18303c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x18303cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_183040:
    // 0x183040: 0xa60200f2  sh          $v0, 0xF2($s0)
    ctx->pc = 0x183040u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 242), (uint16_t)GPR_U32(ctx, 2));
label_183044:
    // 0x183044: 0x2604028c  addiu       $a0, $s0, 0x28C
    ctx->pc = 0x183044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 652));
    // 0x183048: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x183048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18304c: 0xc04bbe8  jal         func_12EFA0
    ctx->pc = 0x18304Cu;
    SET_GPR_U32(ctx, 31, 0x183054u);
    ctx->pc = 0x183050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18304Cu;
            // 0x183050: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EFA0u;
    if (runtime->hasFunction(0x12EFA0u)) {
        auto targetFn = runtime->lookupFunction(0x12EFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183054u; }
        if (ctx->pc != 0x183054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012EFA0_0x12efa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183054u; }
        if (ctx->pc != 0x183054u) { return; }
    }
    ctx->pc = 0x183054u;
label_183054:
    // 0x183054: 0x8e030538  lw          $v1, 0x538($s0)
    ctx->pc = 0x183054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1336)));
label_183058:
    // 0x183058: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x183058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x18305c: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x18305Cu;
    {
        const bool branch_taken_0x18305c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18305c) {
            ctx->pc = 0x183060u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18305Cu;
            // 0x183060: 0x8e030538  lw          $v1, 0x538($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1336)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x183078u;
            goto label_183078;
        }
    }
    ctx->pc = 0x183064u;
    // 0x183064: 0x8e040530  lw          $a0, 0x530($s0)
    ctx->pc = 0x183064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1328)));
    // 0x183068: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x183068u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x18306c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x18306cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x183070: 0xae030530  sw          $v1, 0x530($s0)
    ctx->pc = 0x183070u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1328), GPR_U32(ctx, 3));
    // 0x183074: 0x8e030538  lw          $v1, 0x538($s0)
    ctx->pc = 0x183074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1336)));
label_183078:
    // 0x183078: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x183078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x18307c: 0x5060001c  beql        $v1, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x18307Cu;
    {
        const bool branch_taken_0x18307c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18307c) {
            ctx->pc = 0x183080u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18307Cu;
            // 0x183080: 0x960400f2  lhu         $a0, 0xF2($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 242)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1830F0u;
            goto label_1830f0;
        }
    }
    ctx->pc = 0x183084u;
    // 0x183084: 0x8e040530  lw          $a0, 0x530($s0)
    ctx->pc = 0x183084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1328)));
    // 0x183088: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x183088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x18308c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x18308cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x183090: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x183090u;
    {
        const bool branch_taken_0x183090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183090u;
            // 0x183094: 0xae030530  sw          $v1, 0x530($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1328), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183090) {
            ctx->pc = 0x1830ECu;
            goto label_1830ec;
        }
    }
    ctx->pc = 0x183098u;
    // 0x183098: 0x8e030510  lw          $v1, 0x510($s0)
    ctx->pc = 0x183098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1296)));
label_18309c:
    // 0x18309c: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x18309cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1830a0: 0xa60300f2  sh          $v1, 0xF2($s0)
    ctx->pc = 0x1830a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 242), (uint16_t)GPR_U32(ctx, 3));
    // 0x1830a4: 0x960300f2  lhu         $v1, 0xF2($s0)
    ctx->pc = 0x1830a4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 242)));
    // 0x1830a8: 0xa603050c  sh          $v1, 0x50C($s0)
    ctx->pc = 0x1830a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1292), (uint16_t)GPR_U32(ctx, 3));
    // 0x1830ac: 0x8e030538  lw          $v1, 0x538($s0)
    ctx->pc = 0x1830acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1336)));
    // 0x1830b0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1830b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1830b4: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1830B4u;
    {
        const bool branch_taken_0x1830b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1830b4) {
            ctx->pc = 0x1830B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1830B4u;
            // 0x1830b8: 0x8e030538  lw          $v1, 0x538($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1336)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1830D0u;
            goto label_1830d0;
        }
    }
    ctx->pc = 0x1830BCu;
    // 0x1830bc: 0x8e040530  lw          $a0, 0x530($s0)
    ctx->pc = 0x1830bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1328)));
    // 0x1830c0: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x1830c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x1830c4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1830c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1830c8: 0xae030530  sw          $v1, 0x530($s0)
    ctx->pc = 0x1830c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1328), GPR_U32(ctx, 3));
    // 0x1830cc: 0x8e030538  lw          $v1, 0x538($s0)
    ctx->pc = 0x1830ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1336)));
label_1830d0:
    // 0x1830d0: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x1830d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1830d4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1830D4u;
    {
        const bool branch_taken_0x1830d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1830d4) {
            ctx->pc = 0x1830ECu;
            goto label_1830ec;
        }
    }
    ctx->pc = 0x1830DCu;
    // 0x1830dc: 0x8e040530  lw          $a0, 0x530($s0)
    ctx->pc = 0x1830dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1328)));
    // 0x1830e0: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x1830e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x1830e4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1830e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1830e8: 0xae030530  sw          $v1, 0x530($s0)
    ctx->pc = 0x1830e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1328), GPR_U32(ctx, 3));
label_1830ec:
    // 0x1830ec: 0x960400f2  lhu         $a0, 0xF2($s0)
    ctx->pc = 0x1830ecu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 242)));
label_1830f0:
    // 0x1830f0: 0x2483fed7  addiu       $v1, $a0, -0x129
    ctx->pc = 0x1830f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966999));
    // 0x1830f4: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x1830f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1830f8: 0x1020001d  beqz        $at, . + 4 + (0x1D << 2)
    ctx->pc = 0x1830F8u;
    {
        const bool branch_taken_0x1830f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1830f8) {
            ctx->pc = 0x183170u;
            goto label_183170;
        }
    }
    ctx->pc = 0x183100u;
    // 0x183100: 0x2604028c  addiu       $a0, $s0, 0x28C
    ctx->pc = 0x183100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 652));
    // 0x183104: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x183104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x183108: 0xc04bbe8  jal         func_12EFA0
    ctx->pc = 0x183108u;
    SET_GPR_U32(ctx, 31, 0x183110u);
    ctx->pc = 0x18310Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183108u;
            // 0x18310c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EFA0u;
    if (runtime->hasFunction(0x12EFA0u)) {
        auto targetFn = runtime->lookupFunction(0x12EFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183110u; }
        if (ctx->pc != 0x183110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012EFA0_0x12efa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183110u; }
        if (ctx->pc != 0x183110u) { return; }
    }
    ctx->pc = 0x183110u;
label_183110:
    // 0x183110: 0xc062794  jal         func_189E50
    ctx->pc = 0x183110u;
    SET_GPR_U32(ctx, 31, 0x183118u);
    ctx->pc = 0x183114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183110u;
            // 0x183114: 0x8e0400dc  lw          $a0, 0xDC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x189E50u;
    if (runtime->hasFunction(0x189E50u)) {
        auto targetFn = runtime->lookupFunction(0x189E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183118u; }
        if (ctx->pc != 0x183118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00189E50_0x189e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183118u; }
        if (ctx->pc != 0x183118u) { return; }
    }
    ctx->pc = 0x183118u;
label_183118:
    // 0x183118: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x183118u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18311c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18311cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x183120: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x183120u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x183124: 0x2463db57  addiu       $v1, $v1, -0x24A9
    ctx->pc = 0x183124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957911));
    // 0x183128: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x183128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18312c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x18312cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x183130: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x183130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x183134: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x183134u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x183138: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x183138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18313c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x18313cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x183140: 0x9203008c  lbu         $v1, 0x8C($s0)
    ctx->pc = 0x183140u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x183144: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x183144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x183148: 0xa203008c  sb          $v1, 0x8C($s0)
    ctx->pc = 0x183148u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 140), (uint8_t)GPR_U32(ctx, 3));
    // 0x18314c: 0x8e030490  lw          $v1, 0x490($s0)
    ctx->pc = 0x18314cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1168)));
    // 0x183150: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x183150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x183154: 0x10600076  beqz        $v1, . + 4 + (0x76 << 2)
    ctx->pc = 0x183154u;
    {
        const bool branch_taken_0x183154 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x183154) {
            ctx->pc = 0x183330u;
            goto label_183330;
        }
    }
    ctx->pc = 0x18315Cu;
    // 0x18315c: 0x24030142  addiu       $v1, $zero, 0x142
    ctx->pc = 0x18315cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 322));
    // 0x183160: 0xa60300f2  sh          $v1, 0xF2($s0)
    ctx->pc = 0x183160u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 242), (uint16_t)GPR_U32(ctx, 3));
    // 0x183164: 0x960300f2  lhu         $v1, 0xF2($s0)
    ctx->pc = 0x183164u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 242)));
    // 0x183168: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x183168u;
    {
        const bool branch_taken_0x183168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18316Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183168u;
            // 0x18316c: 0xa603050c  sh          $v1, 0x50C($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1292), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183168) {
            ctx->pc = 0x183330u;
            goto label_183330;
        }
    }
    ctx->pc = 0x183170u;
label_183170:
    // 0x183170: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x183170u;
    {
        const bool branch_taken_0x183170 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x183170) {
            ctx->pc = 0x183174u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x183170u;
            // 0x183174: 0x2604028c  addiu       $a0, $s0, 0x28C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 652));
        ctx->in_delay_slot = false;
            ctx->pc = 0x183188u;
            goto label_183188;
        }
    }
    ctx->pc = 0x183178u;
    // 0x183178: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x183178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x18317c: 0x1483006c  bne         $a0, $v1, . + 4 + (0x6C << 2)
    ctx->pc = 0x18317Cu;
    {
        const bool branch_taken_0x18317c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x18317c) {
            ctx->pc = 0x183330u;
            goto label_183330;
        }
    }
    ctx->pc = 0x183184u;
    // 0x183184: 0x2604028c  addiu       $a0, $s0, 0x28C
    ctx->pc = 0x183184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 652));
label_183188:
    // 0x183188: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x183188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18318c: 0xc04bbe8  jal         func_12EFA0
    ctx->pc = 0x18318Cu;
    SET_GPR_U32(ctx, 31, 0x183194u);
    ctx->pc = 0x183190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18318Cu;
            // 0x183190: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EFA0u;
    if (runtime->hasFunction(0x12EFA0u)) {
        auto targetFn = runtime->lookupFunction(0x12EFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183194u; }
        if (ctx->pc != 0x183194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012EFA0_0x12efa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183194u; }
        if (ctx->pc != 0x183194u) { return; }
    }
    ctx->pc = 0x183194u;
label_183194:
    // 0x183194: 0x9202008c  lbu         $v0, 0x8C($s0)
    ctx->pc = 0x183194u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x183198: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x183198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18319c: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x18319cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x1831a0: 0xc06001c  jal         func_180070
    ctx->pc = 0x1831A0u;
    SET_GPR_U32(ctx, 31, 0x1831A8u);
    ctx->pc = 0x1831A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1831A0u;
            // 0x1831a4: 0xa202008c  sb          $v0, 0x8C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 140), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180070u;
    if (runtime->hasFunction(0x180070u)) {
        auto targetFn = runtime->lookupFunction(0x180070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1831A8u; }
        if (ctx->pc != 0x1831A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180070_0x180070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1831A8u; }
        if (ctx->pc != 0x1831A8u) { return; }
    }
    ctx->pc = 0x1831A8u;
label_1831a8:
    // 0x1831a8: 0x8e0400dc  lw          $a0, 0xDC($s0)
    ctx->pc = 0x1831a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x1831ac: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1831acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1831b0: 0x2463db78  addiu       $v1, $v1, -0x2488
    ctx->pc = 0x1831b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957944));
    // 0x1831b4: 0x3085000c  andi        $a1, $a0, 0xC
    ctx->pc = 0x1831b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x1831b8: 0x30840030  andi        $a0, $a0, 0x30
    ctx->pc = 0x1831b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)48);
    // 0x1831bc: 0x52882  srl         $a1, $a1, 2
    ctx->pc = 0x1831bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x1831c0: 0x43102  srl         $a2, $a0, 4
    ctx->pc = 0x1831c0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 4), 4));
    // 0x1831c4: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1831c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1831c8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1831c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1831cc: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1831ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1831d0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1831d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1831d4: 0x438c0  sll         $a3, $a0, 3
    ctx->pc = 0x1831d4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1831d8: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1831d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1831dc: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1831dcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1831e0: 0x10c30027  beq         $a2, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x1831E0u;
    {
        const bool branch_taken_0x1831e0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x1831e0) {
            ctx->pc = 0x183280u;
            goto label_183280;
        }
    }
    ctx->pc = 0x1831E8u;
    // 0x1831e8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1831e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1831ec: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x1831ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1831f0: 0xa20400f6  sb          $a0, 0xF6($s0)
    ctx->pc = 0x1831f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 246), (uint8_t)GPR_U32(ctx, 4));
    // 0x1831f4: 0xa60300f2  sh          $v1, 0xF2($s0)
    ctx->pc = 0x1831f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 242), (uint16_t)GPR_U32(ctx, 3));
    // 0x1831f8: 0x960300f2  lhu         $v1, 0xF2($s0)
    ctx->pc = 0x1831f8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 242)));
    // 0x1831fc: 0xa603050c  sh          $v1, 0x50C($s0)
    ctx->pc = 0x1831fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1292), (uint16_t)GPR_U32(ctx, 3));
    // 0x183200: 0x920304f0  lbu         $v1, 0x4F0($s0)
    ctx->pc = 0x183200u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1264)));
    // 0x183204: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x183204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x183208: 0x10600049  beqz        $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x183208u;
    {
        const bool branch_taken_0x183208 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x183208) {
            ctx->pc = 0x183330u;
            goto label_183330;
        }
    }
    ctx->pc = 0x183210u;
    // 0x183210: 0x8e0400dc  lw          $a0, 0xDC($s0)
    ctx->pc = 0x183210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x183214: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x183214u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x183218: 0x24a5dca8  addiu       $a1, $a1, -0x2358
    ctx->pc = 0x183218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958248));
    // 0x18321c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x18321cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x183220: 0x2403fe7f  addiu       $v1, $zero, -0x181
    ctx->pc = 0x183220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966911));
    // 0x183224: 0x3086000c  andi        $a2, $a0, 0xC
    ctx->pc = 0x183224u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x183228: 0x63882  srl         $a3, $a2, 2
    ctx->pc = 0x183228u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
    // 0x18322c: 0x30840030  andi        $a0, $a0, 0x30
    ctx->pc = 0x18322cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)48);
    // 0x183230: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x183230u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x183234: 0x42102  srl         $a0, $a0, 4
    ctx->pc = 0x183234u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 4));
    // 0x183238: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x183238u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x18323c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x18323cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x183240: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x183240u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x183244: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x183244u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x183248: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x183248u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x18324c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x18324cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x183250: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x183250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x183254: 0xa4880000  sh          $t0, 0x0($a0)
    ctx->pc = 0x183254u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x183258: 0xa60004ba  sh          $zero, 0x4BA($s0)
    ctx->pc = 0x183258u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1210), (uint16_t)GPR_U32(ctx, 0));
    // 0x18325c: 0xa60004bc  sh          $zero, 0x4BC($s0)
    ctx->pc = 0x18325cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1212), (uint16_t)GPR_U32(ctx, 0));
    // 0x183260: 0xa6000582  sh          $zero, 0x582($s0)
    ctx->pc = 0x183260u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1410), (uint16_t)GPR_U32(ctx, 0));
    // 0x183264: 0x920404f0  lbu         $a0, 0x4F0($s0)
    ctx->pc = 0x183264u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1264)));
    // 0x183268: 0x308400bf  andi        $a0, $a0, 0xBF
    ctx->pc = 0x183268u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)191);
    // 0x18326c: 0xa20404f0  sb          $a0, 0x4F0($s0)
    ctx->pc = 0x18326cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1264), (uint8_t)GPR_U32(ctx, 4));
    // 0x183270: 0x8e040494  lw          $a0, 0x494($s0)
    ctx->pc = 0x183270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1172)));
    // 0x183274: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x183274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x183278: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x183278u;
    {
        const bool branch_taken_0x183278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18327Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183278u;
            // 0x18327c: 0xae030494  sw          $v1, 0x494($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1172), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183278) {
            ctx->pc = 0x183330u;
            goto label_183330;
        }
    }
    ctx->pc = 0x183280u;
label_183280:
    // 0x183280: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x183280u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x183284: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x183284u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x183288: 0x8c65d918  lw          $a1, -0x26E8($v1)
    ctx->pc = 0x183288u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957336)));
    // 0x18328c: 0x34830100  ori         $v1, $a0, 0x100
    ctx->pc = 0x18328cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    // 0x183290: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x183290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x183294: 0x50600014  beql        $v1, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x183294u;
    {
        const bool branch_taken_0x183294 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x183294) {
            ctx->pc = 0x183298u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x183294u;
            // 0x183298: 0x8e040494  lw          $a0, 0x494($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1172)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1832E8u;
            goto label_1832e8;
        }
    }
    ctx->pc = 0x18329Cu;
    // 0x18329c: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x18329cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x1832a0: 0x62140  sll         $a0, $a2, 5
    ctx->pc = 0x1832a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x1832a4: 0x24a5dca8  addiu       $a1, $a1, -0x2358
    ctx->pc = 0x1832a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958248));
    // 0x1832a8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1832a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1832ac: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x1832acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1832b0: 0x2403fe7f  addiu       $v1, $zero, -0x181
    ctx->pc = 0x1832b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966911));
    // 0x1832b4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1832b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1832b8: 0xa4860000  sh          $a2, 0x0($a0)
    ctx->pc = 0x1832b8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x1832bc: 0xa60004ba  sh          $zero, 0x4BA($s0)
    ctx->pc = 0x1832bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1210), (uint16_t)GPR_U32(ctx, 0));
    // 0x1832c0: 0xa60004bc  sh          $zero, 0x4BC($s0)
    ctx->pc = 0x1832c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1212), (uint16_t)GPR_U32(ctx, 0));
    // 0x1832c4: 0xa6000582  sh          $zero, 0x582($s0)
    ctx->pc = 0x1832c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1410), (uint16_t)GPR_U32(ctx, 0));
    // 0x1832c8: 0x920404f0  lbu         $a0, 0x4F0($s0)
    ctx->pc = 0x1832c8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1264)));
    // 0x1832cc: 0x308400bf  andi        $a0, $a0, 0xBF
    ctx->pc = 0x1832ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)191);
    // 0x1832d0: 0xa20404f0  sb          $a0, 0x4F0($s0)
    ctx->pc = 0x1832d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1264), (uint8_t)GPR_U32(ctx, 4));
    // 0x1832d4: 0x8e040494  lw          $a0, 0x494($s0)
    ctx->pc = 0x1832d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1172)));
    // 0x1832d8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1832d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1832dc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1832DCu;
    {
        const bool branch_taken_0x1832dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1832E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1832DCu;
            // 0x1832e0: 0xae030494  sw          $v1, 0x494($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1172), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1832dc) {
            ctx->pc = 0x183330u;
            goto label_183330;
        }
    }
    ctx->pc = 0x1832E4u;
    // 0x1832e4: 0x8e040494  lw          $a0, 0x494($s0)
    ctx->pc = 0x1832e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1172)));
label_1832e8:
    // 0x1832e8: 0x30830100  andi        $v1, $a0, 0x100
    ctx->pc = 0x1832e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
    // 0x1832ec: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1832ECu;
    {
        const bool branch_taken_0x1832ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1832ec) {
            ctx->pc = 0x1832F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1832ECu;
            // 0x1832f0: 0x30830080  andi        $v1, $a0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
            ctx->pc = 0x18331Cu;
            goto label_18331c;
        }
    }
    ctx->pc = 0x1832F4u;
    // 0x1832f4: 0x24030128  addiu       $v1, $zero, 0x128
    ctx->pc = 0x1832f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 296));
    // 0x1832f8: 0xa60300f2  sh          $v1, 0xF2($s0)
    ctx->pc = 0x1832f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 242), (uint16_t)GPR_U32(ctx, 3));
    // 0x1832fc: 0x960300f2  lhu         $v1, 0xF2($s0)
    ctx->pc = 0x1832fcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 242)));
    // 0x183300: 0xa603050c  sh          $v1, 0x50C($s0)
    ctx->pc = 0x183300u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1292), (uint16_t)GPR_U32(ctx, 3));
    // 0x183304: 0x8e030494  lw          $v1, 0x494($s0)
    ctx->pc = 0x183304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1172)));
    // 0x183308: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x183308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x18330c: 0xae030494  sw          $v1, 0x494($s0)
    ctx->pc = 0x18330cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1172), GPR_U32(ctx, 3));
    // 0x183310: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x183310u;
    {
        const bool branch_taken_0x183310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183310u;
            // 0x183314: 0xa600039a  sh          $zero, 0x39A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 922), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183310) {
            ctx->pc = 0x183330u;
            goto label_183330;
        }
    }
    ctx->pc = 0x183318u;
    // 0x183318: 0x30830080  andi        $v1, $a0, 0x80
    ctx->pc = 0x183318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
label_18331c:
    // 0x18331c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18331Cu;
    {
        const bool branch_taken_0x18331c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18331c) {
            ctx->pc = 0x183330u;
            goto label_183330;
        }
    }
    ctx->pc = 0x183324u;
    // 0x183324: 0x2403ff7f  addiu       $v1, $zero, -0x81
    ctx->pc = 0x183324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x183328: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x183328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x18332c: 0xae030494  sw          $v1, 0x494($s0)
    ctx->pc = 0x18332cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1172), GPR_U32(ctx, 3));
label_183330:
    // 0x183330: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x183330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_183334:
    // 0x183334: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x183334u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183338: 0x3e00008  jr          $ra
    ctx->pc = 0x183338u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18333Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183338u;
            // 0x18333c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x183340u;
    ctx->pc = 0x183340u;
}
