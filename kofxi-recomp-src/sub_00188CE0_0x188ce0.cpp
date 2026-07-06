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

// Function: sub_00188CE0
// Address: 0x188ce0 - 0x188f40
void sub_00188CE0_0x188ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00188CE0_0x188ce0");
#endif

    switch (ctx->pc) {
        case 0x188da8u: goto label_188da8;
        case 0x188db4u: goto label_188db4;
        case 0x188e44u: goto label_188e44;
        case 0x188e64u: goto label_188e64;
        case 0x188ec8u: goto label_188ec8;
        case 0x188ef4u: goto label_188ef4;
        default: break;
    }

    ctx->pc = 0x188ce0u;

    // 0x188ce0: 0x908204a4  lbu         $v0, 0x4A4($a0)
    ctx->pc = 0x188ce0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1188)));
    // 0x188ce4: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x188ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x188ce8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x188CE8u;
    {
        const bool branch_taken_0x188ce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x188ce8) {
            ctx->pc = 0x188CECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188CE8u;
            // 0x188cec: 0x8c820490  lw          $v0, 0x490($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188CF8u;
            goto label_188cf8;
        }
    }
    ctx->pc = 0x188CF0u;
    // 0x188cf0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x188CF0u;
    {
        const bool branch_taken_0x188cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188CF0u;
        // 0x188cf4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188cf0) {
            ctx->pc = 0x188D50u;
            goto label_188d50;
        }
    }
    ctx->pc = 0x188CF8u;
label_188cf8:
    // 0x188cf8: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x188cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x188cfc: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x188CFCu;
    {
        const bool branch_taken_0x188cfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188cfc) {
            ctx->pc = 0x188D00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188CFCu;
            // 0x188d00: 0x8c830494  lw          $v1, 0x494($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188D0Cu;
            goto label_188d0c;
        }
    }
    ctx->pc = 0x188D04u;
    // 0x188d04: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x188D04u;
    {
        const bool branch_taken_0x188d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188D04u;
        // 0x188d08: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188d04) {
            ctx->pc = 0x188D50u;
            goto label_188d50;
        }
    }
    ctx->pc = 0x188D0Cu;
label_188d0c:
    // 0x188d0c: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x188d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x188d10: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x188d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x188d14: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x188d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x188d18: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x188D18u;
    {
        const bool branch_taken_0x188d18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188d18) {
            ctx->pc = 0x188D1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188D18u;
            // 0x188d1c: 0x8c83048c  lw          $v1, 0x48C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1164)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188D28u;
            goto label_188d28;
        }
    }
    ctx->pc = 0x188D20u;
    // 0x188d20: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x188D20u;
    {
        const bool branch_taken_0x188d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188D20u;
        // 0x188d24: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188d20) {
            ctx->pc = 0x188D50u;
            goto label_188d50;
        }
    }
    ctx->pc = 0x188D28u;
label_188d28:
    // 0x188d28: 0x30620840  andi        $v0, $v1, 0x840
    ctx->pc = 0x188d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2112);
    // 0x188d2c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x188D2Cu;
    {
        const bool branch_taken_0x188d2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188d2c) {
            ctx->pc = 0x188D30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188D2Cu;
            // 0x188d30: 0x30620780  andi        $v0, $v1, 0x780 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1920);
            ctx->in_delay_slot = false;
            ctx->pc = 0x188D3Cu;
            goto label_188d3c;
        }
    }
    ctx->pc = 0x188D34u;
    // 0x188d34: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x188D34u;
    {
        const bool branch_taken_0x188d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188D34u;
        // 0x188d38: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188d34) {
            ctx->pc = 0x188D50u;
            goto label_188d50;
        }
    }
    ctx->pc = 0x188D3Cu;
label_188d3c:
    // 0x188d3c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x188d3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x188d40: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x188d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x188d44: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x188d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x188d48: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x188d48u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x188d4c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x188d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_188d50:
    // 0x188d50: 0x3e00008  jr          $ra
    ctx->pc = 0x188D50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188D50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x188D58u;
    // 0x188d58: 0x0  nop
    ctx->pc = 0x188d58u;
    // NOP
    // 0x188d5c: 0x0  nop
    ctx->pc = 0x188d5cu;
    // NOP
    // 0x188d60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x188d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x188d64: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x188d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x188d68: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x188d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x188d6c: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x188d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x188d70: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x188d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x188d74: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x188d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x188d78: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x188d78u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188d7c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x188d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x188d80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x188d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x188d84: 0x64120005  daddiu      $s2, $zero, 0x5
    ctx->pc = 0x188d84u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)5);
    // 0x188d88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x188d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x188d8c: 0x64110009  daddiu      $s1, $zero, 0x9
    ctx->pc = 0x188d8cu;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)9);
    // 0x188d90: 0x8c83049c  lw          $v1, 0x49C($a0)
    ctx->pc = 0x188d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1180)));
    // 0x188d94: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x188d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x188d98: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x188D98u;
    {
        const bool branch_taken_0x188d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x188D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188D98u;
        // 0x188d9c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188d98) {
            ctx->pc = 0x188DB8u;
            goto label_188db8;
        }
    }
    ctx->pc = 0x188DA0u;
    // 0x188da0: 0xc05c6ac  jal         func_171AB0
    ctx->pc = 0x188DA0u;
    SET_GPR_U32(ctx, 31, 0x188DA8u);
    ctx->pc = 0x188DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188DA0u;
    // 0x188da4: 0x8e8400dc  lw          $a0, 0xDC($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171AB0u, 0x188DA0u, 0x188DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188DA8u;
label_188da8:
    // 0x188da8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x188da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188dac: 0xc05c6cc  jal         func_171B30
    ctx->pc = 0x188DACu;
    SET_GPR_U32(ctx, 31, 0x188DB4u);
    ctx->pc = 0x188DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188DACu;
    // 0x188db0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171B30u, 0x188DACu, 0x188DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188DB4u;
label_188db4:
    // 0x188db4: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x188db4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_188db8:
    // 0x188db8: 0x8e83049c  lw          $v1, 0x49C($s4)
    ctx->pc = 0x188db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1180)));
    // 0x188dbc: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x188dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x188dc0: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x188dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x188dc4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x188dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x188dc8: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x188DC8u;
    {
        const bool branch_taken_0x188dc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188dc8) {
            ctx->pc = 0x188DCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188DC8u;
            // 0x188dcc: 0x8e820494  lw          $v0, 0x494($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188DD8u;
            goto label_188dd8;
        }
    }
    ctx->pc = 0x188DD0u;
    // 0x188dd0: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x188DD0u;
    {
        const bool branch_taken_0x188dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188DD0u;
        // 0x188dd4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188dd0) {
            ctx->pc = 0x188F14u;
            goto label_188f14;
        }
    }
    ctx->pc = 0x188DD8u;
label_188dd8:
    // 0x188dd8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x188dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x188ddc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x188DDCu;
    {
        const bool branch_taken_0x188ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188ddc) {
            ctx->pc = 0x188DECu;
            goto label_188dec;
        }
    }
    ctx->pc = 0x188DE4u;
    // 0x188de4: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x188DE4u;
    {
        const bool branch_taken_0x188de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188DE4u;
        // 0x188de8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188de4) {
            ctx->pc = 0x188F14u;
            goto label_188f14;
        }
    }
    ctx->pc = 0x188DECu;
label_188dec:
    // 0x188dec: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x188decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x188df0: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x188df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x188df4: 0x90429780  lbu         $v0, -0x6880($v0)
    ctx->pc = 0x188df4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x188df8: 0x54430010  bnel        $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x188DF8u;
    {
        const bool branch_taken_0x188df8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x188df8) {
            ctx->pc = 0x188DFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188DF8u;
            // 0x188dfc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188E3Cu;
            goto label_188e3c;
        }
    }
    ctx->pc = 0x188E00u;
    // 0x188e00: 0x8e8300dc  lw          $v1, 0xDC($s4)
    ctx->pc = 0x188e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 220)));
    // 0x188e04: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x188e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x188e08: 0x90429720  lbu         $v0, -0x68E0($v0)
    ctx->pc = 0x188e08u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
    // 0x188e0c: 0x3063000c  andi        $v1, $v1, 0xC
    ctx->pc = 0x188e0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x188e10: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x188e10u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x188e14: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x188E14u;
    {
        const bool branch_taken_0x188e14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x188e14) {
            ctx->pc = 0x188E38u;
            goto label_188e38;
        }
    }
    ctx->pc = 0x188E1Cu;
    // 0x188e1c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x188e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x188e20: 0x8042bed0  lb          $v0, -0x4130($v0)
    ctx->pc = 0x188e20u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950608)));
    // 0x188e24: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x188e24u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x188e28: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x188E28u;
    {
        const bool branch_taken_0x188e28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x188e28) {
            ctx->pc = 0x188E38u;
            goto label_188e38;
        }
    }
    ctx->pc = 0x188E30u;
    // 0x188e30: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x188E30u;
    {
        const bool branch_taken_0x188e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188E30u;
        // 0x188e34: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188e30) {
            ctx->pc = 0x188F14u;
            goto label_188f14;
        }
    }
    ctx->pc = 0x188E38u;
label_188e38:
    // 0x188e38: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x188e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_188e3c:
    // 0x188e3c: 0xc0623e4  jal         func_188F90
    ctx->pc = 0x188E3Cu;
    SET_GPR_U32(ctx, 31, 0x188E44u);
    ctx->pc = 0x188F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188F90u, 0x188E3Cu, 0x188E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188E44u;
label_188e44:
    // 0x188e44: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x188e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x188e48: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x188e48u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x188e4c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x188E4Cu;
    {
        const bool branch_taken_0x188e4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188e4c) {
            ctx->pc = 0x188E50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188E4Cu;
            // 0x188e50: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188E5Cu;
            goto label_188e5c;
        }
    }
    ctx->pc = 0x188E54u;
    // 0x188e54: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x188E54u;
    {
        const bool branch_taken_0x188e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188E54u;
        // 0x188e58: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188e54) {
            ctx->pc = 0x188F14u;
            goto label_188f14;
        }
    }
    ctx->pc = 0x188E5Cu;
label_188e5c:
    // 0x188e5c: 0xc062f08  jal         func_18BC20
    ctx->pc = 0x188E5Cu;
    SET_GPR_U32(ctx, 31, 0x188E64u);
    ctx->pc = 0x18BC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BC20u, 0x188E5Cu, 0x188E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188E64u;
label_188e64:
    // 0x188e64: 0x29c3c  dsll32      $s3, $v0, 16
    ctx->pc = 0x188e64u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 16));
    // 0x188e68: 0x139c3f  dsra32      $s3, $s3, 16
    ctx->pc = 0x188e68u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 16));
    // 0x188e6c: 0x56600003  bnel        $s3, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x188E6Cu;
    {
        const bool branch_taken_0x188e6c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x188e6c) {
            ctx->pc = 0x188E70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188E6Cu;
            // 0x188e70: 0x86820002  lh          $v0, 0x2($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188E7Cu;
            goto label_188e7c;
        }
    }
    ctx->pc = 0x188E74u;
    // 0x188e74: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x188E74u;
    {
        const bool branch_taken_0x188e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188E74u;
        // 0x188e78: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188e74) {
            ctx->pc = 0x188F14u;
            goto label_188f14;
        }
    }
    ctx->pc = 0x188E7Cu;
label_188e7c:
    // 0x188e7c: 0x28410261  slti        $at, $v0, 0x261
    ctx->pc = 0x188e7cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)609) ? 1 : 0);
    // 0x188e80: 0x54200003  bnel        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x188E80u;
    {
        const bool branch_taken_0x188e80 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x188e80) {
            ctx->pc = 0x188E84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188E80u;
            // 0x188e84: 0x9282008c  lbu         $v0, 0x8C($s4) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 140)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188E90u;
            goto label_188e90;
        }
    }
    ctx->pc = 0x188E88u;
    // 0x188e88: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x188E88u;
    {
        const bool branch_taken_0x188e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188E88u;
        // 0x188e8c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188e88) {
            ctx->pc = 0x188F14u;
            goto label_188f14;
        }
    }
    ctx->pc = 0x188E90u;
label_188e90:
    // 0x188e90: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x188e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x188e94: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x188E94u;
    {
        const bool branch_taken_0x188e94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x188e94) {
            ctx->pc = 0x188E98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188E94u;
            // 0x188e98: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188EA8u;
            goto label_188ea8;
        }
    }
    ctx->pc = 0x188E9Cu;
    // 0x188e9c: 0x64120009  daddiu      $s2, $zero, 0x9
    ctx->pc = 0x188e9cu;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)9);
    // 0x188ea0: 0x64110005  daddiu      $s1, $zero, 0x5
    ctx->pc = 0x188ea0u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)5);
    // 0x188ea4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x188ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_188ea8:
    // 0x188ea8: 0x56620005  bnel        $s3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x188EA8u;
    {
        const bool branch_taken_0x188ea8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x188ea8) {
            ctx->pc = 0x188EACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188EA8u;
            // 0x188eac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188EC0u;
            goto label_188ec0;
        }
    }
    ctx->pc = 0x188EB0u;
    // 0x188eb0: 0x3242ffff  andi        $v0, $s2, 0xFFFF
    ctx->pc = 0x188eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x188eb4: 0x3232ffff  andi        $s2, $s1, 0xFFFF
    ctx->pc = 0x188eb4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x188eb8: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x188eb8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x188ebc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x188ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_188ec0:
    // 0x188ec0: 0xc062d5c  jal         func_18B570
    ctx->pc = 0x188EC0u;
    SET_GPR_U32(ctx, 31, 0x188EC8u);
    ctx->pc = 0x18B570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B570u, 0x188EC0u, 0x188EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188EC8u;
label_188ec8:
    // 0x188ec8: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x188EC8u;
    {
        const bool branch_taken_0x188ec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188ec8) {
            ctx->pc = 0x188ECCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188EC8u;
            // 0x188ecc: 0x3203ffff  andi        $v1, $s0, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x188ED8u;
            goto label_188ed8;
        }
    }
    ctx->pc = 0x188ED0u;
    // 0x188ed0: 0x3232ffff  andi        $s2, $s1, 0xFFFF
    ctx->pc = 0x188ed0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x188ed4: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x188ed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_188ed8:
    // 0x188ed8: 0x3242ffff  andi        $v0, $s2, 0xFFFF
    ctx->pc = 0x188ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x188edc: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x188EDCu;
    {
        const bool branch_taken_0x188edc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x188edc) {
            ctx->pc = 0x188EE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188EDCu;
            // 0x188ee0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188EECu;
            goto label_188eec;
        }
    }
    ctx->pc = 0x188EE4u;
    // 0x188ee4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x188EE4u;
    {
        const bool branch_taken_0x188ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188EE4u;
        // 0x188ee8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188ee4) {
            ctx->pc = 0x188F14u;
            goto label_188f14;
        }
    }
    ctx->pc = 0x188EECu;
label_188eec:
    // 0x188eec: 0xc0623d0  jal         func_188F40
    ctx->pc = 0x188EECu;
    SET_GPR_U32(ctx, 31, 0x188EF4u);
    ctx->pc = 0x188EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188EECu;
    // 0x188ef0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188F40u, 0x188EECu, 0x188EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188EF4u;
label_188ef4:
    // 0x188ef4: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x188ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x188ef8: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x188ef8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x188efc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x188EFCu;
    {
        const bool branch_taken_0x188efc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188efc) {
            ctx->pc = 0x188F00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188EFCu;
            // 0x188f00: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188F14u;
            goto label_188f14;
        }
    }
    ctx->pc = 0x188F04u;
    // 0x188f04: 0x9282008c  lbu         $v0, 0x8C($s4)
    ctx->pc = 0x188f04u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 140)));
    // 0x188f08: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x188f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x188f0c: 0xa282008c  sb          $v0, 0x8C($s4)
    ctx->pc = 0x188f0cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 140), (uint8_t)GPR_U32(ctx, 2));
    // 0x188f10: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x188f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_188f14:
    // 0x188f14: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x188f14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x188f18: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x188f18u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x188f1c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x188f1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x188f20: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x188f20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x188f24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x188f24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x188f28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x188f28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188f2c: 0x3e00008  jr          $ra
    ctx->pc = 0x188F2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188F2Cu;
        // 0x188f30: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188F2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x188F34u;
    // 0x188f34: 0x0  nop
    ctx->pc = 0x188f34u;
    // NOP
    // 0x188f38: 0x0  nop
    ctx->pc = 0x188f38u;
    // NOP
    // 0x188f3c: 0x0  nop
    ctx->pc = 0x188f3cu;
    // NOP
    if (ctx->pc == 0x188f3cu) { ctx->pc = 0x188f40u; }
}
