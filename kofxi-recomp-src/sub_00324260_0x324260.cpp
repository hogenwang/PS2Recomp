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

// Function: sub_00324260
// Address: 0x324260 - 0x324e30
void sub_00324260_0x324260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00324260_0x324260");
#endif

    switch (ctx->pc) {
        case 0x324298u: goto label_324298;
        case 0x3242a8u: goto label_3242a8;
        case 0x324d9cu: goto label_324d9c;
        case 0x324de0u: goto label_324de0;
        case 0x324e0cu: goto label_324e0c;
        default: break;
    }

    ctx->pc = 0x324260u;

    // 0x324260: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x324260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x324264: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x324264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x324268: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x324268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x32426c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x32426cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x324270: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x324270u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324274: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x324274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x324278: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x324278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x32427c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x32427cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324280: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x324280u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x324284: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x324284u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x324288: 0x948200da  lhu         $v0, 0xDA($a0)
    ctx->pc = 0x324288u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 218)));
    // 0x32428c: 0x848500dc  lh          $a1, 0xDC($a0)
    ctx->pc = 0x32428cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x324290: 0xc0c87e4  jal         func_321F90
    ctx->pc = 0x324290u;
    SET_GPR_U32(ctx, 31, 0x324298u);
    ctx->pc = 0x324294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324290u;
    // 0x324294: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321F90u, 0x324290u, 0x324298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324298u;
label_324298:
    // 0x324298: 0x966400da  lhu         $a0, 0xDA($s3)
    ctx->pc = 0x324298u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 218)));
    // 0x32429c: 0x866500dc  lh          $a1, 0xDC($s3)
    ctx->pc = 0x32429cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 220)));
    // 0x3242a0: 0xc0c87f8  jal         func_321FE0
    ctx->pc = 0x3242A0u;
    SET_GPR_U32(ctx, 31, 0x3242A8u);
    ctx->pc = 0x3242A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3242A0u;
    // 0x3242a4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321FE0u, 0x3242A0u, 0x3242A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3242A8u;
label_3242a8:
    // 0x3242a8: 0x8603000a  lh          $v1, 0xA($s0)
    ctx->pc = 0x3242a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x3242ac: 0x546002d8  bnel        $v1, $zero, . + 4 + (0x2D8 << 2)
    ctx->pc = 0x3242ACu;
    {
        const bool branch_taken_0x3242ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3242ac) {
            ctx->pc = 0x3242B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3242ACu;
            // 0x3242b0: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x324E10u;
            goto label_324e10;
        }
    }
    ctx->pc = 0x3242B4u;
    // 0x3242b4: 0x96650000  lhu         $a1, 0x0($s3)
    ctx->pc = 0x3242b4u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3242b8: 0x8e6300c8  lw          $v1, 0xC8($s3)
    ctx->pc = 0x3242b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 200)));
    // 0x3242bc: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x3242bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x3242c0: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x3242c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3242c4: 0xae600030  sw          $zero, 0x30($s3)
    ctx->pc = 0x3242c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 0));
    // 0x3242c8: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x3242c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3242cc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3242ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3242d0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3242d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3242d4: 0xae640034  sw          $a0, 0x34($s3)
    ctx->pc = 0x3242d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 4));
    // 0x3242d8: 0x8665000c  lh          $a1, 0xC($s3)
    ctx->pc = 0x3242d8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x3242dc: 0x86040006  lh          $a0, 0x6($s0)
    ctx->pc = 0x3242dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x3242e0: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x3242e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3242e4: 0xa6640014  sh          $a0, 0x14($s3)
    ctx->pc = 0x3242e4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 20), (uint16_t)GPR_U32(ctx, 4));
    // 0x3242e8: 0x86040008  lh          $a0, 0x8($s0)
    ctx->pc = 0x3242e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3242ec: 0x8665000e  lh          $a1, 0xE($s3)
    ctx->pc = 0x3242ecu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
    // 0x3242f0: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x3242f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3242f4: 0xa6640016  sh          $a0, 0x16($s3)
    ctx->pc = 0x3242f4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 22), (uint16_t)GPR_U32(ctx, 4));
    // 0x3242f8: 0x966600d4  lhu         $a2, 0xD4($s3)
    ctx->pc = 0x3242f8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 212)));
    // 0x3242fc: 0x30c40001  andi        $a0, $a2, 0x1
    ctx->pc = 0x3242fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x324300: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x324300u;
    {
        const bool branch_taken_0x324300 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x324304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324300u;
        // 0x324304: 0x26720030  addiu       $s2, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324300) {
            ctx->pc = 0x324344u;
            goto label_324344;
        }
    }
    ctx->pc = 0x324308u;
    // 0x324308: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x324308u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x32430c: 0x86650014  lh          $a1, 0x14($s3)
    ctx->pc = 0x32430cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x324310: 0x8484db30  lh          $a0, -0x24D0($a0)
    ctx->pc = 0x324310u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294957872)));
    // 0x324314: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x324314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x324318: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x324318u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32431c: 0x0  nop
    ctx->pc = 0x32431cu;
    // NOP
    // 0x324320: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x324320u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x324324: 0xe6400040  swc1        $f0, 0x40($s2)
    ctx->pc = 0x324324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 64), bits); }
    // 0x324328: 0xe640005c  swc1        $f0, 0x5C($s2)
    ctx->pc = 0x324328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 92), bits); }
    // 0x32432c: 0xc6410040  lwc1        $f1, 0x40($s2)
    ctx->pc = 0x32432cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x324330: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x324330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324334: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x324334u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x324338: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x324338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x32433c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x32433Cu;
    {
        const bool branch_taken_0x32433c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32433Cu;
        // 0x324340: 0xe6400024  swc1        $f0, 0x24($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32433c) {
            ctx->pc = 0x32437Cu;
            goto label_32437c;
        }
    }
    ctx->pc = 0x324344u;
label_324344:
    // 0x324344: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x324344u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x324348: 0x86650014  lh          $a1, 0x14($s3)
    ctx->pc = 0x324348u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x32434c: 0x8484db30  lh          $a0, -0x24D0($a0)
    ctx->pc = 0x32434cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294957872)));
    // 0x324350: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x324350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x324354: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x324354u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x324358: 0x0  nop
    ctx->pc = 0x324358u;
    // NOP
    // 0x32435c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x32435cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x324360: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x324360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x324364: 0xe6400024  swc1        $f0, 0x24($s2)
    ctx->pc = 0x324364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
    // 0x324368: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x324368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32436c: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x32436cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324370: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x324370u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x324374: 0xe6400040  swc1        $f0, 0x40($s2)
    ctx->pc = 0x324374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 64), bits); }
    // 0x324378: 0xe640005c  swc1        $f0, 0x5C($s2)
    ctx->pc = 0x324378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 92), bits); }
label_32437c:
    // 0x32437c: 0x30c40002  andi        $a0, $a2, 0x2
    ctx->pc = 0x32437cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
    // 0x324380: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x324380u;
    {
        const bool branch_taken_0x324380 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x324380) {
            ctx->pc = 0x3243C8u;
            goto label_3243c8;
        }
    }
    ctx->pc = 0x324388u;
    // 0x324388: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x324388u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x32438c: 0x86650016  lh          $a1, 0x16($s3)
    ctx->pc = 0x32438cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 22)));
    // 0x324390: 0x8484db2c  lh          $a0, -0x24D4($a0)
    ctx->pc = 0x324390u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294957868)));
    // 0x324394: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x324394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x324398: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x324398u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32439c: 0x0  nop
    ctx->pc = 0x32439cu;
    // NOP
    // 0x3243a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3243a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3243a4: 0xe6400028  swc1        $f0, 0x28($s2)
    ctx->pc = 0x3243a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
    // 0x3243a8: 0xc6610024  lwc1        $f1, 0x24($s3)
    ctx->pc = 0x3243a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3243ac: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x3243acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3243b0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3243b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3243b4: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x3243b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x3243b8: 0xe6400044  swc1        $f0, 0x44($s2)
    ctx->pc = 0x3243b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 68), bits); }
    // 0x3243bc: 0xc6400028  lwc1        $f0, 0x28($s2)
    ctx->pc = 0x3243bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3243c0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3243C0u;
    {
        const bool branch_taken_0x3243c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3243C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3243C0u;
        // 0x3243c4: 0xe6400060  swc1        $f0, 0x60($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3243c0) {
            ctx->pc = 0x324404u;
            goto label_324404;
        }
    }
    ctx->pc = 0x3243C8u;
label_3243c8:
    // 0x3243c8: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x3243c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x3243cc: 0x86650016  lh          $a1, 0x16($s3)
    ctx->pc = 0x3243ccu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 22)));
    // 0x3243d0: 0x8484db2c  lh          $a0, -0x24D4($a0)
    ctx->pc = 0x3243d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294957868)));
    // 0x3243d4: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x3243d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3243d8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3243d8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3243dc: 0x0  nop
    ctx->pc = 0x3243dcu;
    // NOP
    // 0x3243e0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3243e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3243e4: 0xe641000c  swc1        $f1, 0xC($s2)
    ctx->pc = 0x3243e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x3243e8: 0xc6600024  lwc1        $f0, 0x24($s3)
    ctx->pc = 0x3243e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3243ec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3243ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3243f0: 0xe6400028  swc1        $f0, 0x28($s2)
    ctx->pc = 0x3243f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
    // 0x3243f4: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x3243f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3243f8: 0xe6400044  swc1        $f0, 0x44($s2)
    ctx->pc = 0x3243f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 68), bits); }
    // 0x3243fc: 0xc6400028  lwc1        $f0, 0x28($s2)
    ctx->pc = 0x3243fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324400: 0xe6400060  swc1        $f0, 0x60($s2)
    ctx->pc = 0x324400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 96), bits); }
label_324404:
    // 0x324404: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x324404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324408: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x324408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32440c: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x32440cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x324410: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x324410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324414: 0xe640002c  swc1        $f0, 0x2C($s2)
    ctx->pc = 0x324414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 44), bits); }
    // 0x324418: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x324418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32441c: 0xe6400048  swc1        $f0, 0x48($s2)
    ctx->pc = 0x32441cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 72), bits); }
    // 0x324420: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x324420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324424: 0xe6400064  swc1        $f0, 0x64($s2)
    ctx->pc = 0x324424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 100), bits); }
    // 0x324428: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x324428u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x32442c: 0x9266001c  lbu         $a2, 0x1C($s3)
    ctx->pc = 0x32442cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x324430: 0x52a3c  dsll32      $a1, $a1, 8
    ctx->pc = 0x324430u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 8));
    // 0x324434: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x324434u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x324438: 0x52a3e  dsrl32      $a1, $a1, 8
    ctx->pc = 0x324438u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 8));
    // 0x32443c: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x32443cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x324440: 0xae45001c  sw          $a1, 0x1C($s2)
    ctx->pc = 0x324440u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 5));
    // 0x324444: 0xae400020  sw          $zero, 0x20($s2)
    ctx->pc = 0x324444u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
    // 0x324448: 0xae450038  sw          $a1, 0x38($s2)
    ctx->pc = 0x324448u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 5));
    // 0x32444c: 0xae40003c  sw          $zero, 0x3C($s2)
    ctx->pc = 0x32444cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 0));
    // 0x324450: 0xae450054  sw          $a1, 0x54($s2)
    ctx->pc = 0x324450u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 5));
    // 0x324454: 0xae400058  sw          $zero, 0x58($s2)
    ctx->pc = 0x324454u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 0));
    // 0x324458: 0xae450070  sw          $a1, 0x70($s2)
    ctx->pc = 0x324458u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 5));
    // 0x32445c: 0xae400074  sw          $zero, 0x74($s2)
    ctx->pc = 0x32445cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 0));
    // 0x324460: 0x94650002  lhu         $a1, 0x2($v1)
    ctx->pc = 0x324460u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x324464: 0x50a40008  beql        $a1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x324464u;
    {
        const bool branch_taken_0x324464 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x324464) {
            ctx->pc = 0x324468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x324464u;
            // 0x324468: 0x24042000  addiu       $a0, $zero, 0x2000 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
            ctx->in_delay_slot = false;
            ctx->pc = 0x324488u;
            goto label_324488;
        }
    }
    ctx->pc = 0x32446Cu;
    // 0x32446c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x32446cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x324470: 0x50a40006  beql        $a1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x324470u;
    {
        const bool branch_taken_0x324470 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x324470) {
            ctx->pc = 0x324474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x324470u;
            // 0x324474: 0xae400078  sw          $zero, 0x78($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32448Cu;
            goto label_32448c;
        }
    }
    ctx->pc = 0x324478u;
    // 0x324478: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x324478u;
    {
        const bool branch_taken_0x324478 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x324478) {
            ctx->pc = 0x32447Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x324478u;
            // 0x32447c: 0xae400078  sw          $zero, 0x78($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32448Cu;
            goto label_32448c;
        }
    }
    ctx->pc = 0x324480u;
    // 0x324480: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x324480u;
    {
        const bool branch_taken_0x324480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324480u;
        // 0x324484: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324480) {
            ctx->pc = 0x324490u;
            goto label_324490;
        }
    }
    ctx->pc = 0x324488u;
label_324488:
    // 0x324488: 0xae440078  sw          $a0, 0x78($s2)
    ctx->pc = 0x324488u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 4));
label_32448c:
    // 0x32448c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x32448cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_324490:
    // 0x324490: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x324490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x324494: 0xae46007c  sw          $a2, 0x7C($s2)
    ctx->pc = 0x324494u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 6));
    // 0x324498: 0x94630004  lhu         $v1, 0x4($v1)
    ctx->pc = 0x324498u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x32449c: 0xa6430080  sh          $v1, 0x80($s2)
    ctx->pc = 0x32449cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 128), (uint16_t)GPR_U32(ctx, 3));
    // 0x3244a0: 0xa6400086  sh          $zero, 0x86($s2)
    ctx->pc = 0x3244a0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 134), (uint16_t)GPR_U32(ctx, 0));
    // 0x3244a4: 0xa6400088  sh          $zero, 0x88($s2)
    ctx->pc = 0x3244a4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 136), (uint16_t)GPR_U32(ctx, 0));
    // 0x3244a8: 0xa240008a  sb          $zero, 0x8A($s2)
    ctx->pc = 0x3244a8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 138), (uint8_t)GPR_U32(ctx, 0));
    // 0x3244ac: 0xa240008c  sb          $zero, 0x8C($s2)
    ctx->pc = 0x3244acu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 140), (uint8_t)GPR_U32(ctx, 0));
    // 0x3244b0: 0x96650004  lhu         $a1, 0x4($s3)
    ctx->pc = 0x3244b0u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3244b4: 0x50a401fd  beql        $a1, $a0, . + 4 + (0x1FD << 2)
    ctx->pc = 0x3244B4u;
    {
        const bool branch_taken_0x3244b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x3244b4) {
            ctx->pc = 0x3244B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3244B4u;
            // 0x3244b8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x324CACu;
            goto label_324cac;
        }
    }
    ctx->pc = 0x3244BCu;
    // 0x3244bc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3244bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3244c0: 0x10a301f9  beq         $a1, $v1, . + 4 + (0x1F9 << 2)
    ctx->pc = 0x3244C0u;
    {
        const bool branch_taken_0x3244c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3244c0) {
            ctx->pc = 0x324CA8u;
            goto label_324ca8;
        }
    }
    ctx->pc = 0x3244C8u;
    // 0x3244c8: 0x50a60007  beql        $a1, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x3244C8u;
    {
        const bool branch_taken_0x3244c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x3244c8) {
            ctx->pc = 0x3244CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3244C8u;
            // 0x3244cc: 0xa246008b  sb          $a2, 0x8B($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 139), (uint8_t)GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3244E8u;
            goto label_3244e8;
        }
    }
    ctx->pc = 0x3244D0u;
    // 0x3244d0: 0x50a00003  beql        $a1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3244D0u;
    {
        const bool branch_taken_0x3244d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3244d0) {
            ctx->pc = 0x3244D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3244D0u;
            // 0x3244d4: 0xa243008b  sb          $v1, 0x8B($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 139), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3244E0u;
            goto label_3244e0;
        }
    }
    ctx->pc = 0x3244D8u;
    // 0x3244d8: 0x100001f5  b           . + 4 + (0x1F5 << 2)
    ctx->pc = 0x3244D8u;
    {
        const bool branch_taken_0x3244d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3244d8) {
            ctx->pc = 0x324CB0u;
            goto label_324cb0;
        }
    }
    ctx->pc = 0x3244E0u;
label_3244e0:
    // 0x3244e0: 0x100001f3  b           . + 4 + (0x1F3 << 2)
    ctx->pc = 0x3244E0u;
    {
        const bool branch_taken_0x3244e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3244E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3244E0u;
        // 0x3244e4: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3244e0) {
            ctx->pc = 0x324CB0u;
            goto label_324cb0;
        }
    }
    ctx->pc = 0x3244E8u;
label_3244e8:
    // 0x3244e8: 0x86630002  lh          $v1, 0x2($s3)
    ctx->pc = 0x3244e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x3244ec: 0x2c61000d  sltiu       $at, $v1, 0xD
    ctx->pc = 0x3244ecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    // 0x3244f0: 0x502001ef  beql        $at, $zero, . + 4 + (0x1EF << 2)
    ctx->pc = 0x3244F0u;
    {
        const bool branch_taken_0x3244f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3244f0) {
            ctx->pc = 0x3244F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3244F0u;
            // 0x3244f4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x324CB0u;
            goto label_324cb0;
        }
    }
    ctx->pc = 0x3244F8u;
    // 0x3244f8: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x3244f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x3244fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3244fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x324500: 0x24843f00  addiu       $a0, $a0, 0x3F00
    ctx->pc = 0x324500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16128));
    // 0x324504: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x324504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x324508: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x324508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x32450c: 0x600008  jr          $v1
    ctx->pc = 0x32450Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x324514u: goto label_324514;
            case 0x3245B4u: goto label_3245b4;
            case 0x324654u: goto label_324654;
            case 0x3246F4u: goto label_3246f4;
            case 0x324794u: goto label_324794;
            case 0x324834u: goto label_324834;
            case 0x3248D4u: goto label_3248d4;
            case 0x324974u: goto label_324974;
            case 0x324A14u: goto label_324a14;
            case 0x324AB4u: goto label_324ab4;
            case 0x324B54u: goto label_324b54;
            case 0x324BF4u: goto label_324bf4;
            case 0x324C94u: goto label_324c94;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32450Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x324514u;
label_324514:
    // 0x324514: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x324514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324518: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x324518u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x32451c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x32451cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x324520: 0x3c0d009c  lui         $t5, 0x9C
    ctx->pc = 0x324520u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)156 << 16));
    // 0x324524: 0x3c0c009c  lui         $t4, 0x9C
    ctx->pc = 0x324524u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)156 << 16));
    // 0x324528: 0x3c0b009c  lui         $t3, 0x9C
    ctx->pc = 0x324528u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)156 << 16));
    // 0x32452c: 0xe480cbc0  swc1        $f0, -0x3440($a0)
    ctx->pc = 0x32452cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294953920), bits); }
    // 0x324530: 0x3c0a009c  lui         $t2, 0x9C
    ctx->pc = 0x324530u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)156 << 16));
    // 0x324534: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x324534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324538: 0x3c09009c  lui         $t1, 0x9C
    ctx->pc = 0x324538u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)156 << 16));
    // 0x32453c: 0x3c08009c  lui         $t0, 0x9C
    ctx->pc = 0x32453cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)156 << 16));
    // 0x324540: 0x3c07009c  lui         $a3, 0x9C
    ctx->pc = 0x324540u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)156 << 16));
    // 0x324544: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x324544u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x324548: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x324548u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x32454c: 0xe460cbc4  swc1        $f0, -0x343C($v1)
    ctx->pc = 0x32454cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294953924), bits); }
    // 0x324550: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x324550u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x324554: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x324554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324558: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x324558u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x32455c: 0xe5a0cbc8  swc1        $f0, -0x3438($t5)
    ctx->pc = 0x32455cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4294953928), bits); }
    // 0x324560: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x324560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324564: 0xe580cbcc  swc1        $f0, -0x3434($t4)
    ctx->pc = 0x324564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4294953932), bits); }
    // 0x324568: 0xc6400028  lwc1        $f0, 0x28($s2)
    ctx->pc = 0x324568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32456c: 0xe560cbd0  swc1        $f0, -0x3430($t3)
    ctx->pc = 0x32456cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4294953936), bits); }
    // 0x324570: 0xc640002c  lwc1        $f0, 0x2C($s2)
    ctx->pc = 0x324570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324574: 0xe540cbd4  swc1        $f0, -0x342C($t2)
    ctx->pc = 0x324574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4294953940), bits); }
    // 0x324578: 0xc6400040  lwc1        $f0, 0x40($s2)
    ctx->pc = 0x324578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32457c: 0xe520cbd8  swc1        $f0, -0x3428($t1)
    ctx->pc = 0x32457cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4294953944), bits); }
    // 0x324580: 0xc6400044  lwc1        $f0, 0x44($s2)
    ctx->pc = 0x324580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324584: 0xe500cbdc  swc1        $f0, -0x3424($t0)
    ctx->pc = 0x324584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294953948), bits); }
    // 0x324588: 0xc6400048  lwc1        $f0, 0x48($s2)
    ctx->pc = 0x324588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32458c: 0xe4e0cbe0  swc1        $f0, -0x3420($a3)
    ctx->pc = 0x32458cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294953952), bits); }
    // 0x324590: 0xc640005c  lwc1        $f0, 0x5C($s2)
    ctx->pc = 0x324590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324594: 0xe4c0cbe4  swc1        $f0, -0x341C($a2)
    ctx->pc = 0x324594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294953956), bits); }
    // 0x324598: 0xc6400060  lwc1        $f0, 0x60($s2)
    ctx->pc = 0x324598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32459c: 0xe4a0cbe8  swc1        $f0, -0x3418($a1)
    ctx->pc = 0x32459cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294953960), bits); }
    // 0x3245a0: 0xc6400064  lwc1        $f0, 0x64($s2)
    ctx->pc = 0x3245a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3245a4: 0xe480cbec  swc1        $f0, -0x3414($a0)
    ctx->pc = 0x3245a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294953964), bits); }
    // 0x3245a8: 0x9264001c  lbu         $a0, 0x1C($s3)
    ctx->pc = 0x3245a8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x3245ac: 0x100001c0  b           . + 4 + (0x1C0 << 2)
    ctx->pc = 0x3245ACu;
    {
        const bool branch_taken_0x3245ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3245B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3245ACu;
        // 0x3245b0: 0xa464cbfc  sh          $a0, -0x3404($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4294953980), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3245ac) {
            ctx->pc = 0x324CB0u;
            goto label_324cb0;
        }
    }
    ctx->pc = 0x3245B4u;
label_3245b4:
    // 0x3245b4: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x3245b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3245b8: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x3245b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x3245bc: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x3245bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x3245c0: 0x3c0d009c  lui         $t5, 0x9C
    ctx->pc = 0x3245c0u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)156 << 16));
    // 0x3245c4: 0x3c0c009c  lui         $t4, 0x9C
    ctx->pc = 0x3245c4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)156 << 16));
    // 0x3245c8: 0x3c0b009c  lui         $t3, 0x9C
    ctx->pc = 0x3245c8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)156 << 16));
    // 0x3245cc: 0xe480cc00  swc1        $f0, -0x3400($a0)
    ctx->pc = 0x3245ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294953984), bits); }
    // 0x3245d0: 0x3c0a009c  lui         $t2, 0x9C
    ctx->pc = 0x3245d0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)156 << 16));
    // 0x3245d4: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x3245d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3245d8: 0x3c09009c  lui         $t1, 0x9C
    ctx->pc = 0x3245d8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)156 << 16));
    // 0x3245dc: 0x3c08009c  lui         $t0, 0x9C
    ctx->pc = 0x3245dcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)156 << 16));
    // 0x3245e0: 0x3c07009c  lui         $a3, 0x9C
    ctx->pc = 0x3245e0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)156 << 16));
    // 0x3245e4: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x3245e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x3245e8: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x3245e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x3245ec: 0xe460cc04  swc1        $f0, -0x33FC($v1)
    ctx->pc = 0x3245ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294953988), bits); }
    // 0x3245f0: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x3245f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x3245f4: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x3245f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3245f8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x3245f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x3245fc: 0xe5a0cc08  swc1        $f0, -0x33F8($t5)
    ctx->pc = 0x3245fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4294953992), bits); }
    // 0x324600: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x324600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324604: 0xe580cc0c  swc1        $f0, -0x33F4($t4)
    ctx->pc = 0x324604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4294953996), bits); }
    // 0x324608: 0xc6400028  lwc1        $f0, 0x28($s2)
    ctx->pc = 0x324608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32460c: 0xe560cc10  swc1        $f0, -0x33F0($t3)
    ctx->pc = 0x32460cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4294954000), bits); }
    // 0x324610: 0xc640002c  lwc1        $f0, 0x2C($s2)
    ctx->pc = 0x324610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324614: 0xe540cc14  swc1        $f0, -0x33EC($t2)
    ctx->pc = 0x324614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4294954004), bits); }
    // 0x324618: 0xc6400040  lwc1        $f0, 0x40($s2)
    ctx->pc = 0x324618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32461c: 0xe520cc18  swc1        $f0, -0x33E8($t1)
    ctx->pc = 0x32461cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4294954008), bits); }
    // 0x324620: 0xc6400044  lwc1        $f0, 0x44($s2)
    ctx->pc = 0x324620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324624: 0xe500cc1c  swc1        $f0, -0x33E4($t0)
    ctx->pc = 0x324624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294954012), bits); }
    // 0x324628: 0xc6400048  lwc1        $f0, 0x48($s2)
    ctx->pc = 0x324628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32462c: 0xe4e0cc20  swc1        $f0, -0x33E0($a3)
    ctx->pc = 0x32462cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294954016), bits); }
    // 0x324630: 0xc640005c  lwc1        $f0, 0x5C($s2)
    ctx->pc = 0x324630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324634: 0xe4c0cc24  swc1        $f0, -0x33DC($a2)
    ctx->pc = 0x324634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294954020), bits); }
    // 0x324638: 0xc6400060  lwc1        $f0, 0x60($s2)
    ctx->pc = 0x324638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32463c: 0xe4a0cc28  swc1        $f0, -0x33D8($a1)
    ctx->pc = 0x32463cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294954024), bits); }
    // 0x324640: 0xc6400064  lwc1        $f0, 0x64($s2)
    ctx->pc = 0x324640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324644: 0xe480cc2c  swc1        $f0, -0x33D4($a0)
    ctx->pc = 0x324644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294954028), bits); }
    // 0x324648: 0x9264001c  lbu         $a0, 0x1C($s3)
    ctx->pc = 0x324648u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x32464c: 0x10000198  b           . + 4 + (0x198 << 2)
    ctx->pc = 0x32464Cu;
    {
        const bool branch_taken_0x32464c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32464Cu;
        // 0x324650: 0xa464cc3c  sh          $a0, -0x33C4($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4294954044), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32464c) {
            ctx->pc = 0x324CB0u;
            goto label_324cb0;
        }
    }
    ctx->pc = 0x324654u;
label_324654:
    // 0x324654: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x324654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324658: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x324658u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x32465c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x32465cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x324660: 0x3c0d009c  lui         $t5, 0x9C
    ctx->pc = 0x324660u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)156 << 16));
    // 0x324664: 0x3c0c009c  lui         $t4, 0x9C
    ctx->pc = 0x324664u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)156 << 16));
    // 0x324668: 0x3c0b009c  lui         $t3, 0x9C
    ctx->pc = 0x324668u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)156 << 16));
    // 0x32466c: 0xe480cc40  swc1        $f0, -0x33C0($a0)
    ctx->pc = 0x32466cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294954048), bits); }
    // 0x324670: 0x3c0a009c  lui         $t2, 0x9C
    ctx->pc = 0x324670u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)156 << 16));
    // 0x324674: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x324674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324678: 0x3c09009c  lui         $t1, 0x9C
    ctx->pc = 0x324678u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)156 << 16));
    // 0x32467c: 0x3c08009c  lui         $t0, 0x9C
    ctx->pc = 0x32467cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)156 << 16));
    // 0x324680: 0x3c07009c  lui         $a3, 0x9C
    ctx->pc = 0x324680u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)156 << 16));
    // 0x324684: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x324684u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x324688: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x324688u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x32468c: 0xe460cc44  swc1        $f0, -0x33BC($v1)
    ctx->pc = 0x32468cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294954052), bits); }
    // 0x324690: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x324690u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x324694: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x324694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324698: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x324698u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x32469c: 0xe5a0cc48  swc1        $f0, -0x33B8($t5)
    ctx->pc = 0x32469cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4294954056), bits); }
    // 0x3246a0: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x3246a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3246a4: 0xe580cc4c  swc1        $f0, -0x33B4($t4)
    ctx->pc = 0x3246a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4294954060), bits); }
    // 0x3246a8: 0xc6400028  lwc1        $f0, 0x28($s2)
    ctx->pc = 0x3246a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3246ac: 0xe560cc50  swc1        $f0, -0x33B0($t3)
    ctx->pc = 0x3246acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4294954064), bits); }
    // 0x3246b0: 0xc640002c  lwc1        $f0, 0x2C($s2)
    ctx->pc = 0x3246b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3246b4: 0xe540cc54  swc1        $f0, -0x33AC($t2)
    ctx->pc = 0x3246b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4294954068), bits); }
    // 0x3246b8: 0xc6400040  lwc1        $f0, 0x40($s2)
    ctx->pc = 0x3246b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3246bc: 0xe520cc58  swc1        $f0, -0x33A8($t1)
    ctx->pc = 0x3246bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4294954072), bits); }
    // 0x3246c0: 0xc6400044  lwc1        $f0, 0x44($s2)
    ctx->pc = 0x3246c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3246c4: 0xe500cc5c  swc1        $f0, -0x33A4($t0)
    ctx->pc = 0x3246c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294954076), bits); }
    // 0x3246c8: 0xc6400048  lwc1        $f0, 0x48($s2)
    ctx->pc = 0x3246c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3246cc: 0xe4e0cc60  swc1        $f0, -0x33A0($a3)
    ctx->pc = 0x3246ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294954080), bits); }
    // 0x3246d0: 0xc640005c  lwc1        $f0, 0x5C($s2)
    ctx->pc = 0x3246d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3246d4: 0xe4c0cc64  swc1        $f0, -0x339C($a2)
    ctx->pc = 0x3246d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294954084), bits); }
    // 0x3246d8: 0xc6400060  lwc1        $f0, 0x60($s2)
    ctx->pc = 0x3246d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3246dc: 0xe4a0cc68  swc1        $f0, -0x3398($a1)
    ctx->pc = 0x3246dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294954088), bits); }
    // 0x3246e0: 0xc6400064  lwc1        $f0, 0x64($s2)
    ctx->pc = 0x3246e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3246e4: 0xe480cc6c  swc1        $f0, -0x3394($a0)
    ctx->pc = 0x3246e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294954092), bits); }
    // 0x3246e8: 0x9264001c  lbu         $a0, 0x1C($s3)
    ctx->pc = 0x3246e8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x3246ec: 0x10000170  b           . + 4 + (0x170 << 2)
    ctx->pc = 0x3246ECu;
    {
        const bool branch_taken_0x3246ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3246F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3246ECu;
        // 0x3246f0: 0xa464cc7c  sh          $a0, -0x3384($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4294954108), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3246ec) {
            ctx->pc = 0x324CB0u;
            goto label_324cb0;
        }
    }
    ctx->pc = 0x3246F4u;
label_3246f4:
    // 0x3246f4: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x3246f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3246f8: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x3246f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x3246fc: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x3246fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x324700: 0x3c0d009c  lui         $t5, 0x9C
    ctx->pc = 0x324700u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)156 << 16));
    // 0x324704: 0x3c0c009c  lui         $t4, 0x9C
    ctx->pc = 0x324704u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)156 << 16));
    // 0x324708: 0x3c0b009c  lui         $t3, 0x9C
    ctx->pc = 0x324708u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)156 << 16));
    // 0x32470c: 0xe480cc80  swc1        $f0, -0x3380($a0)
    ctx->pc = 0x32470cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294954112), bits); }
    // 0x324710: 0x3c0a009c  lui         $t2, 0x9C
    ctx->pc = 0x324710u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)156 << 16));
    // 0x324714: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x324714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324718: 0x3c09009c  lui         $t1, 0x9C
    ctx->pc = 0x324718u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)156 << 16));
    // 0x32471c: 0x3c08009c  lui         $t0, 0x9C
    ctx->pc = 0x32471cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)156 << 16));
    // 0x324720: 0x3c07009c  lui         $a3, 0x9C
    ctx->pc = 0x324720u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)156 << 16));
    // 0x324724: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x324724u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x324728: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x324728u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x32472c: 0xe460cc84  swc1        $f0, -0x337C($v1)
    ctx->pc = 0x32472cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294954116), bits); }
    // 0x324730: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x324730u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x324734: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x324734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324738: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x324738u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x32473c: 0xe5a0cc88  swc1        $f0, -0x3378($t5)
    ctx->pc = 0x32473cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4294954120), bits); }
    // 0x324740: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x324740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324744: 0xe580cc8c  swc1        $f0, -0x3374($t4)
    ctx->pc = 0x324744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4294954124), bits); }
    // 0x324748: 0xc6400028  lwc1        $f0, 0x28($s2)
    ctx->pc = 0x324748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32474c: 0xe560cc90  swc1        $f0, -0x3370($t3)
    ctx->pc = 0x32474cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4294954128), bits); }
    // 0x324750: 0xc640002c  lwc1        $f0, 0x2C($s2)
    ctx->pc = 0x324750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324754: 0xe540cc94  swc1        $f0, -0x336C($t2)
    ctx->pc = 0x324754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4294954132), bits); }
    // 0x324758: 0xc6400040  lwc1        $f0, 0x40($s2)
    ctx->pc = 0x324758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32475c: 0xe520cc98  swc1        $f0, -0x3368($t1)
    ctx->pc = 0x32475cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4294954136), bits); }
    // 0x324760: 0xc6400044  lwc1        $f0, 0x44($s2)
    ctx->pc = 0x324760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324764: 0xe500cc9c  swc1        $f0, -0x3364($t0)
    ctx->pc = 0x324764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294954140), bits); }
    // 0x324768: 0xc6400048  lwc1        $f0, 0x48($s2)
    ctx->pc = 0x324768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32476c: 0xe4e0cca0  swc1        $f0, -0x3360($a3)
    ctx->pc = 0x32476cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294954144), bits); }
    // 0x324770: 0xc640005c  lwc1        $f0, 0x5C($s2)
    ctx->pc = 0x324770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324774: 0xe4c0cca4  swc1        $f0, -0x335C($a2)
    ctx->pc = 0x324774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294954148), bits); }
    // 0x324778: 0xc6400060  lwc1        $f0, 0x60($s2)
    ctx->pc = 0x324778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32477c: 0xe4a0cca8  swc1        $f0, -0x3358($a1)
    ctx->pc = 0x32477cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294954152), bits); }
    // 0x324780: 0xc6400064  lwc1        $f0, 0x64($s2)
    ctx->pc = 0x324780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324784: 0xe480ccac  swc1        $f0, -0x3354($a0)
    ctx->pc = 0x324784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294954156), bits); }
    // 0x324788: 0x9264001c  lbu         $a0, 0x1C($s3)
    ctx->pc = 0x324788u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x32478c: 0x10000148  b           . + 4 + (0x148 << 2)
    ctx->pc = 0x32478Cu;
    {
        const bool branch_taken_0x32478c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32478Cu;
        // 0x324790: 0xa464ccbc  sh          $a0, -0x3344($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4294954172), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32478c) {
            ctx->pc = 0x324CB0u;
            goto label_324cb0;
        }
    }
    ctx->pc = 0x324794u;
label_324794:
    // 0x324794: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x324794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324798: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x324798u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x32479c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x32479cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x3247a0: 0x3c0d009c  lui         $t5, 0x9C
    ctx->pc = 0x3247a0u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)156 << 16));
    // 0x3247a4: 0x3c0c009c  lui         $t4, 0x9C
    ctx->pc = 0x3247a4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)156 << 16));
    // 0x3247a8: 0x3c0b009c  lui         $t3, 0x9C
    ctx->pc = 0x3247a8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)156 << 16));
    // 0x3247ac: 0xe480ccc0  swc1        $f0, -0x3340($a0)
    ctx->pc = 0x3247acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294954176), bits); }
    // 0x3247b0: 0x3c0a009c  lui         $t2, 0x9C
    ctx->pc = 0x3247b0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)156 << 16));
    // 0x3247b4: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x3247b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3247b8: 0x3c09009c  lui         $t1, 0x9C
    ctx->pc = 0x3247b8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)156 << 16));
    // 0x3247bc: 0x3c08009c  lui         $t0, 0x9C
    ctx->pc = 0x3247bcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)156 << 16));
    // 0x3247c0: 0x3c07009c  lui         $a3, 0x9C
    ctx->pc = 0x3247c0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)156 << 16));
    // 0x3247c4: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x3247c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x3247c8: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x3247c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x3247cc: 0xe460ccc4  swc1        $f0, -0x333C($v1)
    ctx->pc = 0x3247ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294954180), bits); }
    // 0x3247d0: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x3247d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x3247d4: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x3247d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3247d8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x3247d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x3247dc: 0xe5a0ccc8  swc1        $f0, -0x3338($t5)
    ctx->pc = 0x3247dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4294954184), bits); }
    // 0x3247e0: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x3247e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3247e4: 0xe580cccc  swc1        $f0, -0x3334($t4)
    ctx->pc = 0x3247e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4294954188), bits); }
    // 0x3247e8: 0xc6400028  lwc1        $f0, 0x28($s2)
    ctx->pc = 0x3247e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3247ec: 0xe560ccd0  swc1        $f0, -0x3330($t3)
    ctx->pc = 0x3247ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4294954192), bits); }
    // 0x3247f0: 0xc640002c  lwc1        $f0, 0x2C($s2)
    ctx->pc = 0x3247f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3247f4: 0xe540ccd4  swc1        $f0, -0x332C($t2)
    ctx->pc = 0x3247f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4294954196), bits); }
    // 0x3247f8: 0xc6400040  lwc1        $f0, 0x40($s2)
    ctx->pc = 0x3247f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3247fc: 0xe520ccd8  swc1        $f0, -0x3328($t1)
    ctx->pc = 0x3247fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4294954200), bits); }
    // 0x324800: 0xc6400044  lwc1        $f0, 0x44($s2)
    ctx->pc = 0x324800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324804: 0xe500ccdc  swc1        $f0, -0x3324($t0)
    ctx->pc = 0x324804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294954204), bits); }
    // 0x324808: 0xc6400048  lwc1        $f0, 0x48($s2)
    ctx->pc = 0x324808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32480c: 0xe4e0cce0  swc1        $f0, -0x3320($a3)
    ctx->pc = 0x32480cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294954208), bits); }
    // 0x324810: 0xc640005c  lwc1        $f0, 0x5C($s2)
    ctx->pc = 0x324810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324814: 0xe4c0cce4  swc1        $f0, -0x331C($a2)
    ctx->pc = 0x324814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294954212), bits); }
    // 0x324818: 0xc6400060  lwc1        $f0, 0x60($s2)
    ctx->pc = 0x324818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32481c: 0xe4a0cce8  swc1        $f0, -0x3318($a1)
    ctx->pc = 0x32481cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294954216), bits); }
    // 0x324820: 0xc6400064  lwc1        $f0, 0x64($s2)
    ctx->pc = 0x324820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324824: 0xe480ccec  swc1        $f0, -0x3314($a0)
    ctx->pc = 0x324824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294954220), bits); }
    // 0x324828: 0x9264001c  lbu         $a0, 0x1C($s3)
    ctx->pc = 0x324828u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x32482c: 0x10000120  b           . + 4 + (0x120 << 2)
    ctx->pc = 0x32482Cu;
    {
        const bool branch_taken_0x32482c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32482Cu;
        // 0x324830: 0xa464ccfc  sh          $a0, -0x3304($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4294954236), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32482c) {
            ctx->pc = 0x324CB0u;
            goto label_324cb0;
        }
    }
    ctx->pc = 0x324834u;
label_324834:
    // 0x324834: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x324834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324838: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x324838u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x32483c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x32483cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x324840: 0x3c0d009c  lui         $t5, 0x9C
    ctx->pc = 0x324840u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)156 << 16));
    // 0x324844: 0x3c0c009c  lui         $t4, 0x9C
    ctx->pc = 0x324844u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)156 << 16));
    // 0x324848: 0x3c0b009c  lui         $t3, 0x9C
    ctx->pc = 0x324848u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)156 << 16));
    // 0x32484c: 0xe480cd00  swc1        $f0, -0x3300($a0)
    ctx->pc = 0x32484cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294954240), bits); }
    // 0x324850: 0x3c0a009c  lui         $t2, 0x9C
    ctx->pc = 0x324850u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)156 << 16));
    // 0x324854: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x324854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324858: 0x3c09009c  lui         $t1, 0x9C
    ctx->pc = 0x324858u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)156 << 16));
    // 0x32485c: 0x3c08009c  lui         $t0, 0x9C
    ctx->pc = 0x32485cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)156 << 16));
    // 0x324860: 0x3c07009c  lui         $a3, 0x9C
    ctx->pc = 0x324860u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)156 << 16));
    // 0x324864: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x324864u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x324868: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x324868u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x32486c: 0xe460cd04  swc1        $f0, -0x32FC($v1)
    ctx->pc = 0x32486cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294954244), bits); }
    // 0x324870: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x324870u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x324874: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x324874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324878: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x324878u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x32487c: 0xe5a0cd08  swc1        $f0, -0x32F8($t5)
    ctx->pc = 0x32487cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4294954248), bits); }
    // 0x324880: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x324880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324884: 0xe580cd0c  swc1        $f0, -0x32F4($t4)
    ctx->pc = 0x324884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4294954252), bits); }
    // 0x324888: 0xc6400028  lwc1        $f0, 0x28($s2)
    ctx->pc = 0x324888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32488c: 0xe560cd10  swc1        $f0, -0x32F0($t3)
    ctx->pc = 0x32488cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4294954256), bits); }
    // 0x324890: 0xc640002c  lwc1        $f0, 0x2C($s2)
    ctx->pc = 0x324890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324894: 0xe540cd14  swc1        $f0, -0x32EC($t2)
    ctx->pc = 0x324894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4294954260), bits); }
    // 0x324898: 0xc6400040  lwc1        $f0, 0x40($s2)
    ctx->pc = 0x324898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32489c: 0xe520cd18  swc1        $f0, -0x32E8($t1)
    ctx->pc = 0x32489cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4294954264), bits); }
    // 0x3248a0: 0xc6400044  lwc1        $f0, 0x44($s2)
    ctx->pc = 0x3248a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3248a4: 0xe500cd1c  swc1        $f0, -0x32E4($t0)
    ctx->pc = 0x3248a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294954268), bits); }
    // 0x3248a8: 0xc6400048  lwc1        $f0, 0x48($s2)
    ctx->pc = 0x3248a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3248ac: 0xe4e0cd20  swc1        $f0, -0x32E0($a3)
    ctx->pc = 0x3248acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294954272), bits); }
    // 0x3248b0: 0xc640005c  lwc1        $f0, 0x5C($s2)
    ctx->pc = 0x3248b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3248b4: 0xe4c0cd24  swc1        $f0, -0x32DC($a2)
    ctx->pc = 0x3248b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294954276), bits); }
    // 0x3248b8: 0xc6400060  lwc1        $f0, 0x60($s2)
    ctx->pc = 0x3248b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3248bc: 0xe4a0cd28  swc1        $f0, -0x32D8($a1)
    ctx->pc = 0x3248bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294954280), bits); }
    // 0x3248c0: 0xc6400064  lwc1        $f0, 0x64($s2)
    ctx->pc = 0x3248c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3248c4: 0xe480cd2c  swc1        $f0, -0x32D4($a0)
    ctx->pc = 0x3248c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294954284), bits); }
    // 0x3248c8: 0x9264001c  lbu         $a0, 0x1C($s3)
    ctx->pc = 0x3248c8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x3248cc: 0x100000f8  b           . + 4 + (0xF8 << 2)
    ctx->pc = 0x3248CCu;
    {
        const bool branch_taken_0x3248cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3248D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3248CCu;
        // 0x3248d0: 0xa464cd3c  sh          $a0, -0x32C4($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4294954300), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3248cc) {
            ctx->pc = 0x324CB0u;
            goto label_324cb0;
        }
    }
    ctx->pc = 0x3248D4u;
label_3248d4:
    // 0x3248d4: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x3248d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3248d8: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x3248d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x3248dc: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x3248dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x3248e0: 0x3c0d009c  lui         $t5, 0x9C
    ctx->pc = 0x3248e0u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)156 << 16));
    // 0x3248e4: 0x3c0c009c  lui         $t4, 0x9C
    ctx->pc = 0x3248e4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)156 << 16));
    // 0x3248e8: 0x3c0b009c  lui         $t3, 0x9C
    ctx->pc = 0x3248e8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)156 << 16));
    // 0x3248ec: 0xe480c9c0  swc1        $f0, -0x3640($a0)
    ctx->pc = 0x3248ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294953408), bits); }
    // 0x3248f0: 0x3c0a009c  lui         $t2, 0x9C
    ctx->pc = 0x3248f0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)156 << 16));
    // 0x3248f4: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x3248f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3248f8: 0x3c09009c  lui         $t1, 0x9C
    ctx->pc = 0x3248f8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)156 << 16));
    // 0x3248fc: 0x3c08009c  lui         $t0, 0x9C
    ctx->pc = 0x3248fcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)156 << 16));
    // 0x324900: 0x3c07009c  lui         $a3, 0x9C
    ctx->pc = 0x324900u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)156 << 16));
    // 0x324904: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x324904u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x324908: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x324908u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x32490c: 0xe460c9c4  swc1        $f0, -0x363C($v1)
    ctx->pc = 0x32490cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294953412), bits); }
    // 0x324910: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x324910u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x324914: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x324914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324918: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x324918u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x32491c: 0xe5a0c9c8  swc1        $f0, -0x3638($t5)
    ctx->pc = 0x32491cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4294953416), bits); }
    // 0x324920: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x324920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324924: 0xe580c9cc  swc1        $f0, -0x3634($t4)
    ctx->pc = 0x324924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4294953420), bits); }
    // 0x324928: 0xc6400028  lwc1        $f0, 0x28($s2)
    ctx->pc = 0x324928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32492c: 0xe560c9d0  swc1        $f0, -0x3630($t3)
    ctx->pc = 0x32492cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4294953424), bits); }
    // 0x324930: 0xc640002c  lwc1        $f0, 0x2C($s2)
    ctx->pc = 0x324930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324934: 0xe540c9d4  swc1        $f0, -0x362C($t2)
    ctx->pc = 0x324934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4294953428), bits); }
    // 0x324938: 0xc6400040  lwc1        $f0, 0x40($s2)
    ctx->pc = 0x324938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32493c: 0xe520c9d8  swc1        $f0, -0x3628($t1)
    ctx->pc = 0x32493cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4294953432), bits); }
    // 0x324940: 0xc6400044  lwc1        $f0, 0x44($s2)
    ctx->pc = 0x324940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324944: 0xe500c9dc  swc1        $f0, -0x3624($t0)
    ctx->pc = 0x324944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294953436), bits); }
    // 0x324948: 0xc6400048  lwc1        $f0, 0x48($s2)
    ctx->pc = 0x324948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32494c: 0xe4e0c9e0  swc1        $f0, -0x3620($a3)
    ctx->pc = 0x32494cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294953440), bits); }
    // 0x324950: 0xc640005c  lwc1        $f0, 0x5C($s2)
    ctx->pc = 0x324950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324954: 0xe4c0c9e4  swc1        $f0, -0x361C($a2)
    ctx->pc = 0x324954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294953444), bits); }
    // 0x324958: 0xc6400060  lwc1        $f0, 0x60($s2)
    ctx->pc = 0x324958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32495c: 0xe4a0c9e8  swc1        $f0, -0x3618($a1)
    ctx->pc = 0x32495cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294953448), bits); }
    // 0x324960: 0xc6400064  lwc1        $f0, 0x64($s2)
    ctx->pc = 0x324960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324964: 0xe480c9ec  swc1        $f0, -0x3614($a0)
    ctx->pc = 0x324964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294953452), bits); }
    // 0x324968: 0x9264001c  lbu         $a0, 0x1C($s3)
    ctx->pc = 0x324968u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x32496c: 0x100000d0  b           . + 4 + (0xD0 << 2)
    ctx->pc = 0x32496Cu;
    {
        const bool branch_taken_0x32496c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32496Cu;
        // 0x324970: 0xa464c9fc  sh          $a0, -0x3604($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4294953468), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32496c) {
            ctx->pc = 0x324CB0u;
            goto label_324cb0;
        }
    }
    ctx->pc = 0x324974u;
label_324974:
    // 0x324974: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x324974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324978: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x324978u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x32497c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x32497cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x324980: 0x3c0d009c  lui         $t5, 0x9C
    ctx->pc = 0x324980u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)156 << 16));
    // 0x324984: 0x3c0c009c  lui         $t4, 0x9C
    ctx->pc = 0x324984u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)156 << 16));
    // 0x324988: 0x3c0b009c  lui         $t3, 0x9C
    ctx->pc = 0x324988u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)156 << 16));
    // 0x32498c: 0xe480ca40  swc1        $f0, -0x35C0($a0)
    ctx->pc = 0x32498cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294953536), bits); }
    // 0x324990: 0x3c0a009c  lui         $t2, 0x9C
    ctx->pc = 0x324990u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)156 << 16));
    // 0x324994: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x324994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324998: 0x3c09009c  lui         $t1, 0x9C
    ctx->pc = 0x324998u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)156 << 16));
    // 0x32499c: 0x3c08009c  lui         $t0, 0x9C
    ctx->pc = 0x32499cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)156 << 16));
    // 0x3249a0: 0x3c07009c  lui         $a3, 0x9C
    ctx->pc = 0x3249a0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)156 << 16));
    // 0x3249a4: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x3249a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x3249a8: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x3249a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x3249ac: 0xe460ca44  swc1        $f0, -0x35BC($v1)
    ctx->pc = 0x3249acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294953540), bits); }
    // 0x3249b0: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x3249b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x3249b4: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x3249b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3249b8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x3249b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x3249bc: 0xe5a0ca48  swc1        $f0, -0x35B8($t5)
    ctx->pc = 0x3249bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4294953544), bits); }
    // 0x3249c0: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x3249c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3249c4: 0xe580ca4c  swc1        $f0, -0x35B4($t4)
    ctx->pc = 0x3249c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4294953548), bits); }
    // 0x3249c8: 0xc6400028  lwc1        $f0, 0x28($s2)
    ctx->pc = 0x3249c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3249cc: 0xe560ca50  swc1        $f0, -0x35B0($t3)
    ctx->pc = 0x3249ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4294953552), bits); }
    // 0x3249d0: 0xc640002c  lwc1        $f0, 0x2C($s2)
    ctx->pc = 0x3249d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3249d4: 0xe540ca54  swc1        $f0, -0x35AC($t2)
    ctx->pc = 0x3249d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4294953556), bits); }
    // 0x3249d8: 0xc6400040  lwc1        $f0, 0x40($s2)
    ctx->pc = 0x3249d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3249dc: 0xe520ca58  swc1        $f0, -0x35A8($t1)
    ctx->pc = 0x3249dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4294953560), bits); }
    // 0x3249e0: 0xc6400044  lwc1        $f0, 0x44($s2)
    ctx->pc = 0x3249e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3249e4: 0xe500ca5c  swc1        $f0, -0x35A4($t0)
    ctx->pc = 0x3249e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294953564), bits); }
    // 0x3249e8: 0xc6400048  lwc1        $f0, 0x48($s2)
    ctx->pc = 0x3249e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3249ec: 0xe4e0ca60  swc1        $f0, -0x35A0($a3)
    ctx->pc = 0x3249ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294953568), bits); }
    // 0x3249f0: 0xc640005c  lwc1        $f0, 0x5C($s2)
    ctx->pc = 0x3249f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3249f4: 0xe4c0ca64  swc1        $f0, -0x359C($a2)
    ctx->pc = 0x3249f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294953572), bits); }
    // 0x3249f8: 0xc6400060  lwc1        $f0, 0x60($s2)
    ctx->pc = 0x3249f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3249fc: 0xe4a0ca68  swc1        $f0, -0x3598($a1)
    ctx->pc = 0x3249fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294953576), bits); }
    // 0x324a00: 0xc6400064  lwc1        $f0, 0x64($s2)
    ctx->pc = 0x324a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324a04: 0xe480ca6c  swc1        $f0, -0x3594($a0)
    ctx->pc = 0x324a04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294953580), bits); }
    // 0x324a08: 0x9264001c  lbu         $a0, 0x1C($s3)
    ctx->pc = 0x324a08u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x324a0c: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x324A0Cu;
    {
        const bool branch_taken_0x324a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324A0Cu;
        // 0x324a10: 0xa464ca7c  sh          $a0, -0x3584($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4294953596), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324a0c) {
            ctx->pc = 0x324CB0u;
            goto label_324cb0;
        }
    }
    ctx->pc = 0x324A14u;
label_324a14:
    // 0x324a14: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x324a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324a18: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x324a18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x324a1c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x324a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x324a20: 0x3c0d009c  lui         $t5, 0x9C
    ctx->pc = 0x324a20u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)156 << 16));
    // 0x324a24: 0x3c0c009c  lui         $t4, 0x9C
    ctx->pc = 0x324a24u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)156 << 16));
    // 0x324a28: 0x3c0b009c  lui         $t3, 0x9C
    ctx->pc = 0x324a28u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)156 << 16));
    // 0x324a2c: 0xe480ca00  swc1        $f0, -0x3600($a0)
    ctx->pc = 0x324a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294953472), bits); }
    // 0x324a30: 0x3c0a009c  lui         $t2, 0x9C
    ctx->pc = 0x324a30u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)156 << 16));
    // 0x324a34: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x324a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324a38: 0x3c09009c  lui         $t1, 0x9C
    ctx->pc = 0x324a38u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)156 << 16));
    // 0x324a3c: 0x3c08009c  lui         $t0, 0x9C
    ctx->pc = 0x324a3cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)156 << 16));
    // 0x324a40: 0x3c07009c  lui         $a3, 0x9C
    ctx->pc = 0x324a40u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)156 << 16));
    // 0x324a44: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x324a44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x324a48: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x324a48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x324a4c: 0xe460ca04  swc1        $f0, -0x35FC($v1)
    ctx->pc = 0x324a4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294953476), bits); }
    // 0x324a50: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x324a50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x324a54: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x324a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324a58: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x324a58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x324a5c: 0xe5a0ca08  swc1        $f0, -0x35F8($t5)
    ctx->pc = 0x324a5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4294953480), bits); }
    // 0x324a60: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x324a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324a64: 0xe580ca0c  swc1        $f0, -0x35F4($t4)
    ctx->pc = 0x324a64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4294953484), bits); }
    // 0x324a68: 0xc6400028  lwc1        $f0, 0x28($s2)
    ctx->pc = 0x324a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324a6c: 0xe560ca10  swc1        $f0, -0x35F0($t3)
    ctx->pc = 0x324a6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4294953488), bits); }
    // 0x324a70: 0xc640002c  lwc1        $f0, 0x2C($s2)
    ctx->pc = 0x324a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324a74: 0xe540ca14  swc1        $f0, -0x35EC($t2)
    ctx->pc = 0x324a74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4294953492), bits); }
    // 0x324a78: 0xc6400040  lwc1        $f0, 0x40($s2)
    ctx->pc = 0x324a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324a7c: 0xe520ca18  swc1        $f0, -0x35E8($t1)
    ctx->pc = 0x324a7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4294953496), bits); }
    // 0x324a80: 0xc6400044  lwc1        $f0, 0x44($s2)
    ctx->pc = 0x324a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324a84: 0xe500ca1c  swc1        $f0, -0x35E4($t0)
    ctx->pc = 0x324a84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294953500), bits); }
    // 0x324a88: 0xc6400048  lwc1        $f0, 0x48($s2)
    ctx->pc = 0x324a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324a8c: 0xe4e0ca20  swc1        $f0, -0x35E0($a3)
    ctx->pc = 0x324a8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294953504), bits); }
    // 0x324a90: 0xc640005c  lwc1        $f0, 0x5C($s2)
    ctx->pc = 0x324a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324a94: 0xe4c0ca24  swc1        $f0, -0x35DC($a2)
    ctx->pc = 0x324a94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294953508), bits); }
    // 0x324a98: 0xc6400060  lwc1        $f0, 0x60($s2)
    ctx->pc = 0x324a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324a9c: 0xe4a0ca28  swc1        $f0, -0x35D8($a1)
    ctx->pc = 0x324a9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294953512), bits); }
    // 0x324aa0: 0xc6400064  lwc1        $f0, 0x64($s2)
    ctx->pc = 0x324aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324aa4: 0xe480ca2c  swc1        $f0, -0x35D4($a0)
    ctx->pc = 0x324aa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294953516), bits); }
    // 0x324aa8: 0x9264001c  lbu         $a0, 0x1C($s3)
    ctx->pc = 0x324aa8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x324aac: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x324AACu;
    {
        const bool branch_taken_0x324aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324AACu;
        // 0x324ab0: 0xa464ca3c  sh          $a0, -0x35C4($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4294953532), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324aac) {
            ctx->pc = 0x324CB0u;
            goto label_324cb0;
        }
    }
    ctx->pc = 0x324AB4u;
label_324ab4:
    // 0x324ab4: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x324ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324ab8: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x324ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x324abc: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x324abcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x324ac0: 0x3c0d009c  lui         $t5, 0x9C
    ctx->pc = 0x324ac0u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)156 << 16));
    // 0x324ac4: 0x3c0c009c  lui         $t4, 0x9C
    ctx->pc = 0x324ac4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)156 << 16));
    // 0x324ac8: 0x3c0b009c  lui         $t3, 0x9C
    ctx->pc = 0x324ac8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)156 << 16));
    // 0x324acc: 0xe480ca80  swc1        $f0, -0x3580($a0)
    ctx->pc = 0x324accu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294953600), bits); }
    // 0x324ad0: 0x3c0a009c  lui         $t2, 0x9C
    ctx->pc = 0x324ad0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)156 << 16));
    // 0x324ad4: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x324ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324ad8: 0x3c09009c  lui         $t1, 0x9C
    ctx->pc = 0x324ad8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)156 << 16));
    // 0x324adc: 0x3c08009c  lui         $t0, 0x9C
    ctx->pc = 0x324adcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)156 << 16));
    // 0x324ae0: 0x3c07009c  lui         $a3, 0x9C
    ctx->pc = 0x324ae0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)156 << 16));
    // 0x324ae4: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x324ae4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x324ae8: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x324ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x324aec: 0xe460ca84  swc1        $f0, -0x357C($v1)
    ctx->pc = 0x324aecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294953604), bits); }
    // 0x324af0: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x324af0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x324af4: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x324af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324af8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x324af8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x324afc: 0xe5a0ca88  swc1        $f0, -0x3578($t5)
    ctx->pc = 0x324afcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4294953608), bits); }
    // 0x324b00: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x324b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324b04: 0xe580ca8c  swc1        $f0, -0x3574($t4)
    ctx->pc = 0x324b04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4294953612), bits); }
    // 0x324b08: 0xc6400028  lwc1        $f0, 0x28($s2)
    ctx->pc = 0x324b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324b0c: 0xe560ca90  swc1        $f0, -0x3570($t3)
    ctx->pc = 0x324b0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4294953616), bits); }
    // 0x324b10: 0xc640002c  lwc1        $f0, 0x2C($s2)
    ctx->pc = 0x324b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324b14: 0xe540ca94  swc1        $f0, -0x356C($t2)
    ctx->pc = 0x324b14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4294953620), bits); }
    // 0x324b18: 0xc6400040  lwc1        $f0, 0x40($s2)
    ctx->pc = 0x324b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324b1c: 0xe520ca98  swc1        $f0, -0x3568($t1)
    ctx->pc = 0x324b1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4294953624), bits); }
    // 0x324b20: 0xc6400044  lwc1        $f0, 0x44($s2)
    ctx->pc = 0x324b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324b24: 0xe500ca9c  swc1        $f0, -0x3564($t0)
    ctx->pc = 0x324b24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294953628), bits); }
    // 0x324b28: 0xc6400048  lwc1        $f0, 0x48($s2)
    ctx->pc = 0x324b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324b2c: 0xe4e0caa0  swc1        $f0, -0x3560($a3)
    ctx->pc = 0x324b2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294953632), bits); }
    // 0x324b30: 0xc640005c  lwc1        $f0, 0x5C($s2)
    ctx->pc = 0x324b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324b34: 0xe4c0caa4  swc1        $f0, -0x355C($a2)
    ctx->pc = 0x324b34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294953636), bits); }
    // 0x324b38: 0xc6400060  lwc1        $f0, 0x60($s2)
    ctx->pc = 0x324b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324b3c: 0xe4a0caa8  swc1        $f0, -0x3558($a1)
    ctx->pc = 0x324b3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294953640), bits); }
    // 0x324b40: 0xc6400064  lwc1        $f0, 0x64($s2)
    ctx->pc = 0x324b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324b44: 0xe480caac  swc1        $f0, -0x3554($a0)
    ctx->pc = 0x324b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294953644), bits); }
    // 0x324b48: 0x9264001c  lbu         $a0, 0x1C($s3)
    ctx->pc = 0x324b48u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x324b4c: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x324B4Cu;
    {
        const bool branch_taken_0x324b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324B4Cu;
        // 0x324b50: 0xa464cabc  sh          $a0, -0x3544($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4294953660), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324b4c) {
            ctx->pc = 0x324CB0u;
            goto label_324cb0;
        }
    }
    ctx->pc = 0x324B54u;
label_324b54:
    // 0x324b54: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x324b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324b58: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x324b58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x324b5c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x324b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x324b60: 0x3c0d009c  lui         $t5, 0x9C
    ctx->pc = 0x324b60u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)156 << 16));
    // 0x324b64: 0x3c0c009c  lui         $t4, 0x9C
    ctx->pc = 0x324b64u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)156 << 16));
    // 0x324b68: 0x3c0b009c  lui         $t3, 0x9C
    ctx->pc = 0x324b68u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)156 << 16));
    // 0x324b6c: 0xe480c8e0  swc1        $f0, -0x3720($a0)
    ctx->pc = 0x324b6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294953184), bits); }
    // 0x324b70: 0x3c0a009c  lui         $t2, 0x9C
    ctx->pc = 0x324b70u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)156 << 16));
    // 0x324b74: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x324b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324b78: 0x3c09009c  lui         $t1, 0x9C
    ctx->pc = 0x324b78u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)156 << 16));
    // 0x324b7c: 0x3c08009c  lui         $t0, 0x9C
    ctx->pc = 0x324b7cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)156 << 16));
    // 0x324b80: 0x3c07009c  lui         $a3, 0x9C
    ctx->pc = 0x324b80u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)156 << 16));
    // 0x324b84: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x324b84u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x324b88: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x324b88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x324b8c: 0xe460c8e4  swc1        $f0, -0x371C($v1)
    ctx->pc = 0x324b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294953188), bits); }
    // 0x324b90: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x324b90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x324b94: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x324b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324b98: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x324b98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x324b9c: 0xe5a0c8e8  swc1        $f0, -0x3718($t5)
    ctx->pc = 0x324b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4294953192), bits); }
    // 0x324ba0: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x324ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324ba4: 0xe580c8ec  swc1        $f0, -0x3714($t4)
    ctx->pc = 0x324ba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4294953196), bits); }
    // 0x324ba8: 0xc6400028  lwc1        $f0, 0x28($s2)
    ctx->pc = 0x324ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324bac: 0xe560c8f0  swc1        $f0, -0x3710($t3)
    ctx->pc = 0x324bacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4294953200), bits); }
    // 0x324bb0: 0xc640002c  lwc1        $f0, 0x2C($s2)
    ctx->pc = 0x324bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324bb4: 0xe540c8f4  swc1        $f0, -0x370C($t2)
    ctx->pc = 0x324bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4294953204), bits); }
    // 0x324bb8: 0xc6400040  lwc1        $f0, 0x40($s2)
    ctx->pc = 0x324bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324bbc: 0xe520c8f8  swc1        $f0, -0x3708($t1)
    ctx->pc = 0x324bbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4294953208), bits); }
    // 0x324bc0: 0xc6400044  lwc1        $f0, 0x44($s2)
    ctx->pc = 0x324bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324bc4: 0xe500c8fc  swc1        $f0, -0x3704($t0)
    ctx->pc = 0x324bc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294953212), bits); }
    // 0x324bc8: 0xc6400048  lwc1        $f0, 0x48($s2)
    ctx->pc = 0x324bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324bcc: 0xe4e0c900  swc1        $f0, -0x3700($a3)
    ctx->pc = 0x324bccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294953216), bits); }
    // 0x324bd0: 0xc640005c  lwc1        $f0, 0x5C($s2)
    ctx->pc = 0x324bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324bd4: 0xe4c0c904  swc1        $f0, -0x36FC($a2)
    ctx->pc = 0x324bd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294953220), bits); }
    // 0x324bd8: 0xc6400060  lwc1        $f0, 0x60($s2)
    ctx->pc = 0x324bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324bdc: 0xe4a0c908  swc1        $f0, -0x36F8($a1)
    ctx->pc = 0x324bdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294953224), bits); }
    // 0x324be0: 0xc6400064  lwc1        $f0, 0x64($s2)
    ctx->pc = 0x324be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324be4: 0xe480c90c  swc1        $f0, -0x36F4($a0)
    ctx->pc = 0x324be4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294953228), bits); }
    // 0x324be8: 0x9264001c  lbu         $a0, 0x1C($s3)
    ctx->pc = 0x324be8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x324bec: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x324BECu;
    {
        const bool branch_taken_0x324bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324BECu;
        // 0x324bf0: 0xa464c910  sh          $a0, -0x36F0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4294953232), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324bec) {
            ctx->pc = 0x324CB0u;
            goto label_324cb0;
        }
    }
    ctx->pc = 0x324BF4u;
label_324bf4:
    // 0x324bf4: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x324bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324bf8: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x324bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x324bfc: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x324bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x324c00: 0x3c0d009c  lui         $t5, 0x9C
    ctx->pc = 0x324c00u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)156 << 16));
    // 0x324c04: 0x3c0c009c  lui         $t4, 0x9C
    ctx->pc = 0x324c04u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)156 << 16));
    // 0x324c08: 0x3c0b009c  lui         $t3, 0x9C
    ctx->pc = 0x324c08u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)156 << 16));
    // 0x324c0c: 0xe480c918  swc1        $f0, -0x36E8($a0)
    ctx->pc = 0x324c0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294953240), bits); }
    // 0x324c10: 0x3c0a009c  lui         $t2, 0x9C
    ctx->pc = 0x324c10u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)156 << 16));
    // 0x324c14: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x324c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324c18: 0x3c09009c  lui         $t1, 0x9C
    ctx->pc = 0x324c18u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)156 << 16));
    // 0x324c1c: 0x3c08009c  lui         $t0, 0x9C
    ctx->pc = 0x324c1cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)156 << 16));
    // 0x324c20: 0x3c07009c  lui         $a3, 0x9C
    ctx->pc = 0x324c20u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)156 << 16));
    // 0x324c24: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x324c24u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x324c28: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x324c28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x324c2c: 0xe460c91c  swc1        $f0, -0x36E4($v1)
    ctx->pc = 0x324c2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294953244), bits); }
    // 0x324c30: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x324c30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x324c34: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x324c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324c38: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x324c38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x324c3c: 0xe5a0c920  swc1        $f0, -0x36E0($t5)
    ctx->pc = 0x324c3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4294953248), bits); }
    // 0x324c40: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x324c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324c44: 0xe580c924  swc1        $f0, -0x36DC($t4)
    ctx->pc = 0x324c44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4294953252), bits); }
    // 0x324c48: 0xc6400028  lwc1        $f0, 0x28($s2)
    ctx->pc = 0x324c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324c4c: 0xe560c928  swc1        $f0, -0x36D8($t3)
    ctx->pc = 0x324c4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4294953256), bits); }
    // 0x324c50: 0xc640002c  lwc1        $f0, 0x2C($s2)
    ctx->pc = 0x324c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324c54: 0xe540c92c  swc1        $f0, -0x36D4($t2)
    ctx->pc = 0x324c54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4294953260), bits); }
    // 0x324c58: 0xc6400040  lwc1        $f0, 0x40($s2)
    ctx->pc = 0x324c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324c5c: 0xe520c930  swc1        $f0, -0x36D0($t1)
    ctx->pc = 0x324c5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4294953264), bits); }
    // 0x324c60: 0xc6400044  lwc1        $f0, 0x44($s2)
    ctx->pc = 0x324c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324c64: 0xe500c934  swc1        $f0, -0x36CC($t0)
    ctx->pc = 0x324c64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294953268), bits); }
    // 0x324c68: 0xc6400048  lwc1        $f0, 0x48($s2)
    ctx->pc = 0x324c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324c6c: 0xe4e0c938  swc1        $f0, -0x36C8($a3)
    ctx->pc = 0x324c6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294953272), bits); }
    // 0x324c70: 0xc640005c  lwc1        $f0, 0x5C($s2)
    ctx->pc = 0x324c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324c74: 0xe4c0c93c  swc1        $f0, -0x36C4($a2)
    ctx->pc = 0x324c74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294953276), bits); }
    // 0x324c78: 0xc6400060  lwc1        $f0, 0x60($s2)
    ctx->pc = 0x324c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324c7c: 0xe4a0c940  swc1        $f0, -0x36C0($a1)
    ctx->pc = 0x324c7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294953280), bits); }
    // 0x324c80: 0xc6400064  lwc1        $f0, 0x64($s2)
    ctx->pc = 0x324c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324c84: 0xe480c944  swc1        $f0, -0x36BC($a0)
    ctx->pc = 0x324c84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294953284), bits); }
    // 0x324c88: 0x9264001c  lbu         $a0, 0x1C($s3)
    ctx->pc = 0x324c88u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x324c8c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x324C8Cu;
    {
        const bool branch_taken_0x324c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324C8Cu;
        // 0x324c90: 0xa464c948  sh          $a0, -0x36B8($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4294953288), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324c8c) {
            ctx->pc = 0x324CB0u;
            goto label_324cb0;
        }
    }
    ctx->pc = 0x324C94u;
label_324c94:
    // 0x324c94: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x324C94u;
    {
        const bool branch_taken_0x324c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324C94u;
        // 0x324c98: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324c94) {
            ctx->pc = 0x324CB0u;
            goto label_324cb0;
        }
    }
    ctx->pc = 0x324C9Cu;
    // 0x324c9c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x324c9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x324ca0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x324CA0u;
    {
        const bool branch_taken_0x324ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x324ca0) {
            ctx->pc = 0x324CB0u;
            goto label_324cb0;
        }
    }
    ctx->pc = 0x324CA8u;
label_324ca8:
    // 0x324ca8: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x324ca8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_324cac:
    // 0x324cac: 0xa251008b  sb          $s1, 0x8B($s2)
    ctx->pc = 0x324cacu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 139), (uint8_t)GPR_U32(ctx, 17));
label_324cb0:
    // 0x324cb0: 0x12200056  beqz        $s1, . + 4 + (0x56 << 2)
    ctx->pc = 0x324CB0u;
    {
        const bool branch_taken_0x324cb0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x324cb0) {
            ctx->pc = 0x324E0Cu;
            goto label_324e0c;
        }
    }
    ctx->pc = 0x324CB8u;
    // 0x324cb8: 0x9243008b  lbu         $v1, 0x8B($s2)
    ctx->pc = 0x324cb8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 139)));
    // 0x324cbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x324cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x324cc0: 0x14620038  bne         $v1, $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x324CC0u;
    {
        const bool branch_taken_0x324cc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x324cc0) {
            ctx->pc = 0x324DA4u;
            goto label_324da4;
        }
    }
    ctx->pc = 0x324CC8u;
    // 0x324cc8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x324cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x324ccc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x324cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x324cd0: 0x8463db30  lh          $v1, -0x24D0($v1)
    ctx->pc = 0x324cd0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957872)));
    // 0x324cd4: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x324cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x324cd8: 0x8442db2c  lh          $v0, -0x24D4($v0)
    ctx->pc = 0x324cd8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957868)));
    // 0x324cdc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x324cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x324ce0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x324ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x324ce4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x324ce4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x324ce8: 0x0  nop
    ctx->pc = 0x324ce8u;
    // NOP
    // 0x324cec: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x324cecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x324cf0: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x324cf0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x324cf4: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x324cf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x324cf8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x324cf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x324cfc: 0x0  nop
    ctx->pc = 0x324cfcu;
    // NOP
    // 0x324d00: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x324d00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x324d04: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x324d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324d08: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x324d08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x324d0c: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x324d0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x324d10: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x324d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324d14: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x324d14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x324d18: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x324d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x324d1c: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x324d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x324d20: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x324d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324d24: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x324d24u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x324d28: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x324d28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x324d2c: 0xc6400028  lwc1        $f0, 0x28($s2)
    ctx->pc = 0x324d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324d30: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x324d30u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x324d34: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x324d34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x324d38: 0xc640002c  lwc1        $f0, 0x2C($s2)
    ctx->pc = 0x324d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324d3c: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x324d3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x324d40: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x324d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x324d44: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x324d44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x324d48: 0xc6400040  lwc1        $f0, 0x40($s2)
    ctx->pc = 0x324d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324d4c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x324d4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x324d50: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x324d50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x324d54: 0xc6400044  lwc1        $f0, 0x44($s2)
    ctx->pc = 0x324d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324d58: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x324d58u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x324d5c: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x324d5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x324d60: 0xc6400048  lwc1        $f0, 0x48($s2)
    ctx->pc = 0x324d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324d64: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x324d64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x324d68: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x324d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x324d6c: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x324d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
    // 0x324d70: 0xc640005c  lwc1        $f0, 0x5C($s2)
    ctx->pc = 0x324d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324d74: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x324d74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x324d78: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x324d78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x324d7c: 0xc6400060  lwc1        $f0, 0x60($s2)
    ctx->pc = 0x324d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324d80: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x324d80u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x324d84: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x324d84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x324d88: 0xc6400064  lwc1        $f0, 0x64($s2)
    ctx->pc = 0x324d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324d8c: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x324d8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x324d90: 0x8e420070  lw          $v0, 0x70($s2)
    ctx->pc = 0x324d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x324d94: 0xc0c4ad0  jal         func_312B40
    ctx->pc = 0x324D94u;
    SET_GPR_U32(ctx, 31, 0x324D9Cu);
    ctx->pc = 0x324D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324D94u;
    // 0x324d98: 0xafa2009c  sw          $v0, 0x9C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312B40u, 0x324D94u, 0x324D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324D9Cu;
label_324d9c:
    // 0x324d9c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x324D9Cu;
    {
        const bool branch_taken_0x324d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x324d9c) {
            ctx->pc = 0x324E0Cu;
            goto label_324e0c;
        }
    }
    ctx->pc = 0x324DA4u;
label_324da4:
    // 0x324da4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x324da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x324da8: 0x8443db30  lh          $v1, -0x24D0($v0)
    ctx->pc = 0x324da8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957872)));
    // 0x324dac: 0xc6430008  lwc1        $f3, 0x8($s2)
    ctx->pc = 0x324dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x324db0: 0xc6400040  lwc1        $f0, 0x40($s2)
    ctx->pc = 0x324db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324db4: 0xc641000c  lwc1        $f1, 0xC($s2)
    ctx->pc = 0x324db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x324db8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x324db8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x324dbc: 0x46001b01  sub.s       $f12, $f3, $f0
    ctx->pc = 0x324dbcu;
    ctx->f[12] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x324dc0: 0x8442db2c  lh          $v0, -0x24D4($v0)
    ctx->pc = 0x324dc0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957868)));
    // 0x324dc4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x324dc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x324dc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x324dc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x324dcc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x324dccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x324dd0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x324dd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x324dd4: 0x46021d41  sub.s       $f21, $f3, $f2
    ctx->pc = 0x324dd4u;
    ctx->f[21] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x324dd8: 0xc04bbec  jal         func_12EFB0
    ctx->pc = 0x324DD8u;
    SET_GPR_U32(ctx, 31, 0x324DE0u);
    ctx->pc = 0x324DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324DD8u;
    // 0x324ddc: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EFB0u, 0x324DD8u, 0x324DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324DE0u;
label_324de0:
    // 0x324de0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x324de0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x324de4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x324de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x324de8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x324de8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x324dec: 0x8e44001c  lw          $a0, 0x1C($s2)
    ctx->pc = 0x324decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x324df0: 0x46010403  div.s       $f16, $f0, $f1
    ctx->pc = 0x324df0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[16] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[16] = ctx->f[0] / ctx->f[1];
    // 0x324df4: 0x24050038  addiu       $a1, $zero, 0x38
    ctx->pc = 0x324df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x324df8: 0xc64f0010  lwc1        $f15, 0x10($s2)
    ctx->pc = 0x324df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x324dfc: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x324dfcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x324e00: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x324e00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x324e04: 0xc0c510c  jal         func_314430
    ctx->pc = 0x324E04u;
    SET_GPR_U32(ctx, 31, 0x324E0Cu);
    ctx->pc = 0x324E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324E04u;
    // 0x324e08: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x314430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314430u, 0x324E04u, 0x324E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324E0Cu;
label_324e0c:
    // 0x324e0c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x324e0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_324e10:
    // 0x324e10: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x324e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x324e14: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x324e14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x324e18: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x324e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x324e1c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x324e1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x324e20: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x324e20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x324e24: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x324e24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x324e28: 0x3e00008  jr          $ra
    ctx->pc = 0x324E28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x324E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324E28u;
        // 0x324e2c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324E28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x324E30u;
}
