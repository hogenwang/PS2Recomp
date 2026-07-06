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

// Function: sub_00327240
// Address: 0x327240 - 0x327ca0
void sub_00327240_0x327240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327240_0x327240");
#endif

    switch (ctx->pc) {
        case 0x3272c4u: goto label_3272c4;
        case 0x3272d0u: goto label_3272d0;
        case 0x3272e0u: goto label_3272e0;
        case 0x327300u: goto label_327300;
        case 0x327374u: goto label_327374;
        case 0x3274e4u: goto label_3274e4;
        case 0x327644u: goto label_327644;
        case 0x327650u: goto label_327650;
        case 0x3276d4u: goto label_3276d4;
        case 0x327728u: goto label_327728;
        case 0x327734u: goto label_327734;
        case 0x327b9cu: goto label_327b9c;
        case 0x327c00u: goto label_327c00;
        case 0x327c64u: goto label_327c64;
        default: break;
    }

    ctx->pc = 0x327240u;

    // 0x327240: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x327240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x327244: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x327244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x327248: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x327248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x32724c: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x32724cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x327250: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x327250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x327254: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x327254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x327258: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x327258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x32725c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x32725cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x327260: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x327260u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327264: 0xc4400d20  lwc1        $f0, 0xD20($v0)
    ctx->pc = 0x327264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 3360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x327268: 0x848400dc  lh          $a0, 0xDC($a0)
    ctx->pc = 0x327268u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x32726c: 0xc4610d24  lwc1        $f1, 0xD24($v1)
    ctx->pc = 0x32726cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 3364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x327270: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x327270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x327274: 0xc4420d28  lwc1        $f2, 0xD28($v0)
    ctx->pc = 0x327274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 3368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x327278: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x327278u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x32727c: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x32727cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x327280: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x327280u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x327284: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x327284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x327288: 0xc4410d30  lwc1        $f1, 0xD30($v0)
    ctx->pc = 0x327288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 3376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32728c: 0xc4600d2c  lwc1        $f0, 0xD2C($v1)
    ctx->pc = 0x32728cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 3372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x327290: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x327290u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x327294: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x327294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x327298: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x327298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x32729c: 0xc4400d34  lwc1        $f0, 0xD34($v0)
    ctx->pc = 0x32729cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 3380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3272a0: 0xe7a10090  swc1        $f1, 0x90($sp)
    ctx->pc = 0x3272a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x3272a4: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x3272a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x3272a8: 0xc4410d38  lwc1        $f1, 0xD38($v0)
    ctx->pc = 0x3272a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 3384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3272ac: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x3272acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x3272b0: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x3272b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x3272b4: 0xc4400d3c  lwc1        $f0, 0xD3C($v0)
    ctx->pc = 0x3272b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 3388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3272b8: 0xe7a10098  swc1        $f1, 0x98($sp)
    ctx->pc = 0x3272b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x3272bc: 0xc0c87dc  jal         func_321F70
    ctx->pc = 0x3272BCu;
    SET_GPR_U32(ctx, 31, 0x3272C4u);
    ctx->pc = 0x3272C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3272BCu;
    // 0x3272c0: 0xe7a0009c  swc1        $f0, 0x9C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x321F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321F70u, 0x3272BCu, 0x3272C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3272C4u;
label_3272c4:
    // 0x3272c4: 0x862500dc  lh          $a1, 0xDC($s1)
    ctx->pc = 0x3272c4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x3272c8: 0xc0c87e4  jal         func_321F90
    ctx->pc = 0x3272C8u;
    SET_GPR_U32(ctx, 31, 0x3272D0u);
    ctx->pc = 0x3272CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3272C8u;
    // 0x3272cc: 0x962400da  lhu         $a0, 0xDA($s1) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 218)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321F90u, 0x3272C8u, 0x3272D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3272D0u;
label_3272d0:
    // 0x3272d0: 0x962400da  lhu         $a0, 0xDA($s1)
    ctx->pc = 0x3272d0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 218)));
    // 0x3272d4: 0x862500dc  lh          $a1, 0xDC($s1)
    ctx->pc = 0x3272d4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x3272d8: 0xc0c87f8  jal         func_321FE0
    ctx->pc = 0x3272D8u;
    SET_GPR_U32(ctx, 31, 0x3272E0u);
    ctx->pc = 0x3272DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3272D8u;
    // 0x3272dc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321FE0u, 0x3272D8u, 0x3272E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3272E0u;
label_3272e0:
    // 0x3272e0: 0x8603000a  lh          $v1, 0xA($s0)
    ctx->pc = 0x3272e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x3272e4: 0x1460025f  bnez        $v1, . + 4 + (0x25F << 2)
    ctx->pc = 0x3272E4u;
    {
        const bool branch_taken_0x3272e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3272E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3272E4u;
        // 0x3272e8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3272e4) {
            ctx->pc = 0x327C64u;
            goto label_327c64;
        }
    }
    ctx->pc = 0x3272ECu;
    // 0x3272ec: 0x86240002  lh          $a0, 0x2($s1)
    ctx->pc = 0x3272ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x3272f0: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3272F0u;
    {
        const bool branch_taken_0x3272f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3272f0) {
            ctx->pc = 0x3272F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3272F0u;
            // 0x3272f4: 0x8625000c  lh          $a1, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x327308u;
            goto label_327308;
        }
    }
    ctx->pc = 0x3272F8u;
    // 0x3272f8: 0xc0c9438  jal         func_3250E0
    ctx->pc = 0x3272F8u;
    SET_GPR_U32(ctx, 31, 0x327300u);
    ctx->pc = 0x3272FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3272F8u;
    // 0x3272fc: 0x96250000  lhu         $a1, 0x0($s1) (Delay Slot)
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3250E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3250E0u, 0x3272F8u, 0x327300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327300u;
label_327300:
    // 0x327300: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x327300u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x327304: 0x8625000c  lh          $a1, 0xC($s1)
    ctx->pc = 0x327304u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_327308:
    // 0x327308: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x327308u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x32730c: 0x86030006  lh          $v1, 0x6($s0)
    ctx->pc = 0x32730cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x327310: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x327310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x327314: 0xa6230014  sh          $v1, 0x14($s1)
    ctx->pc = 0x327314u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x327318: 0x86030008  lh          $v1, 0x8($s0)
    ctx->pc = 0x327318u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x32731c: 0x8625000e  lh          $a1, 0xE($s1)
    ctx->pc = 0x32731cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x327320: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x327320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x327324: 0xa6230016  sh          $v1, 0x16($s1)
    ctx->pc = 0x327324u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 22), (uint16_t)GPR_U32(ctx, 3));
    // 0x327328: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x327328u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x32732c: 0x14640013  bne         $v1, $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x32732Cu;
    {
        const bool branch_taken_0x32732c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x32732c) {
            ctx->pc = 0x32737Cu;
            goto label_32737c;
        }
    }
    ctx->pc = 0x327334u;
    // 0x327334: 0x86240002  lh          $a0, 0x2($s1)
    ctx->pc = 0x327334u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x327338: 0x24030118  addiu       $v1, $zero, 0x118
    ctx->pc = 0x327338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x32733c: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x32733Cu;
    {
        const bool branch_taken_0x32733c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x32733c) {
            ctx->pc = 0x327340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32733Cu;
            // 0x327340: 0x86260014  lh          $a2, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32734Cu;
            goto label_32734c;
        }
    }
    ctx->pc = 0x327344u;
    // 0x327344: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x327344u;
    {
        const bool branch_taken_0x327344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x327344) {
            ctx->pc = 0x327374u;
            goto label_327374;
        }
    }
    ctx->pc = 0x32734Cu;
label_32734c:
    // 0x32734c: 0x240502fe  addiu       $a1, $zero, 0x2FE
    ctx->pc = 0x32734cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 766));
    // 0x327350: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x327350u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x327354: 0x24040160  addiu       $a0, $zero, 0x160
    ctx->pc = 0x327354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    // 0x327358: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x327358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x32735c: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x32735cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x327360: 0xa465db20  sh          $a1, -0x24E0($v1)
    ctx->pc = 0x327360u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294957856), (uint16_t)GPR_U32(ctx, 5));
    // 0x327364: 0x86230016  lh          $v1, 0x16($s1)
    ctx->pc = 0x327364u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 22)));
    // 0x327368: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x327368u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x32736c: 0xc0c7d30  jal         func_31F4C0
    ctx->pc = 0x32736Cu;
    SET_GPR_U32(ctx, 31, 0x327374u);
    ctx->pc = 0x327370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32736Cu;
    // 0x327370: 0xa443db22  sh          $v1, -0x24DE($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294957858), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31F4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31F4C0u, 0x32736Cu, 0x327374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327374u;
label_327374:
    // 0x327374: 0x1000023c  b           . + 4 + (0x23C << 2)
    ctx->pc = 0x327374u;
    {
        const bool branch_taken_0x327374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327374u;
        // 0x327378: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327374) {
            ctx->pc = 0x327C68u;
            goto label_327c68;
        }
    }
    ctx->pc = 0x32737Cu;
label_32737c:
    // 0x32737c: 0x3c04009f  lui         $a0, 0x9F
    ctx->pc = 0x32737cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)159 << 16));
    // 0x327380: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x327380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x327384: 0x90849780  lbu         $a0, -0x6880($a0)
    ctx->pc = 0x327384u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294940544)));
    // 0x327388: 0x50850029  beql        $a0, $a1, . + 4 + (0x29 << 2)
    ctx->pc = 0x327388u;
    {
        const bool branch_taken_0x327388 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x327388) {
            ctx->pc = 0x32738Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x327388u;
            // 0x32738c: 0x8e2400c8  lw          $a0, 0xC8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x327430u;
            goto label_327430;
        }
    }
    ctx->pc = 0x327390u;
    // 0x327390: 0x8e2400c8  lw          $a0, 0xC8($s1)
    ctx->pc = 0x327390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
    // 0x327394: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x327394u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x327398: 0x24a5c960  addiu       $a1, $a1, -0x36A0
    ctx->pc = 0x327398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953312));
    // 0x32739c: 0x1485000a  bne         $a0, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x32739Cu;
    {
        const bool branch_taken_0x32739c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x32739c) {
            ctx->pc = 0x3273C8u;
            goto label_3273c8;
        }
    }
    ctx->pc = 0x3273A4u;
    // 0x3273a4: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x3273a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3273a8: 0x1065022e  beq         $v1, $a1, . + 4 + (0x22E << 2)
    ctx->pc = 0x3273A8u;
    {
        const bool branch_taken_0x3273a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x3273a8) {
            ctx->pc = 0x327C64u;
            goto label_327c64;
        }
    }
    ctx->pc = 0x3273B0u;
    // 0x3273b0: 0x2865000a  slti        $a1, $v1, 0xA
    ctx->pc = 0x3273b0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x3273b4: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3273B4u;
    {
        const bool branch_taken_0x3273b4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3273b4) {
            ctx->pc = 0x3273C8u;
            goto label_3273c8;
        }
    }
    ctx->pc = 0x3273BCu;
    // 0x3273bc: 0x2861001f  slti        $at, $v1, 0x1F
    ctx->pc = 0x3273bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x3273c0: 0x14200228  bnez        $at, . + 4 + (0x228 << 2)
    ctx->pc = 0x3273C0u;
    {
        const bool branch_taken_0x3273c0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3273c0) {
            ctx->pc = 0x327C64u;
            goto label_327c64;
        }
    }
    ctx->pc = 0x3273C8u;
label_3273c8:
    // 0x3273c8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x3273c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x3273cc: 0x24a5d470  addiu       $a1, $a1, -0x2B90
    ctx->pc = 0x3273ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956144));
    // 0x3273d0: 0x5485002d  bnel        $a0, $a1, . + 4 + (0x2D << 2)
    ctx->pc = 0x3273D0u;
    {
        const bool branch_taken_0x3273d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x3273d0) {
            ctx->pc = 0x3273D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3273D0u;
            // 0x3273d4: 0x3063ffff  andi        $v1, $v1, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x327488u;
            goto label_327488;
        }
    }
    ctx->pc = 0x3273D8u;
    // 0x3273d8: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x3273d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x3273dc: 0x10650221  beq         $v1, $a1, . + 4 + (0x221 << 2)
    ctx->pc = 0x3273DCu;
    {
        const bool branch_taken_0x3273dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x3273dc) {
            ctx->pc = 0x327C64u;
            goto label_327c64;
        }
    }
    ctx->pc = 0x3273E4u;
    // 0x3273e4: 0x28650039  slti        $a1, $v1, 0x39
    ctx->pc = 0x3273e4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x3273e8: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3273E8u;
    {
        const bool branch_taken_0x3273e8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3273e8) {
            ctx->pc = 0x3273FCu;
            goto label_3273fc;
        }
    }
    ctx->pc = 0x3273F0u;
    // 0x3273f0: 0x28610043  slti        $at, $v1, 0x43
    ctx->pc = 0x3273f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)67) ? 1 : 0);
    // 0x3273f4: 0x1420021b  bnez        $at, . + 4 + (0x21B << 2)
    ctx->pc = 0x3273F4u;
    {
        const bool branch_taken_0x3273f4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3273f4) {
            ctx->pc = 0x327C64u;
            goto label_327c64;
        }
    }
    ctx->pc = 0x3273FCu;
label_3273fc:
    // 0x3273fc: 0x3c050093  lui         $a1, 0x93
    ctx->pc = 0x3273fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)147 << 16));
    // 0x327400: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x327400u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x327404: 0x90a7f35a  lbu         $a3, -0xCA6($a1)
    ctx->pc = 0x327404u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294964058)));
    // 0x327408: 0x50e60005  beql        $a3, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x327408u;
    {
        const bool branch_taken_0x327408 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        if (branch_taken_0x327408) {
            ctx->pc = 0x32740Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x327408u;
            // 0x32740c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x327420u;
            goto label_327420;
        }
    }
    ctx->pc = 0x327410u;
    // 0x327410: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x327410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x327414: 0x14e5001b  bne         $a3, $a1, . + 4 + (0x1B << 2)
    ctx->pc = 0x327414u;
    {
        const bool branch_taken_0x327414 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 5));
        if (branch_taken_0x327414) {
            ctx->pc = 0x327484u;
            goto label_327484;
        }
    }
    ctx->pc = 0x32741Cu;
    // 0x32741c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x32741cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_327420:
    // 0x327420: 0x14650018  bne         $v1, $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x327420u;
    {
        const bool branch_taken_0x327420 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x327420) {
            ctx->pc = 0x327484u;
            goto label_327484;
        }
    }
    ctx->pc = 0x327428u;
    // 0x327428: 0x1000020e  b           . + 4 + (0x20E << 2)
    ctx->pc = 0x327428u;
    {
        const bool branch_taken_0x327428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x327428) {
            ctx->pc = 0x327C64u;
            goto label_327c64;
        }
    }
    ctx->pc = 0x327430u;
label_327430:
    // 0x327430: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x327430u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x327434: 0x24a5d470  addiu       $a1, $a1, -0x2B90
    ctx->pc = 0x327434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956144));
    // 0x327438: 0x14850012  bne         $a0, $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x327438u;
    {
        const bool branch_taken_0x327438 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x327438) {
            ctx->pc = 0x327484u;
            goto label_327484;
        }
    }
    ctx->pc = 0x327440u;
    // 0x327440: 0x3c050093  lui         $a1, 0x93
    ctx->pc = 0x327440u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)147 << 16));
    // 0x327444: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x327444u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x327448: 0x90a5f35a  lbu         $a1, -0xCA6($a1)
    ctx->pc = 0x327448u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294964058)));
    // 0x32744c: 0x14a6000d  bne         $a1, $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x32744Cu;
    {
        const bool branch_taken_0x32744c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        if (branch_taken_0x32744c) {
            ctx->pc = 0x327484u;
            goto label_327484;
        }
    }
    ctx->pc = 0x327454u;
    // 0x327454: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x327454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x327458: 0x10650202  beq         $v1, $a1, . + 4 + (0x202 << 2)
    ctx->pc = 0x327458u;
    {
        const bool branch_taken_0x327458 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x327458) {
            ctx->pc = 0x327C64u;
            goto label_327c64;
        }
    }
    ctx->pc = 0x327460u;
    // 0x327460: 0x28650039  slti        $a1, $v1, 0x39
    ctx->pc = 0x327460u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x327464: 0x54a00005  bnel        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x327464u;
    {
        const bool branch_taken_0x327464 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x327464) {
            ctx->pc = 0x327468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x327464u;
            // 0x327468: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32747Cu;
            goto label_32747c;
        }
    }
    ctx->pc = 0x32746Cu;
    // 0x32746c: 0x28610043  slti        $at, $v1, 0x43
    ctx->pc = 0x32746cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)67) ? 1 : 0);
    // 0x327470: 0x142001fc  bnez        $at, . + 4 + (0x1FC << 2)
    ctx->pc = 0x327470u;
    {
        const bool branch_taken_0x327470 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x327470) {
            ctx->pc = 0x327C64u;
            goto label_327c64;
        }
    }
    ctx->pc = 0x327478u;
    // 0x327478: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x327478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_32747c:
    // 0x32747c: 0x106501f9  beq         $v1, $a1, . + 4 + (0x1F9 << 2)
    ctx->pc = 0x32747Cu;
    {
        const bool branch_taken_0x32747c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x32747c) {
            ctx->pc = 0x327C64u;
            goto label_327c64;
        }
    }
    ctx->pc = 0x327484u;
label_327484:
    // 0x327484: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x327484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_327488:
    // 0x327488: 0xae200030  sw          $zero, 0x30($s1)
    ctx->pc = 0x327488u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
    // 0x32748c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x32748cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x327490: 0x26300030  addiu       $s0, $s1, 0x30
    ctx->pc = 0x327490u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x327494: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x327494u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x327498: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x327498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x32749c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x32749cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3274a0: 0x839821  addu        $s3, $a0, $v1
    ctx->pc = 0x3274a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3274a4: 0xae220034  sw          $v0, 0x34($s1)
    ctx->pc = 0x3274a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    // 0x3274a8: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x3274a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x3274ac: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x3274acu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3274b0: 0x92720004  lbu         $s2, 0x4($s3)
    ctx->pc = 0x3274b0u;
    SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3274b4: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x3274b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x3274b8: 0x1040007d  beqz        $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x3274B8u;
    {
        const bool branch_taken_0x3274b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3274BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3274B8u;
        // 0x3274bc: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3274b8) {
            ctx->pc = 0x3276B0u;
            goto label_3276b0;
        }
    }
    ctx->pc = 0x3274C0u;
    // 0x3274c0: 0x8667000a  lh          $a3, 0xA($s3)
    ctx->pc = 0x3274c0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
    // 0x3274c4: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x3274c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x3274c8: 0x8668000c  lh          $t0, 0xC($s3)
    ctx->pc = 0x3274c8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x3274cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3274ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3274d0: 0x84690000  lh          $t1, 0x0($v1)
    ctx->pc = 0x3274d0u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3274d4: 0x846a0002  lh          $t2, 0x2($v1)
    ctx->pc = 0x3274d4u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3274d8: 0x8e2b0138  lw          $t3, 0x138($s1)
    ctx->pc = 0x3274d8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 312)));
    // 0x3274dc: 0xc0c8ee8  jal         func_323BA0
    ctx->pc = 0x3274DCu;
    SET_GPR_U32(ctx, 31, 0x3274E4u);
    ctx->pc = 0x3274E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3274DCu;
    // 0x3274e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323BA0u, 0x3274DCu, 0x3274E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3274E4u;
label_3274e4:
    // 0x3274e4: 0x9662000a  lhu         $v0, 0xA($s3)
    ctx->pc = 0x3274e4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
    // 0x3274e8: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3274E8u;
    {
        const bool branch_taken_0x3274e8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3274e8) {
            ctx->pc = 0x3274ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3274E8u;
            // 0x3274ec: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3274FCu;
            goto label_3274fc;
        }
    }
    ctx->pc = 0x3274F0u;
    // 0x3274f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3274f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3274f4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3274F4u;
    {
        const bool branch_taken_0x3274f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3274F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3274F4u;
        // 0x3274f8: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3274f4) {
            ctx->pc = 0x327514u;
            goto label_327514;
        }
    }
    ctx->pc = 0x3274FCu;
label_3274fc:
    // 0x3274fc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3274fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x327500: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x327500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x327504: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x327504u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x327508: 0x0  nop
    ctx->pc = 0x327508u;
    // NOP
    // 0x32750c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x32750cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x327510: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x327510u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_327514:
    // 0x327514: 0xc6210020  lwc1        $f1, 0x20($s1)
    ctx->pc = 0x327514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x327518: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x327518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x32751c: 0x9203008f  lbu         $v1, 0x8F($s0)
    ctx->pc = 0x32751cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 143)));
    // 0x327520: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x327520u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x327524: 0x0  nop
    ctx->pc = 0x327524u;
    // NOP
    // 0x327528: 0x46020883  div.s       $f2, $f1, $f2
    ctx->pc = 0x327528u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[2] = ctx->f[1] / ctx->f[2];
    // 0x32752c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x32752cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x327530: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x327530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x327534: 0xc4410080  lwc1        $f1, 0x80($v0)
    ctx->pc = 0x327534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x327538: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x327538u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32753c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x32753cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x327540: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x327540u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x327544: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x327544u;
    {
        const bool branch_taken_0x327544 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x327544) {
            ctx->pc = 0x327548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x327544u;
            // 0x327548: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x32755Cu;
            goto label_32755c;
        }
    }
    ctx->pc = 0x32754Cu;
    // 0x32754c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x32754cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x327550: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x327550u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x327554: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x327554u;
    {
        const bool branch_taken_0x327554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327554u;
        // 0x327558: 0x3063ffff  andi        $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x327554) {
            ctx->pc = 0x327574u;
            goto label_327574;
        }
    }
    ctx->pc = 0x32755Cu;
label_32755c:
    // 0x32755c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x32755cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x327560: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x327560u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x327564: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x327564u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x327568: 0x0  nop
    ctx->pc = 0x327568u;
    // NOP
    // 0x32756c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32756cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x327570: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x327570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_327574:
    // 0x327574: 0xa6030092  sh          $v1, 0x92($s0)
    ctx->pc = 0x327574u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 146), (uint16_t)GPR_U32(ctx, 3));
    // 0x327578: 0x9662000c  lhu         $v0, 0xC($s3)
    ctx->pc = 0x327578u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x32757c: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x32757Cu;
    {
        const bool branch_taken_0x32757c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x32757c) {
            ctx->pc = 0x327580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32757Cu;
            // 0x327580: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x327590u;
            goto label_327590;
        }
    }
    ctx->pc = 0x327584u;
    // 0x327584: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x327584u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x327588: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x327588u;
    {
        const bool branch_taken_0x327588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32758Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327588u;
        // 0x32758c: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x327588) {
            ctx->pc = 0x3275A8u;
            goto label_3275a8;
        }
    }
    ctx->pc = 0x327590u;
label_327590:
    // 0x327590: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x327590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x327594: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x327594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x327598: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x327598u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32759c: 0x0  nop
    ctx->pc = 0x32759cu;
    // NOP
    // 0x3275a0: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3275a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3275a4: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3275a4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3275a8:
    // 0x3275a8: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x3275a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3275ac: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3275acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3275b0: 0x92030090  lbu         $v1, 0x90($s0)
    ctx->pc = 0x3275b0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x3275b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3275b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3275b8: 0x0  nop
    ctx->pc = 0x3275b8u;
    // NOP
    // 0x3275bc: 0x46020883  div.s       $f2, $f1, $f2
    ctx->pc = 0x3275bcu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[2] = ctx->f[1] / ctx->f[2];
    // 0x3275c0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3275c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3275c4: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x3275c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x3275c8: 0xc4410080  lwc1        $f1, 0x80($v0)
    ctx->pc = 0x3275c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3275cc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3275ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3275d0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3275d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3275d4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3275d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3275d8: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x3275D8u;
    {
        const bool branch_taken_0x3275d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3275d8) {
            ctx->pc = 0x3275DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3275D8u;
            // 0x3275dc: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3275F0u;
            goto label_3275f0;
        }
    }
    ctx->pc = 0x3275E0u;
    // 0x3275e0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3275e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3275e4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3275e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3275e8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3275E8u;
    {
        const bool branch_taken_0x3275e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3275ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3275E8u;
        // 0x3275ec: 0x3063ffff  andi        $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3275e8) {
            ctx->pc = 0x327608u;
            goto label_327608;
        }
    }
    ctx->pc = 0x3275F0u;
label_3275f0:
    // 0x3275f0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3275f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3275f4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3275f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3275f8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3275f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3275fc: 0x0  nop
    ctx->pc = 0x3275fcu;
    // NOP
    // 0x327600: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x327600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x327604: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x327604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_327608:
    // 0x327608: 0xa6030094  sh          $v1, 0x94($s0)
    ctx->pc = 0x327608u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 148), (uint16_t)GPR_U32(ctx, 3));
    // 0x32760c: 0x962200e0  lhu         $v0, 0xE0($s1)
    ctx->pc = 0x32760cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x327610: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x327610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x327614: 0x962200e2  lhu         $v0, 0xE2($s1)
    ctx->pc = 0x327614u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 226)));
    // 0x327618: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x327618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x32761c: 0x8667000a  lh          $a3, 0xA($s3)
    ctx->pc = 0x32761cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
    // 0x327620: 0xc62c0010  lwc1        $f12, 0x10($s1)
    ctx->pc = 0x327620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x327624: 0x8668000c  lh          $t0, 0xC($s3)
    ctx->pc = 0x327624u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x327628: 0x86090092  lh          $t1, 0x92($s0)
    ctx->pc = 0x327628u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
    // 0x32762c: 0x860a0094  lh          $t2, 0x94($s0)
    ctx->pc = 0x32762cu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x327630: 0x86250014  lh          $a1, 0x14($s1)
    ctx->pc = 0x327630u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x327634: 0x86260016  lh          $a2, 0x16($s1)
    ctx->pc = 0x327634u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 22)));
    // 0x327638: 0x962b00d4  lhu         $t3, 0xD4($s1)
    ctx->pc = 0x327638u;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x32763c: 0xc0c9000  jal         func_324000
    ctx->pc = 0x32763Cu;
    SET_GPR_U32(ctx, 31, 0x327644u);
    ctx->pc = 0x327640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32763Cu;
    // 0x327640: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324000u, 0x32763Cu, 0x327644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327644u;
label_327644:
    // 0x327644: 0x9225001c  lbu         $a1, 0x1C($s1)
    ctx->pc = 0x327644u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x327648: 0xc0c908c  jal         func_324230
    ctx->pc = 0x327648u;
    SET_GPR_U32(ctx, 31, 0x327650u);
    ctx->pc = 0x32764Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327648u;
    // 0x32764c: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324230u, 0x327648u, 0x327650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327650u;
label_327650:
    // 0x327650: 0x96640002  lhu         $a0, 0x2($s3)
    ctx->pc = 0x327650u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x327654: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x327654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x327658: 0x50830008  beql        $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x327658u;
    {
        const bool branch_taken_0x327658 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x327658) {
            ctx->pc = 0x32765Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x327658u;
            // 0x32765c: 0x24032000  addiu       $v1, $zero, 0x2000 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32767Cu;
            goto label_32767c;
        }
    }
    ctx->pc = 0x327660u;
    // 0x327660: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x327660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x327664: 0x50830006  beql        $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x327664u;
    {
        const bool branch_taken_0x327664 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x327664) {
            ctx->pc = 0x327668u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x327664u;
            // 0x327668: 0xae000078  sw          $zero, 0x78($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x327680u;
            goto label_327680;
        }
    }
    ctx->pc = 0x32766Cu;
    // 0x32766c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x32766Cu;
    {
        const bool branch_taken_0x32766c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x32766c) {
            ctx->pc = 0x327670u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32766Cu;
            // 0x327670: 0xae000078  sw          $zero, 0x78($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x327680u;
            goto label_327680;
        }
    }
    ctx->pc = 0x327674u;
    // 0x327674: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x327674u;
    {
        const bool branch_taken_0x327674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327674u;
        // 0x327678: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327674) {
            ctx->pc = 0x327684u;
            goto label_327684;
        }
    }
    ctx->pc = 0x32767Cu;
label_32767c:
    // 0x32767c: 0xae030078  sw          $v1, 0x78($s0)
    ctx->pc = 0x32767cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 3));
label_327680:
    // 0x327680: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x327680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_327684:
    // 0x327684: 0x122c3c  dsll32      $a1, $s2, 16
    ctx->pc = 0x327684u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) << (32 + 16));
    // 0x327688: 0xae03007c  sw          $v1, 0x7C($s0)
    ctx->pc = 0x327688u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 3));
    // 0x32768c: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x32768cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x327690: 0xa6120080  sh          $s2, 0x80($s0)
    ctx->pc = 0x327690u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 128), (uint16_t)GPR_U32(ctx, 18));
    // 0x327694: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x327694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x327698: 0xa6000086  sh          $zero, 0x86($s0)
    ctx->pc = 0x327698u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 134), (uint16_t)GPR_U32(ctx, 0));
    // 0x32769c: 0xa6000088  sh          $zero, 0x88($s0)
    ctx->pc = 0x32769cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 136), (uint16_t)GPR_U32(ctx, 0));
    // 0x3276a0: 0xa200008a  sb          $zero, 0x8A($s0)
    ctx->pc = 0x3276a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 138), (uint8_t)GPR_U32(ctx, 0));
    // 0x3276a4: 0xa203008b  sb          $v1, 0x8B($s0)
    ctx->pc = 0x3276a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 139), (uint8_t)GPR_U32(ctx, 3));
    // 0x3276a8: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x3276A8u;
    {
        const bool branch_taken_0x3276a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3276ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3276A8u;
        // 0x3276ac: 0xa200008c  sb          $zero, 0x8C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 140), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3276a8) {
            ctx->pc = 0x3277A0u;
            goto label_3277a0;
        }
    }
    ctx->pc = 0x3276B0u;
label_3276b0:
    // 0x3276b0: 0x86650006  lh          $a1, 0x6($s3)
    ctx->pc = 0x3276b0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x3276b4: 0x86660008  lh          $a2, 0x8($s3)
    ctx->pc = 0x3276b4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x3276b8: 0x8667000a  lh          $a3, 0xA($s3)
    ctx->pc = 0x3276b8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
    // 0x3276bc: 0x8668000c  lh          $t0, 0xC($s3)
    ctx->pc = 0x3276bcu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x3276c0: 0x84690000  lh          $t1, 0x0($v1)
    ctx->pc = 0x3276c0u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3276c4: 0x846a0002  lh          $t2, 0x2($v1)
    ctx->pc = 0x3276c4u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3276c8: 0x8e2b0138  lw          $t3, 0x138($s1)
    ctx->pc = 0x3276c8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 312)));
    // 0x3276cc: 0xc0c8ee8  jal         func_323BA0
    ctx->pc = 0x3276CCu;
    SET_GPR_U32(ctx, 31, 0x3276D4u);
    ctx->pc = 0x3276D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3276CCu;
    // 0x3276d0: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323BA0u, 0x3276CCu, 0x3276D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3276D4u;
label_3276d4:
    // 0x3276d4: 0xc6210020  lwc1        $f1, 0x20($s1)
    ctx->pc = 0x3276d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3276d8: 0x96220028  lhu         $v0, 0x28($s1)
    ctx->pc = 0x3276d8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x3276dc: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x3276dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3276e0: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x3276e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x3276e4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3276e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3276e8: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3276e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3276ec: 0x962b00e2  lhu         $t3, 0xE2($s1)
    ctx->pc = 0x3276ecu;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 226)));
    // 0x3276f0: 0x86250014  lh          $a1, 0x14($s1)
    ctx->pc = 0x3276f0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x3276f4: 0x86260016  lh          $a2, 0x16($s1)
    ctx->pc = 0x3276f4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 22)));
    // 0x3276f8: 0x962900d4  lhu         $t1, 0xD4($s1)
    ctx->pc = 0x3276f8u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x3276fc: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3276fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x327700: 0x962a00e0  lhu         $t2, 0xE0($s1)
    ctx->pc = 0x327700u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x327704: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x327704u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x327708: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x327708u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x32770c: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x32770cu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x327710: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x327710u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x327714: 0x0  nop
    ctx->pc = 0x327714u;
    // NOP
    // 0x327718: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x327718u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x32771c: 0xc62c0010  lwc1        $f12, 0x10($s1)
    ctx->pc = 0x32771cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x327720: 0xc0c8f18  jal         func_323C60
    ctx->pc = 0x327720u;
    SET_GPR_U32(ctx, 31, 0x327728u);
    ctx->pc = 0x327724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327720u;
    // 0x327724: 0x8443f  dsra32      $t0, $t0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323C60u, 0x327720u, 0x327728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327728u;
label_327728:
    // 0x327728: 0x9225001c  lbu         $a1, 0x1C($s1)
    ctx->pc = 0x327728u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x32772c: 0xc0c908c  jal         func_324230
    ctx->pc = 0x32772Cu;
    SET_GPR_U32(ctx, 31, 0x327734u);
    ctx->pc = 0x327730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32772Cu;
    // 0x327730: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324230u, 0x32772Cu, 0x327734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327734u;
label_327734:
    // 0x327734: 0x96230028  lhu         $v1, 0x28($s1)
    ctx->pc = 0x327734u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x327738: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x327738u;
    {
        const bool branch_taken_0x327738 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x327738) {
            ctx->pc = 0x32773Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x327738u;
            // 0x32773c: 0x96640002  lhu         $a0, 0x2($s3) (Delay Slot)
            SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32774Cu;
            goto label_32774c;
        }
    }
    ctx->pc = 0x327740u;
    // 0x327740: 0x24032000  addiu       $v1, $zero, 0x2000
    ctx->pc = 0x327740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x327744: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x327744u;
    {
        const bool branch_taken_0x327744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327744u;
        // 0x327748: 0xae030078  sw          $v1, 0x78($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327744) {
            ctx->pc = 0x327778u;
            goto label_327778;
        }
    }
    ctx->pc = 0x32774Cu;
label_32774c:
    // 0x32774c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x32774cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x327750: 0x50830008  beql        $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x327750u;
    {
        const bool branch_taken_0x327750 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x327750) {
            ctx->pc = 0x327754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x327750u;
            // 0x327754: 0x24032000  addiu       $v1, $zero, 0x2000 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
            ctx->in_delay_slot = false;
            ctx->pc = 0x327774u;
            goto label_327774;
        }
    }
    ctx->pc = 0x327758u;
    // 0x327758: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x327758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32775c: 0x50830006  beql        $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x32775Cu;
    {
        const bool branch_taken_0x32775c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x32775c) {
            ctx->pc = 0x327760u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32775Cu;
            // 0x327760: 0xae000078  sw          $zero, 0x78($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x327778u;
            goto label_327778;
        }
    }
    ctx->pc = 0x327764u;
    // 0x327764: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x327764u;
    {
        const bool branch_taken_0x327764 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x327764) {
            ctx->pc = 0x327768u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x327764u;
            // 0x327768: 0xae000078  sw          $zero, 0x78($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x327778u;
            goto label_327778;
        }
    }
    ctx->pc = 0x32776Cu;
    // 0x32776c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x32776Cu;
    {
        const bool branch_taken_0x32776c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32776Cu;
        // 0x327770: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32776c) {
            ctx->pc = 0x32777Cu;
            goto label_32777c;
        }
    }
    ctx->pc = 0x327774u;
label_327774:
    // 0x327774: 0xae030078  sw          $v1, 0x78($s0)
    ctx->pc = 0x327774u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 3));
label_327778:
    // 0x327778: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x327778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32777c:
    // 0x32777c: 0x122c3c  dsll32      $a1, $s2, 16
    ctx->pc = 0x32777cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) << (32 + 16));
    // 0x327780: 0xae03007c  sw          $v1, 0x7C($s0)
    ctx->pc = 0x327780u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 3));
    // 0x327784: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x327784u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x327788: 0xa6120080  sh          $s2, 0x80($s0)
    ctx->pc = 0x327788u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 128), (uint16_t)GPR_U32(ctx, 18));
    // 0x32778c: 0xa6000086  sh          $zero, 0x86($s0)
    ctx->pc = 0x32778cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 134), (uint16_t)GPR_U32(ctx, 0));
    // 0x327790: 0xa6000088  sh          $zero, 0x88($s0)
    ctx->pc = 0x327790u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 136), (uint16_t)GPR_U32(ctx, 0));
    // 0x327794: 0xa200008a  sb          $zero, 0x8A($s0)
    ctx->pc = 0x327794u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 138), (uint8_t)GPR_U32(ctx, 0));
    // 0x327798: 0xa200008b  sb          $zero, 0x8B($s0)
    ctx->pc = 0x327798u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 139), (uint8_t)GPR_U32(ctx, 0));
    // 0x32779c: 0xa200008c  sb          $zero, 0x8C($s0)
    ctx->pc = 0x32779cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 140), (uint8_t)GPR_U32(ctx, 0));
label_3277a0:
    // 0x3277a0: 0x86240002  lh          $a0, 0x2($s1)
    ctx->pc = 0x3277a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x3277a4: 0x24030119  addiu       $v1, $zero, 0x119
    ctx->pc = 0x3277a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 281));
    // 0x3277a8: 0x10830021  beq         $a0, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x3277A8u;
    {
        const bool branch_taken_0x3277a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3277a8) {
            ctx->pc = 0x327830u;
            goto label_327830;
        }
    }
    ctx->pc = 0x3277B0u;
    // 0x3277b0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3277b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3277b4: 0x1082001a  beq         $a0, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3277B4u;
    {
        const bool branch_taken_0x3277b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x3277b4) {
            ctx->pc = 0x327820u;
            goto label_327820;
        }
    }
    ctx->pc = 0x3277BCu;
    // 0x3277bc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3277bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3277c0: 0x10820013  beq         $a0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3277C0u;
    {
        const bool branch_taken_0x3277c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x3277c0) {
            ctx->pc = 0x327810u;
            goto label_327810;
        }
    }
    ctx->pc = 0x3277C8u;
    // 0x3277c8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3277c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3277cc: 0x1082000c  beq         $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3277CCu;
    {
        const bool branch_taken_0x3277cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x3277cc) {
            ctx->pc = 0x327800u;
            goto label_327800;
        }
    }
    ctx->pc = 0x3277D4u;
    // 0x3277d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3277d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3277d8: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3277D8u;
    {
        const bool branch_taken_0x3277d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x3277d8) {
            ctx->pc = 0x3277F0u;
            goto label_3277f0;
        }
    }
    ctx->pc = 0x3277E0u;
    // 0x3277e0: 0x5080004c  beql        $a0, $zero, . + 4 + (0x4C << 2)
    ctx->pc = 0x3277E0u;
    {
        const bool branch_taken_0x3277e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3277e0) {
            ctx->pc = 0x3277E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3277E0u;
            // 0x3277e4: 0xa6050080  sh          $a1, 0x80($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 128), (uint16_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x327914u;
            goto label_327914;
        }
    }
    ctx->pc = 0x3277E8u;
    // 0x3277e8: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x3277E8u;
    {
        const bool branch_taken_0x3277e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3277ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3277E8u;
        // 0x3277ec: 0x8e2300c8  lw          $v1, 0xC8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3277e8) {
            ctx->pc = 0x327918u;
            goto label_327918;
        }
    }
    ctx->pc = 0x3277F0u;
label_3277f0:
    // 0x3277f0: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x3277f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x3277f4: 0x84424484  lh          $v0, 0x4484($v0)
    ctx->pc = 0x3277f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 17540)));
    // 0x3277f8: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x3277F8u;
    {
        const bool branch_taken_0x3277f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3277FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3277F8u;
        // 0x3277fc: 0xa6020080  sh          $v0, 0x80($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 128), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3277f8) {
            ctx->pc = 0x327914u;
            goto label_327914;
        }
    }
    ctx->pc = 0x327800u;
label_327800:
    // 0x327800: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x327800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x327804: 0x84424486  lh          $v0, 0x4486($v0)
    ctx->pc = 0x327804u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 17542)));
    // 0x327808: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x327808u;
    {
        const bool branch_taken_0x327808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32780Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327808u;
        // 0x32780c: 0xa6020080  sh          $v0, 0x80($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 128), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327808) {
            ctx->pc = 0x327914u;
            goto label_327914;
        }
    }
    ctx->pc = 0x327810u;
label_327810:
    // 0x327810: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x327810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x327814: 0x84424488  lh          $v0, 0x4488($v0)
    ctx->pc = 0x327814u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 17544)));
    // 0x327818: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x327818u;
    {
        const bool branch_taken_0x327818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32781Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327818u;
        // 0x32781c: 0xa6020080  sh          $v0, 0x80($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 128), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327818) {
            ctx->pc = 0x327914u;
            goto label_327914;
        }
    }
    ctx->pc = 0x327820u;
label_327820:
    // 0x327820: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x327820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x327824: 0x84424482  lh          $v0, 0x4482($v0)
    ctx->pc = 0x327824u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 17538)));
    // 0x327828: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x327828u;
    {
        const bool branch_taken_0x327828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32782Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327828u;
        // 0x32782c: 0xa6020080  sh          $v0, 0x80($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 128), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327828) {
            ctx->pc = 0x327914u;
            goto label_327914;
        }
    }
    ctx->pc = 0x327830u;
label_327830:
    // 0x327830: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x327830u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x327834: 0x3c0f009c  lui         $t7, 0x9C
    ctx->pc = 0x327834u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)156 << 16));
    // 0x327838: 0x8464db30  lh          $a0, -0x24D0($v1)
    ctx->pc = 0x327838u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957872)));
    // 0x32783c: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x32783cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x327840: 0x3c0e009c  lui         $t6, 0x9C
    ctx->pc = 0x327840u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)156 << 16));
    // 0x327844: 0x3c0d009c  lui         $t5, 0x9C
    ctx->pc = 0x327844u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)156 << 16));
    // 0x327848: 0x3c0c009c  lui         $t4, 0x9C
    ctx->pc = 0x327848u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)156 << 16));
    // 0x32784c: 0x3c0b009c  lui         $t3, 0x9C
    ctx->pc = 0x32784cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)156 << 16));
    // 0x327850: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x327850u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x327854: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x327854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x327858: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x327858u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x32785c: 0x8472db2c  lh          $s2, -0x24D4($v1)
    ctx->pc = 0x32785cu;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957868)));
    // 0x327860: 0x3c0a009c  lui         $t2, 0x9C
    ctx->pc = 0x327860u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)156 << 16));
    // 0x327864: 0x3c09009c  lui         $t1, 0x9C
    ctx->pc = 0x327864u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)156 << 16));
    // 0x327868: 0x3c08009c  lui         $t0, 0x9C
    ctx->pc = 0x327868u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)156 << 16));
    // 0x32786c: 0x3c07009c  lui         $a3, 0x9C
    ctx->pc = 0x32786cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)156 << 16));
    // 0x327870: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x327870u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x327874: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x327874u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x327878: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x327878u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x32787c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x32787cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x327880: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x327880u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x327884: 0xe5e0c8a0  swc1        $f0, -0x3760($t7)
    ctx->pc = 0x327884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 4294953120), bits); }
    // 0x327888: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x327888u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32788c: 0x0  nop
    ctx->pc = 0x32788cu;
    // NOP
    // 0x327890: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x327890u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x327894: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x327894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x327898: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x327898u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x32789c: 0xe5c0c8a4  swc1        $f0, -0x375C($t6)
    ctx->pc = 0x32789cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 4294953124), bits); }
    // 0x3278a0: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x3278a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3278a4: 0xe5a0c8a8  swc1        $f0, -0x3758($t5)
    ctx->pc = 0x3278a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4294953128), bits); }
    // 0x3278a8: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x3278a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3278ac: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x3278acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x3278b0: 0xe580c8ac  swc1        $f0, -0x3754($t4)
    ctx->pc = 0x3278b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4294953132), bits); }
    // 0x3278b4: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x3278b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3278b8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3278b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3278bc: 0xe560c8b0  swc1        $f0, -0x3750($t3)
    ctx->pc = 0x3278bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4294953136), bits); }
    // 0x3278c0: 0xc600002c  lwc1        $f0, 0x2C($s0)
    ctx->pc = 0x3278c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3278c4: 0xe540c8b4  swc1        $f0, -0x374C($t2)
    ctx->pc = 0x3278c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4294953140), bits); }
    // 0x3278c8: 0xc6000040  lwc1        $f0, 0x40($s0)
    ctx->pc = 0x3278c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3278cc: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x3278ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x3278d0: 0xe520c8b8  swc1        $f0, -0x3748($t1)
    ctx->pc = 0x3278d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4294953144), bits); }
    // 0x3278d4: 0xc6000044  lwc1        $f0, 0x44($s0)
    ctx->pc = 0x3278d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3278d8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3278d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3278dc: 0xe500c8bc  swc1        $f0, -0x3744($t0)
    ctx->pc = 0x3278dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294953148), bits); }
    // 0x3278e0: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x3278e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3278e4: 0xe4e0c8c0  swc1        $f0, -0x3740($a3)
    ctx->pc = 0x3278e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294953152), bits); }
    // 0x3278e8: 0xc600005c  lwc1        $f0, 0x5C($s0)
    ctx->pc = 0x3278e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3278ec: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x3278ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x3278f0: 0xe4c0c8c4  swc1        $f0, -0x373C($a2)
    ctx->pc = 0x3278f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294953156), bits); }
    // 0x3278f4: 0xc6000060  lwc1        $f0, 0x60($s0)
    ctx->pc = 0x3278f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3278f8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3278f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3278fc: 0xe4a0c8c8  swc1        $f0, -0x3738($a1)
    ctx->pc = 0x3278fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294953160), bits); }
    // 0x327900: 0xc6000064  lwc1        $f0, 0x64($s0)
    ctx->pc = 0x327900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x327904: 0xe480c8cc  swc1        $f0, -0x3734($a0)
    ctx->pc = 0x327904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294953164), bits); }
    // 0x327908: 0x9224001c  lbu         $a0, 0x1C($s1)
    ctx->pc = 0x327908u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x32790c: 0x100000d5  b           . + 4 + (0xD5 << 2)
    ctx->pc = 0x32790Cu;
    {
        const bool branch_taken_0x32790c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32790Cu;
        // 0x327910: 0xa464c8dc  sh          $a0, -0x3724($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4294953180), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32790c) {
            ctx->pc = 0x327C64u;
            goto label_327c64;
        }
    }
    ctx->pc = 0x327914u;
label_327914:
    // 0x327914: 0x8e2300c8  lw          $v1, 0xC8($s1)
    ctx->pc = 0x327914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
label_327918:
    // 0x327918: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x327918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x32791c: 0x244242b0  addiu       $v0, $v0, 0x42B0
    ctx->pc = 0x32791cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17072));
    // 0x327920: 0x54620017  bnel        $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x327920u;
    {
        const bool branch_taken_0x327920 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x327920) {
            ctx->pc = 0x327924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x327920u;
            // 0x327924: 0x86240014  lh          $a0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x327980u;
            goto label_327980;
        }
    }
    ctx->pc = 0x327928u;
    // 0x327928: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x327928u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x32792c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x32792cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x327930: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x327930u;
    {
        const bool branch_taken_0x327930 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x327930) {
            ctx->pc = 0x32797Cu;
            goto label_32797c;
        }
    }
    ctx->pc = 0x327938u;
    // 0x327938: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x327938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x32793c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x32793cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x327940: 0x8445db30  lh          $a1, -0x24D0($v0)
    ctx->pc = 0x327940u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957872)));
    // 0x327944: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x327944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x327948: 0x8463db2c  lh          $v1, -0x24D4($v1)
    ctx->pc = 0x327948u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957868)));
    // 0x32794c: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x32794cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x327950: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x327950u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x327954: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x327954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x327958: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x327958u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x32795c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x32795cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x327960: 0xe480c8d0  swc1        $f0, -0x3730($a0)
    ctx->pc = 0x327960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294953168), bits); }
    // 0x327964: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x327964u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x327968: 0x0  nop
    ctx->pc = 0x327968u;
    // NOP
    // 0x32796c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x32796cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x327970: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x327970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x327974: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x327974u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x327978: 0xe440c8d4  swc1        $f0, -0x372C($v0)
    ctx->pc = 0x327978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294953172), bits); }
label_32797c:
    // 0x32797c: 0x86240014  lh          $a0, 0x14($s1)
    ctx->pc = 0x32797cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
label_327980:
    // 0x327980: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x327980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x327984: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x327984u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x327988: 0x9666000a  lhu         $a2, 0xA($s3)
    ctx->pc = 0x327988u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
    // 0x32798c: 0x86230016  lh          $v1, 0x16($s1)
    ctx->pc = 0x32798cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 22)));
    // 0x327990: 0xc6240020  lwc1        $f4, 0x20($s1)
    ctx->pc = 0x327990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x327994: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x327994u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x327998: 0x0  nop
    ctx->pc = 0x327998u;
    // NOP
    // 0x32799c: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x32799cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x3279a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3279a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3279a4: 0x0  nop
    ctx->pc = 0x3279a4u;
    // NOP
    // 0x3279a8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3279a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3279ac: 0x46022003  div.s       $f0, $f4, $f2
    ctx->pc = 0x3279acu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[0] = ctx->f[4] / ctx->f[2];
    // 0x3279b0: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x3279b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x3279b4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3279b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3279b8: 0xc6230024  lwc1        $f3, 0x24($s1)
    ctx->pc = 0x3279b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3279bc: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x3279bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x3279c0: 0x46021803  div.s       $f0, $f3, $f2
    ctx->pc = 0x3279c0u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[0] = ctx->f[3] / ctx->f[2];
    // 0x3279c4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3279c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3279c8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3279c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3279cc: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x3279ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x3279d0: 0x4c00004  bltz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3279D0u;
    {
        const bool branch_taken_0x3279d0 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x3279D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3279D0u;
        // 0x3279d4: 0x26020008  addiu       $v0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3279d0) {
            ctx->pc = 0x3279E4u;
            goto label_3279e4;
        }
    }
    ctx->pc = 0x3279D8u;
    // 0x3279d8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x3279d8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3279dc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3279DCu;
    {
        const bool branch_taken_0x3279dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3279E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3279DCu;
        // 0x3279e0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3279dc) {
            ctx->pc = 0x327A00u;
            goto label_327a00;
        }
    }
    ctx->pc = 0x3279E4u;
label_3279e4:
    // 0x3279e4: 0x62042  srl         $a0, $a2, 1
    ctx->pc = 0x3279e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x3279e8: 0x30c30001  andi        $v1, $a2, 0x1
    ctx->pc = 0x3279e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x3279ec: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3279ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3279f0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3279f0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3279f4: 0x0  nop
    ctx->pc = 0x3279f4u;
    // NOP
    // 0x3279f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3279f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3279fc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3279fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_327a00:
    // 0x327a00: 0x0  nop
    ctx->pc = 0x327a00u;
    // NOP
    // 0x327a04: 0x0  nop
    ctx->pc = 0x327a04u;
    // NOP
    // 0x327a08: 0x46002343  div.s       $f13, $f4, $f0
    ctx->pc = 0x327a08u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[13] = ctx->f[4] / ctx->f[0];
    // 0x327a0c: 0x0  nop
    ctx->pc = 0x327a0cu;
    // NOP
    // 0x327a10: 0x0  nop
    ctx->pc = 0x327a10u;
    // NOP
    // 0x327a14: 0x9665000c  lhu         $a1, 0xC($s3)
    ctx->pc = 0x327a14u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x327a18: 0x4a20004  bltzl       $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x327A18u;
    {
        const bool branch_taken_0x327a18 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x327a18) {
            ctx->pc = 0x327A1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x327A18u;
            // 0x327a1c: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x327A2Cu;
            goto label_327a2c;
        }
    }
    ctx->pc = 0x327A20u;
    // 0x327a20: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x327a20u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x327a24: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x327A24u;
    {
        const bool branch_taken_0x327a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327A24u;
        // 0x327a28: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x327a24) {
            ctx->pc = 0x327A44u;
            goto label_327a44;
        }
    }
    ctx->pc = 0x327A2Cu;
label_327a2c:
    // 0x327a2c: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x327a2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x327a30: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x327a30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x327a34: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x327a34u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x327a38: 0x0  nop
    ctx->pc = 0x327a38u;
    // NOP
    // 0x327a3c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x327a3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x327a40: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x327a40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_327a44:
    // 0x327a44: 0x0  nop
    ctx->pc = 0x327a44u;
    // NOP
    // 0x327a48: 0x0  nop
    ctx->pc = 0x327a48u;
    // NOP
    // 0x327a4c: 0x46001b83  div.s       $f14, $f3, $f0
    ctx->pc = 0x327a4cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[14] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[14] = ctx->f[3] / ctx->f[0];
    // 0x327a50: 0x0  nop
    ctx->pc = 0x327a50u;
    // NOP
    // 0x327a54: 0x962400e0  lhu         $a0, 0xE0($s1)
    ctx->pc = 0x327a54u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x327a58: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x327a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x327a5c: 0x54830051  bnel        $a0, $v1, . + 4 + (0x51 << 2)
    ctx->pc = 0x327A5Cu;
    {
        const bool branch_taken_0x327a5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x327a5c) {
            ctx->pc = 0x327A60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x327A5Cu;
            // 0x327a60: 0x9204008b  lbu         $a0, 0x8B($s0) (Delay Slot)
            SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 139)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x327BA4u;
            goto label_327ba4;
        }
    }
    ctx->pc = 0x327A64u;
    // 0x327a64: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x327a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x327a68: 0x3c0a009c  lui         $t2, 0x9C
    ctx->pc = 0x327a68u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)156 << 16));
    // 0x327a6c: 0x8442db30  lh          $v0, -0x24D0($v0)
    ctx->pc = 0x327a6cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957872)));
    // 0x327a70: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x327a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x327a74: 0x3c09009c  lui         $t1, 0x9C
    ctx->pc = 0x327a74u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)156 << 16));
    // 0x327a78: 0x3c08009c  lui         $t0, 0x9C
    ctx->pc = 0x327a78u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)156 << 16));
    // 0x327a7c: 0x3c07009c  lui         $a3, 0x9C
    ctx->pc = 0x327a7cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)156 << 16));
    // 0x327a80: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x327a80u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x327a84: 0x24420140  addiu       $v0, $v0, 0x140
    ctx->pc = 0x327a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    // 0x327a88: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x327a88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x327a8c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x327a8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x327a90: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x327a90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x327a94: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x327a94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x327a98: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x327a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x327a9c: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x327a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x327aa0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x327aa0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x327aa4: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x327aa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x327aa8: 0x854adb2c  lh          $t2, -0x24D4($t2)
    ctx->pc = 0x327aa8u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 4294957868)));
    // 0x327aac: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x327aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x327ab0: 0x254a00f0  addiu       $t2, $t2, 0xF0
    ctx->pc = 0x327ab0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 240));
    // 0x327ab4: 0x448a0800  mtc1        $t2, $f1
    ctx->pc = 0x327ab4u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x327ab8: 0x0  nop
    ctx->pc = 0x327ab8u;
    // NOP
    // 0x327abc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x327abcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x327ac0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x327ac0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x327ac4: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x327ac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x327ac8: 0x8529db30  lh          $t1, -0x24D0($t1)
    ctx->pc = 0x327ac8u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 4294957872)));
    // 0x327acc: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x327accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x327ad0: 0x25290140  addiu       $t1, $t1, 0x140
    ctx->pc = 0x327ad0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 320));
    // 0x327ad4: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x327ad4u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x327ad8: 0x0  nop
    ctx->pc = 0x327ad8u;
    // NOP
    // 0x327adc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x327adcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x327ae0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x327ae0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x327ae4: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x327ae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x327ae8: 0x8508db2c  lh          $t0, -0x24D4($t0)
    ctx->pc = 0x327ae8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 4294957868)));
    // 0x327aec: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x327aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x327af0: 0x250800f0  addiu       $t0, $t0, 0xF0
    ctx->pc = 0x327af0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 240));
    // 0x327af4: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x327af4u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x327af8: 0x0  nop
    ctx->pc = 0x327af8u;
    // NOP
    // 0x327afc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x327afcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x327b00: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x327b00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x327b04: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x327b04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x327b08: 0x84e7db30  lh          $a3, -0x24D0($a3)
    ctx->pc = 0x327b08u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4294957872)));
    // 0x327b0c: 0xc6000040  lwc1        $f0, 0x40($s0)
    ctx->pc = 0x327b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x327b10: 0x24e70140  addiu       $a3, $a3, 0x140
    ctx->pc = 0x327b10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 320));
    // 0x327b14: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x327b14u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x327b18: 0x0  nop
    ctx->pc = 0x327b18u;
    // NOP
    // 0x327b1c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x327b1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x327b20: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x327b20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x327b24: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x327b24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x327b28: 0x84c6db2c  lh          $a2, -0x24D4($a2)
    ctx->pc = 0x327b28u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4294957868)));
    // 0x327b2c: 0xc6000044  lwc1        $f0, 0x44($s0)
    ctx->pc = 0x327b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x327b30: 0x24c600f0  addiu       $a2, $a2, 0xF0
    ctx->pc = 0x327b30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 240));
    // 0x327b34: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x327b34u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x327b38: 0x0  nop
    ctx->pc = 0x327b38u;
    // NOP
    // 0x327b3c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x327b3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x327b40: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x327b40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x327b44: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x327b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x327b48: 0x84a5db30  lh          $a1, -0x24D0($a1)
    ctx->pc = 0x327b48u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4294957872)));
    // 0x327b4c: 0xc600005c  lwc1        $f0, 0x5C($s0)
    ctx->pc = 0x327b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x327b50: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x327b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x327b54: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x327b54u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x327b58: 0x0  nop
    ctx->pc = 0x327b58u;
    // NOP
    // 0x327b5c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x327b5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x327b60: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x327b60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x327b64: 0xe600005c  swc1        $f0, 0x5C($s0)
    ctx->pc = 0x327b64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
    // 0x327b68: 0x8463db2c  lh          $v1, -0x24D4($v1)
    ctx->pc = 0x327b68u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957868)));
    // 0x327b6c: 0xc6000060  lwc1        $f0, 0x60($s0)
    ctx->pc = 0x327b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x327b70: 0x246300f0  addiu       $v1, $v1, 0xF0
    ctx->pc = 0x327b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 240));
    // 0x327b74: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x327b74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x327b78: 0x0  nop
    ctx->pc = 0x327b78u;
    // NOP
    // 0x327b7c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x327b7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x327b80: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x327b80u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x327b84: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x327b84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x327b88: 0x8c46ef68  lw          $a2, -0x1098($v0)
    ctx->pc = 0x327b88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963048)));
    // 0x327b8c: 0x9205008b  lbu         $a1, 0x8B($s0)
    ctx->pc = 0x327b8cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 139)));
    // 0x327b90: 0x86020080  lh          $v0, 0x80($s0)
    ctx->pc = 0x327b90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x327b94: 0xc0c6cc4  jal         func_31B310
    ctx->pc = 0x327B94u;
    SET_GPR_U32(ctx, 31, 0x327B9Cu);
    ctx->pc = 0x327B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327B94u;
    // 0x327b98: 0x24470001  addiu       $a3, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31B310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B310u, 0x327B94u, 0x327B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327B9Cu;
label_327b9c:
    // 0x327b9c: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x327B9Cu;
    {
        const bool branch_taken_0x327b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x327b9c) {
            ctx->pc = 0x327C64u;
            goto label_327c64;
        }
    }
    ctx->pc = 0x327BA4u;
label_327ba4:
    // 0x327ba4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x327ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x327ba8: 0x54830017  bnel        $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x327BA8u;
    {
        const bool branch_taken_0x327ba8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x327ba8) {
            ctx->pc = 0x327BACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x327BA8u;
            // 0x327bac: 0x30a4ffff  andi        $a0, $a1, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x327C08u;
            goto label_327c08;
        }
    }
    ctx->pc = 0x327BB0u;
    // 0x327bb0: 0x30a4ffff  andi        $a0, $a1, 0xFFFF
    ctx->pc = 0x327bb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x327bb4: 0x96670008  lhu         $a3, 0x8($s3)
    ctx->pc = 0x327bb4u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x327bb8: 0x86050080  lh          $a1, 0x80($s0)
    ctx->pc = 0x327bb8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x327bbc: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x327bbcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x327bc0: 0xffa70000  sd          $a3, 0x0($sp)
    ctx->pc = 0x327bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 7));
    // 0x327bc4: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x327bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x327bc8: 0xffa60008  sd          $a2, 0x8($sp)
    ctx->pc = 0x327bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 6));
    // 0x327bcc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x327bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x327bd0: 0xffa40010  sd          $a0, 0x10($sp)
    ctx->pc = 0x327bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 4));
    // 0x327bd4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x327bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x327bd8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x327bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x327bdc: 0xc44c0008  lwc1        $f12, 0x8($v0)
    ctx->pc = 0x327bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x327be0: 0x8c460014  lw          $a2, 0x14($v0)
    ctx->pc = 0x327be0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x327be4: 0x8c470018  lw          $a3, 0x18($v0)
    ctx->pc = 0x327be4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x327be8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x327be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x327bec: 0x966b0006  lhu         $t3, 0x6($s3)
    ctx->pc = 0x327becu;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x327bf0: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x327bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x327bf4: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x327bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x327bf8: 0xc0c6c34  jal         func_31B0D0
    ctx->pc = 0x327BF8u;
    SET_GPR_U32(ctx, 31, 0x327C00u);
    ctx->pc = 0x327BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327BF8u;
    // 0x327bfc: 0x962a00d4  lhu         $t2, 0xD4($s1) (Delay Slot)
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 212)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31B0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B0D0u, 0x327BF8u, 0x327C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327C00u;
label_327c00:
    // 0x327c00: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x327C00u;
    {
        const bool branch_taken_0x327c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x327c00) {
            ctx->pc = 0x327C64u;
            goto label_327c64;
        }
    }
    ctx->pc = 0x327C08u;
label_327c08:
    // 0x327c08: 0x96670008  lhu         $a3, 0x8($s3)
    ctx->pc = 0x327c08u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x327c0c: 0x86050080  lh          $a1, 0x80($s0)
    ctx->pc = 0x327c0cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x327c10: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x327c10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x327c14: 0xffa70000  sd          $a3, 0x0($sp)
    ctx->pc = 0x327c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 7));
    // 0x327c18: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x327c18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x327c1c: 0xffa60008  sd          $a2, 0x8($sp)
    ctx->pc = 0x327c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 6));
    // 0x327c20: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x327c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x327c24: 0xffa40010  sd          $a0, 0x10($sp)
    ctx->pc = 0x327c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 4));
    // 0x327c28: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x327c28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x327c2c: 0x96240028  lhu         $a0, 0x28($s1)
    ctx->pc = 0x327c2cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x327c30: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x327c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x327c34: 0x962400de  lhu         $a0, 0xDE($s1)
    ctx->pc = 0x327c34u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 222)));
    // 0x327c38: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x327c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x327c3c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x327c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x327c40: 0xc44c0008  lwc1        $f12, 0x8($v0)
    ctx->pc = 0x327c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x327c44: 0x8c460014  lw          $a2, 0x14($v0)
    ctx->pc = 0x327c44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x327c48: 0x8c470018  lw          $a3, 0x18($v0)
    ctx->pc = 0x327c48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x327c4c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x327c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x327c50: 0x966b0006  lhu         $t3, 0x6($s3)
    ctx->pc = 0x327c50u;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x327c54: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x327c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x327c58: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x327c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x327c5c: 0xc0c6b54  jal         func_31AD50
    ctx->pc = 0x327C5Cu;
    SET_GPR_U32(ctx, 31, 0x327C64u);
    ctx->pc = 0x327C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327C5Cu;
    // 0x327c60: 0x962a00d4  lhu         $t2, 0xD4($s1) (Delay Slot)
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 212)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31AD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31AD50u, 0x327C5Cu, 0x327C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327C64u;
label_327c64:
    // 0x327c64: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x327c64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_327c68:
    // 0x327c68: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x327c68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x327c6c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x327c6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x327c70: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x327c70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x327c74: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x327c74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x327c78: 0x3e00008  jr          $ra
    ctx->pc = 0x327C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327C78u;
        // 0x327c7c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327C78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327C80u;
    // 0x327c80: 0x3e00008  jr          $ra
    ctx->pc = 0x327C80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327C80u;
        // 0x327c84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327C80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327C88u;
    // 0x327c88: 0x0  nop
    ctx->pc = 0x327c88u;
    // NOP
    // 0x327c8c: 0x0  nop
    ctx->pc = 0x327c8cu;
    // NOP
    // 0x327c90: 0x3e00008  jr          $ra
    ctx->pc = 0x327C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327C90u;
        // 0x327c94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327C90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327C98u;
    // 0x327c98: 0x0  nop
    ctx->pc = 0x327c98u;
    // NOP
    // 0x327c9c: 0x0  nop
    ctx->pc = 0x327c9cu;
    // NOP
    if (ctx->pc == 0x327c9cu) { ctx->pc = 0x327ca0u; }
}
