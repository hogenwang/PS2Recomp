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

// Function: sub_001A5270
// Address: 0x1a5270 - 0x1a5390
void sub_001A5270_0x1a5270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A5270_0x1a5270");
#endif

    switch (ctx->pc) {
        case 0x1a52c0u: goto label_1a52c0;
        case 0x1a52f8u: goto label_1a52f8;
        default: break;
    }

    ctx->pc = 0x1a5270u;

    // 0x1a5270: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a5270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a5274: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x1a5274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x1a5278: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a5278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a527c: 0x2463b8a4  addiu       $v1, $v1, -0x475C
    ctx->pc = 0x1a527cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949028));
    // 0x1a5280: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a5280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a5284: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a5284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a5288: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a5288u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a528c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1a528cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a5290: 0x3222003f  andi        $v0, $s1, 0x3F
    ctx->pc = 0x1a5290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)63);
    // 0x1a5294: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1a5294u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1a5298: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a5298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a529c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A529Cu;
    {
        const bool branch_taken_0x1a529c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A52A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A529Cu;
        // 0x1a52a0: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a529c) {
            ctx->pc = 0x1A52B0u;
            goto label_1a52b0;
        }
    }
    ctx->pc = 0x1A52A4u;
    // 0x1a52a4: 0x26230040  addiu       $v1, $s1, 0x40
    ctx->pc = 0x1a52a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x1a52a8: 0x2402ffc0  addiu       $v0, $zero, -0x40
    ctx->pc = 0x1a52a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x1a52ac: 0x628824  and         $s1, $v1, $v0
    ctx->pc = 0x1a52acu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1a52b0:
    // 0x1a52b0: 0x1200002f  beqz        $s0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1A52B0u;
    {
        const bool branch_taken_0x1a52b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a52b0) {
            ctx->pc = 0x1A5370u;
            goto label_1a5370;
        }
    }
    ctx->pc = 0x1A52B8u;
    // 0x1a52b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a52b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a52bc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1a52bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1a52c0:
    // 0x1a52c0: 0x54430029  bnel        $v0, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x1A52C0u;
    {
        const bool branch_taken_0x1a52c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a52c0) {
            ctx->pc = 0x1A52C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A52C0u;
            // 0x1a52c4: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A5368u;
            goto label_1a5368;
        }
    }
    ctx->pc = 0x1A52C8u;
    // 0x1a52c8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1a52c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1a52cc: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x1a52ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1a52d0: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1A52D0u;
    {
        const bool branch_taken_0x1a52d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a52d0) {
            ctx->pc = 0x1A5364u;
            goto label_1a5364;
        }
    }
    ctx->pc = 0x1A52D8u;
    // 0x1a52d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a52d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a52dc: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1a52dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1a52e0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1a52e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1a52e4: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x1a52e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1a52e8: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x1A52E8u;
    {
        const bool branch_taken_0x1a52e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a52e8) {
            ctx->pc = 0x1A52ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A52E8u;
            // 0x1a52ec: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A5340u;
            goto label_1a5340;
        }
    }
    ctx->pc = 0x1A52F0u;
    // 0x1a52f0: 0xc069274  jal         func_1A49D0
    ctx->pc = 0x1A52F0u;
    SET_GPR_U32(ctx, 31, 0x1A52F8u);
    ctx->pc = 0x1A49D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A49D0u, 0x1A52F0u, 0x1A52F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A52F8u;
label_1a52f8:
    // 0x1a52f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a52f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a52fc: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x1a52fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x1a5300: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1a5300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1a5304: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x1a5304u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1a5308: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x1a5308u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x1a530c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1a530cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a5310: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1a5310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1a5314: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1a5314u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x1a5318: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1a5318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a531c: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1a531cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x1a5320: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1a5320u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1a5324: 0xae110010  sw          $s1, 0x10($s0)
    ctx->pc = 0x1a5324u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
    // 0x1a5328: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1a5328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a532c: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A532Cu;
    {
        const bool branch_taken_0x1a532c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a532c) {
            ctx->pc = 0x1A5330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A532Cu;
            // 0x1a5330: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A533Cu;
            goto label_1a533c;
        }
    }
    ctx->pc = 0x1A5334u;
    // 0x1a5334: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1a5334u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1a5338: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1a5338u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1a533c:
    // 0x1a533c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1a533cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1a5340:
    // 0x1a5340: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x1a5340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x1a5344: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1A5344u;
    {
        const bool branch_taken_0x1a5344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5344) {
            ctx->pc = 0x1A5348u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A5344u;
            // 0x1a5348: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A5374u;
            goto label_1a5374;
        }
    }
    ctx->pc = 0x1A534Cu;
    // 0x1a534c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a534cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a5350: 0xb8020001  swr         $v0, 0x1($zero)
    ctx->pc = 0x1a5350u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 1); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1a5354: 0xa8020004  swl         $v0, 0x4($zero)
    ctx->pc = 0x1a5354u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1a5358: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1a5358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a535c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A535Cu;
    {
        const bool branch_taken_0x1a535c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a535c) {
            ctx->pc = 0x1A5374u;
            goto label_1a5374;
        }
    }
    ctx->pc = 0x1A5364u;
label_1a5364:
    // 0x1a5364: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x1a5364u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a5368:
    // 0x1a5368: 0x5600ffd5  bnel        $s0, $zero, . + 4 + (-0x2B << 2)
    ctx->pc = 0x1A5368u;
    {
        const bool branch_taken_0x1a5368 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a5368) {
            ctx->pc = 0x1A536Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A5368u;
            // 0x1a536c: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A52C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a52c0;
        }
    }
    ctx->pc = 0x1A5370u;
label_1a5370:
    // 0x1a5370: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a5370u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a5374:
    // 0x1a5374: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a5374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a5378: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a5378u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a537c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a537cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a5380: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5380u;
        // 0x1a5384: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5388u;
    // 0x1a5388: 0x0  nop
    ctx->pc = 0x1a5388u;
    // NOP
    // 0x1a538c: 0x0  nop
    ctx->pc = 0x1a538cu;
    // NOP
    if (ctx->pc == 0x1a538cu) { ctx->pc = 0x1a5390u; }
}
