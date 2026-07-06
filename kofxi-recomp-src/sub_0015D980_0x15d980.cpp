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

// Function: sub_0015D980
// Address: 0x15d980 - 0x15e550
void sub_0015D980_0x15d980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015D980_0x15d980");
#endif

    switch (ctx->pc) {
        case 0x15da24u: goto label_15da24;
        case 0x15da38u: goto label_15da38;
        case 0x15da68u: goto label_15da68;
        case 0x15da70u: goto label_15da70;
        case 0x15da78u: goto label_15da78;
        case 0x15da80u: goto label_15da80;
        case 0x15da88u: goto label_15da88;
        case 0x15daccu: goto label_15dacc;
        case 0x15dad8u: goto label_15dad8;
        case 0x15dae8u: goto label_15dae8;
        case 0x15db18u: goto label_15db18;
        case 0x15db20u: goto label_15db20;
        case 0x15db28u: goto label_15db28;
        case 0x15db70u: goto label_15db70;
        case 0x15db7cu: goto label_15db7c;
        case 0x15db8cu: goto label_15db8c;
        case 0x15dbc4u: goto label_15dbc4;
        case 0x15dbd4u: goto label_15dbd4;
        case 0x15dc10u: goto label_15dc10;
        case 0x15dc18u: goto label_15dc18;
        case 0x15dc20u: goto label_15dc20;
        case 0x15dc78u: goto label_15dc78;
        case 0x15dc90u: goto label_15dc90;
        case 0x15dcb0u: goto label_15dcb0;
        case 0x15dcbcu: goto label_15dcbc;
        case 0x15dcccu: goto label_15dccc;
        case 0x15dce4u: goto label_15dce4;
        case 0x15dcecu: goto label_15dcec;
        case 0x15dcf8u: goto label_15dcf8;
        case 0x15dd08u: goto label_15dd08;
        case 0x15dd20u: goto label_15dd20;
        case 0x15dd28u: goto label_15dd28;
        case 0x15dd34u: goto label_15dd34;
        case 0x15dd44u: goto label_15dd44;
        case 0x15dd5cu: goto label_15dd5c;
        case 0x15dd64u: goto label_15dd64;
        case 0x15dd70u: goto label_15dd70;
        case 0x15dd80u: goto label_15dd80;
        case 0x15dd98u: goto label_15dd98;
        case 0x15dda0u: goto label_15dda0;
        case 0x15ddacu: goto label_15ddac;
        case 0x15ddbcu: goto label_15ddbc;
        case 0x15deb0u: goto label_15deb0;
        case 0x15deb8u: goto label_15deb8;
        case 0x15ded8u: goto label_15ded8;
        case 0x15dee8u: goto label_15dee8;
        case 0x15def0u: goto label_15def0;
        case 0x15df18u: goto label_15df18;
        case 0x15df2cu: goto label_15df2c;
        case 0x15df58u: goto label_15df58;
        case 0x15df6cu: goto label_15df6c;
        case 0x15df94u: goto label_15df94;
        case 0x15dfb0u: goto label_15dfb0;
        case 0x15dfd0u: goto label_15dfd0;
        case 0x15dfecu: goto label_15dfec;
        case 0x15e020u: goto label_15e020;
        case 0x15e03cu: goto label_15e03c;
        case 0x15e070u: goto label_15e070;
        case 0x15e07cu: goto label_15e07c;
        case 0x15e08cu: goto label_15e08c;
        case 0x15e0f8u: goto label_15e0f8;
        case 0x15e100u: goto label_15e100;
        case 0x15e124u: goto label_15e124;
        case 0x15e138u: goto label_15e138;
        case 0x15e148u: goto label_15e148;
        case 0x15e158u: goto label_15e158;
        case 0x15e1a4u: goto label_15e1a4;
        case 0x15e1b4u: goto label_15e1b4;
        case 0x15e1c4u: goto label_15e1c4;
        case 0x15e22cu: goto label_15e22c;
        case 0x15e25cu: goto label_15e25c;
        case 0x15e28cu: goto label_15e28c;
        case 0x15e2bcu: goto label_15e2bc;
        case 0x15e2d8u: goto label_15e2d8;
        case 0x15e32cu: goto label_15e32c;
        case 0x15e33cu: goto label_15e33c;
        case 0x15e360u: goto label_15e360;
        case 0x15e374u: goto label_15e374;
        case 0x15e398u: goto label_15e398;
        case 0x15e3acu: goto label_15e3ac;
        case 0x15e3fcu: goto label_15e3fc;
        case 0x15e404u: goto label_15e404;
        case 0x15e414u: goto label_15e414;
        case 0x15e420u: goto label_15e420;
        case 0x15e464u: goto label_15e464;
        case 0x15e484u: goto label_15e484;
        case 0x15e4a0u: goto label_15e4a0;
        case 0x15e4bcu: goto label_15e4bc;
        case 0x15e4f4u: goto label_15e4f4;
        case 0x15e504u: goto label_15e504;
        case 0x15e524u: goto label_15e524;
        default: break;
    }

    ctx->pc = 0x15d980u;

    // 0x15d980: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15d980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15d984: 0x3c06009b  lui         $a2, 0x9B
    ctx->pc = 0x15d984u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)155 << 16));
    // 0x15d988: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15d988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15d98c: 0x3c05009b  lui         $a1, 0x9B
    ctx->pc = 0x15d98cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)155 << 16));
    // 0x15d990: 0x8c8700dc  lw          $a3, 0xDC($a0)
    ctx->pc = 0x15d990u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x15d994: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15d994u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15d998: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x15d998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x15d99c: 0x24c64070  addiu       $a2, $a2, 0x4070
    ctx->pc = 0x15d99cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16496));
    // 0x15d9a0: 0x24a54078  addiu       $a1, $a1, 0x4078
    ctx->pc = 0x15d9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16504));
    // 0x15d9a4: 0x2463407c  addiu       $v1, $v1, 0x407C
    ctx->pc = 0x15d9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16508));
    // 0x15d9a8: 0x30e7000c  andi        $a3, $a3, 0xC
    ctx->pc = 0x15d9a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)12);
    // 0x15d9ac: 0x24424080  addiu       $v0, $v0, 0x4080
    ctx->pc = 0x15d9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16512));
    // 0x15d9b0: 0x73882  srl         $a3, $a3, 2
    ctx->pc = 0x15d9b0u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 2));
    // 0x15d9b4: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x15d9b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x15d9b8: 0xa0c00000  sb          $zero, 0x0($a2)
    ctx->pc = 0x15d9b8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x15d9bc: 0x8c8600dc  lw          $a2, 0xDC($a0)
    ctx->pc = 0x15d9bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x15d9c0: 0x30c6000c  andi        $a2, $a2, 0xC
    ctx->pc = 0x15d9c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)12);
    // 0x15d9c4: 0x63882  srl         $a3, $a2, 2
    ctx->pc = 0x15d9c4u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
    // 0x15d9c8: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x15d9c8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x15d9cc: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x15d9ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x15d9d0: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x15d9d0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x15d9d4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15d9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15d9d8: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x15d9d8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x15d9dc: 0x8c8500dc  lw          $a1, 0xDC($a0)
    ctx->pc = 0x15d9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x15d9e0: 0x30a5000c  andi        $a1, $a1, 0xC
    ctx->pc = 0x15d9e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)12);
    // 0x15d9e4: 0x53082  srl         $a2, $a1, 2
    ctx->pc = 0x15d9e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x15d9e8: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x15d9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x15d9ec: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15d9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15d9f0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x15d9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x15d9f4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x15d9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x15d9f8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x15d9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x15d9fc: 0x8c8300dc  lw          $v1, 0xDC($a0)
    ctx->pc = 0x15d9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x15da00: 0x3063000c  andi        $v1, $v1, 0xC
    ctx->pc = 0x15da00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x15da04: 0x32882  srl         $a1, $v1, 2
    ctx->pc = 0x15da04u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x15da08: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x15da08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x15da0c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x15da0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x15da10: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15da10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15da14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15da14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15da18: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x15da18u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x15da1c: 0xc0627c8  jal         func_189F20
    ctx->pc = 0x15DA1Cu;
    SET_GPR_U32(ctx, 31, 0x15DA24u);
    ctx->pc = 0x15DA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DA1Cu;
    // 0x15da20: 0x8c8400dc  lw          $a0, 0xDC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189F20u, 0x15DA1Cu, 0x15DA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DA24u;
label_15da24:
    // 0x15da24: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x15da24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x15da28: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15da28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15da2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15da2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15da30: 0xc05721c  jal         func_15C870
    ctx->pc = 0x15DA30u;
    SET_GPR_U32(ctx, 31, 0x15DA38u);
    ctx->pc = 0x15DA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DA30u;
    // 0x15da34: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C870u, 0x15DA30u, 0x15DA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DA38u;
label_15da38:
    // 0x15da38: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15da38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15da3c: 0xa0604074  sb          $zero, 0x4074($v1)
    ctx->pc = 0x15da3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 16500), (uint8_t)GPR_U32(ctx, 0));
    // 0x15da40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15da40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15da44: 0x3e00008  jr          $ra
    ctx->pc = 0x15DA44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15DA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DA44u;
        // 0x15da48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15DA44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15DA4Cu;
    // 0x15da4c: 0x0  nop
    ctx->pc = 0x15da4cu;
    // NOP
    // 0x15da50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15da50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15da54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x15da54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15da58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15da58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15da5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15da5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15da60: 0xc06814c  jal         func_1A0530
    ctx->pc = 0x15DA60u;
    SET_GPR_U32(ctx, 31, 0x15DA68u);
    ctx->pc = 0x15DA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DA60u;
    // 0x15da64: 0x24040308  addiu       $a0, $zero, 0x308 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0530u, 0x15DA60u, 0x15DA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DA68u;
label_15da68:
    // 0x15da68: 0xc068350  jal         func_1A0D40
    ctx->pc = 0x15DA68u;
    SET_GPR_U32(ctx, 31, 0x15DA70u);
    ctx->pc = 0x1A0D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0D40u, 0x15DA68u, 0x15DA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DA70u;
label_15da70:
    // 0x15da70: 0xc055630  jal         func_1558C0
    ctx->pc = 0x15DA70u;
    SET_GPR_U32(ctx, 31, 0x15DA78u);
    ctx->pc = 0x1558C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1558C0u, 0x15DA70u, 0x15DA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DA78u;
label_15da78:
    // 0x15da78: 0xc055684  jal         func_155A10
    ctx->pc = 0x15DA78u;
    SET_GPR_U32(ctx, 31, 0x15DA80u);
    ctx->pc = 0x155A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155A10u, 0x15DA78u, 0x15DA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DA80u;
label_15da80:
    // 0x15da80: 0xc05347c  jal         func_14D1F0
    ctx->pc = 0x15DA80u;
    SET_GPR_U32(ctx, 31, 0x15DA88u);
    ctx->pc = 0x14D1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D1F0u, 0x15DA80u, 0x15DA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DA88u;
label_15da88:
    // 0x15da88: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x15da88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x15da8c: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15da8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15da90: 0xa0404130  sb          $zero, 0x4130($v0)
    ctx->pc = 0x15da90u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16688), (uint8_t)GPR_U32(ctx, 0));
    // 0x15da94: 0x3c040016  lui         $a0, 0x16
    ctx->pc = 0x15da94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
    // 0x15da98: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x15da98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x15da9c: 0xa0604138  sb          $zero, 0x4138($v1)
    ctx->pc = 0x15da9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 16696), (uint8_t)GPR_U32(ctx, 0));
    // 0x15daa0: 0xa0404148  sb          $zero, 0x4148($v0)
    ctx->pc = 0x15daa0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16712), (uint8_t)GPR_U32(ctx, 0));
    // 0x15daa4: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x15daa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x15daa8: 0x24030096  addiu       $v1, $zero, 0x96
    ctx->pc = 0x15daa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x15daac: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x15daacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x15dab0: 0xa4434140  sh          $v1, 0x4140($v0)
    ctx->pc = 0x15dab0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 16704), (uint16_t)GPR_U32(ctx, 3));
    // 0x15dab4: 0x2484dc30  addiu       $a0, $a0, -0x23D0
    ctx->pc = 0x15dab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958128));
    // 0x15dab8: 0x24a5d350  addiu       $a1, $a1, -0x2CB0
    ctx->pc = 0x15dab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955856));
    // 0x15dabc: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x15dabcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x15dac0: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x15dac0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x15dac4: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x15DAC4u;
    SET_GPR_U32(ctx, 31, 0x15DACCu);
    ctx->pc = 0x15DAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DAC4u;
    // 0x15dac8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155B50u, 0x15DAC4u, 0x15DACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DACCu;
label_15dacc:
    // 0x15dacc: 0x3c04001a  lui         $a0, 0x1A
    ctx->pc = 0x15daccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)26 << 16));
    // 0x15dad0: 0xc0558d0  jal         func_156340
    ctx->pc = 0x15DAD0u;
    SET_GPR_U32(ctx, 31, 0x15DAD8u);
    ctx->pc = 0x15DAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DAD0u;
    // 0x15dad4: 0x2484d740  addiu       $a0, $a0, -0x28C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156340u, 0x15DAD0u, 0x15DAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DAD8u;
label_15dad8:
    // 0x15dad8: 0x3c040016  lui         $a0, 0x16
    ctx->pc = 0x15dad8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
    // 0x15dadc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15dadcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dae0: 0xc055768  jal         func_155DA0
    ctx->pc = 0x15DAE0u;
    SET_GPR_U32(ctx, 31, 0x15DAE8u);
    ctx->pc = 0x15DAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DAE0u;
    // 0x15dae4: 0x2484dba0  addiu       $a0, $a0, -0x2460 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x15DAE0u, 0x15DAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DAE8u;
label_15dae8:
    // 0x15dae8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15dae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15daec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15daecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15daf0: 0x3e00008  jr          $ra
    ctx->pc = 0x15DAF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15DAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DAF0u;
        // 0x15daf4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15DAF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15DAF8u;
    // 0x15daf8: 0x0  nop
    ctx->pc = 0x15daf8u;
    // NOP
    // 0x15dafc: 0x0  nop
    ctx->pc = 0x15dafcu;
    // NOP
    // 0x15db00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15db00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15db04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x15db04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15db08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15db08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15db0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15db0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15db10: 0xc06814c  jal         func_1A0530
    ctx->pc = 0x15DB10u;
    SET_GPR_U32(ctx, 31, 0x15DB18u);
    ctx->pc = 0x15DB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DB10u;
    // 0x15db14: 0x24040308  addiu       $a0, $zero, 0x308 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0530u, 0x15DB10u, 0x15DB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DB18u;
label_15db18:
    // 0x15db18: 0xc068350  jal         func_1A0D40
    ctx->pc = 0x15DB18u;
    SET_GPR_U32(ctx, 31, 0x15DB20u);
    ctx->pc = 0x1A0D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0D40u, 0x15DB18u, 0x15DB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DB20u;
label_15db20:
    // 0x15db20: 0xc055630  jal         func_1558C0
    ctx->pc = 0x15DB20u;
    SET_GPR_U32(ctx, 31, 0x15DB28u);
    ctx->pc = 0x1558C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1558C0u, 0x15DB20u, 0x15DB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DB28u;
label_15db28:
    // 0x15db28: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15db28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15db2c: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x15db2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x15db30: 0xa0604130  sb          $zero, 0x4130($v1)
    ctx->pc = 0x15db30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 16688), (uint8_t)GPR_U32(ctx, 0));
    // 0x15db34: 0x3c040016  lui         $a0, 0x16
    ctx->pc = 0x15db34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
    // 0x15db38: 0xa0404138  sb          $zero, 0x4138($v0)
    ctx->pc = 0x15db38u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16696), (uint8_t)GPR_U32(ctx, 0));
    // 0x15db3c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15db3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15db40: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x15db40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x15db44: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x15db44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x15db48: 0xa0434148  sb          $v1, 0x4148($v0)
    ctx->pc = 0x15db48u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16712), (uint8_t)GPR_U32(ctx, 3));
    // 0x15db4c: 0x2484dc30  addiu       $a0, $a0, -0x23D0
    ctx->pc = 0x15db4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958128));
    // 0x15db50: 0x24030096  addiu       $v1, $zero, 0x96
    ctx->pc = 0x15db50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x15db54: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x15db54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x15db58: 0xa4434140  sh          $v1, 0x4140($v0)
    ctx->pc = 0x15db58u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 16704), (uint16_t)GPR_U32(ctx, 3));
    // 0x15db5c: 0x24a5d350  addiu       $a1, $a1, -0x2CB0
    ctx->pc = 0x15db5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955856));
    // 0x15db60: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x15db60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x15db64: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x15db64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x15db68: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x15DB68u;
    SET_GPR_U32(ctx, 31, 0x15DB70u);
    ctx->pc = 0x15DB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DB68u;
    // 0x15db6c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155B50u, 0x15DB68u, 0x15DB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DB70u;
label_15db70:
    // 0x15db70: 0x3c04001a  lui         $a0, 0x1A
    ctx->pc = 0x15db70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)26 << 16));
    // 0x15db74: 0xc0558d0  jal         func_156340
    ctx->pc = 0x15DB74u;
    SET_GPR_U32(ctx, 31, 0x15DB7Cu);
    ctx->pc = 0x15DB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DB74u;
    // 0x15db78: 0x2484d740  addiu       $a0, $a0, -0x28C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156340u, 0x15DB74u, 0x15DB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DB7Cu;
label_15db7c:
    // 0x15db7c: 0x3c040016  lui         $a0, 0x16
    ctx->pc = 0x15db7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
    // 0x15db80: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15db80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15db84: 0xc055768  jal         func_155DA0
    ctx->pc = 0x15DB84u;
    SET_GPR_U32(ctx, 31, 0x15DB8Cu);
    ctx->pc = 0x15DB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DB84u;
    // 0x15db88: 0x2484dba0  addiu       $a0, $a0, -0x2460 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x15DB84u, 0x15DB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DB8Cu;
label_15db8c:
    // 0x15db8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15db8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15db90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15db90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15db94: 0x3e00008  jr          $ra
    ctx->pc = 0x15DB94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15DB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DB94u;
        // 0x15db98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15DB94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15DB9Cu;
    // 0x15db9c: 0x0  nop
    ctx->pc = 0x15db9cu;
    // NOP
    // 0x15dba0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15dba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15dba4: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15dba4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15dba8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x15dba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15dbac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15dbacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15dbb0: 0x90634138  lbu         $v1, 0x4138($v1)
    ctx->pc = 0x15dbb0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16696)));
    // 0x15dbb4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x15DBB4u;
    {
        const bool branch_taken_0x15dbb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DBB4u;
        // 0x15dbb8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dbb4) {
            ctx->pc = 0x15DBD4u;
            goto label_15dbd4;
        }
    }
    ctx->pc = 0x15DBBCu;
    // 0x15dbbc: 0xc068330  jal         func_1A0CC0
    ctx->pc = 0x15DBBCu;
    SET_GPR_U32(ctx, 31, 0x15DBC4u);
    ctx->pc = 0x1A0CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0CC0u, 0x15DBBCu, 0x15DBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DBC4u;
label_15dbc4:
    // 0x15dbc4: 0x3c040016  lui         $a0, 0x16
    ctx->pc = 0x15dbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
    // 0x15dbc8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15dbc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dbcc: 0xc055768  jal         func_155DA0
    ctx->pc = 0x15DBCCu;
    SET_GPR_U32(ctx, 31, 0x15DBD4u);
    ctx->pc = 0x15DBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DBCCu;
    // 0x15dbd0: 0x2484dbf0  addiu       $a0, $a0, -0x2410 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x15DBCCu, 0x15DBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DBD4u;
label_15dbd4:
    // 0x15dbd4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15dbd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15dbd8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15dbd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15dbdc: 0x3e00008  jr          $ra
    ctx->pc = 0x15DBDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15DBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DBDCu;
        // 0x15dbe0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15DBDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15DBE4u;
    // 0x15dbe4: 0x0  nop
    ctx->pc = 0x15dbe4u;
    // NOP
    // 0x15dbe8: 0x0  nop
    ctx->pc = 0x15dbe8u;
    // NOP
    // 0x15dbec: 0x0  nop
    ctx->pc = 0x15dbecu;
    // NOP
    // 0x15dbf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15dbf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15dbf4: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x15dbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x15dbf8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x15dbf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15dbfc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x15dbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x15dc00: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15dc00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15dc04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15dc04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dc08: 0xc055650  jal         func_155940
    ctx->pc = 0x15DC08u;
    SET_GPR_U32(ctx, 31, 0x15DC10u);
    ctx->pc = 0x15DC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DC08u;
    // 0x15dc0c: 0xa043d9d0  sb          $v1, -0x2630($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957520), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155940u, 0x15DC08u, 0x15DC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DC10u;
label_15dc10:
    // 0x15dc10: 0xc057954  jal         func_15E550
    ctx->pc = 0x15DC10u;
    SET_GPR_U32(ctx, 31, 0x15DC18u);
    ctx->pc = 0x15E550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E550u, 0x15DC10u, 0x15DC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DC18u;
label_15dc18:
    // 0x15dc18: 0xc055770  jal         func_155DC0
    ctx->pc = 0x15DC18u;
    SET_GPR_U32(ctx, 31, 0x15DC20u);
    ctx->pc = 0x15DC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DC18u;
    // 0x15dc1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DC0u, 0x15DC18u, 0x15DC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DC20u;
label_15dc20:
    // 0x15dc20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15dc20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15dc24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15dc24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15dc28: 0x3e00008  jr          $ra
    ctx->pc = 0x15DC28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15DC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DC28u;
        // 0x15dc2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15DC28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15DC30u;
    // 0x15dc30: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x15dc30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x15dc34: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15dc34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15dc38: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15dc38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15dc3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15dc3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15dc40: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15dc40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15dc44: 0x90634130  lbu         $v1, 0x4130($v1)
    ctx->pc = 0x15dc44u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16688)));
    // 0x15dc48: 0x2c61000b  sltiu       $at, $v1, 0xB
    ctx->pc = 0x15dc48u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x15dc4c: 0x1020010f  beqz        $at, . + 4 + (0x10F << 2)
    ctx->pc = 0x15DC4Cu;
    {
        const bool branch_taken_0x15dc4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DC4Cu;
        // 0x15dc50: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dc4c) {
            ctx->pc = 0x15E08Cu;
            goto label_15e08c;
        }
    }
    ctx->pc = 0x15DC54u;
    // 0x15dc54: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x15dc54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x15dc58: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15dc58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15dc5c: 0x2484d3e0  addiu       $a0, $a0, -0x2C20
    ctx->pc = 0x15dc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956000));
    // 0x15dc60: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15dc60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15dc64: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x15dc64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15dc68: 0x600008  jr          $v1
    ctx->pc = 0x15DC68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15DC70u: goto label_15dc70;
            case 0x15DCA4u: goto label_15dca4;
            case 0x15DDD4u: goto label_15ddd4;
            case 0x15DED0u: goto label_15ded0;
            case 0x15DF08u: goto label_15df08;
            case 0x15DF84u: goto label_15df84;
            case 0x15DFC8u: goto label_15dfc8;
            case 0x15DFE4u: goto label_15dfe4;
            case 0x15E018u: goto label_15e018;
            case 0x15E034u: goto label_15e034;
            case 0x15E068u: goto label_15e068;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15DC68u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x15DC70u;
label_15dc70:
    // 0x15dc70: 0xc057a78  jal         func_15E9E0
    ctx->pc = 0x15DC70u;
    SET_GPR_U32(ctx, 31, 0x15DC78u);
    ctx->pc = 0x15E9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E9E0u, 0x15DC70u, 0x15DC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DC78u;
label_15dc78:
    // 0x15dc78: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x15dc78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x15dc7c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15dc7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15dc80: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x15dc80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15dc84: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x15dc84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x15dc88: 0xc0c8b00  jal         func_322C00
    ctx->pc = 0x15DC88u;
    SET_GPR_U32(ctx, 31, 0x15DC90u);
    ctx->pc = 0x15DC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DC88u;
    // 0x15dc8c: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322C00u, 0x15DC88u, 0x15DC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DC90u;
label_15dc90:
    // 0x15dc90: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15dc90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15dc94: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x15dc94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x15dc98: 0x90634130  lbu         $v1, 0x4130($v1)
    ctx->pc = 0x15dc98u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16688)));
    // 0x15dc9c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15dc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15dca0: 0xa0434130  sb          $v1, 0x4130($v0)
    ctx->pc = 0x15dca0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16688), (uint8_t)GPR_U32(ctx, 3));
label_15dca4:
    // 0x15dca4: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x15dca4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x15dca8: 0xc0639d4  jal         func_18E750
    ctx->pc = 0x15DCA8u;
    SET_GPR_U32(ctx, 31, 0x15DCB0u);
    ctx->pc = 0x15DCACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DCA8u;
    // 0x15dcac: 0x2484d360  addiu       $a0, $a0, -0x2CA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E750u, 0x15DCA8u, 0x15DCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DCB0u;
label_15dcb0:
    // 0x15dcb0: 0xafa2009c  sw          $v0, 0x9C($sp)
    ctx->pc = 0x15dcb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
    // 0x15dcb4: 0xc0660ec  jal         func_1983B0
    ctx->pc = 0x15DCB4u;
    SET_GPR_U32(ctx, 31, 0x15DCBCu);
    ctx->pc = 0x15DCB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DCB4u;
    // 0x15dcb8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1983B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1983B0u, 0x15DCB4u, 0x15DCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DCBCu;
label_15dcbc:
    // 0x15dcbc: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15dcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15dcc0: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x15dcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x15dcc4: 0xc063d08  jal         func_18F420
    ctx->pc = 0x15DCC4u;
    SET_GPR_U32(ctx, 31, 0x15DCCCu);
    ctx->pc = 0x15DCC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DCC4u;
    // 0x15dcc8: 0xac624110  sw          $v0, 0x4110($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 16656), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F420u, 0x15DCC4u, 0x15DCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DCCCu;
label_15dccc:
    // 0x15dccc: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x15dcccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x15dcd0: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x15dcd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x15dcd4: 0x8046f340  lb          $a2, -0xCC0($v0)
    ctx->pc = 0x15dcd4u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964032)));
    // 0x15dcd8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x15dcd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15dcdc: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x15DCDCu;
    SET_GPR_U32(ctx, 31, 0x15DCE4u);
    ctx->pc = 0x15DCE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DCDCu;
    // 0x15dce0: 0x24a5d370  addiu       $a1, $a1, -0x2C90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1297C8u, 0x15DCDCu, 0x15DCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DCE4u;
label_15dce4:
    // 0x15dce4: 0xc0639d4  jal         func_18E750
    ctx->pc = 0x15DCE4u;
    SET_GPR_U32(ctx, 31, 0x15DCECu);
    ctx->pc = 0x15DCE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DCE4u;
    // 0x15dce8: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E750u, 0x15DCE4u, 0x15DCECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DCECu;
label_15dcec:
    // 0x15dcec: 0xafa2009c  sw          $v0, 0x9C($sp)
    ctx->pc = 0x15dcecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
    // 0x15dcf0: 0xc0660ec  jal         func_1983B0
    ctx->pc = 0x15DCF0u;
    SET_GPR_U32(ctx, 31, 0x15DCF8u);
    ctx->pc = 0x15DCF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DCF0u;
    // 0x15dcf4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1983B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1983B0u, 0x15DCF0u, 0x15DCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DCF8u;
label_15dcf8:
    // 0x15dcf8: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15dcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15dcfc: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x15dcfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x15dd00: 0xc063d08  jal         func_18F420
    ctx->pc = 0x15DD00u;
    SET_GPR_U32(ctx, 31, 0x15DD08u);
    ctx->pc = 0x15DD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DD00u;
    // 0x15dd04: 0xac624114  sw          $v0, 0x4114($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 16660), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F420u, 0x15DD00u, 0x15DD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DD08u;
label_15dd08:
    // 0x15dd08: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x15dd08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x15dd0c: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x15dd0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x15dd10: 0x90464174  lbu         $a2, 0x4174($v0)
    ctx->pc = 0x15dd10u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16756)));
    // 0x15dd14: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x15dd14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15dd18: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x15DD18u;
    SET_GPR_U32(ctx, 31, 0x15DD20u);
    ctx->pc = 0x15DD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DD18u;
    // 0x15dd1c: 0x24a5d380  addiu       $a1, $a1, -0x2C80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1297C8u, 0x15DD18u, 0x15DD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DD20u;
label_15dd20:
    // 0x15dd20: 0xc0639d4  jal         func_18E750
    ctx->pc = 0x15DD20u;
    SET_GPR_U32(ctx, 31, 0x15DD28u);
    ctx->pc = 0x15DD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DD20u;
    // 0x15dd24: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E750u, 0x15DD20u, 0x15DD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DD28u;
label_15dd28:
    // 0x15dd28: 0xafa2009c  sw          $v0, 0x9C($sp)
    ctx->pc = 0x15dd28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
    // 0x15dd2c: 0xc0660ec  jal         func_1983B0
    ctx->pc = 0x15DD2Cu;
    SET_GPR_U32(ctx, 31, 0x15DD34u);
    ctx->pc = 0x15DD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DD2Cu;
    // 0x15dd30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1983B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1983B0u, 0x15DD2Cu, 0x15DD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DD34u;
label_15dd34:
    // 0x15dd34: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15dd34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15dd38: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x15dd38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x15dd3c: 0xc063d08  jal         func_18F420
    ctx->pc = 0x15DD3Cu;
    SET_GPR_U32(ctx, 31, 0x15DD44u);
    ctx->pc = 0x15DD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DD3Cu;
    // 0x15dd40: 0xac624118  sw          $v0, 0x4118($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 16664), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F420u, 0x15DD3Cu, 0x15DD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DD44u;
label_15dd44:
    // 0x15dd44: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x15dd44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x15dd48: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x15dd48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x15dd4c: 0x90464173  lbu         $a2, 0x4173($v0)
    ctx->pc = 0x15dd4cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16755)));
    // 0x15dd50: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x15dd50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15dd54: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x15DD54u;
    SET_GPR_U32(ctx, 31, 0x15DD5Cu);
    ctx->pc = 0x15DD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DD54u;
    // 0x15dd58: 0x24a5d3a0  addiu       $a1, $a1, -0x2C60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1297C8u, 0x15DD54u, 0x15DD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DD5Cu;
label_15dd5c:
    // 0x15dd5c: 0xc0639d4  jal         func_18E750
    ctx->pc = 0x15DD5Cu;
    SET_GPR_U32(ctx, 31, 0x15DD64u);
    ctx->pc = 0x15DD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DD5Cu;
    // 0x15dd60: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E750u, 0x15DD5Cu, 0x15DD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DD64u;
label_15dd64:
    // 0x15dd64: 0xafa2009c  sw          $v0, 0x9C($sp)
    ctx->pc = 0x15dd64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
    // 0x15dd68: 0xc0660ec  jal         func_1983B0
    ctx->pc = 0x15DD68u;
    SET_GPR_U32(ctx, 31, 0x15DD70u);
    ctx->pc = 0x15DD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DD68u;
    // 0x15dd6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1983B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1983B0u, 0x15DD68u, 0x15DD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DD70u;
label_15dd70:
    // 0x15dd70: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15dd70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15dd74: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x15dd74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x15dd78: 0xc063d08  jal         func_18F420
    ctx->pc = 0x15DD78u;
    SET_GPR_U32(ctx, 31, 0x15DD80u);
    ctx->pc = 0x15DD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DD78u;
    // 0x15dd7c: 0xac62411c  sw          $v0, 0x411C($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 16668), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F420u, 0x15DD78u, 0x15DD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DD80u;
label_15dd80:
    // 0x15dd80: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x15dd80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x15dd84: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x15dd84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x15dd88: 0x90464172  lbu         $a2, 0x4172($v0)
    ctx->pc = 0x15dd88u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16754)));
    // 0x15dd8c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x15dd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15dd90: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x15DD90u;
    SET_GPR_U32(ctx, 31, 0x15DD98u);
    ctx->pc = 0x15DD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DD90u;
    // 0x15dd94: 0x24a5d3c0  addiu       $a1, $a1, -0x2C40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1297C8u, 0x15DD90u, 0x15DD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DD98u;
label_15dd98:
    // 0x15dd98: 0xc0639d4  jal         func_18E750
    ctx->pc = 0x15DD98u;
    SET_GPR_U32(ctx, 31, 0x15DDA0u);
    ctx->pc = 0x15DD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DD98u;
    // 0x15dd9c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E750u, 0x15DD98u, 0x15DDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DDA0u;
label_15dda0:
    // 0x15dda0: 0xafa2009c  sw          $v0, 0x9C($sp)
    ctx->pc = 0x15dda0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
    // 0x15dda4: 0xc0660ec  jal         func_1983B0
    ctx->pc = 0x15DDA4u;
    SET_GPR_U32(ctx, 31, 0x15DDACu);
    ctx->pc = 0x15DDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DDA4u;
    // 0x15dda8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1983B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1983B0u, 0x15DDA4u, 0x15DDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DDACu;
label_15ddac:
    // 0x15ddac: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15ddacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15ddb0: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x15ddb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x15ddb4: 0xc063d08  jal         func_18F420
    ctx->pc = 0x15DDB4u;
    SET_GPR_U32(ctx, 31, 0x15DDBCu);
    ctx->pc = 0x15DDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DDB4u;
    // 0x15ddb8: 0xac624120  sw          $v0, 0x4120($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 16672), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F420u, 0x15DDB4u, 0x15DDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DDBCu;
label_15ddbc:
    // 0x15ddbc: 0x3c04009b  lui         $a0, 0x9B
    ctx->pc = 0x15ddbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)155 << 16));
    // 0x15ddc0: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15ddc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15ddc4: 0x90844130  lbu         $a0, 0x4130($a0)
    ctx->pc = 0x15ddc4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16688)));
    // 0x15ddc8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x15ddc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x15ddcc: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x15DDCCu;
    {
        const bool branch_taken_0x15ddcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DDCCu;
        // 0x15ddd0: 0xa0644130  sb          $a0, 0x4130($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 16688), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ddcc) {
            ctx->pc = 0x15E08Cu;
            goto label_15e08c;
        }
    }
    ctx->pc = 0x15DDD4u;
label_15ddd4:
    // 0x15ddd4: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x15ddd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x15ddd8: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15ddd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15dddc: 0x8c464110  lw          $a2, 0x4110($v0)
    ctx->pc = 0x15dddcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16656)));
    // 0x15dde0: 0x3c04009b  lui         $a0, 0x9B
    ctx->pc = 0x15dde0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)155 << 16));
    // 0x15dde4: 0xa4604480  sh          $zero, 0x4480($v1)
    ctx->pc = 0x15dde4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 17536), (uint16_t)GPR_U32(ctx, 0));
    // 0x15dde8: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15dde8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15ddec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15ddecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ddf0: 0xac864188  sw          $a2, 0x4188($a0)
    ctx->pc = 0x15ddf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16776), GPR_U32(ctx, 6));
    // 0x15ddf4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x15ddf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x15ddf8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x15ddf8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x15ddfc: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x15ddfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15de00: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x15de00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x15de04: 0x5243c  dsll32      $a0, $a1, 16
    ctx->pc = 0x15de04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 16));
    // 0x15de08: 0x8c464114  lw          $a2, 0x4114($v0)
    ctx->pc = 0x15de08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16660)));
    // 0x15de0c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x15de0cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x15de10: 0xa4654482  sh          $a1, 0x4482($v1)
    ctx->pc = 0x15de10u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 17538), (uint16_t)GPR_U32(ctx, 5));
    // 0x15de14: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x15de14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x15de18: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15de18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15de1c: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x15de1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x15de20: 0xac664194  sw          $a2, 0x4194($v1)
    ctx->pc = 0x15de20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16788), GPR_U32(ctx, 6));
    // 0x15de24: 0xa4454484  sh          $a1, 0x4484($v0)
    ctx->pc = 0x15de24u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 17540), (uint16_t)GPR_U32(ctx, 5));
    // 0x15de28: 0x5243c  dsll32      $a0, $a1, 16
    ctx->pc = 0x15de28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 16));
    // 0x15de2c: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x15de2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x15de30: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x15de30u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x15de34: 0x8c464118  lw          $a2, 0x4118($v0)
    ctx->pc = 0x15de34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16664)));
    // 0x15de38: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x15de38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x15de3c: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15de3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15de40: 0x5243c  dsll32      $a0, $a1, 16
    ctx->pc = 0x15de40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 16));
    // 0x15de44: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x15de44u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x15de48: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x15de48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x15de4c: 0xac6641a0  sw          $a2, 0x41A0($v1)
    ctx->pc = 0x15de4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16800), GPR_U32(ctx, 6));
    // 0x15de50: 0xa4454486  sh          $a1, 0x4486($v0)
    ctx->pc = 0x15de50u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 17542), (uint16_t)GPR_U32(ctx, 5));
    // 0x15de54: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15de54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15de58: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x15de58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x15de5c: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x15de5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x15de60: 0x8c46411c  lw          $a2, 0x411C($v0)
    ctx->pc = 0x15de60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16668)));
    // 0x15de64: 0x5243c  dsll32      $a0, $a1, 16
    ctx->pc = 0x15de64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 16));
    // 0x15de68: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x15de68u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x15de6c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x15de6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x15de70: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x15de70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x15de74: 0xac6641ac  sw          $a2, 0x41AC($v1)
    ctx->pc = 0x15de74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16812), GPR_U32(ctx, 6));
    // 0x15de78: 0xa4454488  sh          $a1, 0x4488($v0)
    ctx->pc = 0x15de78u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 17544), (uint16_t)GPR_U32(ctx, 5));
    // 0x15de7c: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15de7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15de80: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x15de80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x15de84: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x15de84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
    // 0x15de88: 0x8c464120  lw          $a2, 0x4120($v0)
    ctx->pc = 0x15de88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16672)));
    // 0x15de8c: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x15de8cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x15de90: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x15de90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x15de94: 0xac6641b8  sw          $a2, 0x41B8($v1)
    ctx->pc = 0x15de94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16824), GPR_U32(ctx, 6));
    // 0x15de98: 0xa444448a  sh          $a0, 0x448A($v0)
    ctx->pc = 0x15de98u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 17546), (uint16_t)GPR_U32(ctx, 4));
    // 0x15de9c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x15de9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x15dea0: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x15dea0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x15dea4: 0x24840d70  addiu       $a0, $a0, 0xD70
    ctx->pc = 0x15dea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3440));
    // 0x15dea8: 0xc0c0db4  jal         func_3036D0
    ctx->pc = 0x15DEA8u;
    SET_GPR_U32(ctx, 31, 0x15DEB0u);
    ctx->pc = 0x3036D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3036D0u, 0x15DEA8u, 0x15DEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DEB0u;
label_15deb0:
    // 0x15deb0: 0xc065ffc  jal         func_197FF0
    ctx->pc = 0x15DEB0u;
    SET_GPR_U32(ctx, 31, 0x15DEB8u);
    ctx->pc = 0x197FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197FF0u, 0x15DEB0u, 0x15DEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DEB8u;
label_15deb8:
    // 0x15deb8: 0x3c04009b  lui         $a0, 0x9B
    ctx->pc = 0x15deb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)155 << 16));
    // 0x15debc: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15debcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15dec0: 0x90844130  lbu         $a0, 0x4130($a0)
    ctx->pc = 0x15dec0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16688)));
    // 0x15dec4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x15dec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x15dec8: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x15DEC8u;
    {
        const bool branch_taken_0x15dec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DEC8u;
        // 0x15decc: 0xa0644130  sb          $a0, 0x4130($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 16688), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dec8) {
            ctx->pc = 0x15E08Cu;
            goto label_15e08c;
        }
    }
    ctx->pc = 0x15DED0u;
label_15ded0:
    // 0x15ded0: 0xc0c0da8  jal         func_3036A0
    ctx->pc = 0x15DED0u;
    SET_GPR_U32(ctx, 31, 0x15DED8u);
    ctx->pc = 0x3036A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3036A0u, 0x15DED0u, 0x15DED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DED8u;
label_15ded8:
    // 0x15ded8: 0x5040006d  beql        $v0, $zero, . + 4 + (0x6D << 2)
    ctx->pc = 0x15DED8u;
    {
        const bool branch_taken_0x15ded8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ded8) {
            ctx->pc = 0x15DEDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15DED8u;
            // 0x15dedc: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E090u;
            goto label_15e090;
        }
    }
    ctx->pc = 0x15DEE0u;
    // 0x15dee0: 0xc0c880c  jal         func_322030
    ctx->pc = 0x15DEE0u;
    SET_GPR_U32(ctx, 31, 0x15DEE8u);
    ctx->pc = 0x322030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322030u, 0x15DEE0u, 0x15DEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DEE8u;
label_15dee8:
    // 0x15dee8: 0xc063d18  jal         func_18F460
    ctx->pc = 0x15DEE8u;
    SET_GPR_U32(ctx, 31, 0x15DEF0u);
    ctx->pc = 0x18F460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F460u, 0x15DEE8u, 0x15DEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DEF0u;
label_15def0:
    // 0x15def0: 0x3c04009b  lui         $a0, 0x9B
    ctx->pc = 0x15def0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)155 << 16));
    // 0x15def4: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15def4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15def8: 0x90844130  lbu         $a0, 0x4130($a0)
    ctx->pc = 0x15def8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16688)));
    // 0x15defc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x15defcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x15df00: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x15DF00u;
    {
        const bool branch_taken_0x15df00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DF00u;
        // 0x15df04: 0xa0644130  sb          $a0, 0x4130($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 16688), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15df00) {
            ctx->pc = 0x15E08Cu;
            goto label_15e08c;
        }
    }
    ctx->pc = 0x15DF08u;
label_15df08:
    // 0x15df08: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x15df08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x15df0c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15df0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15df10: 0xc063d2c  jal         func_18F4B0
    ctx->pc = 0x15DF10u;
    SET_GPR_U32(ctx, 31, 0x15DF18u);
    ctx->pc = 0x15DF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DF10u;
    // 0x15df14: 0x24841ce8  addiu       $a0, $a0, 0x1CE8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F4B0u, 0x15DF10u, 0x15DF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DF18u;
label_15df18:
    // 0x15df18: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x15DF18u;
    {
        const bool branch_taken_0x15df18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15df18) {
            ctx->pc = 0x15E08Cu;
            goto label_15e08c;
        }
    }
    ctx->pc = 0x15DF20u;
    // 0x15df20: 0x3c10009c  lui         $s0, 0x9C
    ctx->pc = 0x15df20u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)156 << 16));
    // 0x15df24: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x15df24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15df28: 0x2610bb70  addiu       $s0, $s0, -0x4490
    ctx->pc = 0x15df28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949744));
label_15df2c:
    // 0x15df2c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x15df2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15df30: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x15df30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x15df34: 0x3c070036  lui         $a3, 0x36
    ctx->pc = 0x15df34u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)54 << 16));
    // 0x15df38: 0x3c080036  lui         $t0, 0x36
    ctx->pc = 0x15df38u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)54 << 16));
    // 0x15df3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15df3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15df40: 0x24c60d70  addiu       $a2, $a2, 0xD70
    ctx->pc = 0x15df40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3440));
    // 0x15df44: 0x24e70d80  addiu       $a3, $a3, 0xD80
    ctx->pc = 0x15df44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3456));
    // 0x15df48: 0x25080f90  addiu       $t0, $t0, 0xF90
    ctx->pc = 0x15df48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3984));
    // 0x15df4c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x15df4cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15df50: 0xc0c886c  jal         func_3221B0
    ctx->pc = 0x15DF50u;
    SET_GPR_U32(ctx, 31, 0x15DF58u);
    ctx->pc = 0x15DF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DF50u;
    // 0x15df54: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3221B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3221B0u, 0x15DF50u, 0x15DF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DF58u;
label_15df58:
    // 0x15df58: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x15df58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x15df5c: 0x1220fff3  beqz        $s1, . + 4 + (-0xD << 2)
    ctx->pc = 0x15DF5Cu;
    {
        const bool branch_taken_0x15df5c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DF5Cu;
        // 0x15df60: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15df5c) {
            ctx->pc = 0x15DF2Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15df2c;
        }
    }
    ctx->pc = 0x15DF64u;
    // 0x15df64: 0xc063d18  jal         func_18F460
    ctx->pc = 0x15DF64u;
    SET_GPR_U32(ctx, 31, 0x15DF6Cu);
    ctx->pc = 0x18F460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F460u, 0x15DF64u, 0x15DF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DF6Cu;
label_15df6c:
    // 0x15df6c: 0x3c04009b  lui         $a0, 0x9B
    ctx->pc = 0x15df6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)155 << 16));
    // 0x15df70: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15df70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15df74: 0x90844130  lbu         $a0, 0x4130($a0)
    ctx->pc = 0x15df74u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16688)));
    // 0x15df78: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x15df78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x15df7c: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x15DF7Cu;
    {
        const bool branch_taken_0x15df7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DF7Cu;
        // 0x15df80: 0xa0644130  sb          $a0, 0x4130($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 16688), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15df7c) {
            ctx->pc = 0x15E08Cu;
            goto label_15e08c;
        }
    }
    ctx->pc = 0x15DF84u;
label_15df84:
    // 0x15df84: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x15df84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x15df88: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15df88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15df8c: 0xc063d2c  jal         func_18F4B0
    ctx->pc = 0x15DF8Cu;
    SET_GPR_U32(ctx, 31, 0x15DF94u);
    ctx->pc = 0x15DF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DF8Cu;
    // 0x15df90: 0x24841cf0  addiu       $a0, $a0, 0x1CF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F4B0u, 0x15DF8Cu, 0x15DF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DF94u;
label_15df94:
    // 0x15df94: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x15DF94u;
    {
        const bool branch_taken_0x15df94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15df94) {
            ctx->pc = 0x15E08Cu;
            goto label_15e08c;
        }
    }
    ctx->pc = 0x15DF9Cu;
    // 0x15df9c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x15df9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x15dfa0: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x15dfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x15dfa4: 0x8c63bb70  lw          $v1, -0x4490($v1)
    ctx->pc = 0x15dfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949744)));
    // 0x15dfa8: 0xc063d18  jal         func_18F460
    ctx->pc = 0x15DFA8u;
    SET_GPR_U32(ctx, 31, 0x15DFB0u);
    ctx->pc = 0x15DFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DFA8u;
    // 0x15dfac: 0xac434108  sw          $v1, 0x4108($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 16648), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F460u, 0x15DFA8u, 0x15DFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DFB0u;
label_15dfb0:
    // 0x15dfb0: 0x3c04009b  lui         $a0, 0x9B
    ctx->pc = 0x15dfb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)155 << 16));
    // 0x15dfb4: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15dfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15dfb8: 0x90844130  lbu         $a0, 0x4130($a0)
    ctx->pc = 0x15dfb8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16688)));
    // 0x15dfbc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x15dfbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x15dfc0: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x15DFC0u;
    {
        const bool branch_taken_0x15dfc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DFC0u;
        // 0x15dfc4: 0xa0644130  sb          $a0, 0x4130($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 16688), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dfc0) {
            ctx->pc = 0x15E08Cu;
            goto label_15e08c;
        }
    }
    ctx->pc = 0x15DFC8u;
label_15dfc8:
    // 0x15dfc8: 0xc066e5c  jal         func_19B970
    ctx->pc = 0x15DFC8u;
    SET_GPR_U32(ctx, 31, 0x15DFD0u);
    ctx->pc = 0x19B970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B970u, 0x15DFC8u, 0x15DFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DFD0u;
label_15dfd0:
    // 0x15dfd0: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15dfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15dfd4: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x15dfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x15dfd8: 0x90634130  lbu         $v1, 0x4130($v1)
    ctx->pc = 0x15dfd8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16688)));
    // 0x15dfdc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15dfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15dfe0: 0xa0434130  sb          $v1, 0x4130($v0)
    ctx->pc = 0x15dfe0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16688), (uint8_t)GPR_U32(ctx, 3));
label_15dfe4:
    // 0x15dfe4: 0xc067040  jal         func_19C100
    ctx->pc = 0x15DFE4u;
    SET_GPR_U32(ctx, 31, 0x15DFECu);
    ctx->pc = 0x19C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C100u, 0x15DFE4u, 0x15DFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DFECu;
label_15dfec:
    // 0x15dfec: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x15dfecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
    // 0x15dff0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15dff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15dff4: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x15dff4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x15dff8: 0x14830024  bne         $a0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x15DFF8u;
    {
        const bool branch_taken_0x15dff8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x15dff8) {
            ctx->pc = 0x15E08Cu;
            goto label_15e08c;
        }
    }
    ctx->pc = 0x15E000u;
    // 0x15e000: 0x3c04009b  lui         $a0, 0x9B
    ctx->pc = 0x15e000u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)155 << 16));
    // 0x15e004: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15e004u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15e008: 0x90844130  lbu         $a0, 0x4130($a0)
    ctx->pc = 0x15e008u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16688)));
    // 0x15e00c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x15e00cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x15e010: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x15E010u;
    {
        const bool branch_taken_0x15e010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E010u;
        // 0x15e014: 0xa0644130  sb          $a0, 0x4130($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 16688), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e010) {
            ctx->pc = 0x15E08Cu;
            goto label_15e08c;
        }
    }
    ctx->pc = 0x15E018u;
label_15e018:
    // 0x15e018: 0xc066f84  jal         func_19BE10
    ctx->pc = 0x15E018u;
    SET_GPR_U32(ctx, 31, 0x15E020u);
    ctx->pc = 0x15E01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E018u;
    // 0x15e01c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BE10u, 0x15E018u, 0x15E020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E020u;
label_15e020:
    // 0x15e020: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15e020u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15e024: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x15e024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x15e028: 0x90634130  lbu         $v1, 0x4130($v1)
    ctx->pc = 0x15e028u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16688)));
    // 0x15e02c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15e02cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15e030: 0xa0434130  sb          $v1, 0x4130($v0)
    ctx->pc = 0x15e030u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16688), (uint8_t)GPR_U32(ctx, 3));
label_15e034:
    // 0x15e034: 0xc067040  jal         func_19C100
    ctx->pc = 0x15E034u;
    SET_GPR_U32(ctx, 31, 0x15E03Cu);
    ctx->pc = 0x19C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C100u, 0x15E034u, 0x15E03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E03Cu;
label_15e03c:
    // 0x15e03c: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x15e03cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
    // 0x15e040: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15e040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e044: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x15e044u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x15e048: 0x14830010  bne         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x15E048u;
    {
        const bool branch_taken_0x15e048 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x15e048) {
            ctx->pc = 0x15E08Cu;
            goto label_15e08c;
        }
    }
    ctx->pc = 0x15E050u;
    // 0x15e050: 0x3c04009b  lui         $a0, 0x9B
    ctx->pc = 0x15e050u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)155 << 16));
    // 0x15e054: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15e054u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15e058: 0x90844130  lbu         $a0, 0x4130($a0)
    ctx->pc = 0x15e058u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16688)));
    // 0x15e05c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x15e05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x15e060: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x15E060u;
    {
        const bool branch_taken_0x15e060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E060u;
        // 0x15e064: 0xa0644130  sb          $a0, 0x4130($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 16688), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e060) {
            ctx->pc = 0x15E08Cu;
            goto label_15e08c;
        }
    }
    ctx->pc = 0x15E068u;
label_15e068:
    // 0x15e068: 0xc052f0c  jal         func_14BC30
    ctx->pc = 0x15E068u;
    SET_GPR_U32(ctx, 31, 0x15E070u);
    ctx->pc = 0x15E06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E068u;
    // 0x15e06c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14BC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BC30u, 0x15E068u, 0x15E070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E070u;
label_15e070:
    // 0x15e070: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x15e070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x15e074: 0xc069634  jal         func_1A58D0
    ctx->pc = 0x15E074u;
    SET_GPR_U32(ctx, 31, 0x15E07Cu);
    ctx->pc = 0x15E078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E074u;
    // 0x15e078: 0xa0404130  sb          $zero, 0x4130($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 16688), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A58D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A58D0u, 0x15E074u, 0x15E07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E07Cu;
label_15e07c:
    // 0x15e07c: 0x3c040016  lui         $a0, 0x16
    ctx->pc = 0x15e07cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
    // 0x15e080: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15e080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e084: 0xc055768  jal         func_155DA0
    ctx->pc = 0x15E084u;
    SET_GPR_U32(ctx, 31, 0x15E08Cu);
    ctx->pc = 0x15E088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E084u;
    // 0x15e088: 0x2484e0a0  addiu       $a0, $a0, -0x1F60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x15E084u, 0x15E08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E08Cu;
label_15e08c:
    // 0x15e08c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15e08cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_15e090:
    // 0x15e090: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15e090u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15e094: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15e094u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e098: 0x3e00008  jr          $ra
    ctx->pc = 0x15E098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E098u;
        // 0x15e09c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15E0A0u;
    // 0x15e0a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15e0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15e0a4: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15e0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15e0a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15e0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15e0ac: 0x90644130  lbu         $a0, 0x4130($v1)
    ctx->pc = 0x15e0acu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16688)));
    // 0x15e0b0: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x15e0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x15e0b4: 0x50830121  beql        $a0, $v1, . + 4 + (0x121 << 2)
    ctx->pc = 0x15E0B4u;
    {
        const bool branch_taken_0x15e0b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15e0b4) {
            ctx->pc = 0x15E0B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E0B4u;
            // 0x15e0b8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E53Cu;
            goto label_15e53c;
        }
    }
    ctx->pc = 0x15E0BCu;
    // 0x15e0bc: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x15e0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x15e0c0: 0x50830116  beql        $a0, $v1, . + 4 + (0x116 << 2)
    ctx->pc = 0x15E0C0u;
    {
        const bool branch_taken_0x15e0c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15e0c0) {
            ctx->pc = 0x15E0C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E0C0u;
            // 0x15e0c4: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E51Cu;
            goto label_15e51c;
        }
    }
    ctx->pc = 0x15E0C8u;
    // 0x15e0c8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x15e0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x15e0cc: 0x10830107  beq         $a0, $v1, . + 4 + (0x107 << 2)
    ctx->pc = 0x15E0CCu;
    {
        const bool branch_taken_0x15e0cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15e0cc) {
            ctx->pc = 0x15E4ECu;
            goto label_15e4ec;
        }
    }
    ctx->pc = 0x15E0D4u;
    // 0x15e0d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15e0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e0d8: 0x108300b8  beq         $a0, $v1, . + 4 + (0xB8 << 2)
    ctx->pc = 0x15E0D8u;
    {
        const bool branch_taken_0x15e0d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15e0d8) {
            ctx->pc = 0x15E3BCu;
            goto label_15e3bc;
        }
    }
    ctx->pc = 0x15E0E0u;
    // 0x15e0e0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15E0E0u;
    {
        const bool branch_taken_0x15e0e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e0e0) {
            ctx->pc = 0x15E0F0u;
            goto label_15e0f0;
        }
    }
    ctx->pc = 0x15E0E8u;
    // 0x15e0e8: 0x10000117  b           . + 4 + (0x117 << 2)
    ctx->pc = 0x15E0E8u;
    {
        const bool branch_taken_0x15e0e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E0E8u;
        // 0x15e0ec: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e0e8) {
            ctx->pc = 0x15E548u;
            goto label_15e548;
        }
    }
    ctx->pc = 0x15E0F0u;
label_15e0f0:
    // 0x15e0f0: 0xc068330  jal         func_1A0CC0
    ctx->pc = 0x15E0F0u;
    SET_GPR_U32(ctx, 31, 0x15E0F8u);
    ctx->pc = 0x1A0CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0CC0u, 0x15E0F0u, 0x15E0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E0F8u;
label_15e0f8:
    // 0x15e0f8: 0xc0c8ad8  jal         func_322B60
    ctx->pc = 0x15E0F8u;
    SET_GPR_U32(ctx, 31, 0x15E100u);
    ctx->pc = 0x322B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322B60u, 0x15E0F8u, 0x15E100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E100u;
label_15e100:
    // 0x15e100: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x15e100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x15e104: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x15e104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15e108: 0x90424170  lbu         $v0, 0x4170($v0)
    ctx->pc = 0x15e108u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16752)));
    // 0x15e10c: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x15E10Cu;
    {
        const bool branch_taken_0x15e10c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x15e10c) {
            ctx->pc = 0x15E110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E10Cu;
            // 0x15e110: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E12Cu;
            goto label_15e12c;
        }
    }
    ctx->pc = 0x15E114u;
    // 0x15e114: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15e114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e118: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15e118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e11c: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x15E11Cu;
    SET_GPR_U32(ctx, 31, 0x15E124u);
    ctx->pc = 0x15E120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E11Cu;
    // 0x15e120: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x15E11Cu, 0x15E124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E124u;
label_15e124:
    // 0x15e124: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x15E124u;
    {
        const bool branch_taken_0x15e124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E124u;
        // 0x15e128: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e124) {
            ctx->pc = 0x15E13Cu;
            goto label_15e13c;
        }
    }
    ctx->pc = 0x15E12Cu;
label_15e12c:
    // 0x15e12c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15e12cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e130: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x15E130u;
    SET_GPR_U32(ctx, 31, 0x15E138u);
    ctx->pc = 0x15E134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E130u;
    // 0x15e134: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x15E130u, 0x15E138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E138u;
label_15e138:
    // 0x15e138: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x15e138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_15e13c:
    // 0x15e13c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15e13cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e140: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x15E140u;
    SET_GPR_U32(ctx, 31, 0x15E148u);
    ctx->pc = 0x15E144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E140u;
    // 0x15e144: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x15E140u, 0x15E148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E148u;
label_15e148:
    // 0x15e148: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x15e148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x15e14c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15e14cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e150: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x15E150u;
    SET_GPR_U32(ctx, 31, 0x15E158u);
    ctx->pc = 0x15E154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E150u;
    // 0x15e154: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x15E150u, 0x15E158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E158u;
label_15e158:
    // 0x15e158: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15e158u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15e15c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x15e15cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15e160: 0x90634148  lbu         $v1, 0x4148($v1)
    ctx->pc = 0x15e160u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16712)));
    // 0x15e164: 0x50640059  beql        $v1, $a0, . + 4 + (0x59 << 2)
    ctx->pc = 0x15E164u;
    {
        const bool branch_taken_0x15e164 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x15e164) {
            ctx->pc = 0x15E168u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E164u;
            // 0x15e168: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E2CCu;
            goto label_15e2cc;
        }
    }
    ctx->pc = 0x15E16Cu;
    // 0x15e16c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15e16cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e170: 0x50650012  beql        $v1, $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x15E170u;
    {
        const bool branch_taken_0x15e170 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x15e170) {
            ctx->pc = 0x15E174u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E170u;
            // 0x15e174: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E1BCu;
            goto label_15e1bc;
        }
    }
    ctx->pc = 0x15E178u;
    // 0x15e178: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15E178u;
    {
        const bool branch_taken_0x15e178 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e178) {
            ctx->pc = 0x15E188u;
            goto label_15e188;
        }
    }
    ctx->pc = 0x15E180u;
    // 0x15e180: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x15E180u;
    {
        const bool branch_taken_0x15e180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e180) {
            ctx->pc = 0x15E2D8u;
            goto label_15e2d8;
        }
    }
    ctx->pc = 0x15E188u;
label_15e188:
    // 0x15e188: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x15e188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x15e18c: 0x8c424150  lw          $v0, 0x4150($v0)
    ctx->pc = 0x15e18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16720)));
    // 0x15e190: 0x54450006  bnel        $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x15E190u;
    {
        const bool branch_taken_0x15e190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x15e190) {
            ctx->pc = 0x15E194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E190u;
            // 0x15e194: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E1ACu;
            goto label_15e1ac;
        }
    }
    ctx->pc = 0x15E198u;
    // 0x15e198: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x15e198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e19c: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x15E19Cu;
    SET_GPR_U32(ctx, 31, 0x15E1A4u);
    ctx->pc = 0x15E1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E19Cu;
    // 0x15e1a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x15E19Cu, 0x15E1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E1A4u;
label_15e1a4:
    // 0x15e1a4: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x15E1A4u;
    {
        const bool branch_taken_0x15e1a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e1a4) {
            ctx->pc = 0x15E2D8u;
            goto label_15e2d8;
        }
    }
    ctx->pc = 0x15E1ACu;
label_15e1ac:
    // 0x15e1ac: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x15E1ACu;
    SET_GPR_U32(ctx, 31, 0x15E1B4u);
    ctx->pc = 0x15E1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E1ACu;
    // 0x15e1b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x15E1ACu, 0x15E1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E1B4u;
label_15e1b4:
    // 0x15e1b4: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x15E1B4u;
    {
        const bool branch_taken_0x15e1b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e1b4) {
            ctx->pc = 0x15E2D8u;
            goto label_15e2d8;
        }
    }
    ctx->pc = 0x15E1BCu;
label_15e1bc:
    // 0x15e1bc: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x15E1BCu;
    SET_GPR_U32(ctx, 31, 0x15E1C4u);
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x15E1BCu, 0x15E1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E1C4u;
label_15e1c4:
    // 0x15e1c4: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x15e1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x15e1c8: 0x3c04009b  lui         $a0, 0x9B
    ctx->pc = 0x15e1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)155 << 16));
    // 0x15e1cc: 0x9066f35e  lbu         $a2, -0xCA2($v1)
    ctx->pc = 0x15e1ccu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294964062)));
    // 0x15e1d0: 0x10c00041  beqz        $a2, . + 4 + (0x41 << 2)
    ctx->pc = 0x15E1D0u;
    {
        const bool branch_taken_0x15e1d0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E1D0u;
        // 0x15e1d4: 0xa0804171  sb          $zero, 0x4171($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 16753), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e1d0) {
            ctx->pc = 0x15E2D8u;
            goto label_15e2d8;
        }
    }
    ctx->pc = 0x15E1D8u;
    // 0x15e1d8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x15e1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x15e1dc: 0x10c3002f  beq         $a2, $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x15E1DCu;
    {
        const bool branch_taken_0x15e1dc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x15e1dc) {
            ctx->pc = 0x15E29Cu;
            goto label_15e29c;
        }
    }
    ctx->pc = 0x15E1E4u;
    // 0x15e1e4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x15e1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15e1e8: 0x10c40020  beq         $a2, $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x15E1E8u;
    {
        const bool branch_taken_0x15e1e8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x15e1e8) {
            ctx->pc = 0x15E26Cu;
            goto label_15e26c;
        }
    }
    ctx->pc = 0x15E1F0u;
    // 0x15e1f0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x15e1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15e1f4: 0x10c30011  beq         $a2, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x15E1F4u;
    {
        const bool branch_taken_0x15e1f4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x15e1f4) {
            ctx->pc = 0x15E23Cu;
            goto label_15e23c;
        }
    }
    ctx->pc = 0x15E1FCu;
    // 0x15e1fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15e1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e200: 0x10c50003  beq         $a2, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15E200u;
    {
        const bool branch_taken_0x15e200 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x15e200) {
            ctx->pc = 0x15E210u;
            goto label_15e210;
        }
    }
    ctx->pc = 0x15E208u;
    // 0x15e208: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x15E208u;
    {
        const bool branch_taken_0x15e208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e208) {
            ctx->pc = 0x15E2D8u;
            goto label_15e2d8;
        }
    }
    ctx->pc = 0x15E210u;
label_15e210:
    // 0x15e210: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15e210u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15e214: 0x8c63416c  lw          $v1, 0x416C($v1)
    ctx->pc = 0x15e214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16748)));
    // 0x15e218: 0x2863000a  slti        $v1, $v1, 0xA
    ctx->pc = 0x15e218u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x15e21c: 0x1460002e  bnez        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x15E21Cu;
    {
        const bool branch_taken_0x15e21c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e21c) {
            ctx->pc = 0x15E2D8u;
            goto label_15e2d8;
        }
    }
    ctx->pc = 0x15E224u;
    // 0x15e224: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x15E224u;
    SET_GPR_U32(ctx, 31, 0x15E22Cu);
    ctx->pc = 0x15E228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E224u;
    // 0x15e228: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x15E224u, 0x15E22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E22Cu;
label_15e22c:
    // 0x15e22c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15e22cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e230: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15e230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15e234: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x15E234u;
    {
        const bool branch_taken_0x15e234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E234u;
        // 0x15e238: 0xa0644171  sb          $a0, 0x4171($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 16753), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e234) {
            ctx->pc = 0x15E2D8u;
            goto label_15e2d8;
        }
    }
    ctx->pc = 0x15E23Cu;
label_15e23c:
    // 0x15e23c: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15e23cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15e240: 0x8c63416c  lw          $v1, 0x416C($v1)
    ctx->pc = 0x15e240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16748)));
    // 0x15e244: 0x28630014  slti        $v1, $v1, 0x14
    ctx->pc = 0x15e244u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x15e248: 0x14600023  bnez        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x15E248u;
    {
        const bool branch_taken_0x15e248 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e248) {
            ctx->pc = 0x15E2D8u;
            goto label_15e2d8;
        }
    }
    ctx->pc = 0x15E250u;
    // 0x15e250: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15e250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e254: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x15E254u;
    SET_GPR_U32(ctx, 31, 0x15E25Cu);
    ctx->pc = 0x15E258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E254u;
    // 0x15e258: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x15E254u, 0x15E25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E25Cu;
label_15e25c:
    // 0x15e25c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15e25cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e260: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15e260u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15e264: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x15E264u;
    {
        const bool branch_taken_0x15e264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E264u;
        // 0x15e268: 0xa0644171  sb          $a0, 0x4171($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 16753), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e264) {
            ctx->pc = 0x15E2D8u;
            goto label_15e2d8;
        }
    }
    ctx->pc = 0x15E26Cu;
label_15e26c:
    // 0x15e26c: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15e26cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15e270: 0x8c63416c  lw          $v1, 0x416C($v1)
    ctx->pc = 0x15e270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16748)));
    // 0x15e274: 0x2863001e  slti        $v1, $v1, 0x1E
    ctx->pc = 0x15e274u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x15e278: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x15E278u;
    {
        const bool branch_taken_0x15e278 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e278) {
            ctx->pc = 0x15E2D8u;
            goto label_15e2d8;
        }
    }
    ctx->pc = 0x15E280u;
    // 0x15e280: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15e280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e284: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x15E284u;
    SET_GPR_U32(ctx, 31, 0x15E28Cu);
    ctx->pc = 0x15E288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E284u;
    // 0x15e288: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x15E284u, 0x15E28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E28Cu;
label_15e28c:
    // 0x15e28c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15e28cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e290: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15e290u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15e294: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x15E294u;
    {
        const bool branch_taken_0x15e294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E294u;
        // 0x15e298: 0xa0644171  sb          $a0, 0x4171($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 16753), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e294) {
            ctx->pc = 0x15E2D8u;
            goto label_15e2d8;
        }
    }
    ctx->pc = 0x15E29Cu;
label_15e29c:
    // 0x15e29c: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15e29cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15e2a0: 0x8c63416c  lw          $v1, 0x416C($v1)
    ctx->pc = 0x15e2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16748)));
    // 0x15e2a4: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x15E2A4u;
    {
        const bool branch_taken_0x15e2a4 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x15e2a4) {
            ctx->pc = 0x15E2D8u;
            goto label_15e2d8;
        }
    }
    ctx->pc = 0x15E2ACu;
    // 0x15e2ac: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x15e2acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15e2b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15e2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e2b4: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x15E2B4u;
    SET_GPR_U32(ctx, 31, 0x15E2BCu);
    ctx->pc = 0x15E2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E2B4u;
    // 0x15e2b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x15E2B4u, 0x15E2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E2BCu;
label_15e2bc:
    // 0x15e2bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15e2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e2c0: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15e2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15e2c4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15E2C4u;
    {
        const bool branch_taken_0x15e2c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E2C4u;
        // 0x15e2c8: 0xa0644171  sb          $a0, 0x4171($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 16753), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e2c4) {
            ctx->pc = 0x15E2D8u;
            goto label_15e2d8;
        }
    }
    ctx->pc = 0x15E2CCu;
label_15e2cc:
    // 0x15e2cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15e2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e2d0: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x15E2D0u;
    SET_GPR_U32(ctx, 31, 0x15E2D8u);
    ctx->pc = 0x15E2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E2D0u;
    // 0x15e2d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x15E2D0u, 0x15E2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E2D8u;
label_15e2d8:
    // 0x15e2d8: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15e2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15e2dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15e2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e2e0: 0x90644170  lbu         $a0, 0x4170($v1)
    ctx->pc = 0x15e2e0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16752)));
    // 0x15e2e4: 0x10850023  beq         $a0, $a1, . + 4 + (0x23 << 2)
    ctx->pc = 0x15E2E4u;
    {
        const bool branch_taken_0x15e2e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x15e2e4) {
            ctx->pc = 0x15E374u;
            goto label_15e374;
        }
    }
    ctx->pc = 0x15E2ECu;
    // 0x15e2ec: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x15e2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15e2f0: 0x10830012  beq         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x15E2F0u;
    {
        const bool branch_taken_0x15e2f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15e2f0) {
            ctx->pc = 0x15E33Cu;
            goto label_15e33c;
        }
    }
    ctx->pc = 0x15E2F8u;
    // 0x15e2f8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x15e2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15e2fc: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15E2FCu;
    {
        const bool branch_taken_0x15e2fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15e2fc) {
            ctx->pc = 0x15E30Cu;
            goto label_15e30c;
        }
    }
    ctx->pc = 0x15E304u;
    // 0x15e304: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x15E304u;
    {
        const bool branch_taken_0x15e304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E304u;
        // 0x15e308: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e304) {
            ctx->pc = 0x15E3B0u;
            goto label_15e3b0;
        }
    }
    ctx->pc = 0x15E30Cu;
label_15e30c:
    // 0x15e30c: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x15e30cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x15e310: 0x90434174  lbu         $v1, 0x4174($v0)
    ctx->pc = 0x15e310u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16756)));
    // 0x15e314: 0x28620029  slti        $v0, $v1, 0x29
    ctx->pc = 0x15e314u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x15e318: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x15E318u;
    {
        const bool branch_taken_0x15e318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e318) {
            ctx->pc = 0x15E31Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E318u;
            // 0x15e31c: 0x24640059  addiu       $a0, $v1, 0x59 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 89));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E334u;
            goto label_15e334;
        }
    }
    ctx->pc = 0x15E320u;
    // 0x15e320: 0x24040059  addiu       $a0, $zero, 0x59
    ctx->pc = 0x15e320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
    // 0x15e324: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x15E324u;
    SET_GPR_U32(ctx, 31, 0x15E32Cu);
    ctx->pc = 0x15E328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E324u;
    // 0x15e328: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x15E324u, 0x15E32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E32Cu;
label_15e32c:
    // 0x15e32c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15E32Cu;
    {
        const bool branch_taken_0x15e32c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e32c) {
            ctx->pc = 0x15E33Cu;
            goto label_15e33c;
        }
    }
    ctx->pc = 0x15E334u;
label_15e334:
    // 0x15e334: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x15E334u;
    SET_GPR_U32(ctx, 31, 0x15E33Cu);
    ctx->pc = 0x15E338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E334u;
    // 0x15e338: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x15E334u, 0x15E33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E33Cu;
label_15e33c:
    // 0x15e33c: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x15e33cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x15e340: 0x90434173  lbu         $v1, 0x4173($v0)
    ctx->pc = 0x15e340u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16755)));
    // 0x15e344: 0x28620029  slti        $v0, $v1, 0x29
    ctx->pc = 0x15e344u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x15e348: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x15E348u;
    {
        const bool branch_taken_0x15e348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e348) {
            ctx->pc = 0x15E34Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E348u;
            // 0x15e34c: 0x24640031  addiu       $a0, $v1, 0x31 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 49));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E368u;
            goto label_15e368;
        }
    }
    ctx->pc = 0x15E350u;
    // 0x15e350: 0x24040031  addiu       $a0, $zero, 0x31
    ctx->pc = 0x15e350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x15e354: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15e354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e358: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x15E358u;
    SET_GPR_U32(ctx, 31, 0x15E360u);
    ctx->pc = 0x15E35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E358u;
    // 0x15e35c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x15E358u, 0x15E360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E360u;
label_15e360:
    // 0x15e360: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15E360u;
    {
        const bool branch_taken_0x15e360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e360) {
            ctx->pc = 0x15E374u;
            goto label_15e374;
        }
    }
    ctx->pc = 0x15E368u;
label_15e368:
    // 0x15e368: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15e368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e36c: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x15E36Cu;
    SET_GPR_U32(ctx, 31, 0x15E374u);
    ctx->pc = 0x15E370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E36Cu;
    // 0x15e370: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x15E36Cu, 0x15E374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E374u;
label_15e374:
    // 0x15e374: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x15e374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x15e378: 0x90434172  lbu         $v1, 0x4172($v0)
    ctx->pc = 0x15e378u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16754)));
    // 0x15e37c: 0x28620029  slti        $v0, $v1, 0x29
    ctx->pc = 0x15e37cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x15e380: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x15E380u;
    {
        const bool branch_taken_0x15e380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e380) {
            ctx->pc = 0x15E384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E380u;
            // 0x15e384: 0x24640009  addiu       $a0, $v1, 0x9 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E3A0u;
            goto label_15e3a0;
        }
    }
    ctx->pc = 0x15E388u;
    // 0x15e388: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x15e388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x15e38c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15e38cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e390: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x15E390u;
    SET_GPR_U32(ctx, 31, 0x15E398u);
    ctx->pc = 0x15E394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E390u;
    // 0x15e394: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x15E390u, 0x15E398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E398u;
label_15e398:
    // 0x15e398: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15E398u;
    {
        const bool branch_taken_0x15e398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e398) {
            ctx->pc = 0x15E3ACu;
            goto label_15e3ac;
        }
    }
    ctx->pc = 0x15E3A0u;
label_15e3a0:
    // 0x15e3a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15e3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e3a4: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x15E3A4u;
    SET_GPR_U32(ctx, 31, 0x15E3ACu);
    ctx->pc = 0x15E3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E3A4u;
    // 0x15e3a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x15E3A4u, 0x15E3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E3ACu;
label_15e3ac:
    // 0x15e3ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15e3acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15e3b0:
    // 0x15e3b0: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15e3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15e3b4: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x15E3B4u;
    {
        const bool branch_taken_0x15e3b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E3B4u;
        // 0x15e3b8: 0xa0644130  sb          $a0, 0x4130($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 16688), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e3b4) {
            ctx->pc = 0x15E544u;
            goto label_15e544;
        }
    }
    ctx->pc = 0x15E3BCu;
label_15e3bc:
    // 0x15e3bc: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x15e3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x15e3c0: 0x8c424150  lw          $v0, 0x4150($v0)
    ctx->pc = 0x15e3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16720)));
    // 0x15e3c4: 0x54430014  bnel        $v0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x15E3C4u;
    {
        const bool branch_taken_0x15e3c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x15e3c4) {
            ctx->pc = 0x15E3C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E3C4u;
            // 0x15e3c8: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E418u;
            goto label_15e418;
        }
    }
    ctx->pc = 0x15E3CCu;
    // 0x15e3cc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x15e3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x15e3d0: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x15e3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x15e3d4: 0x8042d9f8  lb          $v0, -0x2608($v0)
    ctx->pc = 0x15e3d4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957560)));
    // 0x15e3d8: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x15E3D8u;
    {
        const bool branch_taken_0x15e3d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x15e3d8) {
            ctx->pc = 0x15E40Cu;
            goto label_15e40c;
        }
    }
    ctx->pc = 0x15E3E0u;
    // 0x15e3e0: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x15e3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x15e3e4: 0x90424171  lbu         $v0, 0x4171($v0)
    ctx->pc = 0x15e3e4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16753)));
    // 0x15e3e8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x15E3E8u;
    {
        const bool branch_taken_0x15e3e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e3e8) {
            ctx->pc = 0x15E414u;
            goto label_15e414;
        }
    }
    ctx->pc = 0x15E3F0u;
    // 0x15e3f0: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x15e3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x15e3f4: 0xc062784  jal         func_189E10
    ctx->pc = 0x15E3F4u;
    SET_GPR_U32(ctx, 31, 0x15E3FCu);
    ctx->pc = 0x15E3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E3F4u;
    // 0x15e3f8: 0x8c444154  lw          $a0, 0x4154($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16724)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189E10u, 0x15E3F4u, 0x15E3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E3FCu;
label_15e3fc:
    // 0x15e3fc: 0xc06831c  jal         func_1A0C70
    ctx->pc = 0x15E3FCu;
    SET_GPR_U32(ctx, 31, 0x15E404u);
    ctx->pc = 0x15E400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E3FCu;
    // 0x15e400: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0C70u, 0x15E3FCu, 0x15E404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E404u;
label_15e404:
    // 0x15e404: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15E404u;
    {
        const bool branch_taken_0x15e404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e404) {
            ctx->pc = 0x15E414u;
            goto label_15e414;
        }
    }
    ctx->pc = 0x15E40Cu;
label_15e40c:
    // 0x15e40c: 0xc068330  jal         func_1A0CC0
    ctx->pc = 0x15E40Cu;
    SET_GPR_U32(ctx, 31, 0x15E414u);
    ctx->pc = 0x1A0CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0CC0u, 0x15E40Cu, 0x15E414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E414u;
label_15e414:
    // 0x15e414: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x15e414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_15e418:
    // 0x15e418: 0xc0c8ed0  jal         func_323B40
    ctx->pc = 0x15E418u;
    SET_GPR_U32(ctx, 31, 0x15E420u);
    ctx->pc = 0x15E41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E418u;
    // 0x15e41c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323B40u, 0x15E418u, 0x15E420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E420u;
label_15e420:
    // 0x15e420: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15E420u;
    {
        const bool branch_taken_0x15e420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e420) {
            ctx->pc = 0x15E434u;
            goto label_15e434;
        }
    }
    ctx->pc = 0x15E428u;
    // 0x15e428: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x15e428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x15e42c: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15e42cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15e430: 0xa0644130  sb          $a0, 0x4130($v1)
    ctx->pc = 0x15e430u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 16688), (uint8_t)GPR_U32(ctx, 4));
label_15e434:
    // 0x15e434: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15e434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15e438: 0x84634140  lh          $v1, 0x4140($v1)
    ctx->pc = 0x15e438u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16704)));
    // 0x15e43c: 0x4630028  bgezl       $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x15E43Cu;
    {
        const bool branch_taken_0x15e43c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x15e43c) {
            ctx->pc = 0x15E440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E43Cu;
            // 0x15e440: 0x2464ffff  addiu       $a0, $v1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E4E0u;
            goto label_15e4e0;
        }
    }
    ctx->pc = 0x15E444u;
    // 0x15e444: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x15e444u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x15e448: 0x9064db10  lbu         $a0, -0x24F0($v1)
    ctx->pc = 0x15e448u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957840)));
    // 0x15e44c: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x15e44cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x15e450: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x15E450u;
    {
        const bool branch_taken_0x15e450 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E450u;
        // 0x15e454: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e450) {
            ctx->pc = 0x15E46Cu;
            goto label_15e46c;
        }
    }
    ctx->pc = 0x15E458u;
    // 0x15e458: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15e458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e45c: 0xc05c6cc  jal         func_171B30
    ctx->pc = 0x15E45Cu;
    SET_GPR_U32(ctx, 31, 0x15E464u);
    ctx->pc = 0x15E460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E45Cu;
    // 0x15e460: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171B30u, 0x15E45Cu, 0x15E464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E464u;
label_15e464:
    // 0x15e464: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x15E464u;
    {
        const bool branch_taken_0x15e464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E464u;
        // 0x15e468: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e464) {
            ctx->pc = 0x15E4C0u;
            goto label_15e4c0;
        }
    }
    ctx->pc = 0x15E46Cu;
label_15e46c:
    // 0x15e46c: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x15e46cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x15e470: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x15E470u;
    {
        const bool branch_taken_0x15e470 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e470) {
            ctx->pc = 0x15E474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E470u;
            // 0x15e474: 0x30830004  andi        $v1, $a0, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E48Cu;
            goto label_15e48c;
        }
    }
    ctx->pc = 0x15E478u;
    // 0x15e478: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15e478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e47c: 0xc05c6cc  jal         func_171B30
    ctx->pc = 0x15E47Cu;
    SET_GPR_U32(ctx, 31, 0x15E484u);
    ctx->pc = 0x15E480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E47Cu;
    // 0x15e480: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171B30u, 0x15E47Cu, 0x15E484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E484u;
label_15e484:
    // 0x15e484: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x15E484u;
    {
        const bool branch_taken_0x15e484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E484u;
        // 0x15e488: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e484) {
            ctx->pc = 0x15E4C0u;
            goto label_15e4c0;
        }
    }
    ctx->pc = 0x15E48Cu;
label_15e48c:
    // 0x15e48c: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x15E48Cu;
    {
        const bool branch_taken_0x15e48c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e48c) {
            ctx->pc = 0x15E490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E48Cu;
            // 0x15e490: 0x30830008  andi        $v1, $a0, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E4A8u;
            goto label_15e4a8;
        }
    }
    ctx->pc = 0x15E494u;
    // 0x15e494: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x15e494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15e498: 0xc05c6cc  jal         func_171B30
    ctx->pc = 0x15E498u;
    SET_GPR_U32(ctx, 31, 0x15E4A0u);
    ctx->pc = 0x15E49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E498u;
    // 0x15e49c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171B30u, 0x15E498u, 0x15E4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E4A0u;
label_15e4a0:
    // 0x15e4a0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x15E4A0u;
    {
        const bool branch_taken_0x15e4a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E4A0u;
        // 0x15e4a4: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e4a0) {
            ctx->pc = 0x15E4C0u;
            goto label_15e4c0;
        }
    }
    ctx->pc = 0x15E4A8u;
label_15e4a8:
    // 0x15e4a8: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x15E4A8u;
    {
        const bool branch_taken_0x15e4a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e4a8) {
            ctx->pc = 0x15E4ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E4A8u;
            // 0x15e4ac: 0x30a3ffff  andi        $v1, $a1, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E4C4u;
            goto label_15e4c4;
        }
    }
    ctx->pc = 0x15E4B0u;
    // 0x15e4b0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x15e4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15e4b4: 0xc05c6cc  jal         func_171B30
    ctx->pc = 0x15E4B4u;
    SET_GPR_U32(ctx, 31, 0x15E4BCu);
    ctx->pc = 0x15E4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E4B4u;
    // 0x15e4b8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171B30u, 0x15E4B4u, 0x15E4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E4BCu;
label_15e4bc:
    // 0x15e4bc: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x15e4bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_15e4c0:
    // 0x15e4c0: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x15e4c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_15e4c4:
    // 0x15e4c4: 0x30631f00  andi        $v1, $v1, 0x1F00
    ctx->pc = 0x15e4c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7936);
    // 0x15e4c8: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x15E4C8u;
    {
        const bool branch_taken_0x15e4c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e4c8) {
            ctx->pc = 0x15E544u;
            goto label_15e544;
        }
    }
    ctx->pc = 0x15E4D0u;
    // 0x15e4d0: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x15e4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x15e4d4: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15e4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15e4d8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x15E4D8u;
    {
        const bool branch_taken_0x15e4d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E4D8u;
        // 0x15e4dc: 0xa0644130  sb          $a0, 0x4130($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 16688), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e4d8) {
            ctx->pc = 0x15E544u;
            goto label_15e544;
        }
    }
    ctx->pc = 0x15E4E0u;
label_15e4e0:
    // 0x15e4e0: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15e4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15e4e4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x15E4E4u;
    {
        const bool branch_taken_0x15e4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E4E4u;
        // 0x15e4e8: 0xa4644140  sh          $a0, 0x4140($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 16704), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e4e4) {
            ctx->pc = 0x15E544u;
            goto label_15e544;
        }
    }
    ctx->pc = 0x15E4ECu;
label_15e4ec:
    // 0x15e4ec: 0xc0538d0  jal         func_14E340
    ctx->pc = 0x15E4ECu;
    SET_GPR_U32(ctx, 31, 0x15E4F4u);
    ctx->pc = 0x14E340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E340u, 0x15E4ECu, 0x15E4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E4F4u;
label_15e4f4:
    // 0x15e4f4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x15e4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x15e4f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15e4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e4fc: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x15E4FCu;
    SET_GPR_U32(ctx, 31, 0x15E504u);
    ctx->pc = 0x15E500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E4FCu;
    // 0x15e500: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x15E4FCu, 0x15E504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E504u;
label_15e504:
    // 0x15e504: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15e504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15e508: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x15e508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x15e50c: 0x90634130  lbu         $v1, 0x4130($v1)
    ctx->pc = 0x15e50cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16688)));
    // 0x15e510: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15e510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15e514: 0xa0434130  sb          $v1, 0x4130($v0)
    ctx->pc = 0x15e514u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16688), (uint8_t)GPR_U32(ctx, 3));
    // 0x15e518: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x15e518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_15e51c:
    // 0x15e51c: 0xc0c8ed0  jal         func_323B40
    ctx->pc = 0x15E51Cu;
    SET_GPR_U32(ctx, 31, 0x15E524u);
    ctx->pc = 0x15E520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E51Cu;
    // 0x15e520: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323B40u, 0x15E51Cu, 0x15E524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E524u;
label_15e524:
    // 0x15e524: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x15E524u;
    {
        const bool branch_taken_0x15e524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e524) {
            ctx->pc = 0x15E544u;
            goto label_15e544;
        }
    }
    ctx->pc = 0x15E52Cu;
    // 0x15e52c: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x15e52cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x15e530: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15e530u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15e534: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15E534u;
    {
        const bool branch_taken_0x15e534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E534u;
        // 0x15e538: 0xa0644130  sb          $a0, 0x4130($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 16688), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e534) {
            ctx->pc = 0x15E544u;
            goto label_15e544;
        }
    }
    ctx->pc = 0x15E53Cu;
label_15e53c:
    // 0x15e53c: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x15e53cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x15e540: 0xa0644138  sb          $a0, 0x4138($v1)
    ctx->pc = 0x15e540u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 16696), (uint8_t)GPR_U32(ctx, 4));
label_15e544:
    // 0x15e544: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15e544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15e548:
    // 0x15e548: 0x3e00008  jr          $ra
    ctx->pc = 0x15E548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E548u;
        // 0x15e54c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15E550u;
}
