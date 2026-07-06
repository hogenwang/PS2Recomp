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

// Function: sub_002CA2A8
// Address: 0x2ca2a8 - 0x2ca390
void sub_002CA2A8_0x2ca2a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CA2A8_0x2ca2a8");
#endif

    switch (ctx->pc) {
        case 0x2ca2f0u: goto label_2ca2f0;
        case 0x2ca30cu: goto label_2ca30c;
        case 0x2ca328u: goto label_2ca328;
        default: break;
    }

    ctx->pc = 0x2ca2a8u;

    // 0x2ca2a8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2ca2a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2ca2ac: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x2ca2acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x2ca2b0: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x2ca2b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca2b4: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2ca2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2ca2b8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2ca2b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca2bc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2ca2bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2ca2c0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2ca2c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca2c4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2ca2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2ca2c8: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2ca2c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca2cc: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x2ca2ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x2ca2d0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2ca2d0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca2d4: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x2ca2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x2ca2d8: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2ca2d8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca2dc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2ca2dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2ca2e0: 0x1260001f  beqz        $s3, . + 4 + (0x1F << 2)
    ctx->pc = 0x2CA2E0u;
    {
        const bool branch_taken_0x2ca2e0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA2E0u;
        // 0x2ca2e4: 0xffbf0058  sd          $ra, 0x58($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca2e0) {
            ctx->pc = 0x2CA360u;
            goto label_2ca360;
        }
    }
    ctx->pc = 0x2CA2E8u;
    // 0x2ca2e8: 0x2918021  addu        $s0, $s4, $s1
    ctx->pc = 0x2ca2e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x2ca2ec: 0x0  nop
    ctx->pc = 0x2ca2ecu;
    // NOP
label_2ca2f0:
    // 0x2ca2f0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2ca2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2ca2f4: 0x27a50014  addiu       $a1, $sp, 0x14
    ctx->pc = 0x2ca2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x2ca2f8: 0x27a60018  addiu       $a2, $sp, 0x18
    ctx->pc = 0x2ca2f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x2ca2fc: 0x2714823  subu        $t1, $s3, $s1
    ctx->pc = 0x2ca2fcu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x2ca300: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2ca300u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca304: 0xc0b372a  jal         func_2CDCA8
    ctx->pc = 0x2CA304u;
    SET_GPR_U32(ctx, 31, 0x2CA30Cu);
    ctx->pc = 0x2CA308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA304u;
    // 0x2ca308: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDCA8u, 0x2CA304u, 0x2CA30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA30Cu;
label_2ca30c:
    // 0x2ca30c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2ca30cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca310: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2CA310u;
    {
        const bool branch_taken_0x2ca310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CA314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA310u;
        // 0x2ca314: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca310) {
            ctx->pc = 0x2CA368u;
            goto label_2ca368;
        }
    }
    ctx->pc = 0x2CA318u;
    // 0x2ca318: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x2ca318u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ca31c: 0x246102b  sltu        $v0, $s2, $a2
    ctx->pc = 0x2ca31cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2ca320: 0xc0b60ac  jal         func_2D82B0
    ctx->pc = 0x2CA320u;
    SET_GPR_U32(ctx, 31, 0x2CA328u);
    ctx->pc = 0x2CA324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA320u;
    // 0x2ca324: 0x242300b  movn        $a2, $s2, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D82B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D82B0u, 0x2CA320u, 0x2CA328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA328u;
label_2ca328:
    // 0x2ca328: 0x442000e  bltzl       $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2CA328u;
    {
        const bool branch_taken_0x2ca328 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2ca328) {
            ctx->pc = 0x2CA32Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA328u;
            // 0x2ca32c: 0xaed10000  sw          $s1, 0x0($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CA364u;
            goto label_2ca364;
        }
    }
    ctx->pc = 0x2CA330u;
    // 0x2ca330: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CA330u;
    {
        const bool branch_taken_0x2ca330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CA334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA330u;
        // 0x2ca334: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca330) {
            ctx->pc = 0x2CA350u;
            goto label_2ca350;
        }
    }
    ctx->pc = 0x2CA338u;
    // 0x2ca338: 0x243102b  sltu        $v0, $s2, $v1
    ctx->pc = 0x2ca338u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2ca33c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CA33Cu;
    {
        const bool branch_taken_0x2ca33c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca33c) {
            ctx->pc = 0x2CA340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA33Cu;
            // 0x2ca340: 0x2238821  addu        $s1, $s1, $v1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CA354u;
            goto label_2ca354;
        }
    }
    ctx->pc = 0x2CA344u;
    // 0x2ca344: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2CA344u;
    {
        const bool branch_taken_0x2ca344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA344u;
        // 0x2ca348: 0xaed10000  sw          $s1, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca344) {
            ctx->pc = 0x2CA364u;
            goto label_2ca364;
        }
    }
    ctx->pc = 0x2CA34Cu;
    // 0x2ca34c: 0x0  nop
    ctx->pc = 0x2ca34cu;
    // NOP
label_2ca350:
    // 0x2ca350: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x2ca350u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_2ca354:
    // 0x2ca354: 0x233102b  sltu        $v0, $s1, $s3
    ctx->pc = 0x2ca354u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x2ca358: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x2CA358u;
    {
        const bool branch_taken_0x2ca358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CA35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA358u;
        // 0x2ca35c: 0x2918021  addu        $s0, $s4, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca358) {
            ctx->pc = 0x2CA2F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ca2f0;
        }
    }
    ctx->pc = 0x2CA360u;
label_2ca360:
    // 0x2ca360: 0xaed30000  sw          $s3, 0x0($s6)
    ctx->pc = 0x2ca360u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 19));
label_2ca364:
    // 0x2ca364: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ca364u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ca368:
    // 0x2ca368: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2ca368u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ca36c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2ca36cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2ca370: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2ca370u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ca374: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x2ca374u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2ca378: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2ca378u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ca37c: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x2ca37cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca380: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x2ca380u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ca384: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x2ca384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2ca388: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA388u;
        // 0x2ca38c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CA390u;
}
