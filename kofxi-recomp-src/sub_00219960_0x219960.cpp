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

// Function: sub_00219960
// Address: 0x219960 - 0x219a58
void sub_00219960_0x219960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00219960_0x219960");
#endif

    switch (ctx->pc) {
        case 0x21997cu: goto label_21997c;
        case 0x2199ccu: goto label_2199cc;
        case 0x2199dcu: goto label_2199dc;
        case 0x219a2cu: goto label_219a2c;
        case 0x219a34u: goto label_219a34;
        default: break;
    }

    ctx->pc = 0x219960u;

label_219960:
    // 0x219960: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x219960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x219964: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x219964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x219968: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x219968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21996c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21996cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219970: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x219970u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x219974: 0xc043e52  jal         func_10F948
    ctx->pc = 0x219974u;
    SET_GPR_U32(ctx, 31, 0x21997Cu);
    ctx->pc = 0x219978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219974u;
    // 0x219978: 0x248412f0  addiu       $a0, $a0, 0x12F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x219974u, 0x21997Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21997Cu;
label_21997c:
    // 0x21997c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21997cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219980: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x219980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x219984: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x219984u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x219988: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x219988u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21998c: 0x248412c0  addiu       $a0, $a0, 0x12C0
    ctx->pc = 0x21998cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4800));
    // 0x219990: 0x8043e52  j           func_10F948
    ctx->pc = 0x219990u;
    ctx->pc = 0x219994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219990u;
    // 0x219994: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    ctx->pc = 0x219998u;
    // 0x219998: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x219998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21999c: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21999cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x2199a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2199a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2199a4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2199a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2199a8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2199a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2199ac: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2199acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2199b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2199b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2199b4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2199b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2199b8: 0xade0ab58  sw          $zero, -0x54A8($t7)
    ctx->pc = 0x2199b8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    // 0x2199bc: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x2199bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2199c0: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x2199c0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2199c4: 0xc08447c  jal         func_2111F0
    ctx->pc = 0x2199C4u;
    SET_GPR_U32(ctx, 31, 0x2199CCu);
    ctx->pc = 0x2199C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2199C4u;
    // 0x2199c8: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2111F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2111F0u, 0x2199C4u, 0x2199CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2199CCu;
label_2199cc:
    // 0x2199cc: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x2199ccu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2199d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2199d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2199d4: 0xc086658  jal         func_219960
    ctx->pc = 0x2199D4u;
    SET_GPR_U32(ctx, 31, 0x2199DCu);
    ctx->pc = 0x2199D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2199D4u;
    // 0x2199d8: 0x20f8023  subu        $s0, $s0, $t7 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 15)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219960u;
    goto label_219960;
    ctx->pc = 0x2199DCu;
label_2199dc:
    // 0x2199dc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2199dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2199e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2199e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2199e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2199e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2199e8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2199e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2199ec: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2199ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2199f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2199F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2199F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2199F0u;
        // 0x2199f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2199F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2199F8u;
    // 0x2199f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2199f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2199fc: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x2199fcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x219a00: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x219a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x219a04: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x219a04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219a08: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x219a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x219a0c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x219a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x219a10: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x219a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x219a14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x219a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x219a18: 0x8cb10000  lw          $s1, 0x0($a1)
    ctx->pc = 0x219a18u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x219a1c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x219a1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219a20: 0xade0ab5c  sw          $zero, -0x54A4($t7)
    ctx->pc = 0x219a20u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    // 0x219a24: 0xc084582  jal         func_211608
    ctx->pc = 0x219A24u;
    SET_GPR_U32(ctx, 31, 0x219A2Cu);
    ctx->pc = 0x219A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219A24u;
    // 0x219a28: 0x8c900000  lw          $s0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211608u, 0x219A24u, 0x219A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219A2Cu;
label_219a2c:
    // 0x219a2c: 0xc086658  jal         func_219960
    ctx->pc = 0x219A2Cu;
    SET_GPR_U32(ctx, 31, 0x219A34u);
    ctx->pc = 0x219A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219A2Cu;
    // 0x219a30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219960u;
    goto label_219960;
    ctx->pc = 0x219A34u;
label_219a34:
    // 0x219a34: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x219a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x219a38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x219a38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219a3c: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x219a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x219a40: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x219a40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x219a44: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x219a44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x219a48: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x219a48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x219a4c: 0x3e00008  jr          $ra
    ctx->pc = 0x219A4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219A4Cu;
        // 0x219a50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219A4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219A54u;
    // 0x219a54: 0x0  nop
    ctx->pc = 0x219a54u;
    // NOP
    if (ctx->pc == 0x219a54u) { ctx->pc = 0x219a58u; }
}
