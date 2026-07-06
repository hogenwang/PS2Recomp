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

// Function: sub_0016A3D0
// Address: 0x16a3d0 - 0x16a650
void sub_0016A3D0_0x16a3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A3D0_0x16a3d0");
#endif

    switch (ctx->pc) {
        case 0x16a434u: goto label_16a434;
        case 0x16a604u: goto label_16a604;
        default: break;
    }

    ctx->pc = 0x16a3d0u;

label_16a3d0:
    // 0x16a3d0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x16a3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x16a3d4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x16a3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x16a3d8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x16a3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x16a3dc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x16a3dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x16a3e0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x16a3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x16a3e4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x16a3e4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a3e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x16a3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x16a3ec: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x16a3ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a3f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16a3f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16a3f4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x16a3f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a3f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16a3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16a3fc: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x16a3fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x16a400: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16a400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16a404: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x16a404u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a408: 0x94b10000  lhu         $s1, 0x0($a1)
    ctx->pc = 0x16a408u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16a40c: 0x9483001a  lhu         $v1, 0x1A($a0)
    ctx->pc = 0x16a40cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x16a410: 0x9482011c  lhu         $v0, 0x11C($a0)
    ctx->pc = 0x16a410u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 284)));
    // 0x16a414: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x16a414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x16a418: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x16a418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x16a41c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x16a41cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x16a420: 0x1a20007d  blez        $s1, . + 4 + (0x7D << 2)
    ctx->pc = 0x16A420u;
    {
        const bool branch_taken_0x16a420 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x16A424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A420u;
        // 0x16a424: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a420) {
            ctx->pc = 0x16A618u;
            goto label_16a618;
        }
    }
    ctx->pc = 0x16A428u;
    // 0x16a428: 0x3070ffff  andi        $s0, $v1, 0xFFFF
    ctx->pc = 0x16a428u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x16a42c: 0x3056ffff  andi        $s6, $v0, 0xFFFF
    ctx->pc = 0x16a42cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x16a430: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x16a430u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_16a434:
    // 0x16a434: 0x96860004  lhu         $a2, 0x4($s4)
    ctx->pc = 0x16a434u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x16a438: 0x30430fe0  andi        $v1, $v0, 0xFE0
    ctx->pc = 0x16a438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4064);
    // 0x16a43c: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x16a43cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x16a440: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x16a440u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x16a444: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x16a444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x16a448: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x16a448u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x16a44c: 0x14400064  bnez        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x16A44Cu;
    {
        const bool branch_taken_0x16a44c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A44Cu;
        // 0x16a450: 0x26940006  addiu       $s4, $s4, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a44c) {
            ctx->pc = 0x16A5E0u;
            goto label_16a5e0;
        }
    }
    ctx->pc = 0x16A454u;
    // 0x16a454: 0x2121023  subu        $v0, $s0, $s2
    ctx->pc = 0x16a454u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x16a458: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x16a458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x16a45c: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16A45Cu;
    {
        const bool branch_taken_0x16a45c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x16A460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A45Cu;
        // 0x16a460: 0x3043003f  andi        $v1, $v0, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a45c) {
            ctx->pc = 0x16A470u;
            goto label_16a470;
        }
    }
    ctx->pc = 0x16A464u;
    // 0x16a464: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x16A464u;
    {
        const bool branch_taken_0x16a464 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a464) {
            ctx->pc = 0x16A468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16A464u;
            // 0x16a468: 0x2d21023  subu        $v0, $s6, $s2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16A474u;
            goto label_16a474;
        }
    }
    ctx->pc = 0x16A46Cu;
    // 0x16a46c: 0x2463ffc0  addiu       $v1, $v1, -0x40
    ctx->pc = 0x16a46cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
label_16a470:
    // 0x16a470: 0x2d21023  subu        $v0, $s6, $s2
    ctx->pc = 0x16a470u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
label_16a474:
    // 0x16a474: 0x24450040  addiu       $a1, $v0, 0x40
    ctx->pc = 0x16a474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x16a478: 0x4a10004  bgez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16A478u;
    {
        const bool branch_taken_0x16a478 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x16A47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A478u;
        // 0x16a47c: 0x30a2003f  andi        $v0, $a1, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a478) {
            ctx->pc = 0x16A48Cu;
            goto label_16a48c;
        }
    }
    ctx->pc = 0x16A480u;
    // 0x16a480: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x16A480u;
    {
        const bool branch_taken_0x16a480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a480) {
            ctx->pc = 0x16A484u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16A480u;
            // 0x16a484: 0x30c6ffff  andi        $a2, $a2, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x16A490u;
            goto label_16a490;
        }
    }
    ctx->pc = 0x16A488u;
    // 0x16a488: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x16a488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
label_16a48c:
    // 0x16a48c: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x16a48cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
label_16a490:
    // 0x16a490: 0x30c50001  andi        $a1, $a2, 0x1
    ctx->pc = 0x16a490u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x16a494: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16A494u;
    {
        const bool branch_taken_0x16a494 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a494) {
            ctx->pc = 0x16A4A8u;
            goto label_16a4a8;
        }
    }
    ctx->pc = 0x16A49Cu;
    // 0x16a49c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x16A49Cu;
    {
        const bool branch_taken_0x16a49c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A49Cu;
        // 0x16a4a0: 0x64070001  daddiu      $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a49c) {
            ctx->pc = 0x16A558u;
            goto label_16a558;
        }
    }
    ctx->pc = 0x16A4A4u;
    // 0x16a4a4: 0x0  nop
    ctx->pc = 0x16a4a4u;
    // NOP
label_16a4a8:
    // 0x16a4a8: 0x30c50002  andi        $a1, $a2, 0x2
    ctx->pc = 0x16a4a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
    // 0x16a4ac: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16A4ACu;
    {
        const bool branch_taken_0x16a4ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a4ac) {
            ctx->pc = 0x16A4C0u;
            goto label_16a4c0;
        }
    }
    ctx->pc = 0x16A4B4u;
    // 0x16a4b4: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x16A4B4u;
    {
        const bool branch_taken_0x16a4b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A4B4u;
        // 0x16a4b8: 0x64070002  daddiu      $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a4b4) {
            ctx->pc = 0x16A558u;
            goto label_16a558;
        }
    }
    ctx->pc = 0x16A4BCu;
    // 0x16a4bc: 0x0  nop
    ctx->pc = 0x16a4bcu;
    // NOP
label_16a4c0:
    // 0x16a4c0: 0x30c50004  andi        $a1, $a2, 0x4
    ctx->pc = 0x16a4c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
    // 0x16a4c4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16A4C4u;
    {
        const bool branch_taken_0x16a4c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a4c4) {
            ctx->pc = 0x16A4D8u;
            goto label_16a4d8;
        }
    }
    ctx->pc = 0x16A4CCu;
    // 0x16a4cc: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x16A4CCu;
    {
        const bool branch_taken_0x16a4cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A4CCu;
        // 0x16a4d0: 0x64070004  daddiu      $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a4cc) {
            ctx->pc = 0x16A558u;
            goto label_16a558;
        }
    }
    ctx->pc = 0x16A4D4u;
    // 0x16a4d4: 0x0  nop
    ctx->pc = 0x16a4d4u;
    // NOP
label_16a4d8:
    // 0x16a4d8: 0x30c50008  andi        $a1, $a2, 0x8
    ctx->pc = 0x16a4d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8);
    // 0x16a4dc: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16A4DCu;
    {
        const bool branch_taken_0x16a4dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a4dc) {
            ctx->pc = 0x16A4F0u;
            goto label_16a4f0;
        }
    }
    ctx->pc = 0x16A4E4u;
    // 0x16a4e4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x16A4E4u;
    {
        const bool branch_taken_0x16a4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A4E4u;
        // 0x16a4e8: 0x64070008  daddiu      $a3, $zero, 0x8 (Delay Slot)
        SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a4e4) {
            ctx->pc = 0x16A558u;
            goto label_16a558;
        }
    }
    ctx->pc = 0x16A4ECu;
    // 0x16a4ec: 0x0  nop
    ctx->pc = 0x16a4ecu;
    // NOP
label_16a4f0:
    // 0x16a4f0: 0x30c50010  andi        $a1, $a2, 0x10
    ctx->pc = 0x16a4f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16);
    // 0x16a4f4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16A4F4u;
    {
        const bool branch_taken_0x16a4f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a4f4) {
            ctx->pc = 0x16A508u;
            goto label_16a508;
        }
    }
    ctx->pc = 0x16A4FCu;
    // 0x16a4fc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x16A4FCu;
    {
        const bool branch_taken_0x16a4fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A4FCu;
        // 0x16a500: 0x64070005  daddiu      $a3, $zero, 0x5 (Delay Slot)
        SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)5);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a4fc) {
            ctx->pc = 0x16A558u;
            goto label_16a558;
        }
    }
    ctx->pc = 0x16A504u;
    // 0x16a504: 0x0  nop
    ctx->pc = 0x16a504u;
    // NOP
label_16a508:
    // 0x16a508: 0x30c50020  andi        $a1, $a2, 0x20
    ctx->pc = 0x16a508u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32);
    // 0x16a50c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16A50Cu;
    {
        const bool branch_taken_0x16a50c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a50c) {
            ctx->pc = 0x16A520u;
            goto label_16a520;
        }
    }
    ctx->pc = 0x16A514u;
    // 0x16a514: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x16A514u;
    {
        const bool branch_taken_0x16a514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A514u;
        // 0x16a518: 0x64070009  daddiu      $a3, $zero, 0x9 (Delay Slot)
        SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)9);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a514) {
            ctx->pc = 0x16A558u;
            goto label_16a558;
        }
    }
    ctx->pc = 0x16A51Cu;
    // 0x16a51c: 0x0  nop
    ctx->pc = 0x16a51cu;
    // NOP
label_16a520:
    // 0x16a520: 0x30c50040  andi        $a1, $a2, 0x40
    ctx->pc = 0x16a520u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)64);
    // 0x16a524: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16A524u;
    {
        const bool branch_taken_0x16a524 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a524) {
            ctx->pc = 0x16A538u;
            goto label_16a538;
        }
    }
    ctx->pc = 0x16A52Cu;
    // 0x16a52c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x16A52Cu;
    {
        const bool branch_taken_0x16a52c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A52Cu;
        // 0x16a530: 0x64070006  daddiu      $a3, $zero, 0x6 (Delay Slot)
        SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)6);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a52c) {
            ctx->pc = 0x16A558u;
            goto label_16a558;
        }
    }
    ctx->pc = 0x16A534u;
    // 0x16a534: 0x0  nop
    ctx->pc = 0x16a534u;
    // NOP
label_16a538:
    // 0x16a538: 0x30c50080  andi        $a1, $a2, 0x80
    ctx->pc = 0x16a538u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)128);
    // 0x16a53c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16A53Cu;
    {
        const bool branch_taken_0x16a53c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a53c) {
            ctx->pc = 0x16A550u;
            goto label_16a550;
        }
    }
    ctx->pc = 0x16A544u;
    // 0x16a544: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16A544u;
    {
        const bool branch_taken_0x16a544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A544u;
        // 0x16a548: 0x6407000a  daddiu      $a3, $zero, 0xA (Delay Slot)
        SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)10);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a544) {
            ctx->pc = 0x16A558u;
            goto label_16a558;
        }
    }
    ctx->pc = 0x16A54Cu;
    // 0x16a54c: 0x0  nop
    ctx->pc = 0x16a54cu;
    // NOP
label_16a550:
    // 0x16a550: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16a550u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a554: 0x0  nop
    ctx->pc = 0x16a554u;
    // NOP
label_16a558:
    // 0x16a558: 0x30e5ffff  andi        $a1, $a3, 0xFFFF
    ctx->pc = 0x16a558u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x16a55c: 0x30a500f0  andi        $a1, $a1, 0xF0
    ctx->pc = 0x16a55cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)240);
    // 0x16a560: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16A560u;
    {
        const bool branch_taken_0x16a560 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a560) {
            ctx->pc = 0x16A570u;
            goto label_16a570;
        }
    }
    ctx->pc = 0x16A568u;
    // 0x16a568: 0x30e5ff0f  andi        $a1, $a3, 0xFF0F
    ctx->pc = 0x16a568u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65295);
    // 0x16a56c: 0x30a7ffff  andi        $a3, $a1, 0xFFFF
    ctx->pc = 0x16a56cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_16a570:
    // 0x16a570: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16a570u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16a574: 0x2a33021  addu        $a2, $s5, $v1
    ctx->pc = 0x16a574u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x16a578: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x16a578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x16a57c: 0xa4c7001e  sh          $a3, 0x1E($a2)
    ctx->pc = 0x16a57cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 30), (uint16_t)GPR_U32(ctx, 7));
    // 0x16a580: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x16a580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x16a584: 0xa4c5001c  sh          $a1, 0x1C($a2)
    ctx->pc = 0x16a584u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 28), (uint16_t)GPR_U32(ctx, 5));
    // 0x16a588: 0x96a3001a  lhu         $v1, 0x1A($s5)
    ctx->pc = 0x16a588u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 26)));
    // 0x16a58c: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x16a58cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x16a590: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16A590u;
    {
        const bool branch_taken_0x16a590 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x16A594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A590u;
        // 0x16a594: 0x3083003f  andi        $v1, $a0, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a590) {
            ctx->pc = 0x16A5A4u;
            goto label_16a5a4;
        }
    }
    ctx->pc = 0x16A598u;
    // 0x16a598: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x16A598u;
    {
        const bool branch_taken_0x16a598 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a598) {
            ctx->pc = 0x16A59Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16A598u;
            // 0x16a59c: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16A5A8u;
            goto label_16a5a8;
        }
    }
    ctx->pc = 0x16A5A0u;
    // 0x16a5a0: 0x2463ffc0  addiu       $v1, $v1, -0x40
    ctx->pc = 0x16a5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
label_16a5a4:
    // 0x16a5a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16a5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_16a5a8:
    // 0x16a5a8: 0xa6a3001a  sh          $v1, 0x1A($s5)
    ctx->pc = 0x16a5a8u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 26), (uint16_t)GPR_U32(ctx, 3));
    // 0x16a5ac: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x16a5acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x16a5b0: 0xa4470120  sh          $a3, 0x120($v0)
    ctx->pc = 0x16a5b0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 288), (uint16_t)GPR_U32(ctx, 7));
    // 0x16a5b4: 0xa445011e  sh          $a1, 0x11E($v0)
    ctx->pc = 0x16a5b4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 286), (uint16_t)GPR_U32(ctx, 5));
    // 0x16a5b8: 0x96a2011c  lhu         $v0, 0x11C($s5)
    ctx->pc = 0x16a5b8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 284)));
    // 0x16a5bc: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x16a5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16a5c0: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16A5C0u;
    {
        const bool branch_taken_0x16a5c0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x16A5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A5C0u;
        // 0x16a5c4: 0x3062003f  andi        $v0, $v1, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a5c0) {
            ctx->pc = 0x16A5D4u;
            goto label_16a5d4;
        }
    }
    ctx->pc = 0x16A5C8u;
    // 0x16a5c8: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x16A5C8u;
    {
        const bool branch_taken_0x16a5c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a5c8) {
            ctx->pc = 0x16A5CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16A5C8u;
            // 0x16a5cc: 0xa6a2011c  sh          $v0, 0x11C($s5) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 21), 284), (uint16_t)GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16A608u;
            goto label_16a608;
        }
    }
    ctx->pc = 0x16A5D0u;
    // 0x16a5d0: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x16a5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
label_16a5d4:
    // 0x16a5d4: 0xa6a2011c  sh          $v0, 0x11C($s5)
    ctx->pc = 0x16a5d4u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 284), (uint16_t)GPR_U32(ctx, 2));
    // 0x16a5d8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x16A5D8u;
    {
        const bool branch_taken_0x16a5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a5d8) {
            ctx->pc = 0x16A608u;
            goto label_16a608;
        }
    }
    ctx->pc = 0x16A5E0u;
label_16a5e0:
    // 0x16a5e0: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x16A5E0u;
    {
        const bool branch_taken_0x16a5e0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a5e0) {
            ctx->pc = 0x16A5F0u;
            goto label_16a5f0;
        }
    }
    ctx->pc = 0x16A5E8u;
    // 0x16a5e8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x16A5E8u;
    {
        const bool branch_taken_0x16a5e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A5E8u;
        // 0x16a5ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a5e8) {
            ctx->pc = 0x16A61Cu;
            goto label_16a61c;
        }
    }
    ctx->pc = 0x16A5F0u;
label_16a5f0:
    // 0x16a5f0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x16a5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x16a5f4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x16a5f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a5f8: 0x24a52dd0  addiu       $a1, $a1, 0x2DD0
    ctx->pc = 0x16a5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11728));
    // 0x16a5fc: 0xc05a8f4  jal         func_16A3D0
    ctx->pc = 0x16A5FCu;
    SET_GPR_U32(ctx, 31, 0x16A604u);
    ctx->pc = 0x16A600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A5FCu;
    // 0x16a600: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A3D0u;
    goto label_16a3d0;
    ctx->pc = 0x16A604u;
label_16a604:
    // 0x16a604: 0x0  nop
    ctx->pc = 0x16a604u;
    // NOP
label_16a608:
    // 0x16a608: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x16a608u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x16a60c: 0x251102a  slt         $v0, $s2, $s1
    ctx->pc = 0x16a60cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x16a610: 0x5440ff88  bnel        $v0, $zero, . + 4 + (-0x78 << 2)
    ctx->pc = 0x16A610u;
    {
        const bool branch_taken_0x16a610 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16a610) {
            ctx->pc = 0x16A614u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16A610u;
            // 0x16a614: 0x96820000  lhu         $v0, 0x0($s4) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16A434u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16a434;
        }
    }
    ctx->pc = 0x16A618u;
label_16a618:
    // 0x16a618: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16a618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16a61c:
    // 0x16a61c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x16a61cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16a620: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x16a620u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16a624: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x16a624u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16a628: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x16a628u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16a62c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x16a62cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16a630: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16a630u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16a634: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16a634u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16a638: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16a638u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a63c: 0x3e00008  jr          $ra
    ctx->pc = 0x16A63Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A63Cu;
        // 0x16a640: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A63Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16A644u;
    // 0x16a644: 0x0  nop
    ctx->pc = 0x16a644u;
    // NOP
    // 0x16a648: 0x0  nop
    ctx->pc = 0x16a648u;
    // NOP
    // 0x16a64c: 0x0  nop
    ctx->pc = 0x16a64cu;
    // NOP
}
