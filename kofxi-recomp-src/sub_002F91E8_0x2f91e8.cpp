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

// Function: sub_002F91E8
// Address: 0x2f91e8 - 0x2f9318
void sub_002F91E8_0x2f91e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F91E8_0x2f91e8");
#endif

    switch (ctx->pc) {
        case 0x2f9258u: goto label_2f9258;
        case 0x2f92a0u: goto label_2f92a0;
        case 0x2f92f4u: goto label_2f92f4;
        default: break;
    }

    ctx->pc = 0x2f91e8u;

    // 0x2f91e8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2f91e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2f91ec: 0x24830fff  addiu       $v1, $a0, 0xFFF
    ctx->pc = 0x2f91ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4095));
    // 0x2f91f0: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x2f91f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x2f91f4: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2f91f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2f91f8: 0x624024  and         $t0, $v1, $v0
    ctx->pc = 0x2f91f8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2f91fc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2f91fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2f9200: 0x1042023  subu        $a0, $t0, $a0
    ctx->pc = 0x2f9200u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x2f9204: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x2f9204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x2f9208: 0xa42823  subu        $a1, $a1, $a0
    ctx->pc = 0x2f9208u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2f920c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2f920cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2f9210: 0x52b03  sra         $a1, $a1, 12
    ctx->pc = 0x2f9210u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 12));
    // 0x2f9214: 0x53100  sll         $a2, $a1, 4
    ctx->pc = 0x2f9214u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2f9218: 0x24c20fff  addiu       $v0, $a2, 0xFFF
    ctx->pc = 0x2f9218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4095));
    // 0x2f921c: 0x23b03  sra         $a3, $v0, 12
    ctx->pc = 0x2f921cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 12));
    // 0x2f9220: 0xa72823  subu        $a1, $a1, $a3
    ctx->pc = 0x2f9220u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2f9224: 0x18a00036  blez        $a1, . + 4 + (0x36 << 2)
    ctx->pc = 0x2F9224u;
    {
        const bool branch_taken_0x2f9224 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x2F9228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9224u;
        // 0x2f9228: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9224) {
            ctx->pc = 0x2F9300u;
            goto label_2f9300;
        }
    }
    ctx->pc = 0x2F922Cu;
    // 0x2f922c: 0x71300  sll         $v0, $a3, 12
    ctx->pc = 0x2f922cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 12));
    // 0x2f9230: 0x3c1101cb  lui         $s1, 0x1CB
    ctx->pc = 0x2f9230u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)459 << 16));
    // 0x2f9234: 0x3c1001cb  lui         $s0, 0x1CB
    ctx->pc = 0x2f9234u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)459 << 16));
    // 0x2f9238: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x2f9238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2f923c: 0x3c0301cb  lui         $v1, 0x1CB
    ctx->pc = 0x2f923cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)459 << 16));
    // 0x2f9240: 0xae25069c  sw          $a1, 0x69C($s1)
    ctx->pc = 0x2f9240u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1692), GPR_U32(ctx, 5));
    // 0x2f9244: 0xac620698  sw          $v0, 0x698($v1)
    ctx->pc = 0x2f9244u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1688), GPR_U32(ctx, 2));
    // 0x2f9248: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x2f9248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f924c: 0xae080694  sw          $t0, 0x694($s0)
    ctx->pc = 0x2f924cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1684), GPR_U32(ctx, 8));
    // 0x2f9250: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2F9250u;
    SET_GPR_U32(ctx, 31, 0x2F9258u);
    ctx->pc = 0x2F9254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9250u;
    // 0x2f9254: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2F9250u, 0x2F9258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9258u;
label_2f9258:
    // 0x2f9258: 0x8e050694  lw          $a1, 0x694($s0)
    ctx->pc = 0x2f9258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1684)));
    // 0x2f925c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2f925cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2f9260: 0xac400658  sw          $zero, 0x658($v0)
    ctx->pc = 0x2f9260u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1624), GPR_U32(ctx, 0));
    // 0x2f9264: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2f9264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f9268: 0xa0a40000  sb          $a0, 0x0($a1)
    ctx->pc = 0x2f9268u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2f926c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2f926cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2f9270: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2f9270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2f9274: 0x3c0401cb  lui         $a0, 0x1CB
    ctx->pc = 0x2f9274u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)459 << 16));
    // 0x2f9278: 0x8e020694  lw          $v0, 0x694($s0)
    ctx->pc = 0x2f9278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1684)));
    // 0x2f927c: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x2f927cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x2f9280: 0x8e25069c  lw          $a1, 0x69C($s1)
    ctx->pc = 0x2f9280u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1692)));
    // 0x2f9284: 0x248406a0  addiu       $a0, $a0, 0x6A0
    ctx->pc = 0x2f9284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1696));
    // 0x2f9288: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x2f9288u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x2f928c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x2f928cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x2f9290: 0xac45000c  sw          $a1, 0xC($v0)
    ctx->pc = 0x2f9290u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
    // 0x2f9294: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x2f9294u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2f9298: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x2f9298u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x2f929c: 0x0  nop
    ctx->pc = 0x2f929cu;
    // NOP
label_2f92a0:
    // 0x2f92a0: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x2f92a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x2f92a4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2f92a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2f92a8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x2f92a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2f92ac: 0x0  nop
    ctx->pc = 0x2f92acu;
    // NOP
    // 0x2f92b0: 0x0  nop
    ctx->pc = 0x2f92b0u;
    // NOP
    // 0x2f92b4: 0x4e1fffa  bgez        $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2F92B4u;
    {
        const bool branch_taken_0x2f92b4 = (GPR_S32(ctx, 7) >= 0);
        if (branch_taken_0x2f92b4) {
            ctx->pc = 0x2F92A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f92a0;
        }
    }
    ctx->pc = 0x2F92BCu;
    // 0x2f92bc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2f92bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2f92c0: 0x8e23069c  lw          $v1, 0x69C($s1)
    ctx->pc = 0x2f92c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1692)));
    // 0x2f92c4: 0x244226e0  addiu       $v0, $v0, 0x26E0
    ctx->pc = 0x2f92c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9952));
    // 0x2f92c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f92c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f92cc: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x2f92ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x2f92d0: 0x31b00  sll         $v1, $v1, 12
    ctx->pc = 0x2f92d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 12));
    // 0x2f92d4: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x2f92d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x2f92d8: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x2f92d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x2f92dc: 0xac4306c8  sw          $v1, 0x6C8($v0)
    ctx->pc = 0x2f92dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1736), GPR_U32(ctx, 3));
    // 0x2f92e0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f92e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f92e4: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x2f92e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x2f92e8: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x2f92e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x2f92ec: 0xc043318  jal         func_10CC60
    ctx->pc = 0x2F92ECu;
    SET_GPR_U32(ctx, 31, 0x2F92F4u);
    ctx->pc = 0x2F92F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F92ECu;
    // 0x2f92f0: 0xac4306c4  sw          $v1, 0x6C4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 1732), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC60u, 0x2F92ECu, 0x2F92F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F92F4u;
label_2f92f4:
    // 0x2f92f4: 0x3c0301cb  lui         $v1, 0x1CB
    ctx->pc = 0x2f92f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)459 << 16));
    // 0x2f92f8: 0xac6206c0  sw          $v0, 0x6C0($v1)
    ctx->pc = 0x2f92f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1728), GPR_U32(ctx, 2));
    // 0x2f92fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f92fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f9300:
    // 0x2f9300: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2f9300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f9304: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x2f9304u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f9308: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2f9308u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f930c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F930Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F9310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F930Cu;
        // 0x2f9310: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F930Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F9314u;
    // 0x2f9314: 0x0  nop
    ctx->pc = 0x2f9314u;
    // NOP
    if (ctx->pc == 0x2f9314u) { ctx->pc = 0x2f9318u; }
}
