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

// Function: sub_00118DB0
// Address: 0x118db0 - 0x119088
void sub_00118DB0_0x118db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118DB0_0x118db0");
#endif

    switch (ctx->pc) {
        case 0x118dd4u: goto label_118dd4;
        case 0x118e00u: goto label_118e00;
        case 0x118e18u: goto label_118e18;
        case 0x118e3cu: goto label_118e3c;
        case 0x118e9cu: goto label_118e9c;
        case 0x118ed0u: goto label_118ed0;
        case 0x118f1cu: goto label_118f1c;
        case 0x118f44u: goto label_118f44;
        case 0x118f54u: goto label_118f54;
        case 0x118fecu: goto label_118fec;
        case 0x119010u: goto label_119010;
        default: break;
    }

    ctx->pc = 0x118db0u;

    // 0x118db0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x118db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x118db4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x118db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x118db8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x118db8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118dbc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x118dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x118dc0: 0x101202  srl         $v0, $s0, 8
    ctx->pc = 0x118dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
    // 0x118dc4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x118dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x118dc8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x118dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x118dcc: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x118DCCu;
    SET_GPR_U32(ctx, 31, 0x118DD4u);
    ctx->pc = 0x118DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118DCCu;
    // 0x118dd0: 0x28900  sll         $s1, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EA0u, 0x118DCCu, 0x118DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118DD4u;
label_118dd4:
    // 0x118dd4: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x118DD4u;
    {
        const bool branch_taken_0x118dd4 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x118DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118DD4u;
        // 0x118dd8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118dd4) {
            ctx->pc = 0x118DF0u;
            goto label_118df0;
        }
    }
    ctx->pc = 0x118DDCu;
    // 0x118ddc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x118ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x118de0: 0x2021026  xor         $v0, $s0, $v0
    ctx->pc = 0x118de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
    // 0x118de4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x118de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x118de8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x118DE8u;
    {
        const bool branch_taken_0x118de8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x118de8) {
            ctx->pc = 0x118E0Cu;
            goto label_118e0c;
        }
    }
    ctx->pc = 0x118DF0u;
label_118df0:
    // 0x118df0: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x118DF0u;
    {
        const bool branch_taken_0x118df0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x118df0) {
            ctx->pc = 0x118E00u;
            goto label_118e00;
        }
    }
    ctx->pc = 0x118DF8u;
    // 0x118df8: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x118DF8u;
    SET_GPR_U32(ctx, 31, 0x118E00u);
    ctx->pc = 0x116EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EF0u, 0x118DF8u, 0x118E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118E00u;
label_118e00:
    // 0x118e00: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x118e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x118e04: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x118E04u;
    {
        const bool branch_taken_0x118e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118E04u;
        // 0x118e08: 0x34428002  ori         $v0, $v0, 0x8002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
        ctx->in_delay_slot = false;
        if (branch_taken_0x118e04) {
            ctx->pc = 0x118E40u;
            goto label_118e40;
        }
    }
    ctx->pc = 0x118E0Cu;
label_118e0c:
    // 0x118e0c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x118e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x118e10: 0xc046094  jal         func_118250
    ctx->pc = 0x118E10u;
    SET_GPR_U32(ctx, 31, 0x118E18u);
    ctx->pc = 0x118250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118250u, 0x118E10u, 0x118E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118E18u;
label_118e18:
    // 0x118e18: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x118e18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x118e1c: 0x8c62d540  lw          $v0, -0x2AC0($v1)
    ctx->pc = 0x118e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956352)));
    // 0x118e20: 0xac71d540  sw          $s1, -0x2AC0($v1)
    ctx->pc = 0x118e20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294956352), GPR_U32(ctx, 17));
    // 0x118e24: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x118e24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x118e28: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x118e28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x118e2c: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x118E2Cu;
    {
        const bool branch_taken_0x118e2c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x118E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118E2Cu;
        // 0x118e30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118e2c) {
            ctx->pc = 0x118E40u;
            goto label_118e40;
        }
    }
    ctx->pc = 0x118E34u;
    // 0x118e34: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x118E34u;
    SET_GPR_U32(ctx, 31, 0x118E3Cu);
    ctx->pc = 0x116EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EF0u, 0x118E34u, 0x118E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118E3Cu;
label_118e3c:
    // 0x118e3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x118e3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_118e40:
    // 0x118e40: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x118e40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x118e44: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x118e44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x118e48: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x118e48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118e4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x118e4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118e50: 0x3e00008  jr          $ra
    ctx->pc = 0x118E50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118E50u;
        // 0x118e54: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118E50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118E58u;
    // 0x118e58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x118e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x118e5c: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x118e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x118e60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x118e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x118e64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x118e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x118e68: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x118E68u;
    {
        const bool branch_taken_0x118e68 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x118E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118E68u;
        // 0x118e6c: 0x28100  sll         $s0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118e68) {
            ctx->pc = 0x118E84u;
            goto label_118e84;
        }
    }
    ctx->pc = 0x118E70u;
    // 0x118e70: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x118e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x118e74: 0x821026  xor         $v0, $a0, $v0
    ctx->pc = 0x118e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
    // 0x118e78: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x118e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x118e7c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x118E7Cu;
    {
        const bool branch_taken_0x118e7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x118e7c) {
            ctx->pc = 0x118E90u;
            goto label_118e90;
        }
    }
    ctx->pc = 0x118E84u;
label_118e84:
    // 0x118e84: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x118e84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x118e88: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x118E88u;
    {
        const bool branch_taken_0x118e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118E88u;
        // 0x118e8c: 0x34428002  ori         $v0, $v0, 0x8002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
        ctx->in_delay_slot = false;
        if (branch_taken_0x118e88) {
            ctx->pc = 0x118EC0u;
            goto label_118ec0;
        }
    }
    ctx->pc = 0x118E90u;
label_118e90:
    // 0x118e90: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x118e90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x118e94: 0xc046064  jal         func_118190
    ctx->pc = 0x118E94u;
    SET_GPR_U32(ctx, 31, 0x118E9Cu);
    ctx->pc = 0x118190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118190u, 0x118E94u, 0x118E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118E9Cu;
label_118e9c:
    // 0x118e9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x118e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118ea0: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x118EA0u;
    {
        const bool branch_taken_0x118ea0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x118EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118EA0u;
        // 0x118ea4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118ea0) {
            ctx->pc = 0x118EC0u;
            goto label_118ec0;
        }
    }
    ctx->pc = 0x118EA8u;
    // 0x118ea8: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x118ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x118eac: 0x8c43d540  lw          $v1, -0x2AC0($v0)
    ctx->pc = 0x118eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956352)));
    // 0x118eb0: 0xac50d540  sw          $s0, -0x2AC0($v0)
    ctx->pc = 0x118eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956352), GPR_U32(ctx, 16));
    // 0x118eb4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x118eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x118eb8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x118eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x118ebc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x118ebcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_118ec0:
    // 0x118ec0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x118ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118ec4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x118ec4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118ec8: 0x3e00008  jr          $ra
    ctx->pc = 0x118EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118EC8u;
        // 0x118ecc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118EC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118ED0u;
label_118ed0:
    // 0x118ed0: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x118ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x118ed4: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x118ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x118ed8: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x118ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x118edc: 0xac409d70  sw          $zero, -0x6290($v0)
    ctx->pc = 0x118edcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294942064), GPR_U32(ctx, 0));
    // 0x118ee0: 0xac609d74  sw          $zero, -0x628C($v1)
    ctx->pc = 0x118ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294942068), GPR_U32(ctx, 0));
    // 0x118ee4: 0x2484d548  addiu       $a0, $a0, -0x2AB8
    ctx->pc = 0x118ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956360));
    // 0x118ee8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x118ee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118eec: 0x8049cb6  j           func_1272D8
    ctx->pc = 0x118EECu;
    ctx->pc = 0x118EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118EECu;
    // 0x118ef0: 0x24060200  addiu       $a2, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    sub_001272D8_0x1272d8(rdram, ctx, runtime); return;
    ctx->pc = 0x118EF4u;
    // 0x118ef4: 0x0  nop
    ctx->pc = 0x118ef4u;
    // NOP
    // 0x118ef8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x118ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x118efc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x118efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x118f00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x118f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x118f04: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x118f04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118f08: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x118f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x118f0c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x118f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x118f10: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x118f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x118f14: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x118F14u;
    SET_GPR_U32(ctx, 31, 0x118F1Cu);
    ctx->pc = 0x118F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118F14u;
    // 0x118f18: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EA0u, 0x118F14u, 0x118F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118F1Cu;
label_118f1c:
    // 0x118f1c: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x118f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x118f20: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x118f20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x118f24: 0x8c739d70  lw          $s3, -0x6290($v1)
    ctx->pc = 0x118f24u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294942064)));
    // 0x118f28: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x118f28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118f2c: 0xacb19d74  sw          $s1, -0x628C($a1)
    ctx->pc = 0x118f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294942068), GPR_U32(ctx, 17));
    // 0x118f30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x118f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118f34: 0xac709d70  sw          $s0, -0x6290($v1)
    ctx->pc = 0x118f34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294942064), GPR_U32(ctx, 16));
    // 0x118f38: 0x113100  sll         $a2, $s1, 4
    ctx->pc = 0x118f38u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x118f3c: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x118F3Cu;
    SET_GPR_U32(ctx, 31, 0x118F44u);
    ctx->pc = 0x118F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118F3Cu;
    // 0x118f40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x118F3Cu, 0x118F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118F44u;
label_118f44:
    // 0x118f44: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x118F44u;
    {
        const bool branch_taken_0x118f44 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x118F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118F44u;
        // 0x118f48: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118f44) {
            ctx->pc = 0x118F58u;
            goto label_118f58;
        }
    }
    ctx->pc = 0x118F4Cu;
    // 0x118f4c: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x118F4Cu;
    SET_GPR_U32(ctx, 31, 0x118F54u);
    ctx->pc = 0x116EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EF0u, 0x118F4Cu, 0x118F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118F54u;
label_118f54:
    // 0x118f54: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x118f54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_118f58:
    // 0x118f58: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x118f58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x118f5c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x118f5cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x118f60: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x118f60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x118f64: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x118f64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118f68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x118f68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118f6c: 0x3e00008  jr          $ra
    ctx->pc = 0x118F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118F6Cu;
        // 0x118f70: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118F6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118F74u;
    // 0x118f74: 0x0  nop
    ctx->pc = 0x118f74u;
    // NOP
    // 0x118f78: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x118f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x118f7c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x118f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x118f80: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x118f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x118f84: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x118f84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118f88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x118f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x118f8c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x118f8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118f90: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x118f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x118f94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x118f94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118f98: 0x6010008  bgez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x118F98u;
    {
        const bool branch_taken_0x118f98 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x118F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118F98u;
        // 0x118f9c: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118f98) {
            ctx->pc = 0x118FBCu;
            goto label_118fbc;
        }
    }
    ctx->pc = 0x118FA0u;
    // 0x118fa0: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x118fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x118fa4: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x118fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x118fa8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x118fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x118fac: 0x2471d548  addiu       $s1, $v1, -0x2AB8
    ctx->pc = 0x118facu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956360));
    // 0x118fb0: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x118fb0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x118fb4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x118FB4u;
    {
        const bool branch_taken_0x118fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118FB4u;
        // 0x118fb8: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118fb4) {
            ctx->pc = 0x118FCCu;
            goto label_118fcc;
        }
    }
    ctx->pc = 0x118FBCu;
label_118fbc:
    // 0x118fbc: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x118fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x118fc0: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x118fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x118fc4: 0x8c519d70  lw          $s1, -0x6290($v0)
    ctx->pc = 0x118fc4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942064)));
    // 0x118fc8: 0x8c629d74  lw          $v0, -0x628C($v1)
    ctx->pc = 0x118fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294942068)));
label_118fcc:
    // 0x118fcc: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x118fccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x118fd0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x118FD0u;
    {
        const bool branch_taken_0x118fd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x118fd0) {
            ctx->pc = 0x118FE4u;
            goto label_118fe4;
        }
    }
    ctx->pc = 0x118FD8u;
    // 0x118fd8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x118fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x118fdc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x118FDCu;
    {
        const bool branch_taken_0x118fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118FDCu;
        // 0x118fe0: 0x34420069  ori         $v0, $v0, 0x69 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)105);
        ctx->in_delay_slot = false;
        if (branch_taken_0x118fdc) {
            ctx->pc = 0x119014u;
            goto label_119014;
        }
    }
    ctx->pc = 0x118FE4u;
label_118fe4:
    // 0x118fe4: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x118FE4u;
    SET_GPR_U32(ctx, 31, 0x118FECu);
    ctx->pc = 0x116EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EA0u, 0x118FE4u, 0x118FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118FECu;
label_118fec:
    // 0x118fec: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x118fecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x118ff0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x118ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x118ff4: 0xac720000  sw          $s2, 0x0($v1)
    ctx->pc = 0x118ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
    // 0x118ff8: 0xac730004  sw          $s3, 0x4($v1)
    ctx->pc = 0x118ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 19));
    // 0x118ffc: 0x380202d  daddu       $a0, $gp, $zero
    ctx->pc = 0x118ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119000: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x119000u;
    {
        const bool branch_taken_0x119000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x119004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119000u;
        // 0x119004: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119000) {
            ctx->pc = 0x119010u;
            goto label_119010;
        }
    }
    ctx->pc = 0x119008u;
    // 0x119008: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x119008u;
    SET_GPR_U32(ctx, 31, 0x119010u);
    ctx->pc = 0x116EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EF0u, 0x119008u, 0x119010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119010u;
label_119010:
    // 0x119010: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x119010u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_119014:
    // 0x119014: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x119014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x119018: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x119018u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11901c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11901cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x119020: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x119020u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119024: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x119024u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119028: 0x3e00008  jr          $ra
    ctx->pc = 0x119028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11902Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119028u;
        // 0x11902c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119030u;
    // 0x119030: 0x4830008  bgezl       $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x119030u;
    {
        const bool branch_taken_0x119030 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x119030) {
            ctx->pc = 0x119034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x119030u;
            // 0x119034: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x119054u;
            goto label_119054;
        }
    }
    ctx->pc = 0x119038u;
    // 0x119038: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x119038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x11903c: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x11903cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x119040: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x119040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x119044: 0x2465d548  addiu       $a1, $v1, -0x2AB8
    ctx->pc = 0x119044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956360));
    // 0x119048: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x119048u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x11904c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11904Cu;
    {
        const bool branch_taken_0x11904c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11904Cu;
        // 0x119050: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11904c) {
            ctx->pc = 0x119060u;
            goto label_119060;
        }
    }
    ctx->pc = 0x119054u;
label_119054:
    // 0x119054: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x119054u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x119058: 0x8c459d70  lw          $a1, -0x6290($v0)
    ctx->pc = 0x119058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942064)));
    // 0x11905c: 0x8c629d74  lw          $v0, -0x628C($v1)
    ctx->pc = 0x11905cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294942068)));
label_119060:
    // 0x119060: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x119060u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x119064: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x119064u;
    {
        const bool branch_taken_0x119064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x119068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119064u;
        // 0x119068: 0x41900  sll         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119064) {
            ctx->pc = 0x119074u;
            goto label_119074;
        }
    }
    ctx->pc = 0x11906Cu;
    // 0x11906c: 0x3e00008  jr          $ra
    ctx->pc = 0x11906Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11906Cu;
        // 0x119070: 0x2402ff97  addiu       $v0, $zero, -0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967191));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11906Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119074u;
label_119074:
    // 0x119074: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x119074u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119078: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x119078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x11907c: 0x3e00008  jr          $ra
    ctx->pc = 0x11907Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11907Cu;
        // 0x119080: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11907Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119084u;
    // 0x119084: 0x0  nop
    ctx->pc = 0x119084u;
    // NOP
}
