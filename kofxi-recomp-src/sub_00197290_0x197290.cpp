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

// Function: sub_00197290
// Address: 0x197290 - 0x197440
void sub_00197290_0x197290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00197290_0x197290");
#endif

    switch (ctx->pc) {
        case 0x1972c0u: goto label_1972c0;
        case 0x1972d4u: goto label_1972d4;
        case 0x1972d8u: goto label_1972d8;
        case 0x197340u: goto label_197340;
        case 0x197348u: goto label_197348;
        case 0x1973b4u: goto label_1973b4;
        case 0x19740cu: goto label_19740c;
        default: break;
    }

    ctx->pc = 0x197290u;

    // 0x197290: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x197290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x197294: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x197294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x197298: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x197298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x19729c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x19729cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1972a0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1972a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1972a4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1972a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1972a8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1972a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1972ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1972acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1972b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1972b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1972b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1972b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1972b8: 0xc065c8c  jal         func_197230
    ctx->pc = 0x1972B8u;
    SET_GPR_U32(ctx, 31, 0x1972C0u);
    ctx->pc = 0x1972BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1972B8u;
    // 0x1972bc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197230u, 0x1972B8u, 0x1972C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1972C0u;
label_1972c0:
    // 0x1972c0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1972c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1972c4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1972c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1972c8: 0x2442db50  addiu       $v0, $v0, -0x24B0
    ctx->pc = 0x1972c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957904));
    // 0x1972cc: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x1972ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x1972d0: 0x8fbe00a0  lw          $fp, 0xA0($sp)
    ctx->pc = 0x1972d0u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1972d4:
    // 0x1972d4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1972d4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1972d8:
    // 0x1972d8: 0x8fd00078  lw          $s0, 0x78($fp)
    ctx->pc = 0x1972d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 120)));
    // 0x1972dc: 0x1200003e  beqz        $s0, . + 4 + (0x3E << 2)
    ctx->pc = 0x1972DCu;
    {
        const bool branch_taken_0x1972dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1972dc) {
            ctx->pc = 0x1973D8u;
            goto label_1973d8;
        }
    }
    ctx->pc = 0x1972E4u;
    // 0x1972e4: 0x8e120010  lw          $s2, 0x10($s0)
    ctx->pc = 0x1972e4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1972e8: 0x964203a4  lhu         $v0, 0x3A4($s2)
    ctx->pc = 0x1972e8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 932)));
    // 0x1972ec: 0x30420038  andi        $v0, $v0, 0x38
    ctx->pc = 0x1972ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)56);
    // 0x1972f0: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x1972F0u;
    {
        const bool branch_taken_0x1972f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1972f0) {
            ctx->pc = 0x1973D8u;
            goto label_1973d8;
        }
    }
    ctx->pc = 0x1972F8u;
    // 0x1972f8: 0x26430314  addiu       $v1, $s2, 0x314
    ctx->pc = 0x1972f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 788));
    // 0x1972fc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1972fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x197300: 0xac43d148  sw          $v1, -0x2EB8($v0)
    ctx->pc = 0x197300u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955336), GPR_U32(ctx, 3));
    // 0x197304: 0x3c17009c  lui         $s7, 0x9C
    ctx->pc = 0x197304u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)156 << 16));
    // 0x197308: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x197308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19730c: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x19730cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x197310: 0xac52d140  sw          $s2, -0x2EC0($v0)
    ctx->pc = 0x197310u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955328), GPR_U32(ctx, 18));
    // 0x197314: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x197314u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x197318: 0x9245008c  lbu         $a1, 0x8C($s2)
    ctx->pc = 0x197318u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x19731c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19731cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x197320: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x197320u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197324: 0x26f7db50  addiu       $s7, $s7, -0x24B0
    ctx->pc = 0x197324u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294957904));
    // 0x197328: 0xa085d168  sb          $a1, -0x2E98($a0)
    ctx->pc = 0x197328u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294955368), (uint8_t)GPR_U32(ctx, 5));
    // 0x19732c: 0xc6400090  lwc1        $f0, 0x90($s2)
    ctx->pc = 0x19732cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x197330: 0xe460d158  swc1        $f0, -0x2EA8($v1)
    ctx->pc = 0x197330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294955352), bits); }
    // 0x197334: 0xc6400094  lwc1        $f0, 0x94($s2)
    ctx->pc = 0x197334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x197338: 0xe440d150  swc1        $f0, -0x2EB0($v0)
    ctx->pc = 0x197338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294955344), bits); }
    // 0x19733c: 0x0  nop
    ctx->pc = 0x19733cu;
    // NOP
label_197340:
    // 0x197340: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x197340u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197344: 0x2e0882d  daddu       $s1, $s7, $zero
    ctx->pc = 0x197344u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_197348:
    // 0x197348: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x197348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x19734c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x19734Cu;
    {
        const bool branch_taken_0x19734c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19734c) {
            ctx->pc = 0x1973B8u;
            goto label_1973b8;
        }
    }
    ctx->pc = 0x197354u;
    // 0x197354: 0x12020018  beq         $s0, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x197354u;
    {
        const bool branch_taken_0x197354 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x197358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197354u;
        // 0x197358: 0x8c450010  lw          $a1, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197354) {
            ctx->pc = 0x1973B8u;
            goto label_1973b8;
        }
    }
    ctx->pc = 0x19735Cu;
    // 0x19735c: 0x94a203a4  lhu         $v0, 0x3A4($a1)
    ctx->pc = 0x19735cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 932)));
    // 0x197360: 0x30420038  andi        $v0, $v0, 0x38
    ctx->pc = 0x197360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)56);
    // 0x197364: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x197364u;
    {
        const bool branch_taken_0x197364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x197364) {
            ctx->pc = 0x1973B8u;
            goto label_1973b8;
        }
    }
    ctx->pc = 0x19736Cu;
    // 0x19736c: 0x24a30314  addiu       $v1, $a1, 0x314
    ctx->pc = 0x19736cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 788));
    // 0x197370: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x197370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x197374: 0xac43d0c8  sw          $v1, -0x2F38($v0)
    ctx->pc = 0x197374u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955208), GPR_U32(ctx, 3));
    // 0x197378: 0x3c08009c  lui         $t0, 0x9C
    ctx->pc = 0x197378u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)156 << 16));
    // 0x19737c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19737cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x197380: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x197380u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x197384: 0xac45d0c0  sw          $a1, -0x2F40($v0)
    ctx->pc = 0x197384u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955200), GPR_U32(ctx, 5));
    // 0x197388: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x197388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19738c: 0x90a9008c  lbu         $t1, 0x8C($a1)
    ctx->pc = 0x19738cu;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 140)));
    // 0x197390: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x197390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x197394: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x197394u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197398: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x197398u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19739c: 0xa109d0e8  sb          $t1, -0x2F18($t0)
    ctx->pc = 0x19739cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 4294955240), (uint8_t)GPR_U32(ctx, 9));
    // 0x1973a0: 0xc4a00090  lwc1        $f0, 0x90($a1)
    ctx->pc = 0x1973a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1973a4: 0xe460d0d8  swc1        $f0, -0x2F28($v1)
    ctx->pc = 0x1973a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294955224), bits); }
    // 0x1973a8: 0xc4a00094  lwc1        $f0, 0x94($a1)
    ctx->pc = 0x1973a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1973ac: 0xc065d10  jal         func_197440
    ctx->pc = 0x1973ACu;
    SET_GPR_U32(ctx, 31, 0x1973B4u);
    ctx->pc = 0x1973B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1973ACu;
    // 0x1973b0: 0xe440d0d0  swc1        $f0, -0x2F30($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294955216), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x197440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197440u, 0x1973ACu, 0x1973B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1973B4u;
label_1973b4:
    // 0x1973b4: 0x0  nop
    ctx->pc = 0x1973b4u;
    // NOP
label_1973b8:
    // 0x1973b8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1973b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1973bc: 0x2a620003  slti        $v0, $s3, 0x3
    ctx->pc = 0x1973bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1973c0: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1973C0u;
    {
        const bool branch_taken_0x1973c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1973C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1973C0u;
        // 0x1973c4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1973c0) {
            ctx->pc = 0x197348u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_197348;
        }
    }
    ctx->pc = 0x1973C8u;
    // 0x1973c8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1973c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1973cc: 0x2a820004  slti        $v0, $s4, 0x4
    ctx->pc = 0x1973ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1973d0: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x1973D0u;
    {
        const bool branch_taken_0x1973d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1973D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1973D0u;
        // 0x1973d4: 0x26f70248  addiu       $s7, $s7, 0x248 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1973d0) {
            ctx->pc = 0x197340u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_197340;
        }
    }
    ctx->pc = 0x1973D8u;
label_1973d8:
    // 0x1973d8: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1973d8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1973dc: 0x2ac20003  slti        $v0, $s6, 0x3
    ctx->pc = 0x1973dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1973e0: 0x1440ffbd  bnez        $v0, . + 4 + (-0x43 << 2)
    ctx->pc = 0x1973E0u;
    {
        const bool branch_taken_0x1973e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1973E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1973E0u;
        // 0x1973e4: 0x27de0004  addiu       $fp, $fp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1973e0) {
            ctx->pc = 0x1972D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1972d8;
        }
    }
    ctx->pc = 0x1973E8u;
    // 0x1973e8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1973e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1973ec: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1973ecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1973f0: 0x24420248  addiu       $v0, $v0, 0x248
    ctx->pc = 0x1973f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 584));
    // 0x1973f4: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x1973f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x1973f8: 0x2aa20004  slti        $v0, $s5, 0x4
    ctx->pc = 0x1973f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1973fc: 0x5440ffb5  bnel        $v0, $zero, . + 4 + (-0x4B << 2)
    ctx->pc = 0x1973FCu;
    {
        const bool branch_taken_0x1973fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1973fc) {
            ctx->pc = 0x197400u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1973FCu;
            // 0x197400: 0x8fbe00a0  lw          $fp, 0xA0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1972D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1972d4;
        }
    }
    ctx->pc = 0x197404u;
    // 0x197404: 0xc065e2c  jal         func_1978B0
    ctx->pc = 0x197404u;
    SET_GPR_U32(ctx, 31, 0x19740Cu);
    ctx->pc = 0x1978B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1978B0u, 0x197404u, 0x19740Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19740Cu;
label_19740c:
    // 0x19740c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x19740cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x197410: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x197410u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x197414: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x197414u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x197418: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x197418u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19741c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x19741cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x197420: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x197420u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x197424: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x197424u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x197428: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x197428u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19742c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19742cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x197430: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x197430u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x197434: 0x3e00008  jr          $ra
    ctx->pc = 0x197434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197434u;
        // 0x197438: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19743Cu;
    // 0x19743c: 0x0  nop
    ctx->pc = 0x19743cu;
    // NOP
}
