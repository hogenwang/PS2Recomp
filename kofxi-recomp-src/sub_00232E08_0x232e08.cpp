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

// Function: sub_00232E08
// Address: 0x232e08 - 0x233220
void sub_00232E08_0x232e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00232E08_0x232e08");
#endif

    switch (ctx->pc) {
        case 0x232fecu: goto label_232fec;
        case 0x23300cu: goto label_23300c;
        case 0x233064u: goto label_233064;
        case 0x233074u: goto label_233074;
        case 0x233080u: goto label_233080;
        case 0x23309cu: goto label_23309c;
        case 0x2330b8u: goto label_2330b8;
        case 0x2330d0u: goto label_2330d0;
        case 0x233108u: goto label_233108;
        case 0x233118u: goto label_233118;
        case 0x233144u: goto label_233144;
        case 0x233170u: goto label_233170;
        case 0x233180u: goto label_233180;
        default: break;
    }

    ctx->pc = 0x232e08u;

    // 0x232e08: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x232e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x232e0c: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x232e0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x232e10: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x232e10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x232e14: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x232e14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x232e18: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x232e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x232e1c: 0x2442fa30  addiu       $v0, $v0, -0x5D0
    ctx->pc = 0x232e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965808));
    // 0x232e20: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x232e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x232e24: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x232e24u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232e28: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x232e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x232e2c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x232e2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232e30: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x232e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x232e34: 0x3c034010  lui         $v1, 0x4010
    ctx->pc = 0x232e34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16400 << 16));
    // 0x232e38: 0x3463426e  ori         $v1, $v1, 0x426E
    ctx->pc = 0x232e38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17006);
    // 0x232e3c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x232e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x232e40: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x232e40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x232e44: 0x10a300c7  beq         $a1, $v1, . + 4 + (0xC7 << 2)
    ctx->pc = 0x232E44u;
    {
        const bool branch_taken_0x232e44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x232E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232E44u;
        // 0x232e48: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232e44) {
            ctx->pc = 0x233164u;
            goto label_233164;
        }
    }
    ctx->pc = 0x232E4Cu;
    // 0x232e4c: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x232e4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x232e50: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x232E50u;
    {
        const bool branch_taken_0x232e50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x232e50) {
            ctx->pc = 0x232F10u;
            goto label_232f10;
        }
    }
    ctx->pc = 0x232E58u;
    // 0x232e58: 0x3c024004  lui         $v0, 0x4004
    ctx->pc = 0x232e58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16388 << 16));
    // 0x232e5c: 0x3442426a  ori         $v0, $v0, 0x426A
    ctx->pc = 0x232e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17002);
    // 0x232e60: 0x10a2009d  beq         $a1, $v0, . + 4 + (0x9D << 2)
    ctx->pc = 0x232E60u;
    {
        const bool branch_taken_0x232e60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x232E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232E60u;
        // 0x232e64: 0x45102b  sltu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x232e60) {
            ctx->pc = 0x2330D8u;
            goto label_2330d8;
        }
    }
    ctx->pc = 0x232E68u;
    // 0x232e68: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x232E68u;
    {
        const bool branch_taken_0x232e68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x232e68) {
            ctx->pc = 0x232EB8u;
            goto label_232eb8;
        }
    }
    ctx->pc = 0x232E70u;
    // 0x232e70: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x232e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x232e74: 0x34424269  ori         $v0, $v0, 0x4269
    ctx->pc = 0x232e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17001);
    // 0x232e78: 0x10a20083  beq         $a1, $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x232E78u;
    {
        const bool branch_taken_0x232e78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x232E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232E78u;
        // 0x232e7c: 0x45102b  sltu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x232e78) {
            ctx->pc = 0x233088u;
            goto label_233088;
        }
    }
    ctx->pc = 0x232E80u;
    // 0x232e80: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x232E80u;
    {
        const bool branch_taken_0x232e80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x232e80) {
            ctx->pc = 0x232EA0u;
            goto label_232ea0;
        }
    }
    ctx->pc = 0x232E88u;
    // 0x232e88: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x232e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x232e8c: 0x34424268  ori         $v0, $v0, 0x4268
    ctx->pc = 0x232e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17000);
    // 0x232e90: 0x10a20076  beq         $a1, $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x232E90u;
    {
        const bool branch_taken_0x232e90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x232e90) {
            ctx->pc = 0x23306Cu;
            goto label_23306c;
        }
    }
    ctx->pc = 0x232E98u;
    // 0x232e98: 0x100000d8  b           . + 4 + (0xD8 << 2)
    ctx->pc = 0x232E98u;
    {
        const bool branch_taken_0x232e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232E98u;
        // 0x232e9c: 0x24140016  addiu       $s4, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232e98) {
            ctx->pc = 0x2331FCu;
            goto label_2331fc;
        }
    }
    ctx->pc = 0x232EA0u;
label_232ea0:
    // 0x232ea0: 0x3c024004  lui         $v0, 0x4004
    ctx->pc = 0x232ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16388 << 16));
    // 0x232ea4: 0x34424266  ori         $v0, $v0, 0x4266
    ctx->pc = 0x232ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16998);
    // 0x232ea8: 0x50a2005a  beql        $a1, $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x232EA8u;
    {
        const bool branch_taken_0x232ea8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x232ea8) {
            ctx->pc = 0x232EACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232EA8u;
            // 0x232eac: 0x8e220018  lw          $v0, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x233014u;
            goto label_233014;
        }
    }
    ctx->pc = 0x232EB0u;
    // 0x232eb0: 0x100000d2  b           . + 4 + (0xD2 << 2)
    ctx->pc = 0x232EB0u;
    {
        const bool branch_taken_0x232eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232EB0u;
        // 0x232eb4: 0x24140016  addiu       $s4, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232eb0) {
            ctx->pc = 0x2331FCu;
            goto label_2331fc;
        }
    }
    ctx->pc = 0x232EB8u;
label_232eb8:
    // 0x232eb8: 0x3c024004  lui         $v0, 0x4004
    ctx->pc = 0x232eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16388 << 16));
    // 0x232ebc: 0x34424274  ori         $v0, $v0, 0x4274
    ctx->pc = 0x232ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17012);
    // 0x232ec0: 0x10a200c2  beq         $a1, $v0, . + 4 + (0xC2 << 2)
    ctx->pc = 0x232EC0u;
    {
        const bool branch_taken_0x232ec0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x232EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232EC0u;
        // 0x232ec4: 0x45102b  sltu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x232ec0) {
            ctx->pc = 0x2331CCu;
            goto label_2331cc;
        }
    }
    ctx->pc = 0x232EC8u;
    // 0x232ec8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x232EC8u;
    {
        const bool branch_taken_0x232ec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x232ec8) {
            ctx->pc = 0x232EE8u;
            goto label_232ee8;
        }
    }
    ctx->pc = 0x232ED0u;
    // 0x232ed0: 0x3c024004  lui         $v0, 0x4004
    ctx->pc = 0x232ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16388 << 16));
    // 0x232ed4: 0x34424271  ori         $v0, $v0, 0x4271
    ctx->pc = 0x232ed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17009);
    // 0x232ed8: 0x10a200b9  beq         $a1, $v0, . + 4 + (0xB9 << 2)
    ctx->pc = 0x232ED8u;
    {
        const bool branch_taken_0x232ed8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x232EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232ED8u;
        // 0x232edc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232ed8) {
            ctx->pc = 0x2331C0u;
            goto label_2331c0;
        }
    }
    ctx->pc = 0x232EE0u;
    // 0x232ee0: 0x100000c6  b           . + 4 + (0xC6 << 2)
    ctx->pc = 0x232EE0u;
    {
        const bool branch_taken_0x232ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232EE0u;
        // 0x232ee4: 0x24140016  addiu       $s4, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232ee0) {
            ctx->pc = 0x2331FCu;
            goto label_2331fc;
        }
    }
    ctx->pc = 0x232EE8u;
label_232ee8:
    // 0x232ee8: 0x3c024004  lui         $v0, 0x4004
    ctx->pc = 0x232ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16388 << 16));
    // 0x232eec: 0x3442667f  ori         $v0, $v0, 0x667F
    ctx->pc = 0x232eecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26239);
    // 0x232ef0: 0x10a2003c  beq         $a1, $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x232EF0u;
    {
        const bool branch_taken_0x232ef0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x232ef0) {
            ctx->pc = 0x232FE4u;
            goto label_232fe4;
        }
    }
    ctx->pc = 0x232EF8u;
    // 0x232ef8: 0x3c024008  lui         $v0, 0x4008
    ctx->pc = 0x232ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16392 << 16));
    // 0x232efc: 0x3442426f  ori         $v0, $v0, 0x426F
    ctx->pc = 0x232efcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17007);
    // 0x232f00: 0x50a200a8  beql        $a1, $v0, . + 4 + (0xA8 << 2)
    ctx->pc = 0x232F00u;
    {
        const bool branch_taken_0x232f00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x232f00) {
            ctx->pc = 0x232F04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232F00u;
            // 0x232f04: 0x8e220030  lw          $v0, 0x30($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2331A4u;
            goto label_2331a4;
        }
    }
    ctx->pc = 0x232F08u;
    // 0x232f08: 0x100000bc  b           . + 4 + (0xBC << 2)
    ctx->pc = 0x232F08u;
    {
        const bool branch_taken_0x232f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232F08u;
        // 0x232f0c: 0x24140016  addiu       $s4, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232f08) {
            ctx->pc = 0x2331FCu;
            goto label_2331fc;
        }
    }
    ctx->pc = 0x232F10u;
label_232f10:
    // 0x232f10: 0x34028004  ori         $v0, $zero, 0x8004
    ctx->pc = 0x232f10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32772);
    // 0x232f14: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x232f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x232f18: 0x3442667e  ori         $v0, $v0, 0x667E
    ctx->pc = 0x232f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26238);
    // 0x232f1c: 0x10a200b1  beq         $a1, $v0, . + 4 + (0xB1 << 2)
    ctx->pc = 0x232F1Cu;
    {
        const bool branch_taken_0x232f1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x232F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232F1Cu;
        // 0x232f20: 0x45102b  sltu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x232f1c) {
            ctx->pc = 0x2331E4u;
            goto label_2331e4;
        }
    }
    ctx->pc = 0x232F24u;
    // 0x232f24: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x232F24u;
    {
        const bool branch_taken_0x232f24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x232f24) {
            ctx->pc = 0x232F7Cu;
            goto label_232f7c;
        }
    }
    ctx->pc = 0x232F2Cu;
    // 0x232f2c: 0x34028004  ori         $v0, $zero, 0x8004
    ctx->pc = 0x232f2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32772);
    // 0x232f30: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x232f30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x232f34: 0x34424270  ori         $v0, $v0, 0x4270
    ctx->pc = 0x232f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17008);
    // 0x232f38: 0x10a2009e  beq         $a1, $v0, . + 4 + (0x9E << 2)
    ctx->pc = 0x232F38u;
    {
        const bool branch_taken_0x232f38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x232F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232F38u;
        // 0x232f3c: 0x45102b  sltu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x232f38) {
            ctx->pc = 0x2331B4u;
            goto label_2331b4;
        }
    }
    ctx->pc = 0x232F40u;
    // 0x232f40: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x232F40u;
    {
        const bool branch_taken_0x232f40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x232f40) {
            ctx->pc = 0x232F60u;
            goto label_232f60;
        }
    }
    ctx->pc = 0x232F48u;
    // 0x232f48: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x232f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
    // 0x232f4c: 0x3442426b  ori         $v0, $v0, 0x426B
    ctx->pc = 0x232f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17003);
    // 0x232f50: 0x50a20067  beql        $a1, $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x232F50u;
    {
        const bool branch_taken_0x232f50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x232f50) {
            ctx->pc = 0x232F54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232F50u;
            // 0x232f54: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2330F0u;
            goto label_2330f0;
        }
    }
    ctx->pc = 0x232F58u;
    // 0x232f58: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x232F58u;
    {
        const bool branch_taken_0x232f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232F58u;
        // 0x232f5c: 0x24140016  addiu       $s4, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232f58) {
            ctx->pc = 0x2331FCu;
            goto label_2331fc;
        }
    }
    ctx->pc = 0x232F60u;
label_232f60:
    // 0x232f60: 0x34028004  ori         $v0, $zero, 0x8004
    ctx->pc = 0x232f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32772);
    // 0x232f64: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x232f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x232f68: 0x34424275  ori         $v0, $v0, 0x4275
    ctx->pc = 0x232f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17013);
    // 0x232f6c: 0x50a2009a  beql        $a1, $v0, . + 4 + (0x9A << 2)
    ctx->pc = 0x232F6Cu;
    {
        const bool branch_taken_0x232f6c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x232f6c) {
            ctx->pc = 0x232F70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232F6Cu;
            // 0x232f70: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2331D8u;
            goto label_2331d8;
        }
    }
    ctx->pc = 0x232F74u;
    // 0x232f74: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x232F74u;
    {
        const bool branch_taken_0x232f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232F74u;
        // 0x232f78: 0x24140016  addiu       $s4, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232f74) {
            ctx->pc = 0x2331FCu;
            goto label_2331fc;
        }
    }
    ctx->pc = 0x232F7Cu;
label_232f7c:
    // 0x232f7c: 0x34028010  ori         $v0, $zero, 0x8010
    ctx->pc = 0x232f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32784);
    // 0x232f80: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x232f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x232f84: 0x3442426d  ori         $v0, $v0, 0x426D
    ctx->pc = 0x232f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17005);
    // 0x232f88: 0x10a20065  beq         $a1, $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x232F88u;
    {
        const bool branch_taken_0x232f88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x232F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232F88u;
        // 0x232f8c: 0x45102b  sltu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x232f88) {
            ctx->pc = 0x233120u;
            goto label_233120;
        }
    }
    ctx->pc = 0x232F90u;
    // 0x232f90: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x232F90u;
    {
        const bool branch_taken_0x232f90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x232f90) {
            ctx->pc = 0x232FB4u;
            goto label_232fb4;
        }
    }
    ctx->pc = 0x232F98u;
    // 0x232f98: 0x34028008  ori         $v0, $zero, 0x8008
    ctx->pc = 0x232f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32776);
    // 0x232f9c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x232f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x232fa0: 0x34424267  ori         $v0, $v0, 0x4267
    ctx->pc = 0x232fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16999);
    // 0x232fa4: 0x10a2002c  beq         $a1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x232FA4u;
    {
        const bool branch_taken_0x232fa4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x232FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232FA4u;
        // 0x232fa8: 0x24140016  addiu       $s4, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232fa4) {
            ctx->pc = 0x233058u;
            goto label_233058;
        }
    }
    ctx->pc = 0x232FACu;
    // 0x232fac: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x232FACu;
    {
        const bool branch_taken_0x232fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232FACu;
        // 0x232fb0: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232fac) {
            ctx->pc = 0x233200u;
            goto label_233200;
        }
    }
    ctx->pc = 0x232FB4u;
label_232fb4:
    // 0x232fb4: 0x34028020  ori         $v0, $zero, 0x8020
    ctx->pc = 0x232fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
    // 0x232fb8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x232fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x232fbc: 0x3442426c  ori         $v0, $v0, 0x426C
    ctx->pc = 0x232fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17004);
    // 0x232fc0: 0x10a20053  beq         $a1, $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x232FC0u;
    {
        const bool branch_taken_0x232fc0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x232FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232FC0u;
        // 0x232fc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232fc0) {
            ctx->pc = 0x233110u;
            goto label_233110;
        }
    }
    ctx->pc = 0x232FC8u;
    // 0x232fc8: 0x3402c004  ori         $v0, $zero, 0xC004
    ctx->pc = 0x232fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49156);
    // 0x232fcc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x232fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x232fd0: 0x34424266  ori         $v0, $v0, 0x4266
    ctx->pc = 0x232fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16998);
    // 0x232fd4: 0x50a20011  beql        $a1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x232FD4u;
    {
        const bool branch_taken_0x232fd4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x232fd4) {
            ctx->pc = 0x232FD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232FD4u;
            // 0x232fd8: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23301Cu;
            goto label_23301c;
        }
    }
    ctx->pc = 0x232FDCu;
    // 0x232fdc: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x232FDCu;
    {
        const bool branch_taken_0x232fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232FDCu;
        // 0x232fe0: 0x24140016  addiu       $s4, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232fdc) {
            ctx->pc = 0x2331FCu;
            goto label_2331fc;
        }
    }
    ctx->pc = 0x232FE4u;
label_232fe4:
    // 0x232fe4: 0xc08c682  jal         func_231A08
    ctx->pc = 0x232FE4u;
    SET_GPR_U32(ctx, 31, 0x232FECu);
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x232FE4u, 0x232FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232FECu;
label_232fec:
    // 0x232fec: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x232fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x232ff0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x232ff0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232ff4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x232FF4u;
    {
        const bool branch_taken_0x232ff4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x232FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232FF4u;
        // 0x232ff8: 0x8e300010  lw          $s0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232ff4) {
            ctx->pc = 0x233004u;
            goto label_233004;
        }
    }
    ctx->pc = 0x232FFCu;
    // 0x232ffc: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x232ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x233000: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x233000u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_233004:
    // 0x233004: 0xc08c698  jal         func_231A60
    ctx->pc = 0x233004u;
    SET_GPR_U32(ctx, 31, 0x23300Cu);
    ctx->pc = 0x233008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233004u;
    // 0x233008: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x233004u, 0x23300Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23300Cu;
label_23300c:
    // 0x23300c: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x23300Cu;
    {
        const bool branch_taken_0x23300c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23300Cu;
        // 0x233010: 0xae500000  sw          $s0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23300c) {
            ctx->pc = 0x2331FCu;
            goto label_2331fc;
        }
    }
    ctx->pc = 0x233014u;
label_233014:
    // 0x233014: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x233014u;
    {
        const bool branch_taken_0x233014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233014u;
        // 0x233018: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233014) {
            ctx->pc = 0x2331FCu;
            goto label_2331fc;
        }
    }
    ctx->pc = 0x23301Cu;
label_23301c:
    // 0x23301c: 0x54400077  bnel        $v0, $zero, . + 4 + (0x77 << 2)
    ctx->pc = 0x23301Cu;
    {
        const bool branch_taken_0x23301c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23301c) {
            ctx->pc = 0x233020u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23301Cu;
            // 0x233020: 0x24140016  addiu       $s4, $zero, 0x16 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2331FCu;
            goto label_2331fc;
        }
    }
    ctx->pc = 0x233024u;
    // 0x233024: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x233024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x233028: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x233028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x23302c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x23302cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x233030: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x233030u;
    {
        const bool branch_taken_0x233030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233030u;
        // 0x233034: 0x2c620020  sltiu       $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x233030) {
            ctx->pc = 0x233040u;
            goto label_233040;
        }
    }
    ctx->pc = 0x233038u;
    // 0x233038: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x233038u;
    {
        const bool branch_taken_0x233038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23303Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233038u;
        // 0x23303c: 0x34038000  ori         $v1, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x233038) {
            ctx->pc = 0x23304Cu;
            goto label_23304c;
        }
    }
    ctx->pc = 0x233040u;
label_233040:
    // 0x233040: 0x5040006e  beql        $v0, $zero, . + 4 + (0x6E << 2)
    ctx->pc = 0x233040u;
    {
        const bool branch_taken_0x233040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x233040) {
            ctx->pc = 0x233044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233040u;
            // 0x233044: 0xae230018  sw          $v1, 0x18($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2331FCu;
            goto label_2331fc;
        }
    }
    ctx->pc = 0x233048u;
    // 0x233048: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x233048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_23304c:
    // 0x23304c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x23304cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x233050: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x233050u;
    {
        const bool branch_taken_0x233050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233050u;
        // 0x233054: 0xae230018  sw          $v1, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233050) {
            ctx->pc = 0x2331FCu;
            goto label_2331fc;
        }
    }
    ctx->pc = 0x233058u;
label_233058:
    // 0x233058: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x233058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23305c: 0xc08cc88  jal         func_233220
    ctx->pc = 0x23305Cu;
    SET_GPR_U32(ctx, 31, 0x233064u);
    ctx->pc = 0x233060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23305Cu;
    // 0x233060: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233220u, 0x23305Cu, 0x233064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233064u;
label_233064:
    // 0x233064: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x233064u;
    {
        const bool branch_taken_0x233064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233064u;
        // 0x233068: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233064) {
            ctx->pc = 0x2331FCu;
            goto label_2331fc;
        }
    }
    ctx->pc = 0x23306Cu;
label_23306c:
    // 0x23306c: 0xc08c682  jal         func_231A08
    ctx->pc = 0x23306Cu;
    SET_GPR_U32(ctx, 31, 0x233074u);
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x23306Cu, 0x233074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233074u;
label_233074:
    // 0x233074: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x233074u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233078: 0xc08cb78  jal         func_232DE0
    ctx->pc = 0x233078u;
    SET_GPR_U32(ctx, 31, 0x233080u);
    ctx->pc = 0x23307Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233078u;
    // 0x23307c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232DE0u, 0x233078u, 0x233080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233080u;
label_233080:
    // 0x233080: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x233080u;
    {
        const bool branch_taken_0x233080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x233080) {
            ctx->pc = 0x2330C8u;
            goto label_2330c8;
        }
    }
    ctx->pc = 0x233088u;
label_233088:
    // 0x233088: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x233088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x23308c: 0x5040005b  beql        $v0, $zero, . + 4 + (0x5B << 2)
    ctx->pc = 0x23308Cu;
    {
        const bool branch_taken_0x23308c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23308c) {
            ctx->pc = 0x233090u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23308Cu;
            // 0x233090: 0x24140016  addiu       $s4, $zero, 0x16 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2331FCu;
            goto label_2331fc;
        }
    }
    ctx->pc = 0x233094u;
    // 0x233094: 0xc08c682  jal         func_231A08
    ctx->pc = 0x233094u;
    SET_GPR_U32(ctx, 31, 0x23309Cu);
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x233094u, 0x23309Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23309Cu;
label_23309c:
    // 0x23309c: 0x92230040  lbu         $v1, 0x40($s1)
    ctx->pc = 0x23309cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x2330a0: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2330A0u;
    {
        const bool branch_taken_0x2330a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2330A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2330A0u;
        // 0x2330a4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2330a0) {
            ctx->pc = 0x2330C8u;
            goto label_2330c8;
        }
    }
    ctx->pc = 0x2330A8u;
    // 0x2330a8: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x2330a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x2330ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2330acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2330b0: 0xc08cec2  jal         func_233B08
    ctx->pc = 0x2330B0u;
    SET_GPR_U32(ctx, 31, 0x2330B8u);
    ctx->pc = 0x2330B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2330B0u;
    // 0x2330b4: 0x8c440014  lw          $a0, 0x14($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233B08u, 0x2330B0u, 0x2330B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2330B8u;
label_2330b8:
    // 0x2330b8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2330b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2330bc: 0x16800002  bnez        $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x2330BCu;
    {
        const bool branch_taken_0x2330bc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x2330C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2330BCu;
        // 0x2330c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2330bc) {
            ctx->pc = 0x2330C8u;
            goto label_2330c8;
        }
    }
    ctx->pc = 0x2330C4u;
    // 0x2330c4: 0xa2220040  sb          $v0, 0x40($s1)
    ctx->pc = 0x2330c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 64), (uint8_t)GPR_U32(ctx, 2));
label_2330c8:
    // 0x2330c8: 0xc08c698  jal         func_231A60
    ctx->pc = 0x2330C8u;
    SET_GPR_U32(ctx, 31, 0x2330D0u);
    ctx->pc = 0x2330CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2330C8u;
    // 0x2330cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x2330C8u, 0x2330D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2330D0u;
label_2330d0:
    // 0x2330d0: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x2330D0u;
    {
        const bool branch_taken_0x2330d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2330D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2330D0u;
        // 0x2330d4: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2330d0) {
            ctx->pc = 0x233200u;
            goto label_233200;
        }
    }
    ctx->pc = 0x2330D8u;
label_2330d8:
    // 0x2330d8: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x2330d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x2330dc: 0x50800047  beql        $a0, $zero, . + 4 + (0x47 << 2)
    ctx->pc = 0x2330DCu;
    {
        const bool branch_taken_0x2330dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2330dc) {
            ctx->pc = 0x2330E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2330DCu;
            // 0x2330e0: 0x24140016  addiu       $s4, $zero, 0x16 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2331FCu;
            goto label_2331fc;
        }
    }
    ctx->pc = 0x2330E4u;
    // 0x2330e4: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2330e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2330e8: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x2330E8u;
    {
        const bool branch_taken_0x2330e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2330ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2330E8u;
        // 0x2330ec: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2330e8) {
            ctx->pc = 0x2331FCu;
            goto label_2331fc;
        }
    }
    ctx->pc = 0x2330F0u;
label_2330f0:
    // 0x2330f0: 0x54800003  bnel        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2330F0u;
    {
        const bool branch_taken_0x2330f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2330f0) {
            ctx->pc = 0x2330F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2330F0u;
            // 0x2330f4: 0x8c840014  lw          $a0, 0x14($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x233100u;
            goto label_233100;
        }
    }
    ctx->pc = 0x2330F8u;
    // 0x2330f8: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x2330F8u;
    {
        const bool branch_taken_0x2330f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2330FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2330F8u;
        // 0x2330fc: 0x24140016  addiu       $s4, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2330f8) {
            ctx->pc = 0x2331FCu;
            goto label_2331fc;
        }
    }
    ctx->pc = 0x233100u;
label_233100:
    // 0x233100: 0xc08cd26  jal         func_233498
    ctx->pc = 0x233100u;
    SET_GPR_U32(ctx, 31, 0x233108u);
    ctx->pc = 0x233104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233100u;
    // 0x233104: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233498u, 0x233100u, 0x233108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233108u;
label_233108:
    // 0x233108: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x233108u;
    {
        const bool branch_taken_0x233108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23310Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233108u;
        // 0x23310c: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233108) {
            ctx->pc = 0x233200u;
            goto label_233200;
        }
    }
    ctx->pc = 0x233110u;
label_233110:
    // 0x233110: 0xc08cccc  jal         func_233330
    ctx->pc = 0x233110u;
    SET_GPR_U32(ctx, 31, 0x233118u);
    ctx->pc = 0x233114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233110u;
    // 0x233114: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233330u, 0x233110u, 0x233118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233118u;
label_233118:
    // 0x233118: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x233118u;
    {
        const bool branch_taken_0x233118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23311Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233118u;
        // 0x23311c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233118) {
            ctx->pc = 0x2331FCu;
            goto label_2331fc;
        }
    }
    ctx->pc = 0x233120u;
label_233120:
    // 0x233120: 0xde420000  ld          $v0, 0x0($s2)
    ctx->pc = 0x233120u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x233124: 0x24052710  addiu       $a1, $zero, 0x2710
    ctx->pc = 0x233124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x233128: 0xde440008  ld          $a0, 0x8($s2)
    ctx->pc = 0x233128u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x23312c: 0x28078  dsll        $s0, $v0, 1
    ctx->pc = 0x23312cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << 1);
    // 0x233130: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x233130u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x233134: 0x1080f8  dsll        $s0, $s0, 3
    ctx->pc = 0x233134u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 3);
    // 0x233138: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x233138u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x23313c: 0xc04818c  jal         func_120630
    ctx->pc = 0x23313Cu;
    SET_GPR_U32(ctx, 31, 0x233144u);
    ctx->pc = 0x233140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23313Cu;
    // 0x233140: 0x1080b8  dsll        $s0, $s0, 2 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 2);
    ctx->in_delay_slot = false;
    ctx->pc = 0x120630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120630u, 0x23313Cu, 0x233144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233144u;
label_233144:
    // 0x233144: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x233144u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x233148: 0x1600002c  bnez        $s0, . + 4 + (0x2C << 2)
    ctx->pc = 0x233148u;
    {
        const bool branch_taken_0x233148 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x23314Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233148u;
        // 0x23314c: 0xfe300020  sd          $s0, 0x20($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233148) {
            ctx->pc = 0x2331FCu;
            goto label_2331fc;
        }
    }
    ctx->pc = 0x233150u;
    // 0x233150: 0xde420008  ld          $v0, 0x8($s2)
    ctx->pc = 0x233150u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x233154: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x233154u;
    {
        const bool branch_taken_0x233154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233154u;
        // 0x233158: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233154) {
            ctx->pc = 0x2331FCu;
            goto label_2331fc;
        }
    }
    ctx->pc = 0x23315Cu;
    // 0x23315c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x23315Cu;
    {
        const bool branch_taken_0x23315c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23315Cu;
        // 0x233160: 0xfe220020  sd          $v0, 0x20($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23315c) {
            ctx->pc = 0x2331FCu;
            goto label_2331fc;
        }
    }
    ctx->pc = 0x233164u;
label_233164:
    // 0x233164: 0xde240020  ld          $a0, 0x20($s1)
    ctx->pc = 0x233164u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x233168: 0xc04857a  jal         func_1215E8
    ctx->pc = 0x233168u;
    SET_GPR_U32(ctx, 31, 0x233170u);
    ctx->pc = 0x23316Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233168u;
    // 0x23316c: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1215E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1215E8u, 0x233168u, 0x233170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233170u;
label_233170:
    // 0x233170: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x233170u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
    // 0x233174: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x233174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x233178: 0xc04872c  jal         func_121CB0
    ctx->pc = 0x233178u;
    SET_GPR_U32(ctx, 31, 0x233180u);
    ctx->pc = 0x23317Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233178u;
    // 0x23317c: 0xde240020  ld          $a0, 0x20($s1) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121CB0u, 0x233178u, 0x233180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233180u;
label_233180:
    // 0x233180: 0x218b8  dsll        $v1, $v0, 2
    ctx->pc = 0x233180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 2);
    // 0x233184: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x233184u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x233188: 0x318f8  dsll        $v1, $v1, 3
    ctx->pc = 0x233188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 3);
    // 0x23318c: 0x62182f  dsubu       $v1, $v1, $v0
    ctx->pc = 0x23318cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
    // 0x233190: 0x31938  dsll        $v1, $v1, 4
    ctx->pc = 0x233190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 4);
    // 0x233194: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x233194u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x233198: 0x31938  dsll        $v1, $v1, 4
    ctx->pc = 0x233198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 4);
    // 0x23319c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x23319Cu;
    {
        const bool branch_taken_0x23319c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2331A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23319Cu;
        // 0x2331a0: 0xfe430008  sd          $v1, 0x8($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23319c) {
            ctx->pc = 0x2331FCu;
            goto label_2331fc;
        }
    }
    ctx->pc = 0x2331A4u;
label_2331a4:
    // 0x2331a4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x2331a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x2331a8: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x2331a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x2331ac: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2331ACu;
    {
        const bool branch_taken_0x2331ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2331B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2331ACu;
        // 0x2331b0: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2331ac) {
            ctx->pc = 0x2331FCu;
            goto label_2331fc;
        }
    }
    ctx->pc = 0x2331B4u;
label_2331b4:
    // 0x2331b4: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x2331b4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2331b8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2331B8u;
    {
        const bool branch_taken_0x2331b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2331BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2331B8u;
        // 0x2331bc: 0xa2220042  sb          $v0, 0x42($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 66), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2331b8) {
            ctx->pc = 0x2331FCu;
            goto label_2331fc;
        }
    }
    ctx->pc = 0x2331C0u;
label_2331c0:
    // 0x2331c0: 0xa6420002  sh          $v0, 0x2($s2)
    ctx->pc = 0x2331c0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x2331c4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2331C4u;
    {
        const bool branch_taken_0x2331c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2331C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2331C4u;
        // 0x2331c8: 0xa6420000  sh          $v0, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2331c4) {
            ctx->pc = 0x2331FCu;
            goto label_2331fc;
        }
    }
    ctx->pc = 0x2331CCu;
label_2331cc:
    // 0x2331cc: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x2331ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x2331d0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2331D0u;
    {
        const bool branch_taken_0x2331d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2331D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2331D0u;
        // 0x2331d4: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2331d0) {
            ctx->pc = 0x2331FCu;
            goto label_2331fc;
        }
    }
    ctx->pc = 0x2331D8u;
label_2331d8:
    // 0x2331d8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2331d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2331dc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2331DCu;
    {
        const bool branch_taken_0x2331dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2331E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2331DCu;
        // 0x2331e0: 0xae220044  sw          $v0, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2331dc) {
            ctx->pc = 0x2331FCu;
            goto label_2331fc;
        }
    }
    ctx->pc = 0x2331E4u;
label_2331e4:
    // 0x2331e4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2331e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2331e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2331E8u;
    {
        const bool branch_taken_0x2331e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2331ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2331E8u;
        // 0x2331ec: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2331e8) {
            ctx->pc = 0x2331F8u;
            goto label_2331f8;
        }
    }
    ctx->pc = 0x2331F0u;
    // 0x2331f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2331F0u;
    {
        const bool branch_taken_0x2331f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2331F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2331F0u;
        // 0x2331f4: 0xfe220020  sd          $v0, 0x20($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2331f0) {
            ctx->pc = 0x2331FCu;
            goto label_2331fc;
        }
    }
    ctx->pc = 0x2331F8u;
label_2331f8:
    // 0x2331f8: 0xfe200020  sd          $zero, 0x20($s1)
    ctx->pc = 0x2331f8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 0));
label_2331fc:
    // 0x2331fc: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x2331fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_233200:
    // 0x233200: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x233200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x233204: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x233204u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x233208: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x233208u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23320c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23320cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x233210: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x233210u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233214: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x233214u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x233218: 0x3e00008  jr          $ra
    ctx->pc = 0x233218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23321Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233218u;
        // 0x23321c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233220u;
}
