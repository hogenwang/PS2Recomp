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

// Function: sub_0017A260
// Address: 0x17a260 - 0x17a3d0
void sub_0017A260_0x17a260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017A260_0x17a260");
#endif

    switch (ctx->pc) {
        case 0x17a2ccu: goto label_17a2cc;
        case 0x17a2ecu: goto label_17a2ec;
        case 0x17a2f4u: goto label_17a2f4;
        case 0x17a340u: goto label_17a340;
        case 0x17a360u: goto label_17a360;
        case 0x17a3c0u: goto label_17a3c0;
        default: break;
    }

    ctx->pc = 0x17a260u;

    // 0x17a260: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17a260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17a264: 0x3c07ff00  lui         $a3, 0xFF00
    ctx->pc = 0x17a264u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65280 << 16));
    // 0x17a268: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x17a268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x17a26c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17a26cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17a270: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17a270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17a274: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x17a274u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a278: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17a278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17a27c: 0x84820032  lh          $v0, 0x32($a0)
    ctx->pc = 0x17a27cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 50)));
    // 0x17a280: 0x908600d0  lbu         $a2, 0xD0($a0)
    ctx->pc = 0x17a280u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 208)));
    // 0x17a284: 0x94880046  lhu         $t0, 0x46($a0)
    ctx->pc = 0x17a284u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 70)));
    // 0x17a288: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x17a288u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
    // 0x17a28c: 0x908200d1  lbu         $v0, 0xD1($a0)
    ctx->pc = 0x17a28cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 209)));
    // 0x17a290: 0x3069ffff  andi        $t1, $v1, 0xFFFF
    ctx->pc = 0x17a290u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x17a294: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x17a294u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x17a298: 0x908300d2  lbu         $v1, 0xD2($a0)
    ctx->pc = 0x17a298u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 210)));
    // 0x17a29c: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x17a29cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x17a2a0: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x17a2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x17a2a4: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x17a2a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x17a2a8: 0x90820019  lbu         $v0, 0x19($a0)
    ctx->pc = 0x17a2a8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 25)));
    // 0x17a2ac: 0x1284018  mult        $t0, $t1, $t0
    ctx->pc = 0x17a2acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x17a2b0: 0xc38825  or          $s1, $a2, $v1
    ctx->pc = 0x17a2b0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x17a2b4: 0x244200c8  addiu       $v0, $v0, 0xC8
    ctx->pc = 0x17a2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 200));
    // 0x17a2b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17a2b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17a2bc: 0x81a03  sra         $v1, $t0, 8
    ctx->pc = 0x17a2bcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 8), 8));
    // 0x17a2c0: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x17a2c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x17a2c4: 0xc048930  jal         func_1224C0
    ctx->pc = 0x17A2C4u;
    SET_GPR_U32(ctx, 31, 0x17A2CCu);
    ctx->pc = 0x17A2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A2C4u;
    // 0x17a2c8: 0x3070ffff  andi        $s0, $v1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1224C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1224C0u, 0x17A2C4u, 0x17A2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A2CCu;
label_17a2cc:
    // 0x17a2cc: 0x3c043f84  lui         $a0, 0x3F84
    ctx->pc = 0x17a2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16260 << 16));
    // 0x17a2d0: 0x3c0347ae  lui         $v1, 0x47AE
    ctx->pc = 0x17a2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18350 << 16));
    // 0x17a2d4: 0x34847ae1  ori         $a0, $a0, 0x7AE1
    ctx->pc = 0x17a2d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)31457);
    // 0x17a2d8: 0x3463147b  ori         $v1, $v1, 0x147B
    ctx->pc = 0x17a2d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5243);
    // 0x17a2dc: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x17a2dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x17a2e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17a2e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a2e4: 0xc048a76  jal         func_1229D8
    ctx->pc = 0x17A2E4u;
    SET_GPR_U32(ctx, 31, 0x17A2ECu);
    ctx->pc = 0x17A2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A2E4u;
    // 0x17a2e8: 0x642025  or          $a0, $v1, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1229D8u, 0x17A2E4u, 0x17A2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A2ECu;
label_17a2ec:
    // 0x17a2ec: 0xc048c12  jal         func_123048
    ctx->pc = 0x17A2ECu;
    SET_GPR_U32(ctx, 31, 0x17A2F4u);
    ctx->pc = 0x17A2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A2ECu;
    // 0x17a2f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123048u, 0x17A2ECu, 0x17A2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A2F4u;
label_17a2f4:
    // 0x17a2f4: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17A2F4u;
    {
        const bool branch_taken_0x17a2f4 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x17a2f4) {
            ctx->pc = 0x17A2F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17A2F4u;
            // 0x17a2f8: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17A308u;
            goto label_17a308;
        }
    }
    ctx->pc = 0x17A2FCu;
    // 0x17a2fc: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x17a2fcu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17a300: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x17A300u;
    {
        const bool branch_taken_0x17a300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A300u;
        // 0x17a304: 0x46800c20  cvt.s.w     $f16, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a300) {
            ctx->pc = 0x17A320u;
            goto label_17a320;
        }
    }
    ctx->pc = 0x17A308u;
label_17a308:
    // 0x17a308: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x17a308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x17a30c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x17a30cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x17a310: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x17a310u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17a314: 0x0  nop
    ctx->pc = 0x17a314u;
    // NOP
    // 0x17a318: 0x46800c20  cvt.s.w     $f16, $f1
    ctx->pc = 0x17a318u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x17a31c: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x17a31cu;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_17a320:
    // 0x17a320: 0xc64d0024  lwc1        $f13, 0x24($s2)
    ctx->pc = 0x17a320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x17a324: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17a324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17a328: 0xc64e0028  lwc1        $f14, 0x28($s2)
    ctx->pc = 0x17a328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x17a32c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17a32cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a330: 0x460003c6  mov.s       $f15, $f0
    ctx->pc = 0x17a330u;
    ctx->f[15] = FPU_MOV_S(ctx->f[0]);
    // 0x17a334: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x17a334u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17a338: 0xc0c510c  jal         func_314430
    ctx->pc = 0x17A338u;
    SET_GPR_U32(ctx, 31, 0x17A340u);
    ctx->pc = 0x17A33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A338u;
    // 0x17a33c: 0x24050038  addiu       $a1, $zero, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314430u, 0x17A338u, 0x17A340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A340u;
label_17a340:
    // 0x17a340: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x17a340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17a344: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17a344u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17a348: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17a348u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a34c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17a34cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a350: 0x3e00008  jr          $ra
    ctx->pc = 0x17A350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A350u;
        // 0x17a354: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A358u;
    // 0x17a358: 0x0  nop
    ctx->pc = 0x17a358u;
    // NOP
    // 0x17a35c: 0x0  nop
    ctx->pc = 0x17a35cu;
    // NOP
label_17a360:
    // 0x17a360: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17a360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17a364: 0x3c064180  lui         $a2, 0x4180
    ctx->pc = 0x17a364u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16768 << 16));
    // 0x17a368: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17a368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17a36c: 0x3c0343f0  lui         $v1, 0x43F0
    ctx->pc = 0x17a36cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17392 << 16));
    // 0x17a370: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x17a370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
    // 0x17a374: 0xafa4001c  sw          $a0, 0x1C($sp)
    ctx->pc = 0x17a374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
    // 0x17a378: 0xafa4002c  sw          $a0, 0x2C($sp)
    ctx->pc = 0x17a378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 4));
    // 0x17a37c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x17a37cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17a380: 0xafa4003c  sw          $a0, 0x3C($sp)
    ctx->pc = 0x17a380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 4));
    // 0x17a384: 0xafa4004c  sw          $a0, 0x4C($sp)
    ctx->pc = 0x17a384u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 4));
    // 0x17a388: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x17a388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x17a38c: 0xafa60018  sw          $a2, 0x18($sp)
    ctx->pc = 0x17a38cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 6));
    // 0x17a390: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x17a390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x17a394: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x17a394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
    // 0x17a398: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x17a398u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
    // 0x17a39c: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x17a39cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x17a3a0: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x17a3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x17a3a4: 0xafa60038  sw          $a2, 0x38($sp)
    ctx->pc = 0x17a3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 6));
    // 0x17a3a8: 0xafa60048  sw          $a2, 0x48($sp)
    ctx->pc = 0x17a3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 6));
    // 0x17a3ac: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x17a3acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x17a3b0: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x17a3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x17a3b4: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x17a3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x17a3b8: 0xc0c4ad0  jal         func_312B40
    ctx->pc = 0x17A3B8u;
    SET_GPR_U32(ctx, 31, 0x17A3C0u);
    ctx->pc = 0x17A3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A3B8u;
    // 0x17a3bc: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312B40u, 0x17A3B8u, 0x17A3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A3C0u;
label_17a3c0:
    // 0x17a3c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17a3c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a3c4: 0x3e00008  jr          $ra
    ctx->pc = 0x17A3C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A3C4u;
        // 0x17a3c8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A3C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A3CCu;
    // 0x17a3cc: 0x0  nop
    ctx->pc = 0x17a3ccu;
    // NOP
    if (ctx->pc == 0x17a3ccu) { ctx->pc = 0x17a3d0u; }
}
