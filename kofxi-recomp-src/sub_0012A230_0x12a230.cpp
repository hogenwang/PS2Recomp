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

// Function: sub_0012A230
// Address: 0x12a230 - 0x12a3e0
void sub_0012A230_0x12a230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012A230_0x12a230");
#endif

    switch (ctx->pc) {
        case 0x12a2b0u: goto label_12a2b0;
        case 0x12a328u: goto label_12a328;
        case 0x12a358u: goto label_12a358;
        case 0x12a3a8u: goto label_12a3a8;
        default: break;
    }

    ctx->pc = 0x12a230u;

    // 0x12a230: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x12a230u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a234: 0x31020007  andi        $v0, $t0, 0x7
    ctx->pc = 0x12a234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)7);
    // 0x12a238: 0x54400044  bnel        $v0, $zero, . + 4 + (0x44 << 2)
    ctx->pc = 0x12A238u;
    {
        const bool branch_taken_0x12a238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12a238) {
            ctx->pc = 0x12A23Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12A238u;
            // 0x12a23c: 0x80820000  lb          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12A34Cu;
            goto label_12a34c;
        }
    }
    ctx->pc = 0x12A240u;
    // 0x12a240: 0x3103000f  andi        $v1, $t0, 0xF
    ctx->pc = 0x12a240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15);
    // 0x12a244: 0x54600025  bnel        $v1, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x12A244u;
    {
        const bool branch_taken_0x12a244 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12a244) {
            ctx->pc = 0x12A248u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12A244u;
            // 0x12a248: 0xdd020000  ld          $v0, 0x0($t0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12A2DCu;
            goto label_12a2dc;
        }
    }
    ctx->pc = 0x12A24Cu;
    // 0x12a24c: 0x3c070101  lui         $a3, 0x101
    ctx->pc = 0x12a24cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)257 << 16));
    // 0x12a250: 0x34e70101  ori         $a3, $a3, 0x101
    ctx->pc = 0x12a250u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)257);
    // 0x12a254: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x12a254u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x12a258: 0x34e70101  ori         $a3, $a3, 0x101
    ctx->pc = 0x12a258u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)257);
    // 0x12a25c: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x12a25cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x12a260: 0x34e70101  ori         $a3, $a3, 0x101
    ctx->pc = 0x12a260u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)257);
    // 0x12a264: 0x79020000  lq          $v0, 0x0($t0)
    ctx->pc = 0x12a264u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x12a268: 0x70e74b89  pcpyld      $t1, $a3, $a3
    ctx->pc = 0x12a268u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 7)));
    // 0x12a26c: 0x3c048080  lui         $a0, 0x8080
    ctx->pc = 0x12a26cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32896 << 16));
    // 0x12a270: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x12a270u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x12a274: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x12a274u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x12a278: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x12a278u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x12a27c: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x12a27cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x12a280: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x12a280u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x12a284: 0x70491a48  psubb       $v1, $v0, $t1
    ctx->pc = 0x12a284u;
    SET_GPR_VEC(ctx, 3, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x12a288: 0x700214e9  pnor        $v0, $zero, $v0
    ctx->pc = 0x12a288u;
    SET_GPR_VEC(ctx, 2, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x12a28c: 0x70845389  pcpyld      $t2, $a0, $a0
    ctx->pc = 0x12a28cu;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 4)));
    // 0x12a290: 0x70621c89  pand        $v1, $v1, $v0
    ctx->pc = 0x12a290u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x12a294: 0x706a1c89  pand        $v1, $v1, $t2
    ctx->pc = 0x12a294u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 10)));
    // 0x12a298: 0x706413a9  pcpyud      $v0, $v1, $a0
    ctx->pc = 0x12a298u;
    SET_GPR_VEC(ctx, 2, _mm_unpackhi_epi64(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x12a29c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x12a29cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x12a2a0: 0x14600028  bnez        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x12A2A0u;
    {
        const bool branch_taken_0x12a2a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A2A0u;
        // 0x12a2a4: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a2a0) {
            ctx->pc = 0x12A344u;
            goto label_12a344;
        }
    }
    ctx->pc = 0x12A2A8u;
    // 0x12a2a8: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x12a2a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x12a2ac: 0x0  nop
    ctx->pc = 0x12a2acu;
    // NOP
label_12a2b0:
    // 0x12a2b0: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x12a2b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x12a2b4: 0x70021ce9  pnor        $v1, $zero, $v0
    ctx->pc = 0x12a2b4u;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x12a2b8: 0x70491248  psubb       $v0, $v0, $t1
    ctx->pc = 0x12a2b8u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x12a2bc: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x12a2bcu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x12a2c0: 0x704a1489  pand        $v0, $v0, $t2
    ctx->pc = 0x12a2c0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x12a2c4: 0x70441ba9  pcpyud      $v1, $v0, $a0
    ctx->pc = 0x12a2c4u;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x12a2c8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x12a2c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x12a2cc: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x12A2CCu;
    {
        const bool branch_taken_0x12a2cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A2CCu;
        // 0x12a2d0: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a2cc) {
            ctx->pc = 0x12A2B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12a2b0;
        }
    }
    ctx->pc = 0x12A2D4u;
    // 0x12a2d4: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x12A2D4u;
    {
        const bool branch_taken_0x12a2d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A2D4u;
        // 0x12a2d8: 0x24e7fff0  addiu       $a3, $a3, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a2d4) {
            ctx->pc = 0x12A344u;
            goto label_12a344;
        }
    }
    ctx->pc = 0x12A2DCu;
label_12a2dc:
    // 0x12a2dc: 0x3c090101  lui         $t1, 0x101
    ctx->pc = 0x12a2dcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)257 << 16));
    // 0x12a2e0: 0x35290101  ori         $t1, $t1, 0x101
    ctx->pc = 0x12a2e0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)257);
    // 0x12a2e4: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x12a2e4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x12a2e8: 0x35290101  ori         $t1, $t1, 0x101
    ctx->pc = 0x12a2e8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)257);
    // 0x12a2ec: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x12a2ecu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x12a2f0: 0x35290101  ori         $t1, $t1, 0x101
    ctx->pc = 0x12a2f0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)257);
    // 0x12a2f4: 0x3c048080  lui         $a0, 0x8080
    ctx->pc = 0x12a2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32896 << 16));
    // 0x12a2f8: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x12a2f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x12a2fc: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x12a2fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x12a300: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x12a300u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x12a304: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x12a304u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x12a308: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x12a308u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x12a30c: 0x49182f  dsubu       $v1, $v0, $t1
    ctx->pc = 0x12a30cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) - GPR_U64(ctx, 9));
    // 0x12a310: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x12a310u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x12a314: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x12a314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x12a318: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x12a318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x12a31c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x12A31Cu;
    {
        const bool branch_taken_0x12a31c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A31Cu;
        // 0x12a320: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a31c) {
            ctx->pc = 0x12A344u;
            goto label_12a344;
        }
    }
    ctx->pc = 0x12A324u;
    // 0x12a324: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x12a324u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_12a328:
    // 0x12a328: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x12a328u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x12a32c: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x12a32cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x12a330: 0x49102f  dsubu       $v0, $v0, $t1
    ctx->pc = 0x12a330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 9));
    // 0x12a334: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x12a334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x12a338: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x12a338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x12a33c: 0x5040fffa  beql        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12A33Cu;
    {
        const bool branch_taken_0x12a33c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a33c) {
            ctx->pc = 0x12A340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12A33Cu;
            // 0x12a340: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12A328u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12a328;
        }
    }
    ctx->pc = 0x12A344u;
label_12a344:
    // 0x12a344: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x12a344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a348: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x12a348u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_12a34c:
    // 0x12a34c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x12A34Cu;
    {
        const bool branch_taken_0x12a34c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A34Cu;
        // 0x12a350: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a34c) {
            ctx->pc = 0x12A374u;
            goto label_12a374;
        }
    }
    ctx->pc = 0x12A354u;
    // 0x12a354: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x12a354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_12a358:
    // 0x12a358: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x12a358u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12a35c: 0x0  nop
    ctx->pc = 0x12a35cu;
    // NOP
    // 0x12a360: 0x0  nop
    ctx->pc = 0x12a360u;
    // NOP
    // 0x12a364: 0x0  nop
    ctx->pc = 0x12a364u;
    // NOP
    // 0x12a368: 0x0  nop
    ctx->pc = 0x12a368u;
    // NOP
    // 0x12a36c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12A36Cu;
    {
        const bool branch_taken_0x12a36c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12a36c) {
            ctx->pc = 0x12A370u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12A36Cu;
            // 0x12a370: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12A358u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12a358;
        }
    }
    ctx->pc = 0x12A374u;
label_12a374:
    // 0x12a374: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x12a374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x12a378: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x12a378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x12a37c: 0x10c20015  beq         $a2, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x12A37Cu;
    {
        const bool branch_taken_0x12a37c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x12a37c) {
            ctx->pc = 0x12A3D4u;
            goto label_12a3d4;
        }
    }
    ctx->pc = 0x12A384u;
    // 0x12a384: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x12a384u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12a388: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x12a388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x12a38c: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x12a38cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x12a390: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x12a390u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x12a394: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x12A394u;
    {
        const bool branch_taken_0x12a394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A394u;
        // 0x12a398: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a394) {
            ctx->pc = 0x12A3D4u;
            goto label_12a3d4;
        }
    }
    ctx->pc = 0x12A39Cu;
    // 0x12a39c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x12a39cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x12a3a0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x12a3a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x12a3a4: 0x0  nop
    ctx->pc = 0x12a3a4u;
    // NOP
label_12a3a8:
    // 0x12a3a8: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12A3A8u;
    {
        const bool branch_taken_0x12a3a8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a3a8) {
            ctx->pc = 0x12A3ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12A3A8u;
            // 0x12a3ac: 0xa0800000  sb          $zero, 0x0($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12A3B0u;
            goto label_12a3b0;
        }
    }
    ctx->pc = 0x12A3B0u;
label_12a3b0:
    // 0x12a3b0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x12a3b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x12a3b4: 0x10c30007  beq         $a2, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x12A3B4u;
    {
        const bool branch_taken_0x12a3b4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x12a3b4) {
            ctx->pc = 0x12A3D4u;
            goto label_12a3d4;
        }
    }
    ctx->pc = 0x12A3BCu;
    // 0x12a3bc: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x12a3bcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12a3c0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x12a3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x12a3c4: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x12a3c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x12a3c8: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x12a3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x12a3cc: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x12A3CCu;
    {
        const bool branch_taken_0x12a3cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A3CCu;
        // 0x12a3d0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a3cc) {
            ctx->pc = 0x12A3A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12a3a8;
        }
    }
    ctx->pc = 0x12A3D4u;
label_12a3d4:
    // 0x12a3d4: 0x3e00008  jr          $ra
    ctx->pc = 0x12A3D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12A3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A3D4u;
        // 0x12a3d8: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12A3D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12A3DCu;
    // 0x12a3dc: 0x0  nop
    ctx->pc = 0x12a3dcu;
    // NOP
}
