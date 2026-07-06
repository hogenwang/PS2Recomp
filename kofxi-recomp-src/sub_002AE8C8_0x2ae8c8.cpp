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

// Function: sub_002AE8C8
// Address: 0x2ae8c8 - 0x2ae9f8
void sub_002AE8C8_0x2ae8c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AE8C8_0x2ae8c8");
#endif

    switch (ctx->pc) {
        case 0x2ae91cu: goto label_2ae91c;
        case 0x2ae92cu: goto label_2ae92c;
        case 0x2ae93cu: goto label_2ae93c;
        case 0x2ae988u: goto label_2ae988;
        case 0x2ae990u: goto label_2ae990;
        default: break;
    }

    ctx->pc = 0x2ae8c8u;

    // 0x2ae8c8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2ae8c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2ae8cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ae8ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ae8d0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2ae8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2ae8d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ae8d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae8d8: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2ae8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2ae8dc: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2ae8dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2ae8e0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2ae8e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2ae8e4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2ae8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2ae8e8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2ae8e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2ae8ec: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2ae8ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2ae8f0: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x2ae8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2ae8f4: 0x8c4400c8  lw          $a0, 0xC8($v0)
    ctx->pc = 0x2ae8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 200)));
    // 0x2ae8f8: 0x8c530094  lw          $s3, 0x94($v0)
    ctx->pc = 0x2ae8f8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x2ae8fc: 0x8c5500ac  lw          $s5, 0xAC($v0)
    ctx->pc = 0x2ae8fcu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
    // 0x2ae900: 0x8c510098  lw          $s1, 0x98($v0)
    ctx->pc = 0x2ae900u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x2ae904: 0x8c5200b0  lw          $s2, 0xB0($v0)
    ctx->pc = 0x2ae904u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x2ae908: 0x8c5400f8  lw          $s4, 0xF8($v0)
    ctx->pc = 0x2ae908u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 248)));
    // 0x2ae90c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AE90Cu;
    {
        const bool branch_taken_0x2ae90c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE90Cu;
        // 0x2ae910: 0x8c5600fc  lw          $s6, 0xFC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae90c) {
            ctx->pc = 0x2AE924u;
            goto label_2ae924;
        }
    }
    ctx->pc = 0x2AE914u;
    // 0x2ae914: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x2AE914u;
    SET_GPR_U32(ctx, 31, 0x2AE91Cu);
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x2AE914u, 0x2AE91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE91Cu;
label_2ae91c:
    // 0x2ae91c: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x2ae91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2ae920: 0xac4000c8  sw          $zero, 0xC8($v0)
    ctx->pc = 0x2ae920u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 200), GPR_U32(ctx, 0));
label_2ae924:
    // 0x2ae924: 0xc0aba7e  jal         func_2AE9F8
    ctx->pc = 0x2AE924u;
    SET_GPR_U32(ctx, 31, 0x2AE92Cu);
    ctx->pc = 0x2AE928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE924u;
    // 0x2ae928: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE9F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE9F8u, 0x2AE924u, 0x2AE92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE92Cu;
label_2ae92c:
    // 0x2ae92c: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x2ae92cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2ae930: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ae930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae934: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2AE934u;
    SET_GPR_U32(ctx, 31, 0x2AE93Cu);
    ctx->pc = 0x2AE938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE934u;
    // 0x2ae938: 0x24060198  addiu       $a2, $zero, 0x198 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2AE934u, 0x2AE93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE93Cu;
label_2ae93c:
    // 0x2ae93c: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x2ae93cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2ae940: 0xac710098  sw          $s1, 0x98($v1)
    ctx->pc = 0x2ae940u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 152), GPR_U32(ctx, 17));
    // 0x2ae944: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x2ae944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2ae948: 0xac5200b0  sw          $s2, 0xB0($v0)
    ctx->pc = 0x2ae948u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 176), GPR_U32(ctx, 18));
    // 0x2ae94c: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x2ae94cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2ae950: 0xac730094  sw          $s3, 0x94($v1)
    ctx->pc = 0x2ae950u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 148), GPR_U32(ctx, 19));
    // 0x2ae954: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x2ae954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2ae958: 0xac5500ac  sw          $s5, 0xAC($v0)
    ctx->pc = 0x2ae958u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 172), GPR_U32(ctx, 21));
    // 0x2ae95c: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x2ae95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2ae960: 0xac7400f8  sw          $s4, 0xF8($v1)
    ctx->pc = 0x2ae960u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 248), GPR_U32(ctx, 20));
    // 0x2ae964: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x2ae964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2ae968: 0xac5600fc  sw          $s6, 0xFC($v0)
    ctx->pc = 0x2ae968u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 252), GPR_U32(ctx, 22));
    // 0x2ae96c: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x2ae96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2ae970: 0x8c440094  lw          $a0, 0x94($v0)
    ctx->pc = 0x2ae970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x2ae974: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AE974u;
    {
        const bool branch_taken_0x2ae974 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae974) {
            ctx->pc = 0x2AE988u;
            goto label_2ae988;
        }
    }
    ctx->pc = 0x2AE97Cu;
    // 0x2ae97c: 0x8c460098  lw          $a2, 0x98($v0)
    ctx->pc = 0x2ae97cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x2ae980: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2AE980u;
    SET_GPR_U32(ctx, 31, 0x2AE988u);
    ctx->pc = 0x2AE984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE980u;
    // 0x2ae984: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2AE980u, 0x2AE988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE988u;
label_2ae988:
    // 0x2ae988: 0xc0ac5d2  jal         func_2B1748
    ctx->pc = 0x2AE988u;
    SET_GPR_U32(ctx, 31, 0x2AE990u);
    ctx->pc = 0x2AE98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE988u;
    // 0x2ae98c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1748u, 0x2AE988u, 0x2AE990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE990u;
label_2ae990:
    // 0x2ae990: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x2ae990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2ae994: 0x24040300  addiu       $a0, $zero, 0x300
    ctx->pc = 0x2ae994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x2ae998: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x2ae998u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x2ae99c: 0xac600114  sw          $zero, 0x114($v1)
    ctx->pc = 0x2ae99cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 276), GPR_U32(ctx, 0));
    // 0x2ae9a0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2ae9a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ae9a4: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x2ae9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2ae9a8: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2ae9a8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ae9ac: 0xac400118  sw          $zero, 0x118($v0)
    ctx->pc = 0x2ae9acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 280), GPR_U32(ctx, 0));
    // 0x2ae9b0: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2ae9b0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ae9b4: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x2ae9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2ae9b8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2ae9b8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ae9bc: 0xac60011c  sw          $zero, 0x11C($v1)
    ctx->pc = 0x2ae9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 284), GPR_U32(ctx, 0));
    // 0x2ae9c0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2ae9c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ae9c4: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x2ae9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2ae9c8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2ae9c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ae9cc: 0xac400120  sw          $zero, 0x120($v0)
    ctx->pc = 0x2ae9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 288), GPR_U32(ctx, 0));
    // 0x2ae9d0: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x2ae9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x2ae9d4: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x2ae9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2ae9d8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2ae9d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ae9dc: 0xac4000b8  sw          $zero, 0xB8($v0)
    ctx->pc = 0x2ae9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 184), GPR_U32(ctx, 0));
    // 0x2ae9e0: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x2ae9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2ae9e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ae9e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ae9e8: 0xac6000bc  sw          $zero, 0xBC($v1)
    ctx->pc = 0x2ae9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 188), GPR_U32(ctx, 0));
    // 0x2ae9ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2AE9ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AE9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE9ECu;
        // 0x2ae9f0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE9ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AE9F4u;
    // 0x2ae9f4: 0x0  nop
    ctx->pc = 0x2ae9f4u;
    // NOP
    if (ctx->pc == 0x2ae9f4u) { ctx->pc = 0x2ae9f8u; }
}
