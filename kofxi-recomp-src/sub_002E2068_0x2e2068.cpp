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

// Function: sub_002E2068
// Address: 0x2e2068 - 0x2e2310
void sub_002E2068_0x2e2068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E2068_0x2e2068");
#endif

    switch (ctx->pc) {
        case 0x2e20c0u: goto label_2e20c0;
        case 0x2e20e4u: goto label_2e20e4;
        case 0x2e2110u: goto label_2e2110;
        case 0x2e2138u: goto label_2e2138;
        case 0x2e2168u: goto label_2e2168;
        case 0x2e2184u: goto label_2e2184;
        case 0x2e21acu: goto label_2e21ac;
        case 0x2e21d0u: goto label_2e21d0;
        case 0x2e21f4u: goto label_2e21f4;
        case 0x2e2210u: goto label_2e2210;
        case 0x2e2234u: goto label_2e2234;
        case 0x2e2268u: goto label_2e2268;
        case 0x2e2294u: goto label_2e2294;
        case 0x2e22b0u: goto label_2e22b0;
        case 0x2e22ecu: goto label_2e22ec;
        default: break;
    }

    ctx->pc = 0x2e2068u;

    // 0x2e2068: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2e2068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2e206c: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x2e206cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x2e2070: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x2e2070u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2074: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x2e2074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2e2078: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2e2078u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e207c: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x2e207cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x2e2080: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2e2080u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2084: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x2e2084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x2e2088: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x2e2088u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e208c: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2e208cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2e2090: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x2e2090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x2e2094: 0x3c03002e  lui         $v1, 0x2E
    ctx->pc = 0x2e2094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)46 << 16));
    // 0x2e2098: 0x246320e0  addiu       $v1, $v1, 0x20E0
    ctx->pc = 0x2e2098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8416));
    // 0x2e209c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2e209cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e20a0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E20A0u;
    {
        const bool branch_taken_0x2e20a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e20a0) {
            ctx->pc = 0x2E20C0u;
            goto label_2e20c0;
        }
    }
    ctx->pc = 0x2E20A8u;
    // 0x2e20a8: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2e20a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2e20ac: 0x248420f4  addiu       $a0, $a0, 0x20F4
    ctx->pc = 0x2e20acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8436));
    // 0x2e20b0: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x2e20b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2e20b4: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2e20b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2e20b8: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2E20B8u;
    SET_GPR_U32(ctx, 31, 0x2E20C0u);
    ctx->pc = 0x2E20BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E20B8u;
    // 0x2e20bc: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8FC0u, 0x2E20B8u, 0x2E20C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E20C0u;
label_2e20c0:
    // 0x2e20c0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2E20C0u;
    {
        const bool branch_taken_0x2e20c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e20c0) {
            ctx->pc = 0x2E20F4u;
            goto label_2e20f4;
        }
    }
    ctx->pc = 0x2E20C8u;
    // 0x2e20c8: 0x87a29cdb  lh          $v0, -0x6325($sp)
    ctx->pc = 0x2e20c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 4294941915)));
    // 0x2e20cc: 0xff2f4182  sd          $t7, 0x4182($t9)
    ctx->pc = 0x2e20ccu;
    WRITE64(ADD32(GPR_U32(ctx, 25), 16770), GPR_U64(ctx, 15));
    // 0x2e20d0: 0x852fd6a3  lh          $t7, -0x295D($t1)
    ctx->pc = 0x2e20d0u;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 4294956707)));
    // 0x2e20d4: 0x84adedc3  lh          $t5, -0x123D($a1)
    ctx->pc = 0x2e20d4u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4294962627)));
    // 0x2e20d8: 0x85d3dabb  lh          $s3, -0x2545($t6)
    ctx->pc = 0x2e20d8u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 4294957755)));
    // 0x2e20dc: 0xc848d60  jal         func_2123580
    ctx->pc = 0x2E20DCu;
    SET_GPR_U32(ctx, 31, 0x2E20E4u);
    ctx->pc = 0x2123580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2123580u, 0x2E20DCu, 0x2E20E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E20E4u;
label_2e20e4:
    // 0x2e20e4: 0xf2210a22  scd         $at, 0xA22($s1)
    ctx->pc = 0x2e20e4u;
    throw std::runtime_error("Unhandled opcode: 0x3C at 0x2E20E4 raw=0xF2210A22");
    // 0x2e20e8: 0xca15f86e  lwc2        $21, -0x792($s0)
    ctx->pc = 0x2e20e8u;
    throw std::runtime_error("Unhandled opcode: 0x32 at 0x2E20E8 raw=0xCA15F86E");
    // 0x2e20ec: 0xf2210b8a  scd         $at, 0xB8A($s1)
    ctx->pc = 0x2e20ecu;
    throw std::runtime_error("Unhandled opcode: 0x3C at 0x2E20EC raw=0xF2210B8A");
    // 0x2e20f0: 0x0  nop
    ctx->pc = 0x2e20f0u;
    // NOP
label_2e20f4:
    // 0x2e20f4: 0x54e2aa0a  bnel        $a3, $v0, . + 4 + (-0x55F6 << 2)
    ctx->pc = 0x2E20F4u;
    {
        const bool branch_taken_0x2e20f4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e20f4) {
            ctx->pc = 0x2E20F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E20F4u;
            // 0x2e20f8: 0x53a2ba0a  beql        $sp, $v0, . + 4 + (-0x45F6 << 2) (Delay Slot)
            // Likely branch instruction at 0x2E20F8 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CC920u;
            return;
        }
    }
    ctx->pc = 0x2E20FCu;
    // 0x2e20fc: 0x54e2ea50  bnel        $a3, $v0, . + 4 + (-0x15B0 << 2)
    ctx->pc = 0x2E20FCu;
    {
        const bool branch_taken_0x2e20fc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e20fc) {
            ctx->pc = 0x2E2100u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E20FCu;
            // 0x2e2100: 0x55aada12  bnel        $t5, $t2, . + 4 + (-0x25EE << 2) (Delay Slot)
            // Likely branch instruction at 0x2E2100 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DCA40u;
            return;
        }
    }
    ctx->pc = 0x2E2104u;
    // 0x2e2104: 0x1deaea52  .word       0x1DEAEA52                   # bgtz        $t7, . + 4 + (-0x15AE << 2) # 000A0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E2104u;
    {
        const bool branch_taken_0x2e2104 = (GPR_S32(ctx, 15) > 0);
        ctx->pc = 0x2E2108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2104u;
        // 0x2e2108: 0xde6ea78  jal         func_79BA9E0 (Delay Slot)
        // JAL 0x79BA9E0 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2104) {
            ctx->pc = 0x2DCA50u;
            return;
        }
    }
    ctx->pc = 0x2E210Cu;
    // 0x2e210c: 0x54e2ea50  bnel        $a3, $v0, . + 4 + (-0x15B0 << 2)
label_2e2110:
    if (ctx->pc == 0x2E2110u) {
        ctx->pc = 0x2E2110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E210Cu;
        // 0x2e2110: 0x54e2ea50  bnel        $a3, $v0, . + 4 + (-0x15B0 << 2) (Delay Slot)
        // Likely branch instruction at 0x2E2110 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E2114u;
        goto label_fallthrough_0x2e210c;
    }
    ctx->pc = 0x2E210Cu;
    {
        const bool branch_taken_0x2e210c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e210c) {
            ctx->pc = 0x2E2110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E210Cu;
            // 0x2e2110: 0x54e2ea50  bnel        $a3, $v0, . + 4 + (-0x15B0 << 2) (Delay Slot)
            // Likely branch instruction at 0x2E2110 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DCA50u;
            return;
        }
    }
label_fallthrough_0x2e210c:
    ctx->pc = 0x2E2114u;
    // 0x2e2114: 0x7c6315a4  sq          $v1, 0x15A4($v1)
    ctx->pc = 0x2e2114u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 5540), GPR_VEC(ctx, 3));
    // 0x2e2118: 0x1422ea51  bne         $at, $v0, . + 4 + (-0x15AF << 2)
    ctx->pc = 0x2E2118u;
    {
        const bool branch_taken_0x2e2118 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E211Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2118u;
        // 0x2e211c: 0x1b82ea10  .word       0x1B82EA10                   # blez        $gp, . + 4 + (-0x15F0 << 2) # 00020000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2E211C - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2118) {
            ctx->pc = 0x2DCA60u;
            return;
        }
    }
    ctx->pc = 0x2E2120u;
    // 0x2e2120: 0x54e2aa0a  bnel        $a3, $v0, . + 4 + (-0x55F6 << 2)
    ctx->pc = 0x2E2120u;
    {
        const bool branch_taken_0x2e2120 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e2120) {
            ctx->pc = 0x2E2124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2120u;
            // 0x2e2124: 0x54e2ea50  bnel        $a3, $v0, . + 4 + (-0x15B0 << 2) (Delay Slot)
            // Likely branch instruction at 0x2E2124 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CC94Cu;
            return;
        }
    }
    ctx->pc = 0x2E2128u;
    // 0x2e2128: 0x50eada12  beql        $a3, $t2, . + 4 + (-0x25EE << 2)
    ctx->pc = 0x2E2128u;
    {
        const bool branch_taken_0x2e2128 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 10));
        if (branch_taken_0x2e2128) {
            ctx->pc = 0x2E212Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2128u;
            // 0x2e212c: 0x1deaea52  .word       0x1DEAEA52                   # bgtz        $t7, . + 4 + (-0x15AE << 2) # 000A0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2E212C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D8974u;
            return;
        }
    }
    ctx->pc = 0x2E2130u;
    // 0x2e2130: 0xde6ea78  jal         func_79BA9E0
    ctx->pc = 0x2E2130u;
    SET_GPR_U32(ctx, 31, 0x2E2138u);
    ctx->pc = 0x2E2134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2130u;
    // 0x2e2134: 0x54e2ea50  bnel        $a3, $v0, . + 4 + (-0x15B0 << 2) (Delay Slot)
    // Likely branch instruction at 0x2E2134 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x79BA9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BA9E0u, 0x2E2130u, 0x2E2138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2138u;
label_2e2138:
    // 0x2e2138: 0x54e2ea50  bnel        $a3, $v0, . + 4 + (-0x15B0 << 2)
    ctx->pc = 0x2E2138u;
    {
        const bool branch_taken_0x2e2138 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e2138) {
            ctx->pc = 0x2E213Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2138u;
            // 0x2e213c: 0x7c6315a4  sq          $v1, 0x15A4($v1) (Delay Slot)
            WRITE128(ADD32(GPR_U32(ctx, 3), 5540), GPR_VEC(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DCA7Cu;
            return;
        }
    }
    ctx->pc = 0x2E2140u;
    // 0x2e2140: 0x1422ea51  bne         $at, $v0, . + 4 + (-0x15AF << 2)
    ctx->pc = 0x2E2140u;
    {
        const bool branch_taken_0x2e2140 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E2144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2140u;
        // 0x2e2144: 0x30a6ebae  andi        $a2, $a1, 0xEBAE (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)60334);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2140) {
            ctx->pc = 0x2DCA88u;
            return;
        }
    }
    ctx->pc = 0x2E2148u;
    // 0x2e2148: 0x3068ebae  andi        $t0, $v1, 0xEBAE
    ctx->pc = 0x2e2148u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)60334);
    // 0x2e214c: 0x5026aa12  beql        $at, $a2, . + 4 + (-0x55EE << 2)
    ctx->pc = 0x2E214Cu;
    {
        const bool branch_taken_0x2e214c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 6));
        if (branch_taken_0x2e214c) {
            ctx->pc = 0x2E2150u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E214Cu;
            // 0x2e2150: 0x1ce6ea56  .word       0x1CE6EA56                   # bgtz        $a3, . + 4 + (-0x15AA << 2) # 00060000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2E2150 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CC998u;
            return;
        }
    }
    ctx->pc = 0x2E2154u;
    // 0x2e2154: 0x50e28a0a  beql        $a3, $v0, . + 4 + (-0x75F6 << 2)
    ctx->pc = 0x2E2154u;
    {
        const bool branch_taken_0x2e2154 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e2154) {
            ctx->pc = 0x2E2158u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2154u;
            // 0x2e2158: 0xf462ea52  sdc1        $f2, -0x15AE($v1) (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x3D at 0x2E2158 raw=0xF462EA52");
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4980u;
            return;
        }
    }
    ctx->pc = 0x2E215Cu;
    // 0x2e215c: 0x54e2e9ca  bnel        $a3, $v0, . + 4 + (-0x1636 << 2)
    ctx->pc = 0x2E215Cu;
    {
        const bool branch_taken_0x2e215c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e215c) {
            ctx->pc = 0x2E2160u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E215Cu;
            // 0x2e2160: 0xc0b83a0  jal         func_2E0E80 (Delay Slot)
            // JAL 0x2E0E80 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC888u;
            return;
        }
    }
    ctx->pc = 0x2E2164u;
    // 0x2e2164: 0x54e2ea50  bnel        $a3, $v0, . + 4 + (-0x15B0 << 2)
label_2e2168:
    if (ctx->pc == 0x2E2168u) {
        ctx->pc = 0x2E2168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2164u;
        // 0x2e2168: 0x54c0ce54  bnel        $a2, $zero, . + 4 + (-0x31AC << 2) (Delay Slot)
        // Likely branch instruction at 0x2E2168 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E216Cu;
        goto label_fallthrough_0x2e2164;
    }
    ctx->pc = 0x2E2164u;
    {
        const bool branch_taken_0x2e2164 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e2164) {
            ctx->pc = 0x2E2168u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2164u;
            // 0x2e2168: 0x54c0ce54  bnel        $a2, $zero, . + 4 + (-0x31AC << 2) (Delay Slot)
            // Likely branch instruction at 0x2E2168 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DCAA8u;
            return;
        }
    }
label_fallthrough_0x2e2164:
    ctx->pc = 0x2E216Cu;
    // 0x2e216c: 0x3466ebae  ori         $a2, $v1, 0xEBAE
    ctx->pc = 0x2e216cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)60334);
    // 0x2e2170: 0x54c6be54  bnel        $a2, $a2, . + 4 + (-0x41AC << 2)
    ctx->pc = 0x2E2170u;
    {
        const bool branch_taken_0x2e2170 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 6));
        if (branch_taken_0x2e2170) {
            ctx->pc = 0x2E2174u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2170u;
            // 0x2e2174: 0x50e28a0a  beql        $a3, $v0, . + 4 + (-0x75F6 << 2) (Delay Slot)
            // Likely branch instruction at 0x2E2174 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1AC4u;
            return;
        }
    }
    ctx->pc = 0x2E2178u;
    // 0x2e2178: 0x35a8ebae  ori         $t0, $t5, 0xEBAE
    ctx->pc = 0x2e2178u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)60334);
    // 0x2e217c: 0xc0b83a0  jal         func_2E0E80
    ctx->pc = 0x2E217Cu;
    SET_GPR_U32(ctx, 31, 0x2E2184u);
    ctx->pc = 0x2E2180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E217Cu;
    // 0x2e2180: 0x5026aa12  beql        $at, $a2, . + 4 + (-0x55EE << 2) (Delay Slot)
    // Likely branch instruction at 0x2E2180 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0E80u, 0x2E217Cu, 0x2E2184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2184u;
label_2e2184:
    // 0x2e2184: 0x54e29a0a  bnel        $a3, $v0, . + 4 + (-0x65F6 << 2)
    ctx->pc = 0x2E2184u;
    {
        const bool branch_taken_0x2e2184 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e2184) {
            ctx->pc = 0x2E2188u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2184u;
            // 0x2e2188: 0x50e28a0a  beql        $a3, $v0, . + 4 + (-0x75F6 << 2) (Delay Slot)
            // Likely branch instruction at 0x2E2188 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C89B0u;
            return;
        }
    }
    ctx->pc = 0x2E218Cu;
    // 0x2e218c: 0x54e2ea50  bnel        $a3, $v0, . + 4 + (-0x15B0 << 2)
    ctx->pc = 0x2E218Cu;
    {
        const bool branch_taken_0x2e218c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e218c) {
            ctx->pc = 0x2E2190u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E218Cu;
            // 0x2e2190: 0x53acba12  beql        $sp, $t4, . + 4 + (-0x45EE << 2) (Delay Slot)
            // Likely branch instruction at 0x2E2190 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DCAD0u;
            return;
        }
    }
    ctx->pc = 0x2E2194u;
    // 0x2e2194: 0x556cca12  bnel        $t3, $t4, . + 4 + (-0x35EE << 2)
    ctx->pc = 0x2E2194u;
    {
        const bool branch_taken_0x2e2194 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 12));
        if (branch_taken_0x2e2194) {
            ctx->pc = 0x2E2198u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2194u;
            // 0x2e2198: 0x746aea51  .word       0x746AEA51                   # INVALID     $v1, $t2, -0x15AF # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x1D at 0x2E2198 raw=0x746AEA51");
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D49E0u;
            return;
        }
    }
    ctx->pc = 0x2E219Cu;
    // 0x2e219c: 0x1d2cea52  .word       0x1D2CEA52                   # bgtz        $t1, . + 4 + (-0x15AE << 2) # 000C0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E219Cu;
    {
        const bool branch_taken_0x2e219c = (GPR_S32(ctx, 9) > 0);
        ctx->pc = 0x2E21A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E219Cu;
        // 0x2e21a0: 0x75a6ea51  .word       0x75A6EA51                   # INVALID     $t5, $a2, -0x15AF # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        throw std::runtime_error("Unhandled opcode: 0x1D at 0x2E21A0 raw=0x75A6EA51");
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e219c) {
            ctx->pc = 0x2DCAE8u;
            return;
        }
    }
    ctx->pc = 0x2E21A4u;
    // 0x2e21a4: 0xd24ea78  jal         func_493A9E0
    ctx->pc = 0x2E21A4u;
    SET_GPR_U32(ctx, 31, 0x2E21ACu);
    ctx->pc = 0x2E21A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E21A4u;
    // 0x2e21a8: 0x546aca1c  bnel        $v1, $t2, . + 4 + (-0x35E4 << 2) (Delay Slot)
    // Likely branch instruction at 0x2E21A8 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x493A9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x493A9E0u, 0x2E21A4u, 0x2E21ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E21ACu;
label_2e21ac:
    // 0x2e21ac: 0x7c2315a0  sq          $v1, 0x15A0($at)
    ctx->pc = 0x2e21acu;
    WRITE128(ADD32(GPR_U32(ctx, 1), 5536), GPR_VEC(ctx, 3));
    // 0x2e21b0: 0x15a6ea51  bne         $t5, $a2, . + 4 + (-0x15AF << 2)
    ctx->pc = 0x2E21B0u;
    {
        const bool branch_taken_0x2e21b0 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 6));
        ctx->pc = 0x2E21B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E21B0u;
        // 0x2e21b4: 0x54c0c254  bnel        $a2, $zero, . + 4 + (-0x3DAC << 2) (Delay Slot)
        // Likely branch instruction at 0x2E21B4 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e21b0) {
            ctx->pc = 0x2DCAF8u;
            return;
        }
    }
    ctx->pc = 0x2E21B8u;
    // 0x2e21b8: 0x54c6b254  bnel        $a2, $a2, . + 4 + (-0x4DAC << 2)
    ctx->pc = 0x2E21B8u;
    {
        const bool branch_taken_0x2e21b8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 6));
        if (branch_taken_0x2e21b8) {
            ctx->pc = 0x2E21BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E21B8u;
            // 0x2e21bc: 0x3466ebae  ori         $a2, $v1, 0xEBAE (Delay Slot)
            SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)60334);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CEB0Cu;
            return;
        }
    }
    ctx->pc = 0x2E21C0u;
    // 0x2e21c0: 0x50e28a0a  beql        $a3, $v0, . + 4 + (-0x75F6 << 2)
    ctx->pc = 0x2E21C0u;
    {
        const bool branch_taken_0x2e21c0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e21c0) {
            ctx->pc = 0x2E21C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E21C0u;
            // 0x2e21c4: 0x35a8ebae  ori         $t0, $t5, 0xEBAE (Delay Slot)
            SET_GPR_U64(ctx, 8, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)60334);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C49ECu;
            return;
        }
    }
    ctx->pc = 0x2E21C8u;
    // 0x2e21c8: 0xc0b83a0  jal         func_2E0E80
    ctx->pc = 0x2E21C8u;
    SET_GPR_U32(ctx, 31, 0x2E21D0u);
    ctx->pc = 0x2E21CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E21C8u;
    // 0x2e21cc: 0x5026aa12  beql        $at, $a2, . + 4 + (-0x55EE << 2) (Delay Slot)
    // Likely branch instruction at 0x2E21CC - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0E80u, 0x2E21C8u, 0x2E21D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E21D0u;
label_2e21d0:
    // 0x2e21d0: 0x54e29a0a  bnel        $a3, $v0, . + 4 + (-0x65F6 << 2)
    ctx->pc = 0x2E21D0u;
    {
        const bool branch_taken_0x2e21d0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e21d0) {
            ctx->pc = 0x2E21D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E21D0u;
            // 0x2e21d4: 0x50e28a0a  beql        $a3, $v0, . + 4 + (-0x75F6 << 2) (Delay Slot)
            // Likely branch instruction at 0x2E21D4 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C89FCu;
            return;
        }
    }
    ctx->pc = 0x2E21D8u;
    // 0x2e21d8: 0x53acba12  beql        $sp, $t4, . + 4 + (-0x45EE << 2)
    ctx->pc = 0x2E21D8u;
    {
        const bool branch_taken_0x2e21d8 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 12));
        if (branch_taken_0x2e21d8) {
            ctx->pc = 0x2E21DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E21D8u;
            // 0x2e21dc: 0x556cca12  bnel        $t3, $t4, . + 4 + (-0x35EE << 2) (Delay Slot)
            // Likely branch instruction at 0x2E21DC - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0A24u;
            return;
        }
    }
    ctx->pc = 0x2E21E0u;
    // 0x2e21e0: 0x746aea51  .word       0x746AEA51                   # INVALID     $v1, $t2, -0x15AF # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2e21e0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x2E21E0 raw=0x746AEA51");
    // 0x2e21e4: 0x1d2cea52  .word       0x1D2CEA52                   # bgtz        $t1, . + 4 + (-0x15AE << 2) # 000C0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E21E4u;
    {
        const bool branch_taken_0x2e21e4 = (GPR_S32(ctx, 9) > 0);
        ctx->pc = 0x2E21E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E21E4u;
        // 0x2e21e8: 0x75a6ea51  .word       0x75A6EA51                   # INVALID     $t5, $a2, -0x15AF # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        throw std::runtime_error("Unhandled opcode: 0x1D at 0x2E21E8 raw=0x75A6EA51");
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e21e4) {
            ctx->pc = 0x2DCB30u;
            return;
        }
    }
    ctx->pc = 0x2E21ECu;
    // 0x2e21ec: 0xd24ea78  jal         func_493A9E0
    ctx->pc = 0x2E21ECu;
    SET_GPR_U32(ctx, 31, 0x2E21F4u);
    ctx->pc = 0x2E21F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E21ECu;
    // 0x2e21f0: 0x546aca1c  bnel        $v1, $t2, . + 4 + (-0x35E4 << 2) (Delay Slot)
    // Likely branch instruction at 0x2E21F0 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x493A9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x493A9E0u, 0x2E21ECu, 0x2E21F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E21F4u;
label_2e21f4:
    // 0x2e21f4: 0x7c2315a0  sq          $v1, 0x15A0($at)
    ctx->pc = 0x2e21f4u;
    WRITE128(ADD32(GPR_U32(ctx, 1), 5536), GPR_VEC(ctx, 3));
    // 0x2e21f8: 0x15a6ea51  bne         $t5, $a2, . + 4 + (-0x15AF << 2)
    ctx->pc = 0x2E21F8u;
    {
        const bool branch_taken_0x2e21f8 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 6));
        ctx->pc = 0x2E21FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E21F8u;
        // 0x2e21fc: 0x54c0c654  bnel        $a2, $zero, . + 4 + (-0x39AC << 2) (Delay Slot)
        // Likely branch instruction at 0x2E21FC - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e21f8) {
            ctx->pc = 0x2DCB40u;
            return;
        }
    }
    ctx->pc = 0x2E2200u;
    // 0x2e2200: 0x50e28a0a  beql        $a3, $v0, . + 4 + (-0x75F6 << 2)
    ctx->pc = 0x2E2200u;
    {
        const bool branch_taken_0x2e2200 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e2200) {
            ctx->pc = 0x2E2204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2200u;
            // 0x2e2204: 0x54c6b654  bnel        $a2, $a2, . + 4 + (-0x49AC << 2) (Delay Slot)
            // Likely branch instruction at 0x2E2204 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4A2Cu;
            return;
        }
    }
    ctx->pc = 0x2E2208u;
    // 0x2e2208: 0xc0b83a0  jal         func_2E0E80
    ctx->pc = 0x2E2208u;
    SET_GPR_U32(ctx, 31, 0x2E2210u);
    ctx->pc = 0x2E220Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2208u;
    // 0x2e220c: 0x5026aa12  beql        $at, $a2, . + 4 + (-0x55EE << 2) (Delay Slot)
    // Likely branch instruction at 0x2E220C - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0E80u, 0x2E2208u, 0x2E2210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2210u;
label_2e2210:
    // 0x2e2210: 0x54e29a0a  bnel        $a3, $v0, . + 4 + (-0x65F6 << 2)
    ctx->pc = 0x2E2210u;
    {
        const bool branch_taken_0x2e2210 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e2210) {
            ctx->pc = 0x2E2214u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2210u;
            // 0x2e2214: 0x50e28a0a  beql        $a3, $v0, . + 4 + (-0x75F6 << 2) (Delay Slot)
            // Likely branch instruction at 0x2E2214 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8A3Cu;
            return;
        }
    }
    ctx->pc = 0x2E2218u;
    // 0x2e2218: 0x53acba12  beql        $sp, $t4, . + 4 + (-0x45EE << 2)
    ctx->pc = 0x2E2218u;
    {
        const bool branch_taken_0x2e2218 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 12));
        if (branch_taken_0x2e2218) {
            ctx->pc = 0x2E221Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2218u;
            // 0x2e221c: 0x556cca12  bnel        $t3, $t4, . + 4 + (-0x35EE << 2) (Delay Slot)
            // Likely branch instruction at 0x2E221C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0A64u;
            return;
        }
    }
    ctx->pc = 0x2E2220u;
    // 0x2e2220: 0x746aea51  .word       0x746AEA51                   # INVALID     $v1, $t2, -0x15AF # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2e2220u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x2E2220 raw=0x746AEA51");
    // 0x2e2224: 0x1d2cea52  .word       0x1D2CEA52                   # bgtz        $t1, . + 4 + (-0x15AE << 2) # 000C0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E2224u;
    {
        const bool branch_taken_0x2e2224 = (GPR_S32(ctx, 9) > 0);
        ctx->pc = 0x2E2228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2224u;
        // 0x2e2228: 0x75a6ea51  .word       0x75A6EA51                   # INVALID     $t5, $a2, -0x15AF # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        throw std::runtime_error("Unhandled opcode: 0x1D at 0x2E2228 raw=0x75A6EA51");
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2224) {
            ctx->pc = 0x2DCB70u;
            return;
        }
    }
    ctx->pc = 0x2E222Cu;
    // 0x2e222c: 0xd24ea78  jal         func_493A9E0
    ctx->pc = 0x2E222Cu;
    SET_GPR_U32(ctx, 31, 0x2E2234u);
    ctx->pc = 0x2E2230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E222Cu;
    // 0x2e2230: 0x546aca1c  bnel        $v1, $t2, . + 4 + (-0x35E4 << 2) (Delay Slot)
    // Likely branch instruction at 0x2E2230 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x493A9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x493A9E0u, 0x2E222Cu, 0x2E2234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2234u;
label_2e2234:
    // 0x2e2234: 0x7c2315a0  sq          $v1, 0x15A0($at)
    ctx->pc = 0x2e2234u;
    WRITE128(ADD32(GPR_U32(ctx, 1), 5536), GPR_VEC(ctx, 3));
    // 0x2e2238: 0x15a6ea51  bne         $t5, $a2, . + 4 + (-0x15AF << 2)
    ctx->pc = 0x2E2238u;
    {
        const bool branch_taken_0x2e2238 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 6));
        ctx->pc = 0x2E223Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2238u;
        // 0x2e223c: 0x54e29a0a  bnel        $a3, $v0, . + 4 + (-0x65F6 << 2) (Delay Slot)
        // Likely branch instruction at 0x2E223C - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2238) {
            ctx->pc = 0x2DCB80u;
            return;
        }
    }
    ctx->pc = 0x2E2240u;
    // 0x2e2240: 0x53a28a0a  beql        $sp, $v0, . + 4 + (-0x75F6 << 2)
    ctx->pc = 0x2E2240u;
    {
        const bool branch_taken_0x2e2240 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e2240) {
            ctx->pc = 0x2E2244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2240u;
            // 0x2e2244: 0x54e2ea50  bnel        $a3, $v0, . + 4 + (-0x15B0 << 2) (Delay Slot)
            // Likely branch instruction at 0x2E2244 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4A6Cu;
            return;
        }
    }
    ctx->pc = 0x2E2248u;
    // 0x2e2248: 0x7564ea51  .word       0x7564EA51                   # INVALID     $t3, $a0, -0x15AF # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2e2248u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x2E2248 raw=0x7564EA51");
    // 0x2e224c: 0x51ecba12  beql        $t7, $t4, . + 4 + (-0x45EE << 2)
    ctx->pc = 0x2E224Cu;
    {
        const bool branch_taken_0x2e224c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 12));
        if (branch_taken_0x2e224c) {
            ctx->pc = 0x2E2250u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E224Cu;
            // 0x2e2250: 0x756aea41  .word       0x756AEA41                   # INVALID     $t3, $t2, -0x15BF # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x1D at 0x2E2250 raw=0x756AEA41");
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0A98u;
            return;
        }
    }
    ctx->pc = 0x2E2254u;
    // 0x2e2254: 0x1d6eea52  .word       0x1D6EEA52                   # bgtz        $t3, . + 4 + (-0x15AE << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E2254u;
    {
        const bool branch_taken_0x2e2254 = (GPR_S32(ctx, 11) > 0);
        ctx->pc = 0x2E2258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2254u;
        // 0x2e2258: 0x1d2cea52  .word       0x1D2CEA52                   # bgtz        $t1, . + 4 + (-0x15AE << 2) # 000C0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2E2258 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2254) {
            ctx->pc = 0x2DCBA0u;
            return;
        }
    }
    ctx->pc = 0x2E225Cu;
    // 0x2e225c: 0x542ada1c  bnel        $at, $t2, . + 4 + (-0x25E4 << 2)
    ctx->pc = 0x2E225Cu;
    {
        const bool branch_taken_0x2e225c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 10));
        if (branch_taken_0x2e225c) {
            ctx->pc = 0x2E2260u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E225Cu;
            // 0x2e2260: 0xd26ea40  jal         func_49BA900 (Delay Slot)
            // JAL 0x49BA900 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D8AD0u;
            return;
        }
    }
    ctx->pc = 0x2E2264u;
    // 0x2e2264: 0x7c6315a0  sq          $v1, 0x15A0($v1)
    ctx->pc = 0x2e2264u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 5536), GPR_VEC(ctx, 3));
label_2e2268:
    // 0x2e2268: 0x15a4ea51  bne         $t5, $a0, . + 4 + (-0x15AF << 2)
    ctx->pc = 0x2E2268u;
    {
        const bool branch_taken_0x2e2268 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 4));
        ctx->pc = 0x2E226Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2268u;
        // 0x2e226c: 0x54e29a0a  bnel        $a3, $v0, . + 4 + (-0x65F6 << 2) (Delay Slot)
        // Likely branch instruction at 0x2E226C - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2268) {
            ctx->pc = 0x2DCBB0u;
            return;
        }
    }
    ctx->pc = 0x2E2270u;
    // 0x2e2270: 0x1baeea70  .word       0x1BAEEA70                   # blez        $sp, . + 4 + (-0x1590 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E2270u;
    {
        const bool branch_taken_0x2e2270 = (GPR_S32(ctx, 29) <= 0);
        ctx->pc = 0x2E2274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2270u;
        // 0x2e2274: 0x54e2ea50  bnel        $a3, $v0, . + 4 + (-0x15B0 << 2) (Delay Slot)
        // Likely branch instruction at 0x2E2274 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2270) {
            ctx->pc = 0x2DCC34u;
            return;
        }
    }
    ctx->pc = 0x2E2278u;
    // 0x2e2278: 0x51ecaa12  beql        $t7, $t4, . + 4 + (-0x55EE << 2)
    ctx->pc = 0x2E2278u;
    {
        const bool branch_taken_0x2e2278 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 12));
        if (branch_taken_0x2e2278) {
            ctx->pc = 0x2E227Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2278u;
            // 0x2e227c: 0x1d2cea52  .word       0x1D2CEA52                   # bgtz        $t1, . + 4 + (-0x15AE << 2) # 000C0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2E227C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CCAC4u;
            return;
        }
    }
    ctx->pc = 0x2E2280u;
    // 0x2e2280: 0x7564ea51  .word       0x7564EA51                   # INVALID     $t3, $a0, -0x15AF # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2e2280u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x2E2280 raw=0x7564EA51");
    // 0x2e2284: 0x1d6eea52  .word       0x1D6EEA52                   # bgtz        $t3, . + 4 + (-0x15AE << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E2284u;
    {
        const bool branch_taken_0x2e2284 = (GPR_S32(ctx, 11) > 0);
        ctx->pc = 0x2E2288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2284u;
        // 0x2e2288: 0x75e6ea51  .word       0x75E6EA51                   # INVALID     $t7, $a2, -0x15AF # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        throw std::runtime_error("Unhandled opcode: 0x1D at 0x2E2288 raw=0x75E6EA51");
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2284) {
            ctx->pc = 0x2DCBD0u;
            return;
        }
    }
    ctx->pc = 0x2E228Cu;
    // 0x2e228c: 0xd28ea58  jal         func_4A3A960
    ctx->pc = 0x2E228Cu;
    SET_GPR_U32(ctx, 31, 0x2E2294u);
    ctx->pc = 0x2E2290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E228Cu;
    // 0x2e2290: 0x5464ca1c  bnel        $v1, $a0, . + 4 + (-0x35E4 << 2) (Delay Slot)
    // Likely branch instruction at 0x2E2290 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A3A960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A3A960u, 0x2E228Cu, 0x2E2294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2294u;
label_2e2294:
    // 0x2e2294: 0x7da315a0  sq          $v1, 0x15A0($t5)
    ctx->pc = 0x2e2294u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 5536), GPR_VEC(ctx, 3));
    // 0x2e2298: 0x15e6ea51  bne         $t7, $a2, . + 4 + (-0x15AF << 2)
    ctx->pc = 0x2E2298u;
    {
        const bool branch_taken_0x2e2298 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 6));
        ctx->pc = 0x2E229Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2298u;
        // 0x2e229c: 0x1000000b  b           . + 4 + (0xB << 2) (Delay Slot)
        // Likely branch instruction at 0x2E229C - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2298) {
            ctx->pc = 0x2DCBE0u;
            return;
        }
    }
    ctx->pc = 0x2E22A0u;
    // 0x2e22a0: 0x0  nop
    ctx->pc = 0x2e22a0u;
    // NOP
    // 0x2e22a4: 0x85d1a683  lh          $s1, -0x597D($t6)
    ctx->pc = 0x2e22a4u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 4294944387)));
    // 0x2e22a8: 0xc0cca29  jal         func_3328A4
    ctx->pc = 0x2E22A8u;
    SET_GPR_U32(ctx, 31, 0x2E22B0u);
    ctx->pc = 0x2E22ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E22A8u;
    // 0x2e22ac: 0x269aaf98  addiu       $k0, $s4, -0x5068 (Delay Slot)
    SET_GPR_S32(ctx, 26, (int32_t)ADD32(GPR_U32(ctx, 20), 4294946712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3328A4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3328A4u, 0x2E22A8u, 0x2E22B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E22B0u;
label_2e22b0:
    // 0x2e22b0: 0x8e021a85  lw          $v0, 0x1A85($s0)
    ctx->pc = 0x2e22b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6789)));
    // 0x2e22b4: 0x860f28fb  lh          $t7, 0x28FB($s0)
    ctx->pc = 0x2e22b4u;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10491)));
    // 0x2e22b8: 0xdeb0be37  ld          $s0, -0x41C9($s5)
    ctx->pc = 0x2e22b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 21), 4294950455)));
    // 0x2e22bc: 0xf22a0122  scd         $t2, 0x122($s1)
    ctx->pc = 0x2e22bcu;
    throw std::runtime_error("Unhandled opcode: 0x3C at 0x2E22BC raw=0xF22A0122");
    // 0x2e22c0: 0xca15f86f  lwc2        $21, -0x791($s0)
    ctx->pc = 0x2e22c0u;
    throw std::runtime_error("Unhandled opcode: 0x32 at 0x2E22C0 raw=0xCA15F86F");
    // 0x2e22c4: 0xf22a008a  scd         $t2, 0x8A($s1)
    ctx->pc = 0x2e22c4u;
    throw std::runtime_error("Unhandled opcode: 0x3C at 0x2E22C4 raw=0xF22A008A");
    // 0x2e22c8: 0x0  nop
    ctx->pc = 0x2e22c8u;
    // NOP
label_2e22cc:
    // 0x2e22cc: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x2e22ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x2e22d0: 0x244222bc  addiu       $v0, $v0, 0x22BC
    ctx->pc = 0x2e22d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8892));
    // 0x2e22d4: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2e22d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2e22d8: 0x2484229c  addiu       $a0, $a0, 0x229C
    ctx->pc = 0x2e22d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8860));
    // 0x2e22dc: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2e22dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2e22e0: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2e22e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2e22e4: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2E22E4u;
    SET_GPR_U32(ctx, 31, 0x2E22ECu);
    ctx->pc = 0x2E22E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E22E4u;
    // 0x2e22e8: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8FC0u, 0x2E22E4u, 0x2E22ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E22ECu;
label_2e22ec:
    // 0x2e22ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e22ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e22f0: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2e22f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e22f4: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x2e22f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e22f8: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x2e22f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e22fc: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x2e22fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e2300: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x2e2300u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e2304: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x2e2304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2e2308: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E230Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2308u;
        // 0x2e230c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E2310u;
}
