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

// Function: sub_002E85B8
// Address: 0x2e85b8 - 0x2e8728
void sub_002E85B8_0x2e85b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E85B8_0x2e85b8");
#endif

    switch (ctx->pc) {
        case 0x2e8614u: goto label_2e8614;
        case 0x2e8628u: goto label_2e8628;
        case 0x2e8638u: goto label_2e8638;
        case 0x2e8664u: goto label_2e8664;
        case 0x2e8680u: goto label_2e8680;
        case 0x2e86a0u: goto label_2e86a0;
        case 0x2e86e8u: goto label_2e86e8;
        case 0x2e8704u: goto label_2e8704;
        case 0x2e870cu: goto label_2e870c;
        default: break;
    }

    ctx->pc = 0x2e85b8u;

    // 0x2e85b8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2e85b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2e85bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e85bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e85c0: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x2e85c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2e85c4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2e85c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e85c8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2e85c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2e85cc: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x2e85ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2e85d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e85d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e85d4: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x2e85d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e85d8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x2e85d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x2e85dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e85dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e85e0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2e85e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2e85e4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2e85e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2e85e8: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x2e85e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x2e85ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e85ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e85f0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2e85f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2e85f4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2e85f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e85f8: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x2e85f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x2e85fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e85fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8600: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2e8600u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2e8604: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2e8604u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8608: 0xafb0000c  sw          $s0, 0xC($sp)
    ctx->pc = 0x2e8608u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 16));
    // 0x2e860c: 0xc097c56  jal         func_25F158
    ctx->pc = 0x2E860Cu;
    SET_GPR_U32(ctx, 31, 0x2E8614u);
    ctx->pc = 0x2E8610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E860Cu;
    // 0x2e8610: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F158u, 0x2E860Cu, 0x2E8614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8614u;
label_2e8614:
    // 0x2e8614: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E8614u;
    {
        const bool branch_taken_0x2e8614 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2E8618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8614u;
        // 0x2e8618: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8614) {
            ctx->pc = 0x2E8630u;
            goto label_2e8630;
        }
    }
    ctx->pc = 0x2E861Cu;
    // 0x2e861c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2e861cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e8620: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x2E8620u;
    SET_GPR_U32(ctx, 31, 0x2E8628u);
    ctx->pc = 0x2E8624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8620u;
    // 0x2e8624: 0x24a5fb38  addiu       $a1, $a1, -0x4C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2E8620u, 0x2E8628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8628u;
label_2e8628:
    // 0x2e8628: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x2E8628u;
    {
        const bool branch_taken_0x2e8628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E862Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8628u;
        // 0x2e862c: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8628) {
            ctx->pc = 0x2E8710u;
            goto label_2e8710;
        }
    }
    ctx->pc = 0x2E8630u;
label_2e8630:
    // 0x2e8630: 0xc098552  jal         func_261548
    ctx->pc = 0x2E8630u;
    SET_GPR_U32(ctx, 31, 0x2E8638u);
    ctx->pc = 0x2E8634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8630u;
    // 0x2e8634: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x2E8630u, 0x2E8638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8638u;
label_2e8638:
    // 0x2e8638: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e8638u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e863c: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E863Cu;
    {
        const bool branch_taken_0x2e863c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E863Cu;
        // 0x2e8640: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e863c) {
            ctx->pc = 0x2E864Cu;
            goto label_2e864c;
        }
    }
    ctx->pc = 0x2E8644u;
    // 0x2e8644: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x2E8644u;
    {
        const bool branch_taken_0x2e8644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8644u;
        // 0x2e8648: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8644) {
            ctx->pc = 0x2E8710u;
            goto label_2e8710;
        }
    }
    ctx->pc = 0x2E864Cu;
label_2e864c:
    // 0x2e864c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e864cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8650: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2e8650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2e8654: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2e8654u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8658: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e8658u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e865c: 0xc097c56  jal         func_25F158
    ctx->pc = 0x2E865Cu;
    SET_GPR_U32(ctx, 31, 0x2E8664u);
    ctx->pc = 0x2E8660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E865Cu;
    // 0x2e8660: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F158u, 0x2E865Cu, 0x2E8664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8664u;
label_2e8664:
    // 0x2e8664: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E8664u;
    {
        const bool branch_taken_0x2e8664 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2E8668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8664u;
        // 0x2e8668: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8664) {
            ctx->pc = 0x2E8688u;
            goto label_2e8688;
        }
    }
    ctx->pc = 0x2E866Cu;
    // 0x2e866c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2e866cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2e8670: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2e8670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e8674: 0x24a5fb38  addiu       $a1, $a1, -0x4C8
    ctx->pc = 0x2e8674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966072));
    // 0x2e8678: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x2E8678u;
    SET_GPR_U32(ctx, 31, 0x2E8680u);
    ctx->pc = 0x2E867Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8678u;
    // 0x2e867c: 0x2410fff7  addiu       $s0, $zero, -0x9 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2E8678u, 0x2E8680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8680u;
label_2e8680:
    // 0x2e8680: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2E8680u;
    {
        const bool branch_taken_0x2e8680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8680) {
            ctx->pc = 0x2E8704u;
            goto label_2e8704;
        }
    }
    ctx->pc = 0x2E8688u;
label_2e8688:
    // 0x2e8688: 0x2232821  addu        $a1, $s1, $v1
    ctx->pc = 0x2e8688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2e868c: 0x225102b  sltu        $v0, $s1, $a1
    ctx->pc = 0x2e868cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2e8690: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2E8690u;
    {
        const bool branch_taken_0x2e8690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8690u;
        // 0x2e8694: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8690) {
            ctx->pc = 0x2E86D8u;
            goto label_2e86d8;
        }
    }
    ctx->pc = 0x2E8698u;
    // 0x2e8698: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2e8698u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e869c: 0x24830078  addiu       $v1, $a0, 0x78
    ctx->pc = 0x2e869cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 120));
label_2e86a0:
    // 0x2e86a0: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x2e86a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x2e86a4: 0x54500008  bnel        $v0, $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E86A4u;
    {
        const bool branch_taken_0x2e86a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2e86a4) {
            ctx->pc = 0x2E86A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E86A4u;
            // 0x2e86a8: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E86C8u;
            goto label_2e86c8;
        }
    }
    ctx->pc = 0x2E86ACu;
    // 0x2e86ac: 0x56060006  bnel        $s0, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E86ACu;
    {
        const bool branch_taken_0x2e86ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 6));
        if (branch_taken_0x2e86ac) {
            ctx->pc = 0x2E86B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E86ACu;
            // 0x2e86b0: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E86C8u;
            goto label_2e86c8;
        }
    }
    ctx->pc = 0x2E86B4u;
    // 0x2e86b4: 0x88620007  lwl         $v0, 0x7($v1)
    ctx->pc = 0x2e86b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x2e86b8: 0x98620004  lwr         $v0, 0x4($v1)
    ctx->pc = 0x2e86b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x2e86bc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E86BCu;
    {
        const bool branch_taken_0x2e86bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e86bc) {
            ctx->pc = 0x2E86E0u;
            goto label_2e86e0;
        }
    }
    ctx->pc = 0x2E86C4u;
    // 0x2e86c4: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x2e86c4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_2e86c8:
    // 0x2e86c8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2e86c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2e86cc: 0x85182b  sltu        $v1, $a0, $a1
    ctx->pc = 0x2e86ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2e86d0: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x2E86D0u;
    {
        const bool branch_taken_0x2e86d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E86D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E86D0u;
        // 0x2e86d4: 0x24830078  addiu       $v1, $a0, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e86d0) {
            ctx->pc = 0x2E86A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e86a0;
        }
    }
    ctx->pc = 0x2E86D8u;
label_2e86d8:
    // 0x2e86d8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2E86D8u;
    {
        const bool branch_taken_0x2e86d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E86DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E86D8u;
        // 0x2e86dc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e86d8) {
            ctx->pc = 0x2E8704u;
            goto label_2e8704;
        }
    }
    ctx->pc = 0x2E86E0u;
label_2e86e0:
    // 0x2e86e0: 0xc09a188  jal         func_268620
    ctx->pc = 0x2E86E0u;
    SET_GPR_U32(ctx, 31, 0x2E86E8u);
    ctx->pc = 0x2E86E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E86E0u;
    // 0x2e86e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x268620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268620u, 0x2E86E0u, 0x2E86E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E86E8u;
label_2e86e8:
    // 0x2e86e8: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E86E8u;
    {
        const bool branch_taken_0x2e86e8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2E86ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E86E8u;
        // 0x2e86ec: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e86e8) {
            ctx->pc = 0x2E8704u;
            goto label_2e8704;
        }
    }
    ctx->pc = 0x2E86F0u;
    // 0x2e86f0: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2e86f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2e86f4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2e86f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e86f8: 0x24a5fb70  addiu       $a1, $a1, -0x490
    ctx->pc = 0x2e86f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966128));
    // 0x2e86fc: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x2E86FCu;
    SET_GPR_U32(ctx, 31, 0x2E8704u);
    ctx->pc = 0x2E8700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E86FCu;
    // 0x2e8700: 0x2410fff9  addiu       $s0, $zero, -0x7 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2E86FCu, 0x2E8704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8704u;
label_2e8704:
    // 0x2e8704: 0xc098560  jal         func_261580
    ctx->pc = 0x2E8704u;
    SET_GPR_U32(ctx, 31, 0x2E870Cu);
    ctx->pc = 0x2E8708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8704u;
    // 0x2e8708: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x2E8704u, 0x2E870Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E870Cu;
label_2e870c:
    // 0x2e870c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e870cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e8710:
    // 0x2e8710: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2e8710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e8714: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x2e8714u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e8718: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x2e8718u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e871c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2e871cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e8720: 0x3e00008  jr          $ra
    ctx->pc = 0x2E8720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8720u;
        // 0x2e8724: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E8728u;
}
