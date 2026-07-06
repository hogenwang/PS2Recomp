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

// Function: sub_001C20C0
// Address: 0x1c20c0 - 0x1c2258
void sub_001C20C0_0x1c20c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C20C0_0x1c20c0");
#endif

    switch (ctx->pc) {
        case 0x1c214cu: goto label_1c214c;
        case 0x1c2180u: goto label_1c2180;
        case 0x1c2198u: goto label_1c2198;
        case 0x1c21dcu: goto label_1c21dc;
        case 0x1c21f4u: goto label_1c21f4;
        case 0x1c220cu: goto label_1c220c;
        default: break;
    }

    ctx->pc = 0x1c20c0u;

    // 0x1c20c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c20c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c20c4: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1c20c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c20c8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c20c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c20cc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1c20ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c20d0: 0x3242003f  andi        $v0, $s2, 0x3F
    ctx->pc = 0x1c20d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)63);
    // 0x1c20d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c20d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c20d8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c20d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c20dc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1c20dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c20e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c20e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c20e4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1c20e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c20e8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C20E8u;
    {
        const bool branch_taken_0x1c20e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C20ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C20E8u;
        // 0x1c20ec: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c20e8) {
            ctx->pc = 0x1C2100u;
            goto label_1c2100;
        }
    }
    ctx->pc = 0x1C20F0u;
    // 0x1c20f0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c20f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1c20f4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1C20F4u;
    {
        const bool branch_taken_0x1c20f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C20F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C20F4u;
        // 0x1c20f8: 0x24849bf0  addiu       $a0, $a0, -0x6410 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941680));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c20f4) {
            ctx->pc = 0x1C2190u;
            goto label_1c2190;
        }
    }
    ctx->pc = 0x1C20FCu;
    // 0x1c20fc: 0x0  nop
    ctx->pc = 0x1c20fcu;
    // NOP
label_1c2100:
    // 0x1c2100: 0x3262001f  andi        $v0, $s3, 0x1F
    ctx->pc = 0x1c2100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)31);
    // 0x1c2104: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C2104u;
    {
        const bool branch_taken_0x1c2104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2104u;
        // 0x1c2108: 0x3222003f  andi        $v0, $s1, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2104) {
            ctx->pc = 0x1C2118u;
            goto label_1c2118;
        }
    }
    ctx->pc = 0x1C210Cu;
    // 0x1c210c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c210cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1c2110: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1C2110u;
    {
        const bool branch_taken_0x1c2110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2110u;
        // 0x1c2114: 0x24849c10  addiu       $a0, $a0, -0x63F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941712));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2110) {
            ctx->pc = 0x1C2190u;
            goto label_1c2190;
        }
    }
    ctx->pc = 0x1C2118u;
label_1c2118:
    // 0x1c2118: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C2118u;
    {
        const bool branch_taken_0x1c2118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C211Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2118u;
        // 0x1c211c: 0x2d020010  sltiu       $v0, $t0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2118) {
            ctx->pc = 0x1C2130u;
            goto label_1c2130;
        }
    }
    ctx->pc = 0x1C2120u;
    // 0x1c2120: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c2120u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1c2124: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c2124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2128: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C2128u;
    {
        const bool branch_taken_0x1c2128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C212Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2128u;
        // 0x1c212c: 0x24849c30  addiu       $a0, $a0, -0x63D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2128) {
            ctx->pc = 0x1C2144u;
            goto label_1c2144;
        }
    }
    ctx->pc = 0x1C2130u;
label_1c2130:
    // 0x1c2130: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C2130u;
    {
        const bool branch_taken_0x1c2130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2130u;
        // 0x1c2134: 0x81900  sll         $v1, $t0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2130) {
            ctx->pc = 0x1C2158u;
            goto label_1c2158;
        }
    }
    ctx->pc = 0x1C2138u;
    // 0x1c2138: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c2138u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1c213c: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x1c213cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2140: 0x24849c48  addiu       $a0, $a0, -0x63B8
    ctx->pc = 0x1c2140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941768));
label_1c2144:
    // 0x1c2144: 0xc06d212  jal         func_1B4848
    ctx->pc = 0x1C2144u;
    SET_GPR_U32(ctx, 31, 0x1C214Cu);
    ctx->pc = 0x1B4848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4848u, 0x1C2144u, 0x1C214Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C214Cu;
label_1c214c:
    // 0x1c214c: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x1C214Cu;
    {
        const bool branch_taken_0x1c214c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C214Cu;
        // 0x1c2150: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c214c) {
            ctx->pc = 0x1C223Cu;
            goto label_1c223c;
        }
    }
    ctx->pc = 0x1C2154u;
    // 0x1c2154: 0x0  nop
    ctx->pc = 0x1c2154u;
    // NOP
label_1c2158:
    // 0x1c2158: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1c2158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1c215c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c215cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c2160: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x1c2160u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x1c2164: 0x2610d090  addiu       $s0, $s0, -0x2F70
    ctx->pc = 0x1c2164u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294955152));
    // 0x1c2168: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x1c2168u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1c216c: 0x82080000  lb          $t0, 0x0($s0)
    ctx->pc = 0x1c216cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c2170: 0x15000032  bnez        $t0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1C2170u;
    {
        const bool branch_taken_0x1c2170 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2170u;
        // 0x1c2174: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2170) {
            ctx->pc = 0x1C223Cu;
            goto label_1c223c;
        }
    }
    ctx->pc = 0x1C2178u;
    // 0x1c2178: 0xc0707cc  jal         func_1C1F30
    ctx->pc = 0x1C2178u;
    SET_GPR_U32(ctx, 31, 0x1C2180u);
    ctx->pc = 0x1C1F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F30u, 0x1C2178u, 0x1C2180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2180u;
label_1c2180:
    // 0x1c2180: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C2180u;
    {
        const bool branch_taken_0x1c2180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2180u;
        // 0x1c2184: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2180) {
            ctx->pc = 0x1C21A0u;
            goto label_1c21a0;
        }
    }
    ctx->pc = 0x1C2188u;
    // 0x1c2188: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c2188u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1c218c: 0x24849c60  addiu       $a0, $a0, -0x63A0
    ctx->pc = 0x1c218cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941792));
label_1c2190:
    // 0x1c2190: 0xc06d212  jal         func_1B4848
    ctx->pc = 0x1C2190u;
    SET_GPR_U32(ctx, 31, 0x1C2198u);
    ctx->pc = 0x1B4848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4848u, 0x1C2190u, 0x1C2198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2198u;
label_1c2198:
    // 0x1c2198: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1C2198u;
    {
        const bool branch_taken_0x1c2198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C219Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2198u;
        // 0x1c219c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2198) {
            ctx->pc = 0x1C223Cu;
            goto label_1c223c;
        }
    }
    ctx->pc = 0x1C21A0u;
label_1c21a0:
    // 0x1c21a0: 0x2623ffc0  addiu       $v1, $s1, -0x40
    ctx->pc = 0x1c21a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967232));
    // 0x1c21a4: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x1c21a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x1c21a8: 0x2431021  addu        $v0, $s2, $v1
    ctx->pc = 0x1c21a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1c21ac: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1c21acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c21b0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1c21b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1c21b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c21b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c21b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c21b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c21bc: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x1c21bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x1c21c0: 0xae11001c  sw          $s1, 0x1C($s0)
    ctx->pc = 0x1c21c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
    // 0x1c21c4: 0xae130018  sw          $s3, 0x18($s0)
    ctx->pc = 0x1c21c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 19));
    // 0x1c21c8: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x1c21c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x1c21cc: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1c21ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1c21d0: 0xae12000c  sw          $s2, 0xC($s0)
    ctx->pc = 0x1c21d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 18));
    // 0x1c21d4: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1C21D4u;
    SET_GPR_U32(ctx, 31, 0x1C21DCu);
    ctx->pc = 0x1C21D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C21D4u;
    // 0x1c21d8: 0xa2000001  sb          $zero, 0x1($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x1C21D4u, 0x1C21DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C21DCu;
label_1c21dc:
    // 0x1c21dc: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1c21dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c21e0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1c21e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c21e4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1c21e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c21e8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1c21e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1c21ec: 0xc043556  jal         func_10D558
    ctx->pc = 0x1C21ECu;
    SET_GPR_U32(ctx, 31, 0x1C21F4u);
    ctx->pc = 0x1C21F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C21ECu;
    // 0x1c21f0: 0x24a5003f  addiu       $a1, $a1, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D558u, 0x1C21ECu, 0x1C21F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C21F4u;
label_1c21f4:
    // 0x1c21f4: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1c21f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c21f8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1c21f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c21fc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1c21fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2200: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1c2200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1c2204: 0xc0435a6  jal         func_10D698
    ctx->pc = 0x1C2204u;
    SET_GPR_U32(ctx, 31, 0x1C220Cu);
    ctx->pc = 0x1C2208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2204u;
    // 0x1c2208: 0x24a5003f  addiu       $a1, $a1, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D698u, 0x1C2204u, 0x1C220Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C220Cu;
label_1c220c:
    // 0x1c220c: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x1c220cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x1c2210: 0x3c03001c  lui         $v1, 0x1C
    ctx->pc = 0x1c2210u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28 << 16));
    // 0x1c2214: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c2214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2218: 0x24632008  addiu       $v1, $v1, 0x2008
    ctx->pc = 0x1c2218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8200));
    // 0x1c221c: 0x24421ff0  addiu       $v0, $v0, 0x1FF0
    ctx->pc = 0x1c221cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8176));
    // 0x1c2220: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x1c2220u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x1c2224: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x1c2224u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c2228: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c2228u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c222c: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x1c222cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x1c2230: 0xa2040002  sb          $a0, 0x2($s0)
    ctx->pc = 0x1c2230u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c2234: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1c2234u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x1c2238: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c2238u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c223c:
    // 0x1c223c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c223cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2240: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c2240u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c2244: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c2244u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c2248: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c2248u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c224c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c224cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c2250: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2250u;
        // 0x1c2254: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2258u;
}
