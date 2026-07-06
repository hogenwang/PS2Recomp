#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012A0F8
// Address: 0x12a0f8 - 0x12a230
void sub_0012A0F8_0x12a0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012A0F8_0x12a0f8");
#endif

    switch (ctx->pc) {
        case 0x12a170u: goto label_12a170;
        case 0x12a1ecu: goto label_12a1ec;
        case 0x12a20cu: goto label_12a20c;
        default: break;
    }

    ctx->pc = 0x12a0f8u;

    // 0x12a0f8: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x12a0f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x12a0fc: 0x14400043  bnez        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x12A0FCu;
    {
        const bool branch_taken_0x12a0fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A0FCu;
            // 0x12a100: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a0fc) {
            ctx->pc = 0x12A20Cu;
            goto label_12a20c;
        }
    }
    ctx->pc = 0x12A104u;
    // 0x12a104: 0x3083000f  andi        $v1, $a0, 0xF
    ctx->pc = 0x12a104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x12a108: 0x3c020101  lui         $v0, 0x101
    ctx->pc = 0x12a108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)257 << 16));
    // 0x12a10c: 0x34420101  ori         $v0, $v0, 0x101
    ctx->pc = 0x12a10cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)257);
    // 0x12a110: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x12a110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x12a114: 0x34420101  ori         $v0, $v0, 0x101
    ctx->pc = 0x12a114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)257);
    // 0x12a118: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x12a118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x12a11c: 0x34420101  ori         $v0, $v0, 0x101
    ctx->pc = 0x12a11cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)257);
    // 0x12a120: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x12A120u;
    {
        const bool branch_taken_0x12a120 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A120u;
            // 0x12a124: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a120) {
            ctx->pc = 0x12A19Cu;
            goto label_12a19c;
        }
    }
    ctx->pc = 0x12A128u;
    // 0x12a128: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x12a128u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12a12c: 0x70424389  pcpyld      $t0, $v0, $v0
    ctx->pc = 0x12a12cu;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x12a130: 0x3c048080  lui         $a0, 0x8080
    ctx->pc = 0x12a130u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32896 << 16));
    // 0x12a134: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x12a134u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x12a138: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x12a138u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x12a13c: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x12a13cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x12a140: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x12a140u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x12a144: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x12a144u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x12a148: 0x70681248  psubb       $v0, $v1, $t0
    ctx->pc = 0x12a148u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 3), GPR_VEC(ctx, 8)));
    // 0x12a14c: 0x70031ce9  pnor        $v1, $zero, $v1
    ctx->pc = 0x12a14cu;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x12a150: 0x70844b89  pcpyld      $t1, $a0, $a0
    ctx->pc = 0x12a150u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 4)));
    // 0x12a154: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x12a154u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x12a158: 0x70491489  pand        $v0, $v0, $t1
    ctx->pc = 0x12a158u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x12a15c: 0x70481ba9  pcpyud      $v1, $v0, $t0
    ctx->pc = 0x12a15cu;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x12a160: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x12a160u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x12a164: 0x54c00029  bnel        $a2, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x12A164u;
    {
        const bool branch_taken_0x12a164 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x12a164) {
            ctx->pc = 0x12A168u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12A164u;
            // 0x12a168: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12A20Cu;
            goto label_12a20c;
        }
    }
    ctx->pc = 0x12A16Cu;
    // 0x12a16c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x12a16cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_12a170:
    // 0x12a170: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x12a170u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12a174: 0x70021ce9  pnor        $v1, $zero, $v0
    ctx->pc = 0x12a174u;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x12a178: 0x70481248  psubb       $v0, $v0, $t0
    ctx->pc = 0x12a178u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x12a17c: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x12a17cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x12a180: 0x70492489  pand        $a0, $v0, $t1
    ctx->pc = 0x12a180u;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x12a184: 0x70861ba9  pcpyud      $v1, $a0, $a2
    ctx->pc = 0x12a184u;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 4), GPR_VEC(ctx, 6)));
    // 0x12a188: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x12a188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x12a18c: 0x5060fff8  beql        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x12A18Cu;
    {
        const bool branch_taken_0x12a18c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a18c) {
            ctx->pc = 0x12A190u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12A18Cu;
            // 0x12a190: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12A170u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12a170;
        }
    }
    ctx->pc = 0x12A194u;
    // 0x12a194: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x12A194u;
    {
        const bool branch_taken_0x12a194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A194u;
            // 0x12a198: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a194) {
            ctx->pc = 0x12A20Cu;
            goto label_12a20c;
        }
    }
    ctx->pc = 0x12A19Cu;
label_12a19c:
    // 0x12a19c: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x12a19cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12a1a0: 0x3c048080  lui         $a0, 0x8080
    ctx->pc = 0x12a1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32896 << 16));
    // 0x12a1a4: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x12a1a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x12a1a8: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x12a1a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x12a1ac: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x12a1acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x12a1b0: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x12a1b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x12a1b4: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x12a1b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x12a1b8: 0x62102f  dsubu       $v0, $v1, $v0
    ctx->pc = 0x12a1b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
    // 0x12a1bc: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x12a1bcu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x12a1c0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x12a1c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x12a1c4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x12a1c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x12a1c8: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x12A1C8u;
    {
        const bool branch_taken_0x12a1c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12a1c8) {
            ctx->pc = 0x12A1CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12A1C8u;
            // 0x12a1cc: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12A20Cu;
            goto label_12a20c;
        }
    }
    ctx->pc = 0x12A1D0u;
    // 0x12a1d0: 0x3c060101  lui         $a2, 0x101
    ctx->pc = 0x12a1d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)257 << 16));
    // 0x12a1d4: 0x34c60101  ori         $a2, $a2, 0x101
    ctx->pc = 0x12a1d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)257);
    // 0x12a1d8: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x12a1d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x12a1dc: 0x34c60101  ori         $a2, $a2, 0x101
    ctx->pc = 0x12a1dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)257);
    // 0x12a1e0: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x12a1e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x12a1e4: 0x34c60101  ori         $a2, $a2, 0x101
    ctx->pc = 0x12a1e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)257);
    // 0x12a1e8: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x12a1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_12a1ec:
    // 0x12a1ec: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x12a1ecu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12a1f0: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x12a1f0u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x12a1f4: 0x46102f  dsubu       $v0, $v0, $a2
    ctx->pc = 0x12a1f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 6));
    // 0x12a1f8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x12a1f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x12a1fc: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x12a1fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x12a200: 0x5040fffa  beql        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12A200u;
    {
        const bool branch_taken_0x12a200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a200) {
            ctx->pc = 0x12A204u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12A200u;
            // 0x12a204: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12A1ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12a1ec;
        }
    }
    ctx->pc = 0x12A208u;
    // 0x12a208: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12a208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_12a20c:
    // 0x12a20c: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x12a20cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12a210: 0x0  nop
    ctx->pc = 0x12a210u;
    // NOP
    // 0x12a214: 0x0  nop
    ctx->pc = 0x12a214u;
    // NOP
    // 0x12a218: 0x0  nop
    ctx->pc = 0x12a218u;
    // NOP
    // 0x12a21c: 0x0  nop
    ctx->pc = 0x12a21cu;
    // NOP
    // 0x12a220: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12A220u;
    {
        const bool branch_taken_0x12a220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12a220) {
            ctx->pc = 0x12A224u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12A220u;
            // 0x12a224: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12A20Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12a20c;
        }
    }
    ctx->pc = 0x12A228u;
    // 0x12a228: 0x3e00008  jr          $ra
    ctx->pc = 0x12A228u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12A22Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A228u;
            // 0x12a22c: 0x871023  subu        $v0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12A230u;
    ctx->pc = 0x12a230u;
}
