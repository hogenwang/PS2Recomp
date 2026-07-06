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

// Function: sub_00250018
// Address: 0x250018 - 0x2501e0
void sub_00250018_0x250018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00250018_0x250018");
#endif

    switch (ctx->pc) {
        case 0x250044u: goto label_250044;
        case 0x2500b0u: goto label_2500b0;
        case 0x2500c8u: goto label_2500c8;
        case 0x25016cu: goto label_25016c;
        default: break;
    }

    ctx->pc = 0x250018u;

    // 0x250018: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x250018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25001c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25001cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x250020: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x250020u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
    // 0x250024: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x250024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x250028: 0x8e021038  lw          $v0, 0x1038($s0)
    ctx->pc = 0x250028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4152)));
    // 0x25002c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x25002cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x250030: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x250030u;
    {
        const bool branch_taken_0x250030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x250034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250030u;
        // 0x250034: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250030) {
            ctx->pc = 0x250050u;
            goto label_250050;
        }
    }
    ctx->pc = 0x250038u;
    // 0x250038: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x250038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25003c: 0xc08a922  jal         func_22A488
    ctx->pc = 0x25003Cu;
    SET_GPR_U32(ctx, 31, 0x250044u);
    ctx->pc = 0x250040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25003Cu;
    // 0x250040: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A488u, 0x25003Cu, 0x250044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250044u;
label_250044:
    // 0x250044: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x250044u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250048: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x250048u;
    {
        const bool branch_taken_0x250048 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x25004Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250048u;
        // 0x25004c: 0x8e021038  lw          $v0, 0x1038($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250048) {
            ctx->pc = 0x250058u;
            goto label_250058;
        }
    }
    ctx->pc = 0x250050u;
label_250050:
    // 0x250050: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x250050u;
    {
        const bool branch_taken_0x250050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250050u;
        // 0x250054: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250050) {
            ctx->pc = 0x250110u;
            goto label_250110;
        }
    }
    ctx->pc = 0x250058u;
label_250058:
    // 0x250058: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x250058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25005c: 0x3c1001c1  lui         $s0, 0x1C1
    ctx->pc = 0x25005cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)449 << 16));
    // 0x250060: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x250060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x250064: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x250064u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x250068: 0x2610ae64  addiu       $s0, $s0, -0x519C
    ctx->pc = 0x250068u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946404));
    // 0x25006c: 0x24430008  addiu       $v1, $v0, 0x8
    ctx->pc = 0x25006cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x250070: 0x508821  addu        $s1, $v0, $s0
    ctx->pc = 0x250070u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x250074: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x250074u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x250078: 0x2606fffc  addiu       $a2, $s0, -0x4
    ctx->pc = 0x250078u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
    // 0x25007c: 0x8a230003  lwl         $v1, 0x3($s1)
    ctx->pc = 0x25007cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x250080: 0x9a230000  lwr         $v1, 0x0($s1)
    ctx->pc = 0x250080u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x250084: 0xa8830003  swl         $v1, 0x3($a0)
    ctx->pc = 0x250084u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x250088: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x250088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x25008c: 0xb8830000  swr         $v1, 0x0($a0)
    ctx->pc = 0x25008cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x250090: 0xa0c20007  sb          $v0, 0x7($a2)
    ctx->pc = 0x250090u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 7), (uint8_t)GPR_U32(ctx, 2));
    // 0x250094: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x250094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250098: 0xa0c50004  sb          $a1, 0x4($a2)
    ctx->pc = 0x250098u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4), (uint8_t)GPR_U32(ctx, 5));
    // 0x25009c: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x25009cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x2500a0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2500a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2500a4: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x2500a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2500a8: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x2500A8u;
    SET_GPR_U32(ctx, 31, 0x2500B0u);
    ctx->pc = 0x2500ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2500A8u;
    // 0x2500ac: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x2500A8u, 0x2500B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2500B0u;
label_2500b0:
    // 0x2500b0: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x2500b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2500b4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2500b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2500b8: 0x230182b  sltu        $v1, $s1, $s0
    ctx->pc = 0x2500b8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2500bc: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2500BCu;
    {
        const bool branch_taken_0x2500bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2500C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2500BCu;
        // 0x2500c0: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2500bc) {
            ctx->pc = 0x2500F4u;
            goto label_2500f4;
        }
    }
    ctx->pc = 0x2500C4u;
    // 0x2500c4: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x2500c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
label_2500c8:
    // 0x2500c8: 0x8a220003  lwl         $v0, 0x3($s1)
    ctx->pc = 0x2500c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x2500cc: 0x9a220000  lwr         $v0, 0x0($s1)
    ctx->pc = 0x2500ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x2500d0: 0xa8820003  swl         $v0, 0x3($a0)
    ctx->pc = 0x2500d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2500d4: 0xb8820000  swr         $v0, 0x0($a0)
    ctx->pc = 0x2500d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2500d8: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x2500d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x2500dc: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x2500dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2500e0: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x2500e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2500e4: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2500E4u;
    {
        const bool branch_taken_0x2500e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2500e4) {
            ctx->pc = 0x2500C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2500c8;
        }
    }
    ctx->pc = 0x2500ECu;
    // 0x2500ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2500ECu;
    {
        const bool branch_taken_0x2500ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2500ec) {
            ctx->pc = 0x2500F8u;
            goto label_2500f8;
        }
    }
    ctx->pc = 0x2500F4u;
label_2500f4:
    // 0x2500f4: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x2500f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
label_2500f8:
    // 0x2500f8: 0x2465ae60  addiu       $a1, $v1, -0x51A0
    ctx->pc = 0x2500f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946400));
    // 0x2500fc: 0x88a80003  lwl         $t0, 0x3($a1)
    ctx->pc = 0x2500fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 8) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 8, (int32_t)merged); }
    // 0x250100: 0x98a80000  lwr         $t0, 0x0($a1)
    ctx->pc = 0x250100u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
    // 0x250104: 0xa8880003  swl         $t0, 0x3($a0)
    ctx->pc = 0x250104u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x250108: 0xb8880000  swr         $t0, 0x0($a0)
    ctx->pc = 0x250108u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x25010c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x25010cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_250110:
    // 0x250110: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x250110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x250114: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x250114u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x250118: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x250118u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25011c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25011cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x250120: 0x3e00008  jr          $ra
    ctx->pc = 0x250120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x250124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250120u;
        // 0x250124: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x250128u;
    // 0x250128: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x250128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25012c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x25012cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x250130: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x250130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x250134: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x250134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x250138: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x250138u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25013c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x25013cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x250140: 0x8e110008  lw          $s1, 0x8($s0)
    ctx->pc = 0x250140u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x250144: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x250144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x250148: 0x92260000  lbu         $a2, 0x0($s1)
    ctx->pc = 0x250148u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x25014c: 0x26240014  addiu       $a0, $s1, 0x14
    ctx->pc = 0x25014cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x250150: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x250150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250154: 0x30c6000f  andi        $a2, $a2, 0xF
    ctx->pc = 0x250154u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x250158: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x250158u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x25015c: 0x24d2ffec  addiu       $s2, $a2, -0x14
    ctx->pc = 0x25015cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967276));
    // 0x250160: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x250160u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x250164: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x250164u;
    SET_GPR_U32(ctx, 31, 0x25016Cu);
    ctx->pc = 0x250168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250164u;
    // 0x250168: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x250164u, 0x25016Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25016Cu;
label_25016c:
    // 0x25016c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x25016cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x250170: 0x96030012  lhu         $v1, 0x12($s0)
    ctx->pc = 0x250170u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x250174: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x250174u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x250178: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x250178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x25017c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25017Cu;
    {
        const bool branch_taken_0x25017c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x250180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25017Cu;
        // 0x250180: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25017c) {
            ctx->pc = 0x250190u;
            goto label_250190;
        }
    }
    ctx->pc = 0x250184u;
    // 0x250184: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x250184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x250188: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x250188u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x25018c: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x25018cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_250190:
    // 0x250190: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x250190u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x250194: 0x92240002  lbu         $a0, 0x2($s1)
    ctx->pc = 0x250194u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x250198: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x250198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x25019c: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x25019cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2501a0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2501a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2501a4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2501a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2501a8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2501a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2501ac: 0x306300f0  andi        $v1, $v1, 0xF0
    ctx->pc = 0x2501acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)240);
    // 0x2501b0: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x2501b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2501b4: 0x34630005  ori         $v1, $v1, 0x5
    ctx->pc = 0x2501b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
    // 0x2501b8: 0x2223a  dsrl        $a0, $v0, 8
    ctx->pc = 0x2501b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) >> 8);
    // 0x2501bc: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x2501bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2501c0: 0xa2240003  sb          $a0, 0x3($s1)
    ctx->pc = 0x2501c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x2501c4: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x2501c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x2501c8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2501c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2501cc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2501ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2501d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2501d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2501d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2501D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2501D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2501D4u;
        // 0x2501d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2501D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2501DCu;
    // 0x2501dc: 0x0  nop
    ctx->pc = 0x2501dcu;
    // NOP
}
