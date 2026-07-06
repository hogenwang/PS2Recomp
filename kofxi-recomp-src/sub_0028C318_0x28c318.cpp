#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028C318
// Address: 0x28c318 - 0x28c3f8
void sub_0028C318_0x28c318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028C318_0x28c318");
#endif

    switch (ctx->pc) {
        case 0x28c344u: goto label_28c344;
        case 0x28c368u: goto label_28c368;
        case 0x28c388u: goto label_28c388;
        case 0x28c3ccu: goto label_28c3cc;
        default: break;
    }

    ctx->pc = 0x28c318u;

    // 0x28c318: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x28c318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x28c31c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x28c31cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x28c320: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x28c320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x28c324: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x28c324u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c328: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28c328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28c32c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x28c32cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c330: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x28c330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x28c334: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x28c334u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c338: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x28c338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x28c33c: 0xc0a13ac  jal         func_284EB0
    ctx->pc = 0x28C33Cu;
    SET_GPR_U32(ctx, 31, 0x28C344u);
    ctx->pc = 0x28C340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C33Cu;
            // 0x28c340: 0x8e510020  lw          $s1, 0x20($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284EB0u;
    if (runtime->hasFunction(0x284EB0u)) {
        auto targetFn = runtime->lookupFunction(0x284EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C344u; }
        if (ctx->pc != 0x28C344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284EB0_0x284eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C344u; }
        if (ctx->pc != 0x28C344u) { return; }
    }
    ctx->pc = 0x28C344u;
label_28c344:
    // 0x28c344: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x28c344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28c348: 0x70102a  slt         $v0, $v1, $s0
    ctx->pc = 0x28c348u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x28c34c: 0x12600018  beqz        $s3, . + 4 + (0x18 << 2)
    ctx->pc = 0x28C34Cu;
    {
        const bool branch_taken_0x28c34c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C34Cu;
            // 0x28c350: 0x62800b  movn        $s0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c34c) {
            ctx->pc = 0x28C3B0u;
            goto label_28c3b0;
        }
    }
    ctx->pc = 0x28C354u;
    // 0x28c354: 0x1a000016  blez        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x28C354u;
    {
        const bool branch_taken_0x28c354 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x28C358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C354u;
            // 0x28c358: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c354) {
            ctx->pc = 0x28C3B0u;
            goto label_28c3b0;
        }
    }
    ctx->pc = 0x28C35Cu;
    // 0x28c35c: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x28c35cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x28c360: 0xc049c48  jal         func_127120
    ctx->pc = 0x28C360u;
    SET_GPR_U32(ctx, 31, 0x28C368u);
    ctx->pc = 0x28C364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C360u;
            // 0x28c364: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C368u; }
        if (ctx->pc != 0x28C368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C368u; }
        if (ctx->pc != 0x28C368u) { return; }
    }
    ctx->pc = 0x28C368u;
label_28c368:
    // 0x28c368: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x28c368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28c36c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28c36cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c370: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x28c370u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x28c374: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x28c374u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x28c378: 0xd03821  addu        $a3, $a2, $s0
    ctx->pc = 0x28c378u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x28c37c: 0x18400015  blez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x28C37Cu;
    {
        const bool branch_taken_0x28c37c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x28C380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C37Cu;
            // 0x28c380: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c37c) {
            ctx->pc = 0x28C3D4u;
            goto label_28c3d4;
        }
    }
    ctx->pc = 0x28C384u;
    // 0x28c384: 0xe51021  addu        $v0, $a3, $a1
    ctx->pc = 0x28c384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_28c388:
    // 0x28c388: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x28c388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x28c38c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x28c38cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28c390: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x28c390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x28c394: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x28c394u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x28c398: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x28c398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28c39c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x28c39cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x28c3a0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x28C3A0u;
    {
        const bool branch_taken_0x28c3a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28C3A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C3A0u;
            // 0x28c3a4: 0xe51021  addu        $v0, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c3a0) {
            ctx->pc = 0x28C388u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28c388;
        }
    }
    ctx->pc = 0x28C3A8u;
    // 0x28c3a8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x28C3A8u;
    {
        const bool branch_taken_0x28c3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C3ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C3A8u;
            // 0x28c3ac: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c3a8) {
            ctx->pc = 0x28C3D8u;
            goto label_28c3d8;
        }
    }
    ctx->pc = 0x28C3B0u;
label_28c3b0:
    // 0x28c3b0: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x28C3B0u;
    {
        const bool branch_taken_0x28c3b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28C3B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C3B0u;
            // 0x28c3b4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c3b0) {
            ctx->pc = 0x28C3D8u;
            goto label_28c3d8;
        }
    }
    ctx->pc = 0x28C3B8u;
    // 0x28c3b8: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x28c3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x28c3bc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28C3BCu;
    {
        const bool branch_taken_0x28c3bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C3C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C3BCu;
            // 0x28c3c0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c3bc) {
            ctx->pc = 0x28C3D4u;
            goto label_28c3d4;
        }
    }
    ctx->pc = 0x28C3C4u;
    // 0x28c3c4: 0xc0a139e  jal         func_284E78
    ctx->pc = 0x28C3C4u;
    SET_GPR_U32(ctx, 31, 0x28C3CCu);
    ctx->pc = 0x28C3C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C3C4u;
            // 0x28c3c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284E78u;
    if (runtime->hasFunction(0x284E78u)) {
        auto targetFn = runtime->lookupFunction(0x284E78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C3CCu; }
        if (ctx->pc != 0x28C3CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284E78_0x284e78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C3CCu; }
        if (ctx->pc != 0x28C3CCu) { return; }
    }
    ctx->pc = 0x28C3CCu;
label_28c3cc:
    // 0x28c3cc: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x28c3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x28c3d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28c3d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28c3d4:
    // 0x28c3d4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x28c3d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28c3d8:
    // 0x28c3d8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x28c3d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28c3dc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x28c3dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28c3e0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x28c3e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28c3e4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x28c3e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28c3e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28c3e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28c3ec: 0x3e00008  jr          $ra
    ctx->pc = 0x28C3ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28C3F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C3ECu;
            // 0x28c3f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28C3F4u;
    // 0x28c3f4: 0x0  nop
    ctx->pc = 0x28c3f4u;
    // NOP
    ctx->pc = 0x28c3f8u;
}
