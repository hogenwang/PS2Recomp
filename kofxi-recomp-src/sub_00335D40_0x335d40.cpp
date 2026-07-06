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

// Function: sub_00335D40
// Address: 0x335d40 - 0x336520
void sub_00335D40_0x335d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00335D40_0x335d40");
#endif

    switch (ctx->pc) {
        case 0x335de4u: goto label_335de4;
        case 0x335dfcu: goto label_335dfc;
        case 0x335e8cu: goto label_335e8c;
        case 0x335ed0u: goto label_335ed0;
        case 0x335f0cu: goto label_335f0c;
        case 0x335f3cu: goto label_335f3c;
        case 0x335facu: goto label_335fac;
        case 0x335fccu: goto label_335fcc;
        case 0x335fe4u: goto label_335fe4;
        case 0x336008u: goto label_336008;
        case 0x33605cu: goto label_33605c;
        case 0x336074u: goto label_336074;
        case 0x33608cu: goto label_33608c;
        case 0x3360b8u: goto label_3360b8;
        case 0x3360d4u: goto label_3360d4;
        case 0x336110u: goto label_336110;
        case 0x336170u: goto label_336170;
        case 0x3361b4u: goto label_3361b4;
        case 0x3361f4u: goto label_3361f4;
        case 0x33623cu: goto label_33623c;
        case 0x336254u: goto label_336254;
        case 0x33626cu: goto label_33626c;
        case 0x336284u: goto label_336284;
        case 0x336294u: goto label_336294;
        case 0x3362a4u: goto label_3362a4;
        case 0x3362d8u: goto label_3362d8;
        case 0x3362f0u: goto label_3362f0;
        case 0x33630cu: goto label_33630c;
        case 0x336354u: goto label_336354;
        case 0x336370u: goto label_336370;
        case 0x336388u: goto label_336388;
        case 0x3363e4u: goto label_3363e4;
        case 0x33642cu: goto label_33642c;
        case 0x336444u: goto label_336444;
        case 0x336464u: goto label_336464;
        case 0x3364acu: goto label_3364ac;
        case 0x3364c4u: goto label_3364c4;
        case 0x3364e0u: goto label_3364e0;
        default: break;
    }

    ctx->pc = 0x335d40u;

    // 0x335d40: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x335d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x335d44: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x335d44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335d48: 0x24430011  addiu       $v1, $v0, 0x11
    ctx->pc = 0x335d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 17));
    // 0x335d4c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x335d4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335d50: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x335d50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x335d54: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x335d54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335d58: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x335d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x335d5c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x335d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x335d60: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x335d60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x335d64: 0x24422290  addiu       $v0, $v0, 0x2290
    ctx->pc = 0x335d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8848));
    // 0x335d68: 0x80c0ab8  j           func_302AE0
    ctx->pc = 0x335D68u;
    ctx->pc = 0x335D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335D68u;
    // 0x335d6c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    sub_00302AE0_0x302ae0(rdram, ctx, runtime); return;
    ctx->pc = 0x335D70u;
    // 0x335d70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x335d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x335d74: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x335d74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x335d78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x335d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x335d7c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x335d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x335d80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x335d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x335d84: 0x9067e818  lbu         $a3, -0x17E8($v1)
    ctx->pc = 0x335d84u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961176)));
    // 0x335d88: 0x10e600fd  beq         $a3, $a2, . + 4 + (0xFD << 2)
    ctx->pc = 0x335D88u;
    {
        const bool branch_taken_0x335d88 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        if (branch_taken_0x335d88) {
            ctx->pc = 0x336180u;
            goto label_336180;
        }
    }
    ctx->pc = 0x335D90u;
    // 0x335d90: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x335d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x335d94: 0x10e300e9  beq         $a3, $v1, . + 4 + (0xE9 << 2)
    ctx->pc = 0x335D94u;
    {
        const bool branch_taken_0x335d94 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x335d94) {
            ctx->pc = 0x33613Cu;
            goto label_33613c;
        }
    }
    ctx->pc = 0x335D9Cu;
    // 0x335d9c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x335d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x335da0: 0x10e300d0  beq         $a3, $v1, . + 4 + (0xD0 << 2)
    ctx->pc = 0x335DA0u;
    {
        const bool branch_taken_0x335da0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x335da0) {
            ctx->pc = 0x3360E4u;
            goto label_3360e4;
        }
    }
    ctx->pc = 0x335DA8u;
    // 0x335da8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x335da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x335dac: 0x50e40085  beql        $a3, $a0, . + 4 + (0x85 << 2)
    ctx->pc = 0x335DACu;
    {
        const bool branch_taken_0x335dac = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        if (branch_taken_0x335dac) {
            ctx->pc = 0x335DB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x335DACu;
            // 0x335db0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x335FC4u;
            goto label_335fc4;
        }
    }
    ctx->pc = 0x335DB4u;
    // 0x335db4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x335db4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x335db8: 0x10e50018  beq         $a3, $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x335DB8u;
    {
        const bool branch_taken_0x335db8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        if (branch_taken_0x335db8) {
            ctx->pc = 0x335E1Cu;
            goto label_335e1c;
        }
    }
    ctx->pc = 0x335DC0u;
    // 0x335dc0: 0x10e0000c  beqz        $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x335DC0u;
    {
        const bool branch_taken_0x335dc0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x335dc0) {
            ctx->pc = 0x335DF4u;
            goto label_335df4;
        }
    }
    ctx->pc = 0x335DC8u;
    // 0x335dc8: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x335dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x335dcc: 0x10e30003  beq         $a3, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x335DCCu;
    {
        const bool branch_taken_0x335dcc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x335dcc) {
            ctx->pc = 0x335DDCu;
            goto label_335ddc;
        }
    }
    ctx->pc = 0x335DD4u;
    // 0x335dd4: 0x100000fb  b           . + 4 + (0xFB << 2)
    ctx->pc = 0x335DD4u;
    {
        const bool branch_taken_0x335dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335DD4u;
        // 0x335dd8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335dd4) {
            ctx->pc = 0x3361C4u;
            goto label_3361c4;
        }
    }
    ctx->pc = 0x335DDCu;
label_335ddc:
    // 0x335ddc: 0xc0cbf34  jal         func_32FCD0
    ctx->pc = 0x335DDCu;
    SET_GPR_U32(ctx, 31, 0x335DE4u);
    ctx->pc = 0x32FCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FCD0u, 0x335DDCu, 0x335DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335DE4u;
label_335de4:
    // 0x335de4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x335de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x335de8: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x335de8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x335dec: 0x100000f4  b           . + 4 + (0xF4 << 2)
    ctx->pc = 0x335DECu;
    {
        const bool branch_taken_0x335dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335DECu;
        // 0x335df0: 0xa064e818  sb          $a0, -0x17E8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335dec) {
            ctx->pc = 0x3361C0u;
            goto label_3361c0;
        }
    }
    ctx->pc = 0x335DF4u;
label_335df4:
    // 0x335df4: 0xc0cbf34  jal         func_32FCD0
    ctx->pc = 0x335DF4u;
    SET_GPR_U32(ctx, 31, 0x335DFCu);
    ctx->pc = 0x32FCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FCD0u, 0x335DF4u, 0x335DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335DFCu;
label_335dfc:
    // 0x335dfc: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x335dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x335e00: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x335e00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x335e04: 0x9084e818  lbu         $a0, -0x17E8($a0)
    ctx->pc = 0x335e04u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294961176)));
    // 0x335e08: 0xac60e808  sw          $zero, -0x17F8($v1)
    ctx->pc = 0x335e08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961160), GPR_U32(ctx, 0));
    // 0x335e0c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x335e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x335e10: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x335e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x335e14: 0x100000ea  b           . + 4 + (0xEA << 2)
    ctx->pc = 0x335E14u;
    {
        const bool branch_taken_0x335e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335E14u;
        // 0x335e18: 0xa064e818  sb          $a0, -0x17E8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335e14) {
            ctx->pc = 0x3361C0u;
            goto label_3361c0;
        }
    }
    ctx->pc = 0x335E1Cu;
label_335e1c:
    // 0x335e1c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x335e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x335e20: 0x8c63e7d0  lw          $v1, -0x1830($v1)
    ctx->pc = 0x335e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961104)));
    // 0x335e24: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x335e24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x335e28: 0x14600049  bnez        $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x335E28u;
    {
        const bool branch_taken_0x335e28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x335e28) {
            ctx->pc = 0x335F50u;
            goto label_335f50;
        }
    }
    ctx->pc = 0x335E30u;
    // 0x335e30: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x335e30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x335e34: 0x8c67e7c8  lw          $a3, -0x1838($v1)
    ctx->pc = 0x335e34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961096)));
    // 0x335e38: 0x28e10006  slti        $at, $a3, 0x6
    ctx->pc = 0x335e38u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x335e3c: 0x10200044  beqz        $at, . + 4 + (0x44 << 2)
    ctx->pc = 0x335E3Cu;
    {
        const bool branch_taken_0x335e3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x335e3c) {
            ctx->pc = 0x335F50u;
            goto label_335f50;
        }
    }
    ctx->pc = 0x335E44u;
    // 0x335e44: 0x2ce10006  sltiu       $at, $a3, 0x6
    ctx->pc = 0x335e44u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x335e48: 0x10200041  beqz        $at, . + 4 + (0x41 << 2)
    ctx->pc = 0x335E48u;
    {
        const bool branch_taken_0x335e48 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x335e48) {
            ctx->pc = 0x335F50u;
            goto label_335f50;
        }
    }
    ctx->pc = 0x335E50u;
    // 0x335e50: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x335e50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x335e54: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x335e54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x335e58: 0x248449b0  addiu       $a0, $a0, 0x49B0
    ctx->pc = 0x335e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18864));
    // 0x335e5c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x335e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x335e60: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x335e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x335e64: 0x600008  jr          $v1
    ctx->pc = 0x335E64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x335E6Cu: goto label_335e6c;
            case 0x335EA4u: goto label_335ea4;
            case 0x335EE8u: goto label_335ee8;
            case 0x335F24u: goto label_335f24;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335E64u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x335E6Cu;
label_335e6c:
    // 0x335e6c: 0x7363c  dsll32      $a2, $a3, 24
    ctx->pc = 0x335e6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 24));
    // 0x335e70: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x335e70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x335e74: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x335e74u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x335e78: 0x248461d0  addiu       $a0, $a0, 0x61D0
    ctx->pc = 0x335e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25040));
    // 0x335e7c: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x335e7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x335e80: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x335e80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x335e84: 0xc0cbfdc  jal         func_32FF70
    ctx->pc = 0x335E84u;
    SET_GPR_U32(ctx, 31, 0x335E8Cu);
    ctx->pc = 0x335E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335E84u;
    // 0x335e88: 0x24090160  addiu       $t1, $zero, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FF70u, 0x335E84u, 0x335E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335E8Cu;
label_335e8c:
    // 0x335e8c: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x335e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x335e90: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x335e90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x335e94: 0x8c84e7c8  lw          $a0, -0x1838($a0)
    ctx->pc = 0x335e94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961096)));
    // 0x335e98: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x335e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x335e9c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x335E9Cu;
    {
        const bool branch_taken_0x335e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335E9Cu;
        // 0x335ea0: 0xac64e7c8  sw          $a0, -0x1838($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961096), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335e9c) {
            ctx->pc = 0x335F50u;
            goto label_335f50;
        }
    }
    ctx->pc = 0x335EA4u;
label_335ea4:
    // 0x335ea4: 0x24e2ffff  addiu       $v0, $a3, -0x1
    ctx->pc = 0x335ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x335ea8: 0x7363c  dsll32      $a2, $a3, 24
    ctx->pc = 0x335ea8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 24));
    // 0x335eac: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x335eacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x335eb0: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x335eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x335eb4: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x335eb4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x335eb8: 0x248461d0  addiu       $a0, $a0, 0x61D0
    ctx->pc = 0x335eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25040));
    // 0x335ebc: 0x244800b0  addiu       $t0, $v0, 0xB0
    ctx->pc = 0x335ebcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x335ec0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x335ec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335ec4: 0x2407fe00  addiu       $a3, $zero, -0x200
    ctx->pc = 0x335ec4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x335ec8: 0xc0cbfdc  jal         func_32FF70
    ctx->pc = 0x335EC8u;
    SET_GPR_U32(ctx, 31, 0x335ED0u);
    ctx->pc = 0x335ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335EC8u;
    // 0x335ecc: 0x24090140  addiu       $t1, $zero, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FF70u, 0x335EC8u, 0x335ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335ED0u;
label_335ed0:
    // 0x335ed0: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x335ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x335ed4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x335ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x335ed8: 0x8c84e7c8  lw          $a0, -0x1838($a0)
    ctx->pc = 0x335ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961096)));
    // 0x335edc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x335edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x335ee0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x335EE0u;
    {
        const bool branch_taken_0x335ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335EE0u;
        // 0x335ee4: 0xac64e7c8  sw          $a0, -0x1838($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961096), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335ee0) {
            ctx->pc = 0x335F50u;
            goto label_335f50;
        }
    }
    ctx->pc = 0x335EE8u;
label_335ee8:
    // 0x335ee8: 0x7363c  dsll32      $a2, $a3, 24
    ctx->pc = 0x335ee8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 24));
    // 0x335eec: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x335eecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x335ef0: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x335ef0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x335ef4: 0x248461d0  addiu       $a0, $a0, 0x61D0
    ctx->pc = 0x335ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25040));
    // 0x335ef8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x335ef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335efc: 0x2407fe00  addiu       $a3, $zero, -0x200
    ctx->pc = 0x335efcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x335f00: 0x24080180  addiu       $t0, $zero, 0x180
    ctx->pc = 0x335f00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x335f04: 0xc0cc004  jal         func_330010
    ctx->pc = 0x335F04u;
    SET_GPR_U32(ctx, 31, 0x335F0Cu);
    ctx->pc = 0x335F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335F04u;
    // 0x335f08: 0x240900c0  addiu       $t1, $zero, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330010u, 0x335F04u, 0x335F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335F0Cu;
label_335f0c:
    // 0x335f0c: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x335f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x335f10: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x335f10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x335f14: 0x8c84e7c8  lw          $a0, -0x1838($a0)
    ctx->pc = 0x335f14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961096)));
    // 0x335f18: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x335f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x335f1c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x335F1Cu;
    {
        const bool branch_taken_0x335f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335F1Cu;
        // 0x335f20: 0xac64e7c8  sw          $a0, -0x1838($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961096), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335f1c) {
            ctx->pc = 0x335F50u;
            goto label_335f50;
        }
    }
    ctx->pc = 0x335F24u;
label_335f24:
    // 0x335f24: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x335f24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x335f28: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x335f28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x335f2c: 0x248461d0  addiu       $a0, $a0, 0x61D0
    ctx->pc = 0x335f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25040));
    // 0x335f30: 0x24080190  addiu       $t0, $zero, 0x190
    ctx->pc = 0x335f30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x335f34: 0xc0cbfdc  jal         func_32FF70
    ctx->pc = 0x335F34u;
    SET_GPR_U32(ctx, 31, 0x335F3Cu);
    ctx->pc = 0x335F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335F34u;
    // 0x335f38: 0x240901e0  addiu       $t1, $zero, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FF70u, 0x335F34u, 0x335F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335F3Cu;
label_335f3c:
    // 0x335f3c: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x335f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x335f40: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x335f40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x335f44: 0x8c84e7c8  lw          $a0, -0x1838($a0)
    ctx->pc = 0x335f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961096)));
    // 0x335f48: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x335f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x335f4c: 0xac64e7c8  sw          $a0, -0x1838($v1)
    ctx->pc = 0x335f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961096), GPR_U32(ctx, 4));
label_335f50:
    // 0x335f50: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x335f50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x335f54: 0x9064e810  lbu         $a0, -0x17F0($v1)
    ctx->pc = 0x335f54u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961168)));
    // 0x335f58: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x335f58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x335f5c: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x335F5Cu;
    {
        const bool branch_taken_0x335f5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x335f5c) {
            ctx->pc = 0x335FACu;
            goto label_335fac;
        }
    }
    ctx->pc = 0x335F64u;
    // 0x335f64: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x335f64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x335f68: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x335F68u;
    {
        const bool branch_taken_0x335f68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x335f68) {
            ctx->pc = 0x335FACu;
            goto label_335fac;
        }
    }
    ctx->pc = 0x335F70u;
    // 0x335f70: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x335f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x335f74: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x335f74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x335f78: 0x9047e818  lbu         $a3, -0x17E8($v0)
    ctx->pc = 0x335f78u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961176)));
    // 0x335f7c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x335f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x335f80: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x335f80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x335f84: 0x248463a0  addiu       $a0, $a0, 0x63A0
    ctx->pc = 0x335f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25504));
    // 0x335f88: 0x24a54648  addiu       $a1, $a1, 0x4648
    ctx->pc = 0x335f88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17992));
    // 0x335f8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x335f8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335f90: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x335f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x335f94: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x335f94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335f98: 0xa040e810  sb          $zero, -0x17F0($v0)
    ctx->pc = 0x335f98u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294961168), (uint8_t)GPR_U32(ctx, 0));
    // 0x335f9c: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x335f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x335fa0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x335fa0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335fa4: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x335FA4u;
    SET_GPR_U32(ctx, 31, 0x335FACu);
    ctx->pc = 0x335FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335FA4u;
    // 0x335fa8: 0xa062e818  sb          $v0, -0x17E8($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155B50u, 0x335FA4u, 0x335FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335FACu;
label_335fac:
    // 0x335fac: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x335facu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x335fb0: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x335fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x335fb4: 0x8c84e7d0  lw          $a0, -0x1830($a0)
    ctx->pc = 0x335fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961104)));
    // 0x335fb8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x335fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x335fbc: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x335FBCu;
    {
        const bool branch_taken_0x335fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335FBCu;
        // 0x335fc0: 0xac64e7d0  sw          $a0, -0x1830($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961104), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335fbc) {
            ctx->pc = 0x3361C0u;
            goto label_3361c0;
        }
    }
    ctx->pc = 0x335FC4u;
label_335fc4:
    // 0x335fc4: 0xc068d08  jal         func_1A3420
    ctx->pc = 0x335FC4u;
    SET_GPR_U32(ctx, 31, 0x335FCCu);
    ctx->pc = 0x335FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335FC4u;
    // 0x335fc8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3420u, 0x335FC4u, 0x335FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335FCCu;
label_335fcc:
    // 0x335fcc: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x335fccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x335fd0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x335fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x335fd4: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x335fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x335fd8: 0x8044e808  lb          $a0, -0x17F8($v0)
    ctx->pc = 0x335fd8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961160)));
    // 0x335fdc: 0xc0cd948  jal         func_336520
    ctx->pc = 0x335FDCu;
    SET_GPR_U32(ctx, 31, 0x335FE4u);
    ctx->pc = 0x335FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335FDCu;
    // 0x335fe0: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336520u, 0x335FDCu, 0x335FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335FE4u;
label_335fe4:
    // 0x335fe4: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x335fe4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
    // 0x335fe8: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x335fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x335fec: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x335fecu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x335ff0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x335ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x335ff4: 0x14850006  bne         $a0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x335FF4u;
    {
        const bool branch_taken_0x335ff4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x335FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335FF4u;
        // 0x335ff8: 0xac64e808  sw          $a0, -0x17F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961160), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335ff4) {
            ctx->pc = 0x336010u;
            goto label_336010;
        }
    }
    ctx->pc = 0x335FFCu;
    // 0x335ffc: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x335ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x336000: 0xc0cd9f0  jal         func_3367C0
    ctx->pc = 0x336000u;
    SET_GPR_U32(ctx, 31, 0x336008u);
    ctx->pc = 0x336004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336000u;
    // 0x336004: 0x8044b288  lb          $a0, -0x4D78($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947464)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3367C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3367C0u, 0x336000u, 0x336008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336008u;
label_336008:
    // 0x336008: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x336008u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x33600c: 0xa062b288  sb          $v0, -0x4D78($v1)
    ctx->pc = 0x33600cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294947464), (uint8_t)GPR_U32(ctx, 2));
label_336010:
    // 0x336010: 0x10243c  dsll32      $a0, $s0, 16
    ctx->pc = 0x336010u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
    // 0x336014: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x336014u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x336018: 0x30832000  andi        $v1, $a0, 0x2000
    ctx->pc = 0x336018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8192);
    // 0x33601c: 0x5060001f  beql        $v1, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x33601Cu;
    {
        const bool branch_taken_0x33601c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33601c) {
            ctx->pc = 0x336020u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33601Cu;
            // 0x336020: 0x30830001  andi        $v1, $a0, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33609Cu;
            goto label_33609c;
        }
    }
    ctx->pc = 0x336024u;
    // 0x336024: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x336024u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x336028: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x336028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33602c: 0x8c65e808  lw          $a1, -0x17F8($v1)
    ctx->pc = 0x33602cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961160)));
    // 0x336030: 0x50a40014  beql        $a1, $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x336030u;
    {
        const bool branch_taken_0x336030 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x336030) {
            ctx->pc = 0x336034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x336030u;
            // 0x336034: 0x24040126  addiu       $a0, $zero, 0x126 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
            ctx->in_delay_slot = false;
            ctx->pc = 0x336084u;
            goto label_336084;
        }
    }
    ctx->pc = 0x336038u;
    // 0x336038: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x336038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33603c: 0x50a3000b  beql        $a1, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x33603Cu;
    {
        const bool branch_taken_0x33603c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x33603c) {
            ctx->pc = 0x336040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33603Cu;
            // 0x336040: 0x24040126  addiu       $a0, $zero, 0x126 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33606Cu;
            goto label_33606c;
        }
    }
    ctx->pc = 0x336044u;
    // 0x336044: 0x50a00003  beql        $a1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x336044u;
    {
        const bool branch_taken_0x336044 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x336044) {
            ctx->pc = 0x336048u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x336044u;
            // 0x336048: 0x24040126  addiu       $a0, $zero, 0x126 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
            ctx->in_delay_slot = false;
            ctx->pc = 0x336054u;
            goto label_336054;
        }
    }
    ctx->pc = 0x33604Cu;
    // 0x33604c: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x33604Cu;
    {
        const bool branch_taken_0x33604c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33604c) {
            ctx->pc = 0x3361C0u;
            goto label_3361c0;
        }
    }
    ctx->pc = 0x336054u;
label_336054:
    // 0x336054: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x336054u;
    SET_GPR_U32(ctx, 31, 0x33605Cu);
    ctx->pc = 0x336058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336054u;
    // 0x336058: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x336054u, 0x33605Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33605Cu;
label_33605c:
    // 0x33605c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x33605cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x336060: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x336060u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x336064: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x336064u;
    {
        const bool branch_taken_0x336064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336064u;
        // 0x336068: 0xa064e818  sb          $a0, -0x17E8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336064) {
            ctx->pc = 0x3361C0u;
            goto label_3361c0;
        }
    }
    ctx->pc = 0x33606Cu;
label_33606c:
    // 0x33606c: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x33606Cu;
    SET_GPR_U32(ctx, 31, 0x336074u);
    ctx->pc = 0x336070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33606Cu;
    // 0x336070: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x33606Cu, 0x336074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336074u;
label_336074:
    // 0x336074: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x336074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x336078: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x336078u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33607c: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x33607Cu;
    {
        const bool branch_taken_0x33607c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33607Cu;
        // 0x336080: 0xa064e818  sb          $a0, -0x17E8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33607c) {
            ctx->pc = 0x3361C0u;
            goto label_3361c0;
        }
    }
    ctx->pc = 0x336084u;
label_336084:
    // 0x336084: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x336084u;
    SET_GPR_U32(ctx, 31, 0x33608Cu);
    ctx->pc = 0x336088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336084u;
    // 0x336088: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x336084u, 0x33608Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33608Cu;
label_33608c:
    // 0x33608c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x33608cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x336090: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x336090u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x336094: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x336094u;
    {
        const bool branch_taken_0x336094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336094u;
        // 0x336098: 0xa064e818  sb          $a0, -0x17E8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336094) {
            ctx->pc = 0x3361C0u;
            goto label_3361c0;
        }
    }
    ctx->pc = 0x33609Cu;
label_33609c:
    // 0x33609c: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x33609Cu;
    {
        const bool branch_taken_0x33609c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33609c) {
            ctx->pc = 0x3360A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33609Cu;
            // 0x3360a0: 0x30834000  andi        $v1, $a0, 0x4000 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3360C0u;
            goto label_3360c0;
        }
    }
    ctx->pc = 0x3360A4u;
    // 0x3360a4: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x3360a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x3360a8: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x3360a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x3360ac: 0xa040b288  sb          $zero, -0x4D78($v0)
    ctx->pc = 0x3360acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294947464), (uint8_t)GPR_U32(ctx, 0));
    // 0x3360b0: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x3360B0u;
    SET_GPR_U32(ctx, 31, 0x3360B8u);
    ctx->pc = 0x3360B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3360B0u;
    // 0x3360b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x3360B0u, 0x3360B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3360B8u;
label_3360b8:
    // 0x3360b8: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x3360B8u;
    {
        const bool branch_taken_0x3360b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3360b8) {
            ctx->pc = 0x3361C0u;
            goto label_3361c0;
        }
    }
    ctx->pc = 0x3360C0u;
label_3360c0:
    // 0x3360c0: 0x1060003f  beqz        $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x3360C0u;
    {
        const bool branch_taken_0x3360c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3360c0) {
            ctx->pc = 0x3361C0u;
            goto label_3361c0;
        }
    }
    ctx->pc = 0x3360C8u;
    // 0x3360c8: 0x2404013e  addiu       $a0, $zero, 0x13E
    ctx->pc = 0x3360c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
    // 0x3360cc: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x3360CCu;
    SET_GPR_U32(ctx, 31, 0x3360D4u);
    ctx->pc = 0x3360D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3360CCu;
    // 0x3360d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x3360CCu, 0x3360D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3360D4u;
label_3360d4:
    // 0x3360d4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3360d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3360d8: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3360d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3360dc: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x3360DCu;
    {
        const bool branch_taken_0x3360dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3360E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3360DCu;
        // 0x3360e0: 0xa064e818  sb          $a0, -0x17E8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3360dc) {
            ctx->pc = 0x3361C0u;
            goto label_3361c0;
        }
    }
    ctx->pc = 0x3360E4u;
label_3360e4:
    // 0x3360e4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3360e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3360e8: 0x9064e810  lbu         $a0, -0x17F0($v1)
    ctx->pc = 0x3360e8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961168)));
    // 0x3360ec: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x3360ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x3360f0: 0x10600033  beqz        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x3360F0u;
    {
        const bool branch_taken_0x3360f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3360f0) {
            ctx->pc = 0x3361C0u;
            goto label_3361c0;
        }
    }
    ctx->pc = 0x3360F8u;
    // 0x3360f8: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x3360f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x3360fc: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x3360FCu;
    {
        const bool branch_taken_0x3360fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3360fc) {
            ctx->pc = 0x3361C0u;
            goto label_3361c0;
        }
    }
    ctx->pc = 0x336104u;
    // 0x336104: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x336104u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x336108: 0xc0558e0  jal         func_156380
    ctx->pc = 0x336108u;
    SET_GPR_U32(ctx, 31, 0x336110u);
    ctx->pc = 0x33610Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336108u;
    // 0x33610c: 0x24841760  addiu       $a0, $a0, 0x1760 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156380u, 0x336108u, 0x336110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336110u;
label_336110:
    // 0x336110: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x336110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x336114: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x336114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x336118: 0xa064e820  sb          $a0, -0x17E0($v1)
    ctx->pc = 0x336118u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961184), (uint8_t)GPR_U32(ctx, 4));
    // 0x33611c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x33611cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x336120: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x336120u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x336124: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x336124u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x336128: 0xa060e818  sb          $zero, -0x17E8($v1)
    ctx->pc = 0x336128u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 0));
    // 0x33612c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33612cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x336130: 0xac85e800  sw          $a1, -0x1800($a0)
    ctx->pc = 0x336130u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294961152), GPR_U32(ctx, 5));
    // 0x336134: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x336134u;
    {
        const bool branch_taken_0x336134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336134u;
        // 0x336138: 0xac60e7f8  sw          $zero, -0x1808($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336134) {
            ctx->pc = 0x3361C0u;
            goto label_3361c0;
        }
    }
    ctx->pc = 0x33613Cu;
label_33613c:
    // 0x33613c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33613cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x336140: 0x9064e810  lbu         $a0, -0x17F0($v1)
    ctx->pc = 0x336140u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961168)));
    // 0x336144: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x336144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x336148: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x336148u;
    {
        const bool branch_taken_0x336148 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x336148) {
            ctx->pc = 0x3361C0u;
            goto label_3361c0;
        }
    }
    ctx->pc = 0x336150u;
    // 0x336150: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x336150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x336154: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x336154u;
    {
        const bool branch_taken_0x336154 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x336154) {
            ctx->pc = 0x3361C0u;
            goto label_3361c0;
        }
    }
    ctx->pc = 0x33615Cu;
    // 0x33615c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x33615cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x336160: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x336160u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x336164: 0x2484ec10  addiu       $a0, $a0, -0x13F0
    ctx->pc = 0x336164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962192));
    // 0x336168: 0xc0558d4  jal         func_156350
    ctx->pc = 0x336168u;
    SET_GPR_U32(ctx, 31, 0x336170u);
    ctx->pc = 0x33616Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336168u;
    // 0x33616c: 0x24a55d70  addiu       $a1, $a1, 0x5D70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156350u, 0x336168u, 0x336170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336170u;
label_336170:
    // 0x336170: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x336170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x336174: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x336174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x336178: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x336178u;
    {
        const bool branch_taken_0x336178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33617Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336178u;
        // 0x33617c: 0xa064e818  sb          $a0, -0x17E8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336178) {
            ctx->pc = 0x3361C0u;
            goto label_3361c0;
        }
    }
    ctx->pc = 0x336180u;
label_336180:
    // 0x336180: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x336180u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x336184: 0x9064e810  lbu         $a0, -0x17F0($v1)
    ctx->pc = 0x336184u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961168)));
    // 0x336188: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x336188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x33618c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x33618Cu;
    {
        const bool branch_taken_0x33618c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33618c) {
            ctx->pc = 0x3361C0u;
            goto label_3361c0;
        }
    }
    ctx->pc = 0x336194u;
    // 0x336194: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x336194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x336198: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x336198u;
    {
        const bool branch_taken_0x336198 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x336198) {
            ctx->pc = 0x3361C0u;
            goto label_3361c0;
        }
    }
    ctx->pc = 0x3361A0u;
    // 0x3361a0: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x3361a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x3361a4: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x3361a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x3361a8: 0x2484f1f0  addiu       $a0, $a0, -0xE10
    ctx->pc = 0x3361a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963696));
    // 0x3361ac: 0xc0558d4  jal         func_156350
    ctx->pc = 0x3361ACu;
    SET_GPR_U32(ctx, 31, 0x3361B4u);
    ctx->pc = 0x3361B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3361ACu;
    // 0x3361b0: 0x24a55d70  addiu       $a1, $a1, 0x5D70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156350u, 0x3361ACu, 0x3361B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3361B4u;
label_3361b4:
    // 0x3361b4: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x3361b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x3361b8: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3361b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3361bc: 0xa064e818  sb          $a0, -0x17E8($v1)
    ctx->pc = 0x3361bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 4));
label_3361c0:
    // 0x3361c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3361c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3361c4:
    // 0x3361c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3361c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3361c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3361C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3361CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3361C8u;
        // 0x3361cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3361C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3361D0u;
    // 0x3361d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3361d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3361d4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3361d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3361d8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3361d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x3361dc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3361dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3361e0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3361e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3361e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3361e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3361e8: 0x3c10003d  lui         $s0, 0x3D
    ctx->pc = 0x3361e8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)61 << 16));
    // 0x3361ec: 0xc0cc088  jal         func_330220
    ctx->pc = 0x3361ECu;
    SET_GPR_U32(ctx, 31, 0x3361F4u);
    ctx->pc = 0x3361F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3361ECu;
    // 0x3361f0: 0x26101b10  addiu       $s0, $s0, 0x1B10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 6928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330220u, 0x3361ECu, 0x3361F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3361F4u;
label_3361f4:
    // 0x3361f4: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x3361f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3361f8: 0x84720002  lh          $s2, 0x2($v1)
    ctx->pc = 0x3361f8u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3361fc: 0x84710004  lh          $s1, 0x4($v1)
    ctx->pc = 0x3361fcu;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x336200: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x336200u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x336204: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x336204u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x336208: 0x50200060  beql        $at, $zero, . + 4 + (0x60 << 2)
    ctx->pc = 0x336208u;
    {
        const bool branch_taken_0x336208 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x336208) {
            ctx->pc = 0x33620Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x336208u;
            // 0x33620c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33638Cu;
            goto label_33638c;
        }
    }
    ctx->pc = 0x336210u;
    // 0x336210: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x336210u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x336214: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x336214u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x336218: 0x248449d0  addiu       $a0, $a0, 0x49D0
    ctx->pc = 0x336218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18896));
    // 0x33621c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33621cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x336220: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x336220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x336224: 0x600008  jr          $v1
    ctx->pc = 0x336224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x33622Cu: goto label_33622c;
            case 0x336244u: goto label_336244;
            case 0x33625Cu: goto label_33625c;
            case 0x336274u: goto label_336274;
            case 0x3362E0u: goto label_3362e0;
            case 0x336378u: goto label_336378;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x336224u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x33622Cu;
label_33622c:
    // 0x33622c: 0x26040270  addiu       $a0, $s0, 0x270
    ctx->pc = 0x33622cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 624));
    // 0x336230: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x336230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336234: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x336234u;
    SET_GPR_U32(ctx, 31, 0x33623Cu);
    ctx->pc = 0x336238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336234u;
    // 0x336238: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x336234u, 0x33623Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33623Cu;
label_33623c:
    // 0x33623c: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x33623Cu;
    {
        const bool branch_taken_0x33623c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33623c) {
            ctx->pc = 0x336388u;
            goto label_336388;
        }
    }
    ctx->pc = 0x336244u;
label_336244:
    // 0x336244: 0x2645ffc0  addiu       $a1, $s2, -0x40
    ctx->pc = 0x336244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967232));
    // 0x336248: 0x26040288  addiu       $a0, $s0, 0x288
    ctx->pc = 0x336248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 648));
    // 0x33624c: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x33624Cu;
    SET_GPR_U32(ctx, 31, 0x336254u);
    ctx->pc = 0x336250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33624Cu;
    // 0x336250: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x33624Cu, 0x336254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336254u;
label_336254:
    // 0x336254: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x336254u;
    {
        const bool branch_taken_0x336254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x336254) {
            ctx->pc = 0x336388u;
            goto label_336388;
        }
    }
    ctx->pc = 0x33625Cu;
label_33625c:
    // 0x33625c: 0x2645ffc0  addiu       $a1, $s2, -0x40
    ctx->pc = 0x33625cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967232));
    // 0x336260: 0x2604027c  addiu       $a0, $s0, 0x27C
    ctx->pc = 0x336260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 636));
    // 0x336264: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x336264u;
    SET_GPR_U32(ctx, 31, 0x33626Cu);
    ctx->pc = 0x336268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336264u;
    // 0x336268: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x336264u, 0x33626Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33626Cu;
label_33626c:
    // 0x33626c: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x33626Cu;
    {
        const bool branch_taken_0x33626c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33626c) {
            ctx->pc = 0x336388u;
            goto label_336388;
        }
    }
    ctx->pc = 0x336274u;
label_336274:
    // 0x336274: 0x2645ff60  addiu       $a1, $s2, -0xA0
    ctx->pc = 0x336274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967136));
    // 0x336278: 0x26040294  addiu       $a0, $s0, 0x294
    ctx->pc = 0x336278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 660));
    // 0x33627c: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x33627Cu;
    SET_GPR_U32(ctx, 31, 0x336284u);
    ctx->pc = 0x336280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33627Cu;
    // 0x336280: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x33627Cu, 0x336284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336284u;
label_336284:
    // 0x336284: 0x2645ffc0  addiu       $a1, $s2, -0x40
    ctx->pc = 0x336284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967232));
    // 0x336288: 0x26040288  addiu       $a0, $s0, 0x288
    ctx->pc = 0x336288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 648));
    // 0x33628c: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x33628Cu;
    SET_GPR_U32(ctx, 31, 0x336294u);
    ctx->pc = 0x336290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33628Cu;
    // 0x336290: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x33628Cu, 0x336294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336294u;
label_336294:
    // 0x336294: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x336294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x336298: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x336298u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33629c: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x33629Cu;
    SET_GPR_U32(ctx, 31, 0x3362A4u);
    ctx->pc = 0x3362A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33629Cu;
    // 0x3362a0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x33629Cu, 0x3362A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3362A4u;
label_3362a4:
    // 0x3362a4: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x3362a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x3362a8: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x3362a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x3362ac: 0x9042b288  lbu         $v0, -0x4D78($v0)
    ctx->pc = 0x3362acu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947464)));
    // 0x3362b0: 0x24631e80  addiu       $v1, $v1, 0x1E80
    ctx->pc = 0x3362b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7808));
    // 0x3362b4: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x3362b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x3362b8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3362b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3362bc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3362bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3362c0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3362c0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3362c4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x3362c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3362c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3362c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3362cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3362ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3362d0: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x3362D0u;
    SET_GPR_U32(ctx, 31, 0x3362D8u);
    ctx->pc = 0x3362D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3362D0u;
    // 0x3362d4: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x3362D0u, 0x3362D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3362D8u;
label_3362d8:
    // 0x3362d8: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x3362D8u;
    {
        const bool branch_taken_0x3362d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3362d8) {
            ctx->pc = 0x336388u;
            goto label_336388;
        }
    }
    ctx->pc = 0x3362E0u;
label_3362e0:
    // 0x3362e0: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x3362e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x3362e4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3362e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3362e8: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x3362E8u;
    SET_GPR_U32(ctx, 31, 0x3362F0u);
    ctx->pc = 0x3362ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3362E8u;
    // 0x3362ec: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x3362E8u, 0x3362F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3362F0u;
label_3362f0:
    // 0x3362f0: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x3362f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x3362f4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3362f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3362f8: 0x24841ce4  addiu       $a0, $a0, 0x1CE4
    ctx->pc = 0x3362f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7396));
    // 0x3362fc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3362fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336300: 0x2407a828  addiu       $a3, $zero, -0x57D8
    ctx->pc = 0x336300u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944808));
    // 0x336304: 0xc0c0b2c  jal         func_302CB0
    ctx->pc = 0x336304u;
    SET_GPR_U32(ctx, 31, 0x33630Cu);
    ctx->pc = 0x336308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336304u;
    // 0x336308: 0x240800a0  addiu       $t0, $zero, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302CB0u, 0x336304u, 0x33630Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33630Cu;
label_33630c:
    // 0x33630c: 0x3c0b003d  lui         $t3, 0x3D
    ctx->pc = 0x33630cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)61 << 16));
    // 0x336310: 0x240300a0  addiu       $v1, $zero, 0xA0
    ctx->pc = 0x336310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x336314: 0x256b1cf0  addiu       $t3, $t3, 0x1CF0
    ctx->pc = 0x336314u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 7408));
    // 0x336318: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x336318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33631c: 0x95680006  lhu         $t0, 0x6($t3)
    ctx->pc = 0x33631cu;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x336320: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x336320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x336324: 0x2625fff0  addiu       $a1, $s1, -0x10
    ctx->pc = 0x336324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
    // 0x336328: 0x2406a828  addiu       $a2, $zero, -0x57D8
    ctx->pc = 0x336328u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944808));
    // 0x33632c: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x33632cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x336330: 0xffa80000  sd          $t0, 0x0($sp)
    ctx->pc = 0x336330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 8));
    // 0x336334: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x336334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x336338: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x336338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x33633c: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x33633cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    // 0x336340: 0x95690000  lhu         $t1, 0x0($t3)
    ctx->pc = 0x336340u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x336344: 0x956a0002  lhu         $t2, 0x2($t3)
    ctx->pc = 0x336344u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x336348: 0x956b0004  lhu         $t3, 0x4($t3)
    ctx->pc = 0x336348u;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x33634c: 0xc0c0ba8  jal         func_302EA0
    ctx->pc = 0x33634Cu;
    SET_GPR_U32(ctx, 31, 0x336354u);
    ctx->pc = 0x336350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33634Cu;
    // 0x336350: 0x24080020  addiu       $t0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302EA0u, 0x33634Cu, 0x336354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336354u;
label_336354:
    // 0x336354: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x336354u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x336358: 0x26450060  addiu       $a1, $s2, 0x60
    ctx->pc = 0x336358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x33635c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x33635cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336360: 0x24841cfc  addiu       $a0, $a0, 0x1CFC
    ctx->pc = 0x336360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7420));
    // 0x336364: 0x2407a828  addiu       $a3, $zero, -0x57D8
    ctx->pc = 0x336364u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944808));
    // 0x336368: 0xc0c0b2c  jal         func_302CB0
    ctx->pc = 0x336368u;
    SET_GPR_U32(ctx, 31, 0x336370u);
    ctx->pc = 0x33636Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336368u;
    // 0x33636c: 0x240800a0  addiu       $t0, $zero, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302CB0u, 0x336368u, 0x336370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336370u;
label_336370:
    // 0x336370: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x336370u;
    {
        const bool branch_taken_0x336370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x336370) {
            ctx->pc = 0x336388u;
            goto label_336388;
        }
    }
    ctx->pc = 0x336378u;
label_336378:
    // 0x336378: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x336378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x33637c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x33637cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336380: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x336380u;
    SET_GPR_U32(ctx, 31, 0x336388u);
    ctx->pc = 0x336384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336380u;
    // 0x336384: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302AE0u, 0x336380u, 0x336388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336388u;
label_336388:
    // 0x336388: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x336388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_33638c:
    // 0x33638c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x33638cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x336390: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x336390u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x336394: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x336394u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x336398: 0x3e00008  jr          $ra
    ctx->pc = 0x336398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33639Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336398u;
        // 0x33639c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x336398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3363A0u;
    // 0x3363a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3363a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3363a4: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3363a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3363a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3363a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3363ac: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3363acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3363b0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3363b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3363b4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3363b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3363b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3363b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3363bc: 0x8c44e808  lw          $a0, -0x17F8($v0)
    ctx->pc = 0x3363bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961160)));
    // 0x3363c0: 0x41140  sll         $v0, $a0, 5
    ctx->pc = 0x3363c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x3363c4: 0x14830021  bne         $a0, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x3363C4u;
    {
        const bool branch_taken_0x3363c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x3363C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3363C4u;
        // 0x3363c8: 0x245000b0  addiu       $s0, $v0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3363c4) {
            ctx->pc = 0x33644Cu;
            goto label_33644c;
        }
    }
    ctx->pc = 0x3363CCu;
    // 0x3363cc: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x3363ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x3363d0: 0x240501e0  addiu       $a1, $zero, 0x1E0
    ctx->pc = 0x3363d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    // 0x3363d4: 0x24841cc0  addiu       $a0, $a0, 0x1CC0
    ctx->pc = 0x3363d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7360));
    // 0x3363d8: 0x24060190  addiu       $a2, $zero, 0x190
    ctx->pc = 0x3363d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x3363dc: 0xc0c0b14  jal         func_302C50
    ctx->pc = 0x3363DCu;
    SET_GPR_U32(ctx, 31, 0x3363E4u);
    ctx->pc = 0x3363E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3363DCu;
    // 0x3363e0: 0x2407a829  addiu       $a3, $zero, -0x57D7 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944809));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302C50u, 0x3363DCu, 0x3363E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3363E4u;
label_3363e4:
    // 0x3363e4: 0x3c0b003d  lui         $t3, 0x3D
    ctx->pc = 0x3363e4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)61 << 16));
    // 0x3363e8: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x3363e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3363ec: 0x256b1ccc  addiu       $t3, $t3, 0x1CCC
    ctx->pc = 0x3363ecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 7372));
    // 0x3363f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3363f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3363f4: 0x95680006  lhu         $t0, 0x6($t3)
    ctx->pc = 0x3363f4u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x3363f8: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x3363f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x3363fc: 0x24050180  addiu       $a1, $zero, 0x180
    ctx->pc = 0x3363fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x336400: 0x2406a829  addiu       $a2, $zero, -0x57D7
    ctx->pc = 0x336400u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944809));
    // 0x336404: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x336404u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x336408: 0xffa80000  sd          $t0, 0x0($sp)
    ctx->pc = 0x336408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 8));
    // 0x33640c: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x33640cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x336410: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x336410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x336414: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x336414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    // 0x336418: 0x95690000  lhu         $t1, 0x0($t3)
    ctx->pc = 0x336418u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x33641c: 0x956a0002  lhu         $t2, 0x2($t3)
    ctx->pc = 0x33641cu;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x336420: 0x956b0004  lhu         $t3, 0x4($t3)
    ctx->pc = 0x336420u;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x336424: 0xc0c0ba8  jal         func_302EA0
    ctx->pc = 0x336424u;
    SET_GPR_U32(ctx, 31, 0x33642Cu);
    ctx->pc = 0x336428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336424u;
    // 0x336428: 0x24080020  addiu       $t0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302EA0u, 0x336424u, 0x33642Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33642Cu;
label_33642c:
    // 0x33642c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x33642cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x336430: 0x24050240  addiu       $a1, $zero, 0x240
    ctx->pc = 0x336430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
    // 0x336434: 0x24841cd8  addiu       $a0, $a0, 0x1CD8
    ctx->pc = 0x336434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7384));
    // 0x336438: 0x24060190  addiu       $a2, $zero, 0x190
    ctx->pc = 0x336438u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x33643c: 0xc0c0b14  jal         func_302C50
    ctx->pc = 0x33643Cu;
    SET_GPR_U32(ctx, 31, 0x336444u);
    ctx->pc = 0x336440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33643Cu;
    // 0x336440: 0x2407a829  addiu       $a3, $zero, -0x57D7 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944809));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302C50u, 0x33643Cu, 0x336444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336444u;
label_336444:
    // 0x336444: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x336444u;
    {
        const bool branch_taken_0x336444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x336444) {
            ctx->pc = 0x3364C4u;
            goto label_3364c4;
        }
    }
    ctx->pc = 0x33644Cu;
label_33644c:
    // 0x33644c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x33644cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x336450: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x336450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x336454: 0x24841e04  addiu       $a0, $a0, 0x1E04
    ctx->pc = 0x336454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7684));
    // 0x336458: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x336458u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33645c: 0xc0c0b14  jal         func_302C50
    ctx->pc = 0x33645Cu;
    SET_GPR_U32(ctx, 31, 0x336464u);
    ctx->pc = 0x336460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33645Cu;
    // 0x336460: 0x2407a829  addiu       $a3, $zero, -0x57D7 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944809));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302C50u, 0x33645Cu, 0x336464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336464u;
label_336464:
    // 0x336464: 0x3c0b003d  lui         $t3, 0x3D
    ctx->pc = 0x336464u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)61 << 16));
    // 0x336468: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x336468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x33646c: 0x256b1e10  addiu       $t3, $t3, 0x1E10
    ctx->pc = 0x33646cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 7696));
    // 0x336470: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x336470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x336474: 0x95680006  lhu         $t0, 0x6($t3)
    ctx->pc = 0x336474u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x336478: 0x2605fff0  addiu       $a1, $s0, -0x10
    ctx->pc = 0x336478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x33647c: 0x240400a0  addiu       $a0, $zero, 0xA0
    ctx->pc = 0x33647cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x336480: 0x2406a829  addiu       $a2, $zero, -0x57D7
    ctx->pc = 0x336480u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944809));
    // 0x336484: 0x24070140  addiu       $a3, $zero, 0x140
    ctx->pc = 0x336484u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x336488: 0xffa80000  sd          $t0, 0x0($sp)
    ctx->pc = 0x336488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 8));
    // 0x33648c: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x33648cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x336490: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x336490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x336494: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x336494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    // 0x336498: 0x95690000  lhu         $t1, 0x0($t3)
    ctx->pc = 0x336498u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x33649c: 0x956a0002  lhu         $t2, 0x2($t3)
    ctx->pc = 0x33649cu;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x3364a0: 0x956b0004  lhu         $t3, 0x4($t3)
    ctx->pc = 0x3364a0u;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x3364a4: 0xc0c0ba8  jal         func_302EA0
    ctx->pc = 0x3364A4u;
    SET_GPR_U32(ctx, 31, 0x3364ACu);
    ctx->pc = 0x3364A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3364A4u;
    // 0x3364a8: 0x24080020  addiu       $t0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302EA0u, 0x3364A4u, 0x3364ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3364ACu;
label_3364ac:
    // 0x3364ac: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x3364acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x3364b0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3364b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3364b4: 0x24841e1c  addiu       $a0, $a0, 0x1E1C
    ctx->pc = 0x3364b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7708));
    // 0x3364b8: 0x240501e0  addiu       $a1, $zero, 0x1E0
    ctx->pc = 0x3364b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    // 0x3364bc: 0xc0c0b14  jal         func_302C50
    ctx->pc = 0x3364BCu;
    SET_GPR_U32(ctx, 31, 0x3364C4u);
    ctx->pc = 0x3364C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3364BCu;
    // 0x3364c0: 0x2407a829  addiu       $a3, $zero, -0x57D7 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944809));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302C50u, 0x3364BCu, 0x3364C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3364C4u;
label_3364c4:
    // 0x3364c4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3364c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3364c8: 0x9063e818  lbu         $v1, -0x17E8($v1)
    ctx->pc = 0x3364c8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961176)));
    // 0x3364cc: 0x28630003  slti        $v1, $v1, 0x3
    ctx->pc = 0x3364ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3364d0: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3364D0u;
    {
        const bool branch_taken_0x3364d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3364d0) {
            ctx->pc = 0x3364D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3364D0u;
            // 0x3364d4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3364E4u;
            goto label_3364e4;
        }
    }
    ctx->pc = 0x3364D8u;
    // 0x3364d8: 0xc055728  jal         func_155CA0
    ctx->pc = 0x3364D8u;
    SET_GPR_U32(ctx, 31, 0x3364E0u);
    ctx->pc = 0x3364DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3364D8u;
    // 0x3364dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155CA0u, 0x3364D8u, 0x3364E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3364E0u;
label_3364e0:
    // 0x3364e0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3364e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3364e4:
    // 0x3364e4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3364e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3364e8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3364e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3364ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3364ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3364F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3364ECu;
        // 0x3364f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3364ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3364F4u;
    // 0x3364f4: 0x0  nop
    ctx->pc = 0x3364f4u;
    // NOP
    // 0x3364f8: 0x0  nop
    ctx->pc = 0x3364f8u;
    // NOP
    // 0x3364fc: 0x0  nop
    ctx->pc = 0x3364fcu;
    // NOP
    // 0x336500: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x336500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x336504: 0xa040e818  sb          $zero, -0x17E8($v0)
    ctx->pc = 0x336504u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294961176), (uint8_t)GPR_U32(ctx, 0));
    // 0x336508: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x336508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33650c: 0xac40e800  sw          $zero, -0x1800($v0)
    ctx->pc = 0x33650cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961152), GPR_U32(ctx, 0));
    // 0x336510: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x336510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x336514: 0x80820a4  j           func_208290
    ctx->pc = 0x336514u;
    ctx->pc = 0x336518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336514u;
    // 0x336518: 0xac40e7f8  sw          $zero, -0x1808($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961144), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208290u, 0x336514u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33651Cu;
    // 0x33651c: 0x0  nop
    ctx->pc = 0x33651cu;
    // NOP
    if (ctx->pc == 0x33651cu) { ctx->pc = 0x336520u; }
}
