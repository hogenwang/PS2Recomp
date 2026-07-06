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

// Function: sub_00308270
// Address: 0x308270 - 0x3083a0
void sub_00308270_0x308270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308270_0x308270");
#endif

    switch (ctx->pc) {
        case 0x3082a8u: goto label_3082a8;
        case 0x3082b4u: goto label_3082b4;
        case 0x308334u: goto label_308334;
        default: break;
    }

    ctx->pc = 0x308270u;

    // 0x308270: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x308270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x308274: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x308274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308278: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x308278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x30827c: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x30827cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x308280: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x308280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x308284: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x308284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x308288: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x308288u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30828c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30828cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x308290: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x308290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x308294: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x308294u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308298: 0x8c920000  lw          $s2, 0x0($a0)
    ctx->pc = 0x308298u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30829c: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x30829cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x3082a0: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x3082A0u;
    SET_GPR_U32(ctx, 31, 0x3082A8u);
    ctx->pc = 0x3082A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3082A0u;
    // 0x3082a4: 0x248439a0  addiu       $a0, $a0, 0x39A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x3082A0u, 0x3082A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3082A8u;
label_3082a8:
    // 0x3082a8: 0x3243000f  andi        $v1, $s2, 0xF
    ctx->pc = 0x3082a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)15);
    // 0x3082ac: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3082ACu;
    {
        const bool branch_taken_0x3082ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3082ac) {
            ctx->pc = 0x3082D0u;
            goto label_3082d0;
        }
    }
    ctx->pc = 0x3082B4u;
label_3082b4:
    // 0x3082b4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3082b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3082b8: 0x3243000f  andi        $v1, $s2, 0xF
    ctx->pc = 0x3082b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)15);
    // 0x3082bc: 0x0  nop
    ctx->pc = 0x3082bcu;
    // NOP
    // 0x3082c0: 0x0  nop
    ctx->pc = 0x3082c0u;
    // NOP
    // 0x3082c4: 0x0  nop
    ctx->pc = 0x3082c4u;
    // NOP
    // 0x3082c8: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3082C8u;
    {
        const bool branch_taken_0x3082c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3082c8) {
            ctx->pc = 0x3082B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3082b4;
        }
    }
    ctx->pc = 0x3082D0u;
label_3082d0:
    // 0x3082d0: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x3082d0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3082d4: 0x5060000d  beql        $v1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x3082D4u;
    {
        const bool branch_taken_0x3082d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3082d4) {
            ctx->pc = 0x3082D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3082D4u;
            // 0x3082d8: 0x92430000  lbu         $v1, 0x0($s2) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30830Cu;
            goto label_30830c;
        }
    }
    ctx->pc = 0x3082DCu;
    // 0x3082dc: 0x3c1001d3  lui         $s0, 0x1D3
    ctx->pc = 0x3082dcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)467 << 16));
    // 0x3082e0: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x3082e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x3082e4: 0x26104cc0  addiu       $s0, $s0, 0x4CC0
    ctx->pc = 0x3082e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19648));
    // 0x3082e8: 0xac7047b4  sw          $s0, 0x47B4($v1)
    ctx->pc = 0x3082e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18356), GPR_U32(ctx, 16));
    // 0x3082ec: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x3082ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x3082f0: 0xac724cc8  sw          $s2, 0x4CC8($v1)
    ctx->pc = 0x3082f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 19656), GPR_U32(ctx, 18));
    // 0x3082f4: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x3082f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x3082f8: 0xac604cd0  sw          $zero, 0x4CD0($v1)
    ctx->pc = 0x3082f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 19664), GPR_U32(ctx, 0));
    // 0x3082fc: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3082fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x308300: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x308300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x308304: 0x2439021  addu        $s2, $s2, $v1
    ctx->pc = 0x308304u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x308308: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x308308u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_30830c:
    // 0x30830c: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x30830Cu;
    {
        const bool branch_taken_0x30830c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30830c) {
            ctx->pc = 0x308378u;
            goto label_308378;
        }
    }
    ctx->pc = 0x308314u;
    // 0x308314: 0x3c0801d3  lui         $t0, 0x1D3
    ctx->pc = 0x308314u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)467 << 16));
    // 0x308318: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x308318u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x30831c: 0x25084cc0  addiu       $t0, $t0, 0x4CC0
    ctx->pc = 0x30831cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 19648));
    // 0x308320: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x308320u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308324: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x308324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x308328: 0x34640010  ori         $a0, $v1, 0x10
    ctx->pc = 0x308328u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x30832c: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x30832cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308330: 0x25290014  addiu       $t1, $t1, 0x14
    ctx->pc = 0x308330u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 20));
label_308334:
    // 0x308334: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x308334u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x308338: 0xe93021  addu        $a2, $a3, $t1
    ctx->pc = 0x308338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x30833c: 0x2e230020  sltiu       $v1, $s1, 0x20
    ctx->pc = 0x30833cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x308340: 0xae060004  sw          $a2, 0x4($s0)
    ctx->pc = 0x308340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 6));
    // 0x308344: 0xad100014  sw          $s0, 0x14($t0)
    ctx->pc = 0x308344u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 16));
    // 0x308348: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x308348u;
    {
        const bool branch_taken_0x308348 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30834Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308348u;
        // 0x30834c: 0x25080014  addiu       $t0, $t0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308348) {
            ctx->pc = 0x308358u;
            goto label_308358;
        }
    }
    ctx->pc = 0x308350u;
    // 0x308350: 0xb8050001  swr         $a1, 0x1($zero)
    ctx->pc = 0x308350u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 1); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x308354: 0xa8050004  swl         $a1, 0x4($zero)
    ctx->pc = 0x308354u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_308358:
    // 0x308358: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x308358u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30835c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x30835cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x308360: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x308360u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x308364: 0xae110010  sw          $s1, 0x10($s0)
    ctx->pc = 0x308364u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
    // 0x308368: 0x2449021  addu        $s2, $s2, $a0
    ctx->pc = 0x308368u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x30836c: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x30836cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x308370: 0x5460fff0  bnel        $v1, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x308370u;
    {
        const bool branch_taken_0x308370 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x308370) {
            ctx->pc = 0x308374u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308370u;
            // 0x308374: 0x25290014  addiu       $t1, $t1, 0x14 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308334u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_308334;
        }
    }
    ctx->pc = 0x308378u;
label_308378:
    // 0x308378: 0x26430004  addiu       $v1, $s2, 0x4
    ctx->pc = 0x308378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x30837c: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x30837cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x308380: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x308380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x308384: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x308384u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x308388: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x308388u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30838c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30838cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x308390: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x308390u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x308394: 0x3e00008  jr          $ra
    ctx->pc = 0x308394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308394u;
        // 0x308398: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30839Cu;
    // 0x30839c: 0x0  nop
    ctx->pc = 0x30839cu;
    // NOP
}
