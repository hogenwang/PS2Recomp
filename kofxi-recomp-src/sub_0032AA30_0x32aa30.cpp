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

// Function: sub_0032AA30
// Address: 0x32aa30 - 0x32c790
void sub_0032AA30_0x32aa30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032AA30_0x32aa30");
#endif

    switch (ctx->pc) {
        case 0x32aa84u: goto label_32aa84;
        case 0x32aa9cu: goto label_32aa9c;
        case 0x32aaa4u: goto label_32aaa4;
        case 0x32aaacu: goto label_32aaac;
        case 0x32aab4u: goto label_32aab4;
        case 0x32aabcu: goto label_32aabc;
        case 0x32ac18u: goto label_32ac18;
        case 0x32ac58u: goto label_32ac58;
        case 0x32aca4u: goto label_32aca4;
        case 0x32ad08u: goto label_32ad08;
        case 0x32ae0cu: goto label_32ae0c;
        case 0x32ae34u: goto label_32ae34;
        case 0x32aea4u: goto label_32aea4;
        case 0x32aeb8u: goto label_32aeb8;
        case 0x32af68u: goto label_32af68;
        case 0x32afacu: goto label_32afac;
        case 0x32afc8u: goto label_32afc8;
        case 0x32b07cu: goto label_32b07c;
        case 0x32b110u: goto label_32b110;
        case 0x32b17cu: goto label_32b17c;
        case 0x32b1bcu: goto label_32b1bc;
        case 0x32b1fcu: goto label_32b1fc;
        case 0x32b23cu: goto label_32b23c;
        case 0x32b27cu: goto label_32b27c;
        case 0x32b2f4u: goto label_32b2f4;
        case 0x32b354u: goto label_32b354;
        case 0x32b544u: goto label_32b544;
        case 0x32b55cu: goto label_32b55c;
        case 0x32b5a0u: goto label_32b5a0;
        case 0x32b5bcu: goto label_32b5bc;
        case 0x32b600u: goto label_32b600;
        case 0x32b61cu: goto label_32b61c;
        case 0x32b660u: goto label_32b660;
        case 0x32b6b0u: goto label_32b6b0;
        case 0x32b700u: goto label_32b700;
        case 0x32b768u: goto label_32b768;
        case 0x32b784u: goto label_32b784;
        case 0x32b79cu: goto label_32b79c;
        case 0x32bad0u: goto label_32bad0;
        case 0x32baecu: goto label_32baec;
        case 0x32bb08u: goto label_32bb08;
        case 0x32bc2cu: goto label_32bc2c;
        case 0x32bc50u: goto label_32bc50;
        case 0x32bcacu: goto label_32bcac;
        case 0x32bd40u: goto label_32bd40;
        case 0x32bd9cu: goto label_32bd9c;
        case 0x32bde8u: goto label_32bde8;
        case 0x32be74u: goto label_32be74;
        case 0x32bf34u: goto label_32bf34;
        case 0x32c034u: goto label_32c034;
        case 0x32c134u: goto label_32c134;
        case 0x32c13cu: goto label_32c13c;
        case 0x32c204u: goto label_32c204;
        case 0x32c20cu: goto label_32c20c;
        case 0x32c304u: goto label_32c304;
        case 0x32c30cu: goto label_32c30c;
        case 0x32c420u: goto label_32c420;
        case 0x32c44cu: goto label_32c44c;
        case 0x32c46cu: goto label_32c46c;
        case 0x32c4e8u: goto label_32c4e8;
        case 0x32c4f0u: goto label_32c4f0;
        case 0x32c57cu: goto label_32c57c;
        case 0x32c598u: goto label_32c598;
        case 0x32c5bcu: goto label_32c5bc;
        case 0x32c5d8u: goto label_32c5d8;
        case 0x32c640u: goto label_32c640;
        case 0x32c648u: goto label_32c648;
        case 0x32c6ccu: goto label_32c6cc;
        case 0x32c730u: goto label_32c730;
        case 0x32c764u: goto label_32c764;
        case 0x32c778u: goto label_32c778;
        default: break;
    }

    ctx->pc = 0x32aa30u;

label_32aa30:
    // 0x32aa30: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x32aa30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x32aa34: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x32aa34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x32aa38: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x32aa38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x32aa3c: 0x24a54580  addiu       $a1, $a1, 0x4580
    ctx->pc = 0x32aa3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17792));
    // 0x32aa40: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x32aa40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x32aa44: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x32aa44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x32aa48: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x32aa48u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32aa4c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x32aa4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x32aa50: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x32aa50u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32aa54: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32aa54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x32aa58: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x32aa58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32aa5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32aa5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32aa60: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x32aa60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x32aa64: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32aa64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32aa68: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x32aa68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32aa6c: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x32aa6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32aa70: 0x2484a880  addiu       $a0, $a0, -0x5780
    ctx->pc = 0x32aa70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944896));
    // 0x32aa74: 0x24060027  addiu       $a2, $zero, 0x27
    ctx->pc = 0x32aa74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x32aa78: 0x240702c8  addiu       $a3, $zero, 0x2C8
    ctx->pc = 0x32aa78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 712));
    // 0x32aa7c: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x32AA7Cu;
    SET_GPR_U32(ctx, 31, 0x32AA84u);
    ctx->pc = 0x32AA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AA7Cu;
    // 0x32aa80: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155B50u, 0x32AA7Cu, 0x32AA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AA84u;
label_32aa84:
    // 0x32aa84: 0x50400054  beql        $v0, $zero, . + 4 + (0x54 << 2)
    ctx->pc = 0x32AA84u;
    {
        const bool branch_taken_0x32aa84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32aa84) {
            ctx->pc = 0x32AA88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32AA84u;
            // 0x32aa88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32ABD8u;
            goto label_32abd8;
        }
    }
    ctx->pc = 0x32AA8Cu;
    // 0x32aa8c: 0x8c510010  lw          $s1, 0x10($v0)
    ctx->pc = 0x32aa8cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x32aa90: 0x8e100010  lw          $s0, 0x10($s0)
    ctx->pc = 0x32aa90u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x32aa94: 0xc0c8708  jal         func_321C20
    ctx->pc = 0x32AA94u;
    SET_GPR_U32(ctx, 31, 0x32AA9Cu);
    ctx->pc = 0x32AA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AA94u;
    // 0x32aa98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321C20u, 0x32AA94u, 0x32AA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AA9Cu;
label_32aa9c:
    // 0x32aa9c: 0xc0ca804  jal         func_32A010
    ctx->pc = 0x32AA9Cu;
    SET_GPR_U32(ctx, 31, 0x32AAA4u);
    ctx->pc = 0x32AAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AA9Cu;
    // 0x32aaa0: 0x26240124  addiu       $a0, $s1, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A010u, 0x32AA9Cu, 0x32AAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AAA4u;
label_32aaa4:
    // 0x32aaa4: 0xc0ca9d4  jal         func_32A750
    ctx->pc = 0x32AAA4u;
    SET_GPR_U32(ctx, 31, 0x32AAACu);
    ctx->pc = 0x32AAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AAA4u;
    // 0x32aaa8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A750u, 0x32AAA4u, 0x32AAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AAACu;
label_32aaac:
    // 0x32aaac: 0xc054874  jal         func_1521D0
    ctx->pc = 0x32AAACu;
    SET_GPR_U32(ctx, 31, 0x32AAB4u);
    ctx->pc = 0x32AAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AAACu;
    // 0x32aab0: 0x2624013c  addiu       $a0, $s1, 0x13C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 316));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1521D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1521D0u, 0x32AAACu, 0x32AAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AAB4u;
label_32aab4:
    // 0x32aab4: 0xc054a04  jal         func_152810
    ctx->pc = 0x32AAB4u;
    SET_GPR_U32(ctx, 31, 0x32AABCu);
    ctx->pc = 0x32AAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AAB4u;
    // 0x32aab8: 0x2624008c  addiu       $a0, $s1, 0x8C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 140));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152810u, 0x32AAB4u, 0x32AABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AABCu;
label_32aabc:
    // 0x32aabc: 0x92060079  lbu         $a2, 0x79($s0)
    ctx->pc = 0x32aabcu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 121)));
    // 0x32aac0: 0x13443c  dsll32      $t0, $s3, 16
    ctx->pc = 0x32aac0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 19) << (32 + 16));
    // 0x32aac4: 0x123c3c  dsll32      $a3, $s2, 16
    ctx->pc = 0x32aac4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) << (32 + 16));
    // 0x32aac8: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x32aac8u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x32aacc: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x32aaccu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x32aad0: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x32aad0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x32aad4: 0xa2260079  sb          $a2, 0x79($s1)
    ctx->pc = 0x32aad4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 121), (uint8_t)GPR_U32(ctx, 6));
    // 0x32aad8: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x32aad8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x32aadc: 0x86060000  lh          $a2, 0x0($s0)
    ctx->pc = 0x32aadcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x32aae0: 0x3283ffff  andi        $v1, $s4, 0xFFFF
    ctx->pc = 0x32aae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    // 0x32aae4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x32aae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x32aae8: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x32aae8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x32aaec: 0xa6260000  sh          $a2, 0x0($s1)
    ctx->pc = 0x32aaecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x32aaf0: 0x86060002  lh          $a2, 0x2($s0)
    ctx->pc = 0x32aaf0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x32aaf4: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x32aaf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x32aaf8: 0xa6260002  sh          $a2, 0x2($s1)
    ctx->pc = 0x32aaf8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 6));
    // 0x32aafc: 0x8e060070  lw          $a2, 0x70($s0)
    ctx->pc = 0x32aafcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x32ab00: 0xae260070  sw          $a2, 0x70($s1)
    ctx->pc = 0x32ab00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 6));
    // 0x32ab04: 0x8e060074  lw          $a2, 0x74($s0)
    ctx->pc = 0x32ab04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x32ab08: 0xae260074  sw          $a2, 0x74($s1)
    ctx->pc = 0x32ab08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 6));
    // 0x32ab0c: 0xae28022c  sw          $t0, 0x22C($s1)
    ctx->pc = 0x32ab0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 556), GPR_U32(ctx, 8));
    // 0x32ab10: 0xae270230  sw          $a3, 0x230($s1)
    ctx->pc = 0x32ab10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 560), GPR_U32(ctx, 7));
    // 0x32ab14: 0xa6200084  sh          $zero, 0x84($s1)
    ctx->pc = 0x32ab14u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 132), (uint16_t)GPR_U32(ctx, 0));
    // 0x32ab18: 0xa6350086  sh          $s5, 0x86($s1)
    ctx->pc = 0x32ab18u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 134), (uint16_t)GPR_U32(ctx, 21));
    // 0x32ab1c: 0xa6250088  sh          $a1, 0x88($s1)
    ctx->pc = 0x32ab1cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 136), (uint16_t)GPR_U32(ctx, 5));
    // 0x32ab20: 0x92050078  lbu         $a1, 0x78($s0)
    ctx->pc = 0x32ab20u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x32ab24: 0xa2250078  sb          $a1, 0x78($s1)
    ctx->pc = 0x32ab24u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 120), (uint8_t)GPR_U32(ctx, 5));
    // 0x32ab28: 0xae24007c  sw          $a0, 0x7C($s1)
    ctx->pc = 0x32ab28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 4));
    // 0x32ab2c: 0xae240080  sw          $a0, 0x80($s1)
    ctx->pc = 0x32ab2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 4));
    // 0x32ab30: 0xae24004c  sw          $a0, 0x4C($s1)
    ctx->pc = 0x32ab30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 4));
    // 0x32ab34: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x32AB34u;
    {
        const bool branch_taken_0x32ab34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x32AB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AB34u;
        // 0x32ab38: 0xae240050  sw          $a0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ab34) {
            ctx->pc = 0x32ABB8u;
            goto label_32abb8;
        }
    }
    ctx->pc = 0x32AB3Cu;
    // 0x32ab3c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32ab3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32ab40: 0x50620016  beql        $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x32AB40u;
    {
        const bool branch_taken_0x32ab40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x32ab40) {
            ctx->pc = 0x32AB44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32AB40u;
            // 0x32ab44: 0x3c023a83  lui         $v0, 0x3A83 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32AB9Cu;
            goto label_32ab9c;
        }
    }
    ctx->pc = 0x32AB48u;
    // 0x32ab48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32ab48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32ab4c: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x32AB4Cu;
    {
        const bool branch_taken_0x32ab4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x32ab4c) {
            ctx->pc = 0x32AB50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32AB4Cu;
            // 0x32ab50: 0x3c023a83  lui         $v0, 0x3A83 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32AB80u;
            goto label_32ab80;
        }
    }
    ctx->pc = 0x32AB54u;
    // 0x32ab54: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x32AB54u;
    {
        const bool branch_taken_0x32ab54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ab54) {
            ctx->pc = 0x32AB58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32AB54u;
            // 0x32ab58: 0x3c023a83  lui         $v0, 0x3A83 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32AB64u;
            goto label_32ab64;
        }
    }
    ctx->pc = 0x32AB5Cu;
    // 0x32ab5c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x32AB5Cu;
    {
        const bool branch_taken_0x32ab5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AB5Cu;
        // 0x32ab60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ab5c) {
            ctx->pc = 0x32ABD8u;
            goto label_32abd8;
        }
    }
    ctx->pc = 0x32AB64u;
label_32ab64:
    // 0x32ab64: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x32ab64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x32ab68: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x32ab68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32ab6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32ab6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32ab70: 0x0  nop
    ctx->pc = 0x32ab70u;
    // NOP
    // 0x32ab74: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x32ab74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x32ab78: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x32AB78u;
    {
        const bool branch_taken_0x32ab78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AB78u;
        // 0x32ab7c: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ab78) {
            ctx->pc = 0x32ABD4u;
            goto label_32abd4;
        }
    }
    ctx->pc = 0x32AB80u;
label_32ab80:
    // 0x32ab80: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x32ab80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x32ab84: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x32ab84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32ab88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32ab88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32ab8c: 0x0  nop
    ctx->pc = 0x32ab8cu;
    // NOP
    // 0x32ab90: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x32ab90u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x32ab94: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x32AB94u;
    {
        const bool branch_taken_0x32ab94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AB94u;
        // 0x32ab98: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ab94) {
            ctx->pc = 0x32ABD4u;
            goto label_32abd4;
        }
    }
    ctx->pc = 0x32AB9Cu;
label_32ab9c:
    // 0x32ab9c: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x32ab9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x32aba0: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x32aba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32aba4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32aba4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32aba8: 0x0  nop
    ctx->pc = 0x32aba8u;
    // NOP
    // 0x32abac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x32abacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x32abb0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x32ABB0u;
    {
        const bool branch_taken_0x32abb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32ABB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ABB0u;
        // 0x32abb4: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32abb0) {
            ctx->pc = 0x32ABD4u;
            goto label_32abd4;
        }
    }
    ctx->pc = 0x32ABB8u;
label_32abb8:
    // 0x32abb8: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x32abb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x32abbc: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x32abbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x32abc0: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x32abc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32abc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32abc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32abc8: 0x0  nop
    ctx->pc = 0x32abc8u;
    // NOP
    // 0x32abcc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x32abccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x32abd0: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x32abd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_32abd4:
    // 0x32abd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32abd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32abd8:
    // 0x32abd8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x32abd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x32abdc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x32abdcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x32abe0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x32abe0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32abe4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x32abe4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32abe8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32abe8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32abec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32abecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32abf0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32abf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32abf4: 0x3e00008  jr          $ra
    ctx->pc = 0x32ABF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32ABF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ABF4u;
        // 0x32abf8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32ABF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32ABFCu;
    // 0x32abfc: 0x0  nop
    ctx->pc = 0x32abfcu;
    // NOP
    // 0x32ac00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32ac00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32ac04: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x32ac04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ac08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32ac08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32ac0c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x32ac0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ac10: 0xc0caa14  jal         func_32A850
    ctx->pc = 0x32AC10u;
    SET_GPR_U32(ctx, 31, 0x32AC18u);
    ctx->pc = 0x32AC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AC10u;
    // 0x32ac14: 0x94450000  lhu         $a1, 0x0($v0) (Delay Slot)
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A850u, 0x32AC10u, 0x32AC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AC18u;
label_32ac18:
    // 0x32ac18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32ac18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32ac1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32ac1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32ac20: 0x3e00008  jr          $ra
    ctx->pc = 0x32AC20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32AC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AC20u;
        // 0x32ac24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32AC20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32AC28u;
    // 0x32ac28: 0x0  nop
    ctx->pc = 0x32ac28u;
    // NOP
    // 0x32ac2c: 0x0  nop
    ctx->pc = 0x32ac2cu;
    // NOP
    // 0x32ac30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32ac30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32ac34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32ac34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32ac38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32ac38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32ac3c: 0x90a20274  lbu         $v0, 0x274($a1)
    ctx->pc = 0x32ac3cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 628)));
    // 0x32ac40: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x32ac40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x32ac44: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x32AC44u;
    {
        const bool branch_taken_0x32ac44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AC44u;
        // 0x32ac48: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ac44) {
            ctx->pc = 0x32AC58u;
            goto label_32ac58;
        }
    }
    ctx->pc = 0x32AC4Cu;
    // 0x32ac4c: 0x94840000  lhu         $a0, 0x0($a0)
    ctx->pc = 0x32ac4cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32ac50: 0xc0ca80c  jal         func_32A030
    ctx->pc = 0x32AC50u;
    SET_GPR_U32(ctx, 31, 0x32AC58u);
    ctx->pc = 0x32AC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AC50u;
    // 0x32ac54: 0x26050124  addiu       $a1, $s0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A030u, 0x32AC50u, 0x32AC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AC58u;
label_32ac58:
    // 0x32ac58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32ac58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32ac5c: 0xa20202bc  sb          $v0, 0x2BC($s0)
    ctx->pc = 0x32ac5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 700), (uint8_t)GPR_U32(ctx, 2));
    // 0x32ac60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32ac60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32ac64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32ac64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32ac68: 0x3e00008  jr          $ra
    ctx->pc = 0x32AC68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32AC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AC68u;
        // 0x32ac6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32AC68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32AC70u;
    // 0x32ac70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32ac70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32ac74: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x32ac74u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ac78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32ac78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32ac7c: 0x90a20274  lbu         $v0, 0x274($a1)
    ctx->pc = 0x32ac7cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 628)));
    // 0x32ac80: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x32ac80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x32ac84: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x32AC84u;
    {
        const bool branch_taken_0x32ac84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AC84u;
        // 0x32ac88: 0xc0482d  daddu       $t1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ac84) {
            ctx->pc = 0x32ACA4u;
            goto label_32aca4;
        }
    }
    ctx->pc = 0x32AC8Cu;
    // 0x32ac8c: 0x84680008  lh          $t0, 0x8($v1)
    ctx->pc = 0x32ac8cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x32ac90: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x32ac90u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x32ac94: 0x94650002  lhu         $a1, 0x2($v1)
    ctx->pc = 0x32ac94u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x32ac98: 0x94660004  lhu         $a2, 0x4($v1)
    ctx->pc = 0x32ac98u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x32ac9c: 0xc0caa8c  jal         func_32AA30
    ctx->pc = 0x32AC9Cu;
    SET_GPR_U32(ctx, 31, 0x32ACA4u);
    ctx->pc = 0x32ACA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AC9Cu;
    // 0x32aca0: 0x84670006  lh          $a3, 0x6($v1) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32AA30u;
    goto label_32aa30;
    ctx->pc = 0x32ACA4u;
label_32aca4:
    // 0x32aca4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32aca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32aca8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x32aca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x32acac: 0x3e00008  jr          $ra
    ctx->pc = 0x32ACACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32ACB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ACACu;
        // 0x32acb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32ACACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32ACB4u;
    // 0x32acb4: 0x0  nop
    ctx->pc = 0x32acb4u;
    // NOP
    // 0x32acb8: 0x0  nop
    ctx->pc = 0x32acb8u;
    // NOP
    // 0x32acbc: 0x0  nop
    ctx->pc = 0x32acbcu;
    // NOP
    // 0x32acc0: 0x3e00008  jr          $ra
    ctx->pc = 0x32ACC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32ACC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ACC0u;
        // 0x32acc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32ACC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32ACC8u;
    // 0x32acc8: 0x0  nop
    ctx->pc = 0x32acc8u;
    // NOP
    // 0x32accc: 0x0  nop
    ctx->pc = 0x32acccu;
    // NOP
    // 0x32acd0: 0xa4a0023c  sh          $zero, 0x23C($a1)
    ctx->pc = 0x32acd0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 572), (uint16_t)GPR_U32(ctx, 0));
    // 0x32acd4: 0x3e00008  jr          $ra
    ctx->pc = 0x32ACD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32ACD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ACD4u;
        // 0x32acd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32ACD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32ACDCu;
    // 0x32acdc: 0x0  nop
    ctx->pc = 0x32acdcu;
    // NOP
    // 0x32ace0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x32ace0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x32ace4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x32ace4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x32ace8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32ace8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x32acec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32acecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32acf0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32acf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32acf4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x32acf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32acf8: 0x84920000  lh          $s2, 0x0($a0)
    ctx->pc = 0x32acf8u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32acfc: 0x84900002  lh          $s0, 0x2($a0)
    ctx->pc = 0x32acfcu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x32ad00: 0xc05567c  jal         func_1559F0
    ctx->pc = 0x32AD00u;
    SET_GPR_U32(ctx, 31, 0x32AD08u);
    ctx->pc = 0x32AD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AD00u;
    // 0x32ad04: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1559F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1559F0u, 0x32AD00u, 0x32AD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AD08u;
label_32ad08:
    // 0x32ad08: 0x90430078  lbu         $v1, 0x78($v0)
    ctx->pc = 0x32ad08u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x32ad0c: 0xa2230078  sb          $v1, 0x78($s1)
    ctx->pc = 0x32ad0cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 120), (uint8_t)GPR_U32(ctx, 3));
    // 0x32ad10: 0x90430078  lbu         $v1, 0x78($v0)
    ctx->pc = 0x32ad10u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x32ad14: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x32ad14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x32ad18: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x32AD18u;
    {
        const bool branch_taken_0x32ad18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ad18) {
            ctx->pc = 0x32AD1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32AD18u;
            // 0x32ad1c: 0x8e24022c  lw          $a0, 0x22C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 556)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32AD44u;
            goto label_32ad44;
        }
    }
    ctx->pc = 0x32AD20u;
    // 0x32ad20: 0x8e24022c  lw          $a0, 0x22C($s1)
    ctx->pc = 0x32ad20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 556)));
    // 0x32ad24: 0x122c3c  dsll32      $a1, $s2, 16
    ctx->pc = 0x32ad24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) << (32 + 16));
    // 0x32ad28: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x32ad28u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32ad2c: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x32ad2cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x32ad30: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x32ad30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x32ad34: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x32ad34u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x32ad38: 0xa6230000  sh          $v1, 0x0($s1)
    ctx->pc = 0x32ad38u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x32ad3c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x32AD3Cu;
    {
        const bool branch_taken_0x32ad3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AD3Cu;
        // 0x32ad40: 0xae200038  sw          $zero, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ad3c) {
            ctx->pc = 0x32AD60u;
            goto label_32ad60;
        }
    }
    ctx->pc = 0x32AD44u;
label_32ad44:
    // 0x32ad44: 0x122c3c  dsll32      $a1, $s2, 16
    ctx->pc = 0x32ad44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) << (32 + 16));
    // 0x32ad48: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x32ad48u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32ad4c: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x32ad4cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x32ad50: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x32ad50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x32ad54: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x32ad54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x32ad58: 0xa6230000  sh          $v1, 0x0($s1)
    ctx->pc = 0x32ad58u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x32ad5c: 0xae200038  sw          $zero, 0x38($s1)
    ctx->pc = 0x32ad5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 0));
label_32ad60:
    // 0x32ad60: 0x90430078  lbu         $v1, 0x78($v0)
    ctx->pc = 0x32ad60u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x32ad64: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x32ad64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x32ad68: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x32AD68u;
    {
        const bool branch_taken_0x32ad68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ad68) {
            ctx->pc = 0x32AD6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32AD68u;
            // 0x32ad6c: 0x84440002  lh          $a0, 0x2($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32AD94u;
            goto label_32ad94;
        }
    }
    ctx->pc = 0x32AD70u;
    // 0x32ad70: 0x84440002  lh          $a0, 0x2($v0)
    ctx->pc = 0x32ad70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x32ad74: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x32ad74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x32ad78: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x32ad78u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x32ad7c: 0x8e220230  lw          $v0, 0x230($s1)
    ctx->pc = 0x32ad7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 560)));
    // 0x32ad80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32ad80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32ad84: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x32ad84u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x32ad88: 0xa6220002  sh          $v0, 0x2($s1)
    ctx->pc = 0x32ad88u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x32ad8c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x32AD8Cu;
    {
        const bool branch_taken_0x32ad8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AD8Cu;
        // 0x32ad90: 0xae20003c  sw          $zero, 0x3C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ad8c) {
            ctx->pc = 0x32ADB0u;
            goto label_32adb0;
        }
    }
    ctx->pc = 0x32AD94u;
label_32ad94:
    // 0x32ad94: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x32ad94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x32ad98: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x32ad98u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x32ad9c: 0x8e220230  lw          $v0, 0x230($s1)
    ctx->pc = 0x32ad9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 560)));
    // 0x32ada0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32ada0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32ada4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x32ada4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x32ada8: 0xa6220002  sh          $v0, 0x2($s1)
    ctx->pc = 0x32ada8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x32adac: 0xae20003c  sw          $zero, 0x3C($s1)
    ctx->pc = 0x32adacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
label_32adb0:
    // 0x32adb0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x32adb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32adb4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32adb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32adb8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32adb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32adbc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32adbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32adc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32adc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32adc4: 0x3e00008  jr          $ra
    ctx->pc = 0x32ADC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32ADC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ADC4u;
        // 0x32adc8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32ADC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32ADCCu;
    // 0x32adcc: 0x0  nop
    ctx->pc = 0x32adccu;
    // NOP
    // 0x32add0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x32add0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x32add4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x32add4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x32add8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x32add8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x32addc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32addcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x32ade0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32ade0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32ade4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32ade4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32ade8: 0x94930002  lhu         $s3, 0x2($a0)
    ctx->pc = 0x32ade8u;
    SET_GPR_U32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x32adec: 0x94900000  lhu         $s0, 0x0($a0)
    ctx->pc = 0x32adecu;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32adf0: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x32ADF0u;
    {
        const bool branch_taken_0x32adf0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x32ADF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ADF0u;
        // 0x32adf4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32adf0) {
            ctx->pc = 0x32AE00u;
            goto label_32ae00;
        }
    }
    ctx->pc = 0x32ADF8u;
    // 0x32adf8: 0x2662ffff  addiu       $v0, $s3, -0x1
    ctx->pc = 0x32adf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x32adfc: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x32adfcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_32ae00:
    // 0x32ae00: 0x26320124  addiu       $s2, $s1, 0x124
    ctx->pc = 0x32ae00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 292));
    // 0x32ae04: 0xc0ca9d0  jal         func_32A740
    ctx->pc = 0x32AE04u;
    SET_GPR_U32(ctx, 31, 0x32AE0Cu);
    ctx->pc = 0x32AE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AE04u;
    // 0x32ae08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A740u, 0x32AE04u, 0x32AE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AE0Cu;
label_32ae0c:
    // 0x32ae0c: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x32AE0Cu;
    {
        const bool branch_taken_0x32ae0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ae0c) {
            ctx->pc = 0x32AE10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32AE0Cu;
            // 0x32ae10: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32AE38u;
            goto label_32ae38;
        }
    }
    ctx->pc = 0x32AE14u;
    // 0x32ae14: 0x92420011  lbu         $v0, 0x11($s2)
    ctx->pc = 0x32ae14u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 17)));
    // 0x32ae18: 0x3263ffff  andi        $v1, $s3, 0xFFFF
    ctx->pc = 0x32ae18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x32ae1c: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x32ae1cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x32ae20: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x32AE20u;
    {
        const bool branch_taken_0x32ae20 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x32ae20) {
            ctx->pc = 0x32AE34u;
            goto label_32ae34;
        }
    }
    ctx->pc = 0x32AE28u;
    // 0x32ae28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32ae28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ae2c: 0xc0caa14  jal         func_32A850
    ctx->pc = 0x32AE2Cu;
    SET_GPR_U32(ctx, 31, 0x32AE34u);
    ctx->pc = 0x32AE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AE2Cu;
    // 0x32ae30: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A850u, 0x32AE2Cu, 0x32AE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AE34u;
label_32ae34:
    // 0x32ae34: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x32ae34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_32ae38:
    // 0x32ae38: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32ae38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32ae3c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x32ae3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32ae40: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32ae40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32ae44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32ae44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32ae48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32ae48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32ae4c: 0x3e00008  jr          $ra
    ctx->pc = 0x32AE4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32AE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AE4Cu;
        // 0x32ae50: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32AE4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32AE54u;
    // 0x32ae54: 0x0  nop
    ctx->pc = 0x32ae54u;
    // NOP
    // 0x32ae58: 0x0  nop
    ctx->pc = 0x32ae58u;
    // NOP
    // 0x32ae5c: 0x0  nop
    ctx->pc = 0x32ae5cu;
    // NOP
    // 0x32ae60: 0x3e00008  jr          $ra
    ctx->pc = 0x32AE60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32AE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AE60u;
        // 0x32ae64: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32AE60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32AE68u;
    // 0x32ae68: 0x0  nop
    ctx->pc = 0x32ae68u;
    // NOP
    // 0x32ae6c: 0x0  nop
    ctx->pc = 0x32ae6cu;
    // NOP
    // 0x32ae70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32ae70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32ae74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x32ae74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x32ae78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32ae78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32ae7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32ae7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32ae80: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x32ae80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x32ae84: 0x94900000  lhu         $s0, 0x0($a0)
    ctx->pc = 0x32ae84u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32ae88: 0x94860002  lhu         $a2, 0x2($a0)
    ctx->pc = 0x32ae88u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x32ae8c: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x32ae8cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x32ae90: 0x4410009  bgez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x32AE90u;
    {
        const bool branch_taken_0x32ae90 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x32AE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AE90u;
        // 0x32ae94: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ae90) {
            ctx->pc = 0x32AEB8u;
            goto label_32aeb8;
        }
    }
    ctx->pc = 0x32AE98u;
    // 0x32ae98: 0x30c4ffff  andi        $a0, $a2, 0xFFFF
    ctx->pc = 0x32ae98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x32ae9c: 0xc054c98  jal         func_153260
    ctx->pc = 0x32AE9Cu;
    SET_GPR_U32(ctx, 31, 0x32AEA4u);
    ctx->pc = 0x32AEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AE9Cu;
    // 0x32aea0: 0x3066ffff  andi        $a2, $v1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153260u, 0x32AE9Cu, 0x32AEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AEA4u;
label_32aea4:
    // 0x32aea4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x32AEA4u;
    {
        const bool branch_taken_0x32aea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32aea4) {
            ctx->pc = 0x32AEA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32AEA4u;
            // 0x32aea8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32AEBCu;
            goto label_32aebc;
        }
    }
    ctx->pc = 0x32AEACu;
    // 0x32aeac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32aeacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32aeb0: 0xc0caa14  jal         func_32A850
    ctx->pc = 0x32AEB0u;
    SET_GPR_U32(ctx, 31, 0x32AEB8u);
    ctx->pc = 0x32AEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AEB0u;
    // 0x32aeb4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A850u, 0x32AEB0u, 0x32AEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AEB8u;
label_32aeb8:
    // 0x32aeb8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x32aeb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_32aebc:
    // 0x32aebc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x32aebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x32aec0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32aec0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32aec4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32aec4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32aec8: 0x3e00008  jr          $ra
    ctx->pc = 0x32AEC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32AECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AEC8u;
        // 0x32aecc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32AEC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32AED0u;
    // 0x32aed0: 0x3e00008  jr          $ra
    ctx->pc = 0x32AED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32AED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AED0u;
        // 0x32aed4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32AED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32AED8u;
    // 0x32aed8: 0x0  nop
    ctx->pc = 0x32aed8u;
    // NOP
    // 0x32aedc: 0x0  nop
    ctx->pc = 0x32aedcu;
    // NOP
    // 0x32aee0: 0x3e00008  jr          $ra
    ctx->pc = 0x32AEE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32AEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AEE0u;
        // 0x32aee4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32AEE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32AEE8u;
    // 0x32aee8: 0x0  nop
    ctx->pc = 0x32aee8u;
    // NOP
    // 0x32aeec: 0x0  nop
    ctx->pc = 0x32aeecu;
    // NOP
    // 0x32aef0: 0x3e00008  jr          $ra
    ctx->pc = 0x32AEF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32AEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AEF0u;
        // 0x32aef4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32AEF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32AEF8u;
    // 0x32aef8: 0x0  nop
    ctx->pc = 0x32aef8u;
    // NOP
    // 0x32aefc: 0x0  nop
    ctx->pc = 0x32aefcu;
    // NOP
    // 0x32af00: 0x3e00008  jr          $ra
    ctx->pc = 0x32AF00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32AF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AF00u;
        // 0x32af04: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32AF00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32AF08u;
    // 0x32af08: 0x0  nop
    ctx->pc = 0x32af08u;
    // NOP
    // 0x32af0c: 0x0  nop
    ctx->pc = 0x32af0cu;
    // NOP
    // 0x32af10: 0x3e00008  jr          $ra
    ctx->pc = 0x32AF10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32AF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AF10u;
        // 0x32af14: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32AF10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32AF18u;
    // 0x32af18: 0x0  nop
    ctx->pc = 0x32af18u;
    // NOP
    // 0x32af1c: 0x0  nop
    ctx->pc = 0x32af1cu;
    // NOP
    // 0x32af20: 0x3e00008  jr          $ra
    ctx->pc = 0x32AF20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32AF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AF20u;
        // 0x32af24: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32AF20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32AF28u;
    // 0x32af28: 0x0  nop
    ctx->pc = 0x32af28u;
    // NOP
    // 0x32af2c: 0x0  nop
    ctx->pc = 0x32af2cu;
    // NOP
    // 0x32af30: 0x3e00008  jr          $ra
    ctx->pc = 0x32AF30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32AF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AF30u;
        // 0x32af34: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32AF30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32AF38u;
    // 0x32af38: 0x0  nop
    ctx->pc = 0x32af38u;
    // NOP
    // 0x32af3c: 0x0  nop
    ctx->pc = 0x32af3cu;
    // NOP
    // 0x32af40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32af40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32af44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32af44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32af48: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x32af48u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x32af4c: 0x94a3023c  lhu         $v1, 0x23C($a1)
    ctx->pc = 0x32af4cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 572)));
    // 0x32af50: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x32af50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x32af54: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x32AF54u;
    {
        const bool branch_taken_0x32af54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32AF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AF54u;
        // 0x32af58: 0x94860000  lhu         $a2, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32af54) {
            ctx->pc = 0x32AF68u;
            goto label_32af68;
        }
    }
    ctx->pc = 0x32AF5Cu;
    // 0x32af5c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x32af5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32af60: 0xc0caa14  jal         func_32A850
    ctx->pc = 0x32AF60u;
    SET_GPR_U32(ctx, 31, 0x32AF68u);
    ctx->pc = 0x32AF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AF60u;
    // 0x32af64: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A850u, 0x32AF60u, 0x32AF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AF68u;
label_32af68:
    // 0x32af68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32af68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32af6c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32af6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32af70: 0x3e00008  jr          $ra
    ctx->pc = 0x32AF70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32AF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AF70u;
        // 0x32af74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32AF70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32AF78u;
    // 0x32af78: 0x0  nop
    ctx->pc = 0x32af78u;
    // NOP
    // 0x32af7c: 0x0  nop
    ctx->pc = 0x32af7cu;
    // NOP
    // 0x32af80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32af80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32af84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x32af84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x32af88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32af88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32af8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32af8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32af90: 0x90a20274  lbu         $v0, 0x274($a1)
    ctx->pc = 0x32af90u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 628)));
    // 0x32af94: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x32af94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x32af98: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x32AF98u;
    {
        const bool branch_taken_0x32af98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32AF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AF98u;
        // 0x32af9c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32af98) {
            ctx->pc = 0x32AFC8u;
            goto label_32afc8;
        }
    }
    ctx->pc = 0x32AFA0u;
    // 0x32afa0: 0x94900000  lhu         $s0, 0x0($a0)
    ctx->pc = 0x32afa0u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32afa4: 0xc05567c  jal         func_1559F0
    ctx->pc = 0x32AFA4u;
    SET_GPR_U32(ctx, 31, 0x32AFACu);
    ctx->pc = 0x32AFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AFA4u;
    // 0x32afa8: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1559F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1559F0u, 0x32AFA4u, 0x32AFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AFACu;
label_32afac:
    // 0x32afac: 0x8c4202c0  lw          $v0, 0x2C0($v0)
    ctx->pc = 0x32afacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 704)));
    // 0x32afb0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x32afb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x32afb4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x32AFB4u;
    {
        const bool branch_taken_0x32afb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32afb4) {
            ctx->pc = 0x32AFB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32AFB4u;
            // 0x32afb8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32AFCCu;
            goto label_32afcc;
        }
    }
    ctx->pc = 0x32AFBCu;
    // 0x32afbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32afbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32afc0: 0xc0caa14  jal         func_32A850
    ctx->pc = 0x32AFC0u;
    SET_GPR_U32(ctx, 31, 0x32AFC8u);
    ctx->pc = 0x32AFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AFC0u;
    // 0x32afc4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A850u, 0x32AFC0u, 0x32AFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AFC8u;
label_32afc8:
    // 0x32afc8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x32afc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_32afcc:
    // 0x32afcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32afccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32afd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32afd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32afd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32afd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32afd8: 0x3e00008  jr          $ra
    ctx->pc = 0x32AFD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32AFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AFD8u;
        // 0x32afdc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32AFD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32AFE0u;
    // 0x32afe0: 0x3e00008  jr          $ra
    ctx->pc = 0x32AFE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32AFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AFE0u;
        // 0x32afe4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32AFE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32AFE8u;
    // 0x32afe8: 0x0  nop
    ctx->pc = 0x32afe8u;
    // NOP
    // 0x32afec: 0x0  nop
    ctx->pc = 0x32afecu;
    // NOP
    // 0x32aff0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32aff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32aff4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32aff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32aff8: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x32aff8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32affc: 0x94840002  lhu         $a0, 0x2($a0)
    ctx->pc = 0x32affcu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x32b000: 0x10800020  beqz        $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x32B000u;
    {
        const bool branch_taken_0x32b000 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B000u;
        // 0x32b004: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b000) {
            ctx->pc = 0x32B084u;
            goto label_32b084;
        }
    }
    ctx->pc = 0x32B008u;
    // 0x32b008: 0x90a40274  lbu         $a0, 0x274($a1)
    ctx->pc = 0x32b008u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 628)));
    // 0x32b00c: 0x30840008  andi        $a0, $a0, 0x8
    ctx->pc = 0x32b00cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x32b010: 0x50800040  beql        $a0, $zero, . + 4 + (0x40 << 2)
    ctx->pc = 0x32B010u;
    {
        const bool branch_taken_0x32b010 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b010) {
            ctx->pc = 0x32B014u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32B010u;
            // 0x32b014: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32B114u;
            goto label_32b114;
        }
    }
    ctx->pc = 0x32B018u;
    // 0x32b018: 0x84a60002  lh          $a2, 0x2($a1)
    ctx->pc = 0x32b018u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x32b01c: 0x4c10002  bgez        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x32B01Cu;
    {
        const bool branch_taken_0x32b01c = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x32b01c) {
            ctx->pc = 0x32B028u;
            goto label_32b028;
        }
    }
    ctx->pc = 0x32B024u;
    // 0x32b024: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32b024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_32b028:
    // 0x32b028: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x32b028u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x32b02c: 0x9484f102  lhu         $a0, -0xEFE($a0)
    ctx->pc = 0x32b02cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294963458)));
    // 0x32b030: 0x86082a  slt         $at, $a0, $a2
    ctx->pc = 0x32b030u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x32b034: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x32B034u;
    {
        const bool branch_taken_0x32b034 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b034) {
            ctx->pc = 0x32B038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32B034u;
            // 0x32b038: 0x84a60000  lh          $a2, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32B044u;
            goto label_32b044;
        }
    }
    ctx->pc = 0x32B03Cu;
    // 0x32b03c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32b03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x32b040: 0x84a60000  lh          $a2, 0x0($a1)
    ctx->pc = 0x32b040u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_32b044:
    // 0x32b044: 0x4c10002  bgez        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x32B044u;
    {
        const bool branch_taken_0x32b044 = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x32b044) {
            ctx->pc = 0x32B050u;
            goto label_32b050;
        }
    }
    ctx->pc = 0x32B04Cu;
    // 0x32b04c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32b04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_32b050:
    // 0x32b050: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x32b050u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x32b054: 0x9484f100  lhu         $a0, -0xF00($a0)
    ctx->pc = 0x32b054u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294963456)));
    // 0x32b058: 0x86082a  slt         $at, $a0, $a2
    ctx->pc = 0x32b058u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x32b05c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x32B05Cu;
    {
        const bool branch_taken_0x32b05c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b05c) {
            ctx->pc = 0x32B068u;
            goto label_32b068;
        }
    }
    ctx->pc = 0x32B064u;
    // 0x32b064: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32b064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_32b068:
    // 0x32b068: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x32B068u;
    {
        const bool branch_taken_0x32b068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b068) {
            ctx->pc = 0x32B110u;
            goto label_32b110;
        }
    }
    ctx->pc = 0x32B070u;
    // 0x32b070: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x32b070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b074: 0xc0caa14  jal         func_32A850
    ctx->pc = 0x32B074u;
    SET_GPR_U32(ctx, 31, 0x32B07Cu);
    ctx->pc = 0x32B078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B074u;
    // 0x32b078: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A850u, 0x32B074u, 0x32B07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B07Cu;
label_32b07c:
    // 0x32b07c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x32B07Cu;
    {
        const bool branch_taken_0x32b07c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b07c) {
            ctx->pc = 0x32B110u;
            goto label_32b110;
        }
    }
    ctx->pc = 0x32B084u;
label_32b084:
    // 0x32b084: 0x90a40274  lbu         $a0, 0x274($a1)
    ctx->pc = 0x32b084u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 628)));
    // 0x32b088: 0x30840010  andi        $a0, $a0, 0x10
    ctx->pc = 0x32b088u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x32b08c: 0x10800020  beqz        $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x32B08Cu;
    {
        const bool branch_taken_0x32b08c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b08c) {
            ctx->pc = 0x32B110u;
            goto label_32b110;
        }
    }
    ctx->pc = 0x32B094u;
    // 0x32b094: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x32b094u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x32b098: 0x84a60002  lh          $a2, 0x2($a1)
    ctx->pc = 0x32b098u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x32b09c: 0x8484db2c  lh          $a0, -0x24D4($a0)
    ctx->pc = 0x32b09cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294957868)));
    // 0x32b0a0: 0xc4082a  slt         $at, $a2, $a0
    ctx->pc = 0x32b0a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x32b0a4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x32B0A4u;
    {
        const bool branch_taken_0x32b0a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b0a4) {
            ctx->pc = 0x32B0B0u;
            goto label_32b0b0;
        }
    }
    ctx->pc = 0x32B0ACu;
    // 0x32b0ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32b0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_32b0b0:
    // 0x32b0b0: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x32b0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x32b0b4: 0x8484db2e  lh          $a0, -0x24D2($a0)
    ctx->pc = 0x32b0b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294957870)));
    // 0x32b0b8: 0x86082a  slt         $at, $a0, $a2
    ctx->pc = 0x32b0b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x32b0bc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x32B0BCu;
    {
        const bool branch_taken_0x32b0bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b0bc) {
            ctx->pc = 0x32B0C8u;
            goto label_32b0c8;
        }
    }
    ctx->pc = 0x32B0C4u;
    // 0x32b0c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32b0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_32b0c8:
    // 0x32b0c8: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x32b0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x32b0cc: 0x84a60000  lh          $a2, 0x0($a1)
    ctx->pc = 0x32b0ccu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x32b0d0: 0x8484db30  lh          $a0, -0x24D0($a0)
    ctx->pc = 0x32b0d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294957872)));
    // 0x32b0d4: 0xc4082a  slt         $at, $a2, $a0
    ctx->pc = 0x32b0d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x32b0d8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x32B0D8u;
    {
        const bool branch_taken_0x32b0d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b0d8) {
            ctx->pc = 0x32B0E4u;
            goto label_32b0e4;
        }
    }
    ctx->pc = 0x32B0E0u;
    // 0x32b0e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32b0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_32b0e4:
    // 0x32b0e4: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x32b0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x32b0e8: 0x8484db32  lh          $a0, -0x24CE($a0)
    ctx->pc = 0x32b0e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294957874)));
    // 0x32b0ec: 0x86082a  slt         $at, $a0, $a2
    ctx->pc = 0x32b0ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x32b0f0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x32B0F0u;
    {
        const bool branch_taken_0x32b0f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b0f0) {
            ctx->pc = 0x32B0FCu;
            goto label_32b0fc;
        }
    }
    ctx->pc = 0x32B0F8u;
    // 0x32b0f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32b0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_32b0fc:
    // 0x32b0fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x32B0FCu;
    {
        const bool branch_taken_0x32b0fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b0fc) {
            ctx->pc = 0x32B110u;
            goto label_32b110;
        }
    }
    ctx->pc = 0x32B104u;
    // 0x32b104: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x32b104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b108: 0xc0caa14  jal         func_32A850
    ctx->pc = 0x32B108u;
    SET_GPR_U32(ctx, 31, 0x32B110u);
    ctx->pc = 0x32B10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B108u;
    // 0x32b10c: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A850u, 0x32B108u, 0x32B110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B110u;
label_32b110:
    // 0x32b110: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32b110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_32b114:
    // 0x32b114: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32b114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32b118: 0x3e00008  jr          $ra
    ctx->pc = 0x32B118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32B11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B118u;
        // 0x32b11c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32B118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32B120u;
    // 0x32b120: 0x90a30274  lbu         $v1, 0x274($a1)
    ctx->pc = 0x32b120u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 628)));
    // 0x32b124: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x32b124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x32b128: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x32B128u;
    {
        const bool branch_taken_0x32b128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b128) {
            ctx->pc = 0x32B12Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32B128u;
            // 0x32b12c: 0x306200fd  andi        $v0, $v1, 0xFD (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
            ctx->in_delay_slot = false;
            ctx->pc = 0x32B150u;
            goto label_32b150;
        }
    }
    ctx->pc = 0x32B130u;
    // 0x32b130: 0xaca40234  sw          $a0, 0x234($a1)
    ctx->pc = 0x32b130u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 564), GPR_U32(ctx, 4));
    // 0x32b134: 0x90a20274  lbu         $v0, 0x274($a1)
    ctx->pc = 0x32b134u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 628)));
    // 0x32b138: 0x304200fb  andi        $v0, $v0, 0xFB
    ctx->pc = 0x32b138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)251);
    // 0x32b13c: 0xa0a20274  sb          $v0, 0x274($a1)
    ctx->pc = 0x32b13cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 628), (uint8_t)GPR_U32(ctx, 2));
    // 0x32b140: 0x90a20274  lbu         $v0, 0x274($a1)
    ctx->pc = 0x32b140u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 628)));
    // 0x32b144: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x32b144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x32b148: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x32B148u;
    {
        const bool branch_taken_0x32b148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B148u;
        // 0x32b14c: 0xa0a20274  sb          $v0, 0x274($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 628), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b148) {
            ctx->pc = 0x32B154u;
            goto label_32b154;
        }
    }
    ctx->pc = 0x32B150u;
label_32b150:
    // 0x32b150: 0xa0a20274  sb          $v0, 0x274($a1)
    ctx->pc = 0x32b150u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 628), (uint8_t)GPR_U32(ctx, 2));
label_32b154:
    // 0x32b154: 0x3e00008  jr          $ra
    ctx->pc = 0x32B154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32B158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B154u;
        // 0x32b158: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32B154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32B15Cu;
    // 0x32b15c: 0x0  nop
    ctx->pc = 0x32b15cu;
    // NOP
    // 0x32b160: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32b160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32b164: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32b164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32b168: 0x80a202bc  lb          $v0, 0x2BC($a1)
    ctx->pc = 0x32b168u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 700)));
    // 0x32b16c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x32B16Cu;
    {
        const bool branch_taken_0x32b16c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b16c) {
            ctx->pc = 0x32B170u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32B16Cu;
            // 0x32b170: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32B180u;
            goto label_32b180;
        }
    }
    ctx->pc = 0x32B174u;
    // 0x32b174: 0xc054838  jal         func_1520E0
    ctx->pc = 0x32B174u;
    SET_GPR_U32(ctx, 31, 0x32B17Cu);
    ctx->pc = 0x32B178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B174u;
    // 0x32b178: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1520E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1520E0u, 0x32B174u, 0x32B17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B17Cu;
label_32b17c:
    // 0x32b17c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32b17cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_32b180:
    // 0x32b180: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x32b180u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b184: 0x3e00008  jr          $ra
    ctx->pc = 0x32B184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32B188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B184u;
        // 0x32b188: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32B184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32B18Cu;
    // 0x32b18c: 0x0  nop
    ctx->pc = 0x32b18cu;
    // NOP
    // 0x32b190: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32b190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32b194: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32b194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32b198: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x32b198u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x32b19c: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x32b19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x32b1a0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x32b1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x32b1a4: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x32b1a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x32b1a8: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x32B1A8u;
    {
        const bool branch_taken_0x32b1a8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x32B1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B1A8u;
        // 0x32b1ac: 0x94860000  lhu         $a2, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b1a8) {
            ctx->pc = 0x32B1BCu;
            goto label_32b1bc;
        }
    }
    ctx->pc = 0x32B1B0u;
    // 0x32b1b0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x32b1b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b1b4: 0xc0caa14  jal         func_32A850
    ctx->pc = 0x32B1B4u;
    SET_GPR_U32(ctx, 31, 0x32B1BCu);
    ctx->pc = 0x32B1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B1B4u;
    // 0x32b1b8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A850u, 0x32B1B4u, 0x32B1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B1BCu;
label_32b1bc:
    // 0x32b1bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32b1bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32b1c0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32b1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32b1c4: 0x3e00008  jr          $ra
    ctx->pc = 0x32B1C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32B1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B1C4u;
        // 0x32b1c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32B1C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32B1CCu;
    // 0x32b1cc: 0x0  nop
    ctx->pc = 0x32b1ccu;
    // NOP
    // 0x32b1d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32b1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32b1d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32b1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32b1d8: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x32b1d8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x32b1dc: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x32b1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x32b1e0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x32b1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x32b1e4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x32b1e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x32b1e8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x32B1E8u;
    {
        const bool branch_taken_0x32b1e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32B1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B1E8u;
        // 0x32b1ec: 0x94860000  lhu         $a2, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b1e8) {
            ctx->pc = 0x32B1FCu;
            goto label_32b1fc;
        }
    }
    ctx->pc = 0x32B1F0u;
    // 0x32b1f0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x32b1f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b1f4: 0xc0caa14  jal         func_32A850
    ctx->pc = 0x32B1F4u;
    SET_GPR_U32(ctx, 31, 0x32B1FCu);
    ctx->pc = 0x32B1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B1F4u;
    // 0x32b1f8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A850u, 0x32B1F4u, 0x32B1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B1FCu;
label_32b1fc:
    // 0x32b1fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32b1fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32b200: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32b200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32b204: 0x3e00008  jr          $ra
    ctx->pc = 0x32B204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32B208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B204u;
        // 0x32b208: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32B204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32B20Cu;
    // 0x32b20c: 0x0  nop
    ctx->pc = 0x32b20cu;
    // NOP
    // 0x32b210: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32b210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32b214: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32b214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32b218: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x32b218u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x32b21c: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x32b21cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x32b220: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x32b220u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x32b224: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x32b224u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x32b228: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x32B228u;
    {
        const bool branch_taken_0x32b228 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x32B22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B228u;
        // 0x32b22c: 0x94860000  lhu         $a2, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b228) {
            ctx->pc = 0x32B23Cu;
            goto label_32b23c;
        }
    }
    ctx->pc = 0x32B230u;
    // 0x32b230: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x32b230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b234: 0xc0caa14  jal         func_32A850
    ctx->pc = 0x32B234u;
    SET_GPR_U32(ctx, 31, 0x32B23Cu);
    ctx->pc = 0x32B238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B234u;
    // 0x32b238: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A850u, 0x32B234u, 0x32B23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B23Cu;
label_32b23c:
    // 0x32b23c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32b23cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32b240: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32b240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32b244: 0x3e00008  jr          $ra
    ctx->pc = 0x32B244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32B248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B244u;
        // 0x32b248: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32B244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32B24Cu;
    // 0x32b24c: 0x0  nop
    ctx->pc = 0x32b24cu;
    // NOP
    // 0x32b250: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32b250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32b254: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32b254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32b258: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x32b258u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x32b25c: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x32b25cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x32b260: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x32b260u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x32b264: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x32b264u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x32b268: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x32B268u;
    {
        const bool branch_taken_0x32b268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32B26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B268u;
        // 0x32b26c: 0x94860000  lhu         $a2, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b268) {
            ctx->pc = 0x32B27Cu;
            goto label_32b27c;
        }
    }
    ctx->pc = 0x32B270u;
    // 0x32b270: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x32b270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b274: 0xc0caa14  jal         func_32A850
    ctx->pc = 0x32B274u;
    SET_GPR_U32(ctx, 31, 0x32B27Cu);
    ctx->pc = 0x32B278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B274u;
    // 0x32b278: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A850u, 0x32B274u, 0x32B27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B27Cu;
label_32b27c:
    // 0x32b27c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32b27cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32b280: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32b280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32b284: 0x3e00008  jr          $ra
    ctx->pc = 0x32B284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32B288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B284u;
        // 0x32b288: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32B284u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32B28Cu;
    // 0x32b28c: 0x0  nop
    ctx->pc = 0x32b28cu;
    // NOP
    // 0x32b290: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32b290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32b294: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32b294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32b298: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32b298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32b29c: 0x94830002  lhu         $v1, 0x2($a0)
    ctx->pc = 0x32b29cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x32b2a0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x32b2a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b2a4: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x32b2a4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x32b2a8: 0x94850000  lhu         $a1, 0x0($a0)
    ctx->pc = 0x32b2a8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32b2ac: 0xa7a3002a  sh          $v1, 0x2A($sp)
    ctx->pc = 0x32b2acu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 42), (uint16_t)GPR_U32(ctx, 3));
    // 0x32b2b0: 0xa7a2002c  sh          $v0, 0x2C($sp)
    ctx->pc = 0x32b2b0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 44), (uint16_t)GPR_U32(ctx, 2));
    // 0x32b2b4: 0x94830006  lhu         $v1, 0x6($a0)
    ctx->pc = 0x32b2b4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x32b2b8: 0x94820008  lhu         $v0, 0x8($a0)
    ctx->pc = 0x32b2b8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x32b2bc: 0xa7a50028  sh          $a1, 0x28($sp)
    ctx->pc = 0x32b2bcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 40), (uint16_t)GPR_U32(ctx, 5));
    // 0x32b2c0: 0xa7a3002e  sh          $v1, 0x2E($sp)
    ctx->pc = 0x32b2c0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 46), (uint16_t)GPR_U32(ctx, 3));
    // 0x32b2c4: 0x21a03  sra         $v1, $v0, 8
    ctx->pc = 0x32b2c4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 8));
    // 0x32b2c8: 0x9484000a  lhu         $a0, 0xA($a0)
    ctx->pc = 0x32b2c8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x32b2cc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x32b2ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x32b2d0: 0xa7a20022  sh          $v0, 0x22($sp)
    ctx->pc = 0x32b2d0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 34), (uint16_t)GPR_U32(ctx, 2));
    // 0x32b2d4: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x32b2d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32b2d8: 0xa7a20020  sh          $v0, 0x20($sp)
    ctx->pc = 0x32b2d8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 2));
    // 0x32b2dc: 0x41203  sra         $v0, $a0, 8
    ctx->pc = 0x32b2dcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 8));
    // 0x32b2e0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x32b2e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x32b2e4: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x32b2e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x32b2e8: 0xa7a30024  sh          $v1, 0x24($sp)
    ctx->pc = 0x32b2e8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 36), (uint16_t)GPR_U32(ctx, 3));
    // 0x32b2ec: 0xc067c8c  jal         func_19F230
    ctx->pc = 0x32B2ECu;
    SET_GPR_U32(ctx, 31, 0x32B2F4u);
    ctx->pc = 0x32B2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B2ECu;
    // 0x32b2f0: 0xa7a20026  sh          $v0, 0x26($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 38), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F230u, 0x32B2ECu, 0x32B2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B2F4u;
label_32b2f4:
    // 0x32b2f4: 0x3c034380  lui         $v1, 0x4380
    ctx->pc = 0x32b2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17280 << 16));
    // 0x32b2f8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x32b2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x32b2fc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x32b2fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32b300: 0x0  nop
    ctx->pc = 0x32b300u;
    // NOP
    // 0x32b304: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x32b304u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32b308: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32b308u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b30c: 0x0  nop
    ctx->pc = 0x32b30cu;
    // NOP
    // 0x32b310: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x32b310u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32b314: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x32B314u;
    {
        const bool branch_taken_0x32b314 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x32b314) {
            ctx->pc = 0x32B318u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32B314u;
            // 0x32b318: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x32B32Cu;
            goto label_32b32c;
        }
    }
    ctx->pc = 0x32B31Cu;
    // 0x32b31c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x32b31cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x32b320: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x32b320u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x32b324: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x32B324u;
    {
        const bool branch_taken_0x32b324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B324u;
        // 0x32b328: 0x3063ffff  andi        $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b324) {
            ctx->pc = 0x32B344u;
            goto label_32b344;
        }
    }
    ctx->pc = 0x32B32Cu;
label_32b32c:
    // 0x32b32c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x32b32cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x32b330: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x32b330u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x32b334: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x32b334u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x32b338: 0x0  nop
    ctx->pc = 0x32b338u;
    // NOP
    // 0x32b33c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32b33cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32b340: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x32b340u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_32b344:
    // 0x32b344: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x32b344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x32b348: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x32b348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b34c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32b34cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b350: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x32b350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_32b354:
    // 0x32b354: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x32b354u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x32b358: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x32b358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x32b35c: 0x94420020  lhu         $v0, 0x20($v0)
    ctx->pc = 0x32b35cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x32b360: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x32b360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x32b364: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x32b364u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x32b368: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x32b368u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x32b36c: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x32B36Cu;
    {
        const bool branch_taken_0x32b36c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b36c) {
            ctx->pc = 0x32B388u;
            goto label_32b388;
        }
    }
    ctx->pc = 0x32B374u;
    // 0x32b374: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x32b374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x32b378: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x32b378u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x32b37c: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x32b37cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x32b380: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x32B380u;
    {
        const bool branch_taken_0x32b380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32b380) {
            ctx->pc = 0x32B384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32B380u;
            // 0x32b384: 0x30a2ffff  andi        $v0, $a1, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x32B354u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_32b354;
        }
    }
    ctx->pc = 0x32B388u;
label_32b388:
    // 0x32b388: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x32b388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x32b38c: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x32b38cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x32b390: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x32b390u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x32b394: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x32b394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x32b398: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x32b398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x32b39c: 0x94630028  lhu         $v1, 0x28($v1)
    ctx->pc = 0x32b39cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x32b3a0: 0xa6030088  sh          $v1, 0x88($s0)
    ctx->pc = 0x32b3a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 136), (uint16_t)GPR_U32(ctx, 3));
    // 0x32b3a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32b3a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32b3a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32b3a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32b3ac: 0x3e00008  jr          $ra
    ctx->pc = 0x32B3ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32B3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B3ACu;
        // 0x32b3b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32B3ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32B3B4u;
    // 0x32b3b4: 0x0  nop
    ctx->pc = 0x32b3b4u;
    // NOP
    // 0x32b3b8: 0x0  nop
    ctx->pc = 0x32b3b8u;
    // NOP
    // 0x32b3bc: 0x0  nop
    ctx->pc = 0x32b3bcu;
    // NOP
    // 0x32b3c0: 0x3e00008  jr          $ra
    ctx->pc = 0x32B3C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32B3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B3C0u;
        // 0x32b3c4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32B3C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32B3C8u;
    // 0x32b3c8: 0x0  nop
    ctx->pc = 0x32b3c8u;
    // NOP
    // 0x32b3cc: 0x0  nop
    ctx->pc = 0x32b3ccu;
    // NOP
    // 0x32b3d0: 0x3e00008  jr          $ra
    ctx->pc = 0x32B3D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32B3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B3D0u;
        // 0x32b3d4: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32B3D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32B3D8u;
    // 0x32b3d8: 0x0  nop
    ctx->pc = 0x32b3d8u;
    // NOP
    // 0x32b3dc: 0x0  nop
    ctx->pc = 0x32b3dcu;
    // NOP
    // 0x32b3e0: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x32b3e0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x32b3e4: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x32B3E4u;
    {
        const bool branch_taken_0x32b3e4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x32b3e4) {
            ctx->pc = 0x32B3E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32B3E4u;
            // 0x32b3e8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32B3F8u;
            goto label_32b3f8;
        }
    }
    ctx->pc = 0x32B3ECu;
    // 0x32b3ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32b3ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b3f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x32B3F0u;
    {
        const bool branch_taken_0x32b3f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B3F0u;
        // 0x32b3f4: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b3f0) {
            ctx->pc = 0x32B410u;
            goto label_32b410;
        }
    }
    ctx->pc = 0x32B3F8u;
label_32b3f8:
    // 0x32b3f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x32b3f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x32b3fc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32b3fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32b400: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32b400u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b404: 0x0  nop
    ctx->pc = 0x32b404u;
    // NOP
    // 0x32b408: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x32b408u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x32b40c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x32b40cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_32b410:
    // 0x32b410: 0xc4a10080  lwc1        $f1, 0x80($a1)
    ctx->pc = 0x32b410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32b414: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x32b414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x32b418: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32b418u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b41c: 0x0  nop
    ctx->pc = 0x32b41cu;
    // NOP
    // 0x32b420: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x32b420u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x32b424: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x32b424u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32b428: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x32B428u;
    {
        const bool branch_taken_0x32b428 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x32b428) {
            ctx->pc = 0x32B42Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32B428u;
            // 0x32b42c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x32B440u;
            goto label_32b440;
        }
    }
    ctx->pc = 0x32B430u;
    // 0x32b430: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x32b430u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x32b434: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x32b434u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x32b438: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x32B438u;
    {
        const bool branch_taken_0x32b438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B438u;
        // 0x32b43c: 0x3063ffff  andi        $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b438) {
            ctx->pc = 0x32B458u;
            goto label_32b458;
        }
    }
    ctx->pc = 0x32B440u;
label_32b440:
    // 0x32b440: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x32b440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x32b444: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x32b444u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x32b448: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x32b448u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x32b44c: 0x0  nop
    ctx->pc = 0x32b44cu;
    // NOP
    // 0x32b450: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32b450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32b454: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x32b454u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_32b458:
    // 0x32b458: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x32b458u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32b45c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x32B45Cu;
    {
        const bool branch_taken_0x32b45c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B45Cu;
        // 0x32b460: 0x3063ffff  andi        $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b45c) {
            ctx->pc = 0x32B474u;
            goto label_32b474;
        }
    }
    ctx->pc = 0x32B464u;
    // 0x32b464: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x32b464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x32b468: 0x244202a0  addiu       $v0, $v0, 0x2A0
    ctx->pc = 0x32b468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 672));
    // 0x32b46c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x32B46Cu;
    {
        const bool branch_taken_0x32b46c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B46Cu;
        // 0x32b470: 0xa4a20002  sh          $v0, 0x2($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b46c) {
            ctx->pc = 0x32B488u;
            goto label_32b488;
        }
    }
    ctx->pc = 0x32B474u;
label_32b474:
    // 0x32b474: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x32b474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x32b478: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x32b478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x32b47c: 0x8442db2e  lh          $v0, -0x24D2($v0)
    ctx->pc = 0x32b47cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957870)));
    // 0x32b480: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32b480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32b484: 0xa4a20002  sh          $v0, 0x2($a1)
    ctx->pc = 0x32b484u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 2));
label_32b488:
    // 0x32b488: 0x3e00008  jr          $ra
    ctx->pc = 0x32B488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32B48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B488u;
        // 0x32b48c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32B488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32B490u;
    // 0x32b490: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x32b490u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32b494: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32b494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32b498: 0x94860002  lhu         $a2, 0x2($a0)
    ctx->pc = 0x32b498u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x32b49c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x32b49cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x32b4a0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x32b4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x32b4a4: 0x3e00008  jr          $ra
    ctx->pc = 0x32B4A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32B4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B4A4u;
        // 0x32b4a8: 0xa4660242  sh          $a2, 0x242($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 578), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32B4A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32B4ACu;
    // 0x32b4ac: 0x0  nop
    ctx->pc = 0x32b4acu;
    // NOP
    // 0x32b4b0: 0x94860000  lhu         $a2, 0x0($a0)
    ctx->pc = 0x32b4b0u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32b4b4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32b4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32b4b8: 0x94830002  lhu         $v1, 0x2($a0)
    ctx->pc = 0x32b4b8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x32b4bc: 0x62040  sll         $a0, $a2, 1
    ctx->pc = 0x32b4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x32b4c0: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x32b4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x32b4c4: 0x94a40242  lhu         $a0, 0x242($a1)
    ctx->pc = 0x32b4c4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 578)));
    // 0x32b4c8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x32b4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x32b4cc: 0x3e00008  jr          $ra
    ctx->pc = 0x32B4CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32B4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B4CCu;
        // 0x32b4d0: 0xa4a30242  sh          $v1, 0x242($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 578), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32B4CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32B4D4u;
    // 0x32b4d4: 0x0  nop
    ctx->pc = 0x32b4d4u;
    // NOP
    // 0x32b4d8: 0x0  nop
    ctx->pc = 0x32b4d8u;
    // NOP
    // 0x32b4dc: 0x0  nop
    ctx->pc = 0x32b4dcu;
    // NOP
    // 0x32b4e0: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x32b4e0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32b4e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32b4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32b4e8: 0x94860002  lhu         $a2, 0x2($a0)
    ctx->pc = 0x32b4e8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x32b4ec: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x32b4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x32b4f0: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x32b4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x32b4f4: 0x94830242  lhu         $v1, 0x242($a0)
    ctx->pc = 0x32b4f4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 578)));
    // 0x32b4f8: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x32b4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x32b4fc: 0x3e00008  jr          $ra
    ctx->pc = 0x32B4FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32B500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B4FCu;
        // 0x32b500: 0xa4830242  sh          $v1, 0x242($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 578), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32B4FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32B504u;
    // 0x32b504: 0x0  nop
    ctx->pc = 0x32b504u;
    // NOP
    // 0x32b508: 0x0  nop
    ctx->pc = 0x32b508u;
    // NOP
    // 0x32b50c: 0x0  nop
    ctx->pc = 0x32b50cu;
    // NOP
    // 0x32b510: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32b510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32b514: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x32b514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x32b518: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32b518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32b51c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32b51cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32b520: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x32b520u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b524: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x32b524u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x32b528: 0x94900000  lhu         $s0, 0x0($a0)
    ctx->pc = 0x32b528u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32b52c: 0x94850004  lhu         $a1, 0x4($a0)
    ctx->pc = 0x32b52cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x32b530: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x32b530u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x32b534: 0x94860006  lhu         $a2, 0x6($a0)
    ctx->pc = 0x32b534u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x32b538: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x32b538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x32b53c: 0xc050e30  jal         func_1438C0
    ctx->pc = 0x32B53Cu;
    SET_GPR_U32(ctx, 31, 0x32B544u);
    ctx->pc = 0x32B540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B53Cu;
    // 0x32b540: 0x94440242  lhu         $a0, 0x242($v0) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 578)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1438C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1438C0u, 0x32B53Cu, 0x32B544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B544u;
label_32b544:
    // 0x32b544: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x32b544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x32b548: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x32B548u;
    {
        const bool branch_taken_0x32b548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b548) {
            ctx->pc = 0x32B54Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32B548u;
            // 0x32b54c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32B560u;
            goto label_32b560;
        }
    }
    ctx->pc = 0x32B550u;
    // 0x32b550: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32b550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b554: 0xc050e14  jal         func_143850
    ctx->pc = 0x32B554u;
    SET_GPR_U32(ctx, 31, 0x32B55Cu);
    ctx->pc = 0x32B558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B554u;
    // 0x32b558: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143850u, 0x32B554u, 0x32B55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B55Cu;
label_32b55c:
    // 0x32b55c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x32b55cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_32b560:
    // 0x32b560: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x32b560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x32b564: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32b564u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32b568: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32b568u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32b56c: 0x3e00008  jr          $ra
    ctx->pc = 0x32B56Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32B570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B56Cu;
        // 0x32b570: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32B56Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32B574u;
    // 0x32b574: 0x0  nop
    ctx->pc = 0x32b574u;
    // NOP
    // 0x32b578: 0x0  nop
    ctx->pc = 0x32b578u;
    // NOP
    // 0x32b57c: 0x0  nop
    ctx->pc = 0x32b57cu;
    // NOP
    // 0x32b580: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32b580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32b584: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x32b584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x32b588: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32b588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32b58c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32b58cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32b590: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x32b590u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b594: 0x94900000  lhu         $s0, 0x0($a0)
    ctx->pc = 0x32b594u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32b598: 0xc05567c  jal         func_1559F0
    ctx->pc = 0x32B598u;
    SET_GPR_U32(ctx, 31, 0x32B5A0u);
    ctx->pc = 0x32B59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B598u;
    // 0x32b59c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1559F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1559F0u, 0x32B598u, 0x32B5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B5A0u;
label_32b5a0:
    // 0x32b5a0: 0x9442012c  lhu         $v0, 0x12C($v0)
    ctx->pc = 0x32b5a0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 300)));
    // 0x32b5a4: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x32b5a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x32b5a8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x32B5A8u;
    {
        const bool branch_taken_0x32b5a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b5a8) {
            ctx->pc = 0x32B5ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32B5A8u;
            // 0x32b5ac: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32B5C0u;
            goto label_32b5c0;
        }
    }
    ctx->pc = 0x32B5B0u;
    // 0x32b5b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32b5b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b5b4: 0xc050e14  jal         func_143850
    ctx->pc = 0x32B5B4u;
    SET_GPR_U32(ctx, 31, 0x32B5BCu);
    ctx->pc = 0x32B5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B5B4u;
    // 0x32b5b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143850u, 0x32B5B4u, 0x32B5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B5BCu;
label_32b5bc:
    // 0x32b5bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x32b5bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_32b5c0:
    // 0x32b5c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32b5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32b5c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32b5c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32b5c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32b5c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32b5cc: 0x3e00008  jr          $ra
    ctx->pc = 0x32B5CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32B5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B5CCu;
        // 0x32b5d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32B5CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32B5D4u;
    // 0x32b5d4: 0x0  nop
    ctx->pc = 0x32b5d4u;
    // NOP
    // 0x32b5d8: 0x0  nop
    ctx->pc = 0x32b5d8u;
    // NOP
    // 0x32b5dc: 0x0  nop
    ctx->pc = 0x32b5dcu;
    // NOP
    // 0x32b5e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32b5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32b5e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x32b5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x32b5e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32b5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32b5ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32b5ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32b5f0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x32b5f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b5f4: 0x94900000  lhu         $s0, 0x0($a0)
    ctx->pc = 0x32b5f4u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32b5f8: 0xc05567c  jal         func_1559F0
    ctx->pc = 0x32B5F8u;
    SET_GPR_U32(ctx, 31, 0x32B600u);
    ctx->pc = 0x32B5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B5F8u;
    // 0x32b5fc: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1559F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1559F0u, 0x32B5F8u, 0x32B600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B600u;
label_32b600:
    // 0x32b600: 0x9442012c  lhu         $v0, 0x12C($v0)
    ctx->pc = 0x32b600u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 300)));
    // 0x32b604: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x32b604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x32b608: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x32B608u;
    {
        const bool branch_taken_0x32b608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b608) {
            ctx->pc = 0x32B60Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32B608u;
            // 0x32b60c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32B620u;
            goto label_32b620;
        }
    }
    ctx->pc = 0x32B610u;
    // 0x32b610: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32b610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b614: 0xc050e14  jal         func_143850
    ctx->pc = 0x32B614u;
    SET_GPR_U32(ctx, 31, 0x32B61Cu);
    ctx->pc = 0x32B618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B614u;
    // 0x32b618: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143850u, 0x32B614u, 0x32B61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B61Cu;
label_32b61c:
    // 0x32b61c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x32b61cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_32b620:
    // 0x32b620: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32b620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32b624: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32b624u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32b628: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32b628u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32b62c: 0x3e00008  jr          $ra
    ctx->pc = 0x32B62Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32B630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B62Cu;
        // 0x32b630: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32B62Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32B634u;
    // 0x32b634: 0x0  nop
    ctx->pc = 0x32b634u;
    // NOP
    // 0x32b638: 0x0  nop
    ctx->pc = 0x32b638u;
    // NOP
    // 0x32b63c: 0x0  nop
    ctx->pc = 0x32b63cu;
    // NOP
    // 0x32b640: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32b640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32b644: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x32b644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x32b648: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32b648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32b64c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32b64cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32b650: 0x94910000  lhu         $s1, 0x0($a0)
    ctx->pc = 0x32b650u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32b654: 0x94900002  lhu         $s0, 0x2($a0)
    ctx->pc = 0x32b654u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x32b658: 0xc05567c  jal         func_1559F0
    ctx->pc = 0x32B658u;
    SET_GPR_U32(ctx, 31, 0x32B660u);
    ctx->pc = 0x32B65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B658u;
    // 0x32b65c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1559F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1559F0u, 0x32B658u, 0x32B660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B660u;
label_32b660:
    // 0x32b660: 0x3223ffff  andi        $v1, $s1, 0xFFFF
    ctx->pc = 0x32b660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x32b664: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x32b664u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x32b668: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x32b668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x32b66c: 0xa4500242  sh          $s0, 0x242($v0)
    ctx->pc = 0x32b66cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 578), (uint16_t)GPR_U32(ctx, 16));
    // 0x32b670: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x32b670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32b674: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32b674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32b678: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32b678u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32b67c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32b67cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32b680: 0x3e00008  jr          $ra
    ctx->pc = 0x32B680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32B684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B680u;
        // 0x32b684: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32B680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32B688u;
    // 0x32b688: 0x0  nop
    ctx->pc = 0x32b688u;
    // NOP
    // 0x32b68c: 0x0  nop
    ctx->pc = 0x32b68cu;
    // NOP
    // 0x32b690: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32b690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32b694: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x32b694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x32b698: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32b698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32b69c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32b69cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32b6a0: 0x94910000  lhu         $s1, 0x0($a0)
    ctx->pc = 0x32b6a0u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32b6a4: 0x94900002  lhu         $s0, 0x2($a0)
    ctx->pc = 0x32b6a4u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x32b6a8: 0xc05567c  jal         func_1559F0
    ctx->pc = 0x32B6A8u;
    SET_GPR_U32(ctx, 31, 0x32B6B0u);
    ctx->pc = 0x32B6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B6A8u;
    // 0x32b6ac: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1559F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1559F0u, 0x32B6A8u, 0x32B6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B6B0u;
label_32b6b0:
    // 0x32b6b0: 0x3223ffff  andi        $v1, $s1, 0xFFFF
    ctx->pc = 0x32b6b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x32b6b4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x32b6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x32b6b8: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x32b6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x32b6bc: 0x94830242  lhu         $v1, 0x242($a0)
    ctx->pc = 0x32b6bcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 578)));
    // 0x32b6c0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32b6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32b6c4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x32b6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x32b6c8: 0xa4830242  sh          $v1, 0x242($a0)
    ctx->pc = 0x32b6c8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 578), (uint16_t)GPR_U32(ctx, 3));
    // 0x32b6cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x32b6ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32b6d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32b6d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32b6d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32b6d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32b6d8: 0x3e00008  jr          $ra
    ctx->pc = 0x32B6D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32B6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B6D8u;
        // 0x32b6dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32B6D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32B6E0u;
    // 0x32b6e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32b6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32b6e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x32b6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x32b6e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32b6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32b6ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32b6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32b6f0: 0x94910000  lhu         $s1, 0x0($a0)
    ctx->pc = 0x32b6f0u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32b6f4: 0x94900002  lhu         $s0, 0x2($a0)
    ctx->pc = 0x32b6f4u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x32b6f8: 0xc05567c  jal         func_1559F0
    ctx->pc = 0x32B6F8u;
    SET_GPR_U32(ctx, 31, 0x32B700u);
    ctx->pc = 0x32B6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B6F8u;
    // 0x32b6fc: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1559F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1559F0u, 0x32B6F8u, 0x32B700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B700u;
label_32b700:
    // 0x32b700: 0x3223ffff  andi        $v1, $s1, 0xFFFF
    ctx->pc = 0x32b700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x32b704: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x32b704u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x32b708: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x32b708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x32b70c: 0x94830242  lhu         $v1, 0x242($a0)
    ctx->pc = 0x32b70cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 578)));
    // 0x32b710: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32b710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32b714: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x32b714u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x32b718: 0xa4830242  sh          $v1, 0x242($a0)
    ctx->pc = 0x32b718u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 578), (uint16_t)GPR_U32(ctx, 3));
    // 0x32b71c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x32b71cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32b720: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32b720u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32b724: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32b724u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32b728: 0x3e00008  jr          $ra
    ctx->pc = 0x32B728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32B72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B728u;
        // 0x32b72c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32B728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32B730u;
    // 0x32b730: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x32b730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x32b734: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x32b734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x32b738: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x32b738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x32b73c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x32b73cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x32b740: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32b740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x32b744: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32b744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32b748: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32b748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32b74c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x32b74cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b750: 0x94900000  lhu         $s0, 0x0($a0)
    ctx->pc = 0x32b750u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32b754: 0x94940002  lhu         $s4, 0x2($a0)
    ctx->pc = 0x32b754u;
    SET_GPR_U32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x32b758: 0x94930004  lhu         $s3, 0x4($a0)
    ctx->pc = 0x32b758u;
    SET_GPR_U32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x32b75c: 0x94920006  lhu         $s2, 0x6($a0)
    ctx->pc = 0x32b75cu;
    SET_GPR_U32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x32b760: 0xc05567c  jal         func_1559F0
    ctx->pc = 0x32B760u;
    SET_GPR_U32(ctx, 31, 0x32B768u);
    ctx->pc = 0x32B764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B760u;
    // 0x32b764: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1559F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1559F0u, 0x32B760u, 0x32B768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B768u;
label_32b768:
    // 0x32b768: 0x3283ffff  andi        $v1, $s4, 0xFFFF
    ctx->pc = 0x32b768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    // 0x32b76c: 0x3265ffff  andi        $a1, $s3, 0xFFFF
    ctx->pc = 0x32b76cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x32b770: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x32b770u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x32b774: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x32b774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x32b778: 0x94440242  lhu         $a0, 0x242($v0)
    ctx->pc = 0x32b778u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 578)));
    // 0x32b77c: 0xc050e30  jal         func_1438C0
    ctx->pc = 0x32B77Cu;
    SET_GPR_U32(ctx, 31, 0x32B784u);
    ctx->pc = 0x32B780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B77Cu;
    // 0x32b780: 0x3246ffff  andi        $a2, $s2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1438C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1438C0u, 0x32B77Cu, 0x32B784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B784u;
label_32b784:
    // 0x32b784: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x32b784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x32b788: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x32B788u;
    {
        const bool branch_taken_0x32b788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b788) {
            ctx->pc = 0x32B78Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32B788u;
            // 0x32b78c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32B7A0u;
            goto label_32b7a0;
        }
    }
    ctx->pc = 0x32B790u;
    // 0x32b790: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32b790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b794: 0xc050e14  jal         func_143850
    ctx->pc = 0x32B794u;
    SET_GPR_U32(ctx, 31, 0x32B79Cu);
    ctx->pc = 0x32B798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B794u;
    // 0x32b798: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143850u, 0x32B794u, 0x32B79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B79Cu;
label_32b79c:
    // 0x32b79c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x32b79cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_32b7a0:
    // 0x32b7a0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x32b7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x32b7a4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x32b7a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32b7a8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x32b7a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32b7ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32b7acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32b7b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32b7b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32b7b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32b7b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32b7b8: 0x3e00008  jr          $ra
    ctx->pc = 0x32B7B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32B7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B7B8u;
        // 0x32b7bc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32B7B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32B7C0u;
    // 0x32b7c0: 0x90a30274  lbu         $v1, 0x274($a1)
    ctx->pc = 0x32b7c0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 628)));
    // 0x32b7c4: 0x94870002  lhu         $a3, 0x2($a0)
    ctx->pc = 0x32b7c4u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x32b7c8: 0x84860004  lh          $a2, 0x4($a0)
    ctx->pc = 0x32b7c8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x32b7cc: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x32b7ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x32b7d0: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x32b7d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x32b7d4: 0x10600075  beqz        $v1, . + 4 + (0x75 << 2)
    ctx->pc = 0x32B7D4u;
    {
        const bool branch_taken_0x32b7d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B7D4u;
        // 0x32b7d8: 0x94880000  lhu         $t0, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b7d4) {
            ctx->pc = 0x32B9ACu;
            goto label_32b9ac;
        }
    }
    ctx->pc = 0x32B7DCu;
    // 0x32b7dc: 0x30e4ffff  andi        $a0, $a3, 0xFFFF
    ctx->pc = 0x32b7dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x32b7e0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x32b7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x32b7e4: 0x5083005e  beql        $a0, $v1, . + 4 + (0x5E << 2)
    ctx->pc = 0x32B7E4u;
    {
        const bool branch_taken_0x32b7e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x32b7e4) {
            ctx->pc = 0x32B7E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32B7E4u;
            // 0x32b7e8: 0x90a30078  lbu         $v1, 0x78($a1) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32B960u;
            goto label_32b960;
        }
    }
    ctx->pc = 0x32B7ECu;
    // 0x32b7ec: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x32b7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32b7f0: 0x10830020  beq         $a0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x32B7F0u;
    {
        const bool branch_taken_0x32b7f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x32b7f0) {
            ctx->pc = 0x32B874u;
            goto label_32b874;
        }
    }
    ctx->pc = 0x32B7F8u;
    // 0x32b7f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32b7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32b7fc: 0x50830017  beql        $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x32B7FCu;
    {
        const bool branch_taken_0x32b7fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x32b7fc) {
            ctx->pc = 0x32B800u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32B7FCu;
            // 0x32b800: 0x84a30000  lh          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32B85Cu;
            goto label_32b85c;
        }
    }
    ctx->pc = 0x32B804u;
    // 0x32b804: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32B804u;
    {
        const bool branch_taken_0x32b804 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b804) {
            ctx->pc = 0x32B814u;
            goto label_32b814;
        }
    }
    ctx->pc = 0x32B80Cu;
    // 0x32b80c: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x32B80Cu;
    {
        const bool branch_taken_0x32b80c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B80Cu;
        // 0x32b810: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b80c) {
            ctx->pc = 0x32B9B0u;
            goto label_32b9b0;
        }
    }
    ctx->pc = 0x32B814u;
label_32b814:
    // 0x32b814: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x32B814u;
    {
        const bool branch_taken_0x32b814 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b814) {
            ctx->pc = 0x32B828u;
            goto label_32b828;
        }
    }
    ctx->pc = 0x32B81Cu;
    // 0x32b81c: 0xa4a60000  sh          $a2, 0x0($a1)
    ctx->pc = 0x32b81cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x32b820: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x32B820u;
    {
        const bool branch_taken_0x32b820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B820u;
        // 0x32b824: 0xa4a20002  sh          $v0, 0x2($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b820) {
            ctx->pc = 0x32B9ACu;
            goto label_32b9ac;
        }
    }
    ctx->pc = 0x32B828u;
label_32b828:
    // 0x32b828: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x32b828u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x32b82c: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x32b82cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x32b830: 0x8463db30  lh          $v1, -0x24D0($v1)
    ctx->pc = 0x32b830u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957872)));
    // 0x32b834: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x32b834u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x32b838: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x32b838u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x32b83c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x32b83cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x32b840: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x32b840u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x32b844: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x32b844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x32b848: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x32b848u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x32b84c: 0x8442db2c  lh          $v0, -0x24D4($v0)
    ctx->pc = 0x32b84cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957868)));
    // 0x32b850: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x32b850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x32b854: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x32B854u;
    {
        const bool branch_taken_0x32b854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B854u;
        // 0x32b858: 0xa4a20002  sh          $v0, 0x2($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b854) {
            ctx->pc = 0x32B9ACu;
            goto label_32b9ac;
        }
    }
    ctx->pc = 0x32B85Cu;
label_32b85c:
    // 0x32b85c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x32b85cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x32b860: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x32b860u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x32b864: 0x84a30002  lh          $v1, 0x2($a1)
    ctx->pc = 0x32b864u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x32b868: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x32b868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x32b86c: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x32B86Cu;
    {
        const bool branch_taken_0x32b86c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B86Cu;
        // 0x32b870: 0xa4a20002  sh          $v0, 0x2($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b86c) {
            ctx->pc = 0x32B9ACu;
            goto label_32b9ac;
        }
    }
    ctx->pc = 0x32B874u;
label_32b874:
    // 0x32b874: 0x51000019  beql        $t0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x32B874u;
    {
        const bool branch_taken_0x32b874 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b874) {
            ctx->pc = 0x32B878u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32B874u;
            // 0x32b878: 0x90a30078  lbu         $v1, 0x78($a1) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32B8DCu;
            goto label_32b8dc;
        }
    }
    ctx->pc = 0x32B87Cu;
    // 0x32b87c: 0x90a30078  lbu         $v1, 0x78($a1)
    ctx->pc = 0x32b87cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 120)));
    // 0x32b880: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x32b880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x32b884: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x32B884u;
    {
        const bool branch_taken_0x32b884 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b884) {
            ctx->pc = 0x32B894u;
            goto label_32b894;
        }
    }
    ctx->pc = 0x32B88Cu;
    // 0x32b88c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x32B88Cu;
    {
        const bool branch_taken_0x32b88c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B88Cu;
        // 0x32b890: 0xa4a60000  sh          $a2, 0x0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b88c) {
            ctx->pc = 0x32B8ACu;
            goto label_32b8ac;
        }
    }
    ctx->pc = 0x32B894u;
label_32b894:
    // 0x32b894: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x32b894u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x32b898: 0x6243c  dsll32      $a0, $a2, 16
    ctx->pc = 0x32b898u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 16));
    // 0x32b89c: 0x9463f100  lhu         $v1, -0xF00($v1)
    ctx->pc = 0x32b89cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294963456)));
    // 0x32b8a0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x32b8a0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x32b8a4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x32b8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x32b8a8: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x32b8a8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_32b8ac:
    // 0x32b8ac: 0x90a30078  lbu         $v1, 0x78($a1)
    ctx->pc = 0x32b8acu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 120)));
    // 0x32b8b0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x32b8b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x32b8b4: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x32B8B4u;
    {
        const bool branch_taken_0x32b8b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b8b4) {
            ctx->pc = 0x32B8B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32B8B4u;
            // 0x32b8b8: 0x21c3c  dsll32      $v1, $v0, 16 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32B8C4u;
            goto label_32b8c4;
        }
    }
    ctx->pc = 0x32B8BCu;
    // 0x32b8bc: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x32B8BCu;
    {
        const bool branch_taken_0x32b8bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B8BCu;
        // 0x32b8c0: 0xa4a20002  sh          $v0, 0x2($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b8bc) {
            ctx->pc = 0x32B9ACu;
            goto label_32b9ac;
        }
    }
    ctx->pc = 0x32B8C4u;
label_32b8c4:
    // 0x32b8c4: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x32b8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x32b8c8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x32b8c8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x32b8cc: 0x9442f102  lhu         $v0, -0xEFE($v0)
    ctx->pc = 0x32b8ccu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294963458)));
    // 0x32b8d0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x32b8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32b8d4: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x32B8D4u;
    {
        const bool branch_taken_0x32b8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B8D4u;
        // 0x32b8d8: 0xa4a20002  sh          $v0, 0x2($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b8d4) {
            ctx->pc = 0x32B9ACu;
            goto label_32b9ac;
        }
    }
    ctx->pc = 0x32B8DCu;
label_32b8dc:
    // 0x32b8dc: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x32b8dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x32b8e0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x32B8E0u;
    {
        const bool branch_taken_0x32b8e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b8e0) {
            ctx->pc = 0x32B904u;
            goto label_32b904;
        }
    }
    ctx->pc = 0x32B8E8u;
    // 0x32b8e8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x32b8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x32b8ec: 0x6243c  dsll32      $a0, $a2, 16
    ctx->pc = 0x32b8ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 16));
    // 0x32b8f0: 0x8463db30  lh          $v1, -0x24D0($v1)
    ctx->pc = 0x32b8f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957872)));
    // 0x32b8f4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x32b8f4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x32b8f8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x32b8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x32b8fc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x32B8FCu;
    {
        const bool branch_taken_0x32b8fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B8FCu;
        // 0x32b900: 0xa4a30000  sh          $v1, 0x0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b8fc) {
            ctx->pc = 0x32B91Cu;
            goto label_32b91c;
        }
    }
    ctx->pc = 0x32B904u;
label_32b904:
    // 0x32b904: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x32b904u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x32b908: 0x6243c  dsll32      $a0, $a2, 16
    ctx->pc = 0x32b908u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 16));
    // 0x32b90c: 0x8463db32  lh          $v1, -0x24CE($v1)
    ctx->pc = 0x32b90cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957874)));
    // 0x32b910: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x32b910u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x32b914: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x32b914u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x32b918: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x32b918u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_32b91c:
    // 0x32b91c: 0x90a30078  lbu         $v1, 0x78($a1)
    ctx->pc = 0x32b91cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 120)));
    // 0x32b920: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x32b920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x32b924: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x32B924u;
    {
        const bool branch_taken_0x32b924 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b924) {
            ctx->pc = 0x32B928u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32B924u;
            // 0x32b928: 0x21c3c  dsll32      $v1, $v0, 16 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32B948u;
            goto label_32b948;
        }
    }
    ctx->pc = 0x32B92Cu;
    // 0x32b92c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x32b92cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x32b930: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x32b930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x32b934: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x32b934u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x32b938: 0x8442db2c  lh          $v0, -0x24D4($v0)
    ctx->pc = 0x32b938u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957868)));
    // 0x32b93c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32b93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32b940: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x32B940u;
    {
        const bool branch_taken_0x32b940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B940u;
        // 0x32b944: 0xa4a20002  sh          $v0, 0x2($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b940) {
            ctx->pc = 0x32B9ACu;
            goto label_32b9ac;
        }
    }
    ctx->pc = 0x32B948u;
label_32b948:
    // 0x32b948: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x32b948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x32b94c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x32b94cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x32b950: 0x8442db2e  lh          $v0, -0x24D2($v0)
    ctx->pc = 0x32b950u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957870)));
    // 0x32b954: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x32b954u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32b958: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x32B958u;
    {
        const bool branch_taken_0x32b958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B958u;
        // 0x32b95c: 0xa4a20002  sh          $v0, 0x2($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b958) {
            ctx->pc = 0x32B9ACu;
            goto label_32b9ac;
        }
    }
    ctx->pc = 0x32B960u;
label_32b960:
    // 0x32b960: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x32b960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x32b964: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x32B964u;
    {
        const bool branch_taken_0x32b964 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b964) {
            ctx->pc = 0x32B968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32B964u;
            // 0x32b968: 0x84a30000  lh          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32B97Cu;
            goto label_32b97c;
        }
    }
    ctx->pc = 0x32B96Cu;
    // 0x32b96c: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x32b96cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x32b970: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x32b970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x32b974: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x32B974u;
    {
        const bool branch_taken_0x32b974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B974u;
        // 0x32b978: 0xa4a30000  sh          $v1, 0x0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b974) {
            ctx->pc = 0x32B984u;
            goto label_32b984;
        }
    }
    ctx->pc = 0x32B97Cu;
label_32b97c:
    // 0x32b97c: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x32b97cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x32b980: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x32b980u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_32b984:
    // 0x32b984: 0x90a30078  lbu         $v1, 0x78($a1)
    ctx->pc = 0x32b984u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 120)));
    // 0x32b988: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x32b988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x32b98c: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x32B98Cu;
    {
        const bool branch_taken_0x32b98c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b98c) {
            ctx->pc = 0x32B990u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32B98Cu;
            // 0x32b990: 0x84a30002  lh          $v1, 0x2($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32B9A4u;
            goto label_32b9a4;
        }
    }
    ctx->pc = 0x32B994u;
    // 0x32b994: 0x84a30002  lh          $v1, 0x2($a1)
    ctx->pc = 0x32b994u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x32b998: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x32b998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x32b99c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x32B99Cu;
    {
        const bool branch_taken_0x32b99c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B99Cu;
        // 0x32b9a0: 0xa4a20002  sh          $v0, 0x2($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b99c) {
            ctx->pc = 0x32B9ACu;
            goto label_32b9ac;
        }
    }
    ctx->pc = 0x32B9A4u;
label_32b9a4:
    // 0x32b9a4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x32b9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x32b9a8: 0xa4a20002  sh          $v0, 0x2($a1)
    ctx->pc = 0x32b9a8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 2));
label_32b9ac:
    // 0x32b9ac: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x32b9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_32b9b0:
    // 0x32b9b0: 0x3e00008  jr          $ra
    ctx->pc = 0x32B9B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32B9B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32B9B8u;
    // 0x32b9b8: 0x0  nop
    ctx->pc = 0x32b9b8u;
    // NOP
    // 0x32b9bc: 0x0  nop
    ctx->pc = 0x32b9bcu;
    // NOP
    // 0x32b9c0: 0x90a30078  lbu         $v1, 0x78($a1)
    ctx->pc = 0x32b9c0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 120)));
    // 0x32b9c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x32b9c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b9c8: 0x38630002  xori        $v1, $v1, 0x2
    ctx->pc = 0x32b9c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x32b9cc: 0x3e00008  jr          $ra
    ctx->pc = 0x32B9CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32B9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B9CCu;
        // 0x32b9d0: 0xa0a30078  sb          $v1, 0x78($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 120), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32B9CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32B9D4u;
    // 0x32b9d4: 0x0  nop
    ctx->pc = 0x32b9d4u;
    // NOP
    // 0x32b9d8: 0x0  nop
    ctx->pc = 0x32b9d8u;
    // NOP
    // 0x32b9dc: 0x0  nop
    ctx->pc = 0x32b9dcu;
    // NOP
    // 0x32b9e0: 0x90a30274  lbu         $v1, 0x274($a1)
    ctx->pc = 0x32b9e0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 628)));
    // 0x32b9e4: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x32b9e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x32b9e8: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x32B9E8u;
    {
        const bool branch_taken_0x32b9e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b9e8) {
            ctx->pc = 0x32B9ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32B9E8u;
            // 0x32b9ec: 0x306200fd  andi        $v0, $v1, 0xFD (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
            ctx->in_delay_slot = false;
            ctx->pc = 0x32BA10u;
            goto label_32ba10;
        }
    }
    ctx->pc = 0x32B9F0u;
    // 0x32b9f0: 0xaca40234  sw          $a0, 0x234($a1)
    ctx->pc = 0x32b9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 564), GPR_U32(ctx, 4));
    // 0x32b9f4: 0x90a20274  lbu         $v0, 0x274($a1)
    ctx->pc = 0x32b9f4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 628)));
    // 0x32b9f8: 0x304200fb  andi        $v0, $v0, 0xFB
    ctx->pc = 0x32b9f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)251);
    // 0x32b9fc: 0xa0a20274  sb          $v0, 0x274($a1)
    ctx->pc = 0x32b9fcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 628), (uint8_t)GPR_U32(ctx, 2));
    // 0x32ba00: 0x90a20274  lbu         $v0, 0x274($a1)
    ctx->pc = 0x32ba00u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 628)));
    // 0x32ba04: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x32ba04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x32ba08: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x32BA08u;
    {
        const bool branch_taken_0x32ba08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32BA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BA08u;
        // 0x32ba0c: 0xa0a20274  sb          $v0, 0x274($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 628), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ba08) {
            ctx->pc = 0x32BA14u;
            goto label_32ba14;
        }
    }
    ctx->pc = 0x32BA10u;
label_32ba10:
    // 0x32ba10: 0xa0a20274  sb          $v0, 0x274($a1)
    ctx->pc = 0x32ba10u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 628), (uint8_t)GPR_U32(ctx, 2));
label_32ba14:
    // 0x32ba14: 0x3e00008  jr          $ra
    ctx->pc = 0x32BA14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32BA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BA14u;
        // 0x32ba18: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32BA14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32BA1Cu;
    // 0x32ba1c: 0x0  nop
    ctx->pc = 0x32ba1cu;
    // NOP
    // 0x32ba20: 0xa4a0026c  sh          $zero, 0x26C($a1)
    ctx->pc = 0x32ba20u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 620), (uint16_t)GPR_U32(ctx, 0));
    // 0x32ba24: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x32ba24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ba28: 0xa4a0026e  sh          $zero, 0x26E($a1)
    ctx->pc = 0x32ba28u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 622), (uint16_t)GPR_U32(ctx, 0));
    // 0x32ba2c: 0xa4a00270  sh          $zero, 0x270($a1)
    ctx->pc = 0x32ba2cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 624), (uint16_t)GPR_U32(ctx, 0));
    // 0x32ba30: 0x3e00008  jr          $ra
    ctx->pc = 0x32BA30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32BA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BA30u;
        // 0x32ba34: 0xa4a00272  sh          $zero, 0x272($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 626), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32BA30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32BA38u;
    // 0x32ba38: 0x0  nop
    ctx->pc = 0x32ba38u;
    // NOP
    // 0x32ba3c: 0x0  nop
    ctx->pc = 0x32ba3cu;
    // NOP
    // 0x32ba40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x32ba40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x32ba44: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x32ba44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x32ba48: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x32ba48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x32ba4c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x32ba4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x32ba50: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32ba50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x32ba54: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32ba54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32ba58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32ba58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32ba5c: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x32ba5cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x32ba60: 0x94930000  lhu         $s3, 0x0($a0)
    ctx->pc = 0x32ba60u;
    SET_GPR_U32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32ba64: 0x94870004  lhu         $a3, 0x4($a0)
    ctx->pc = 0x32ba64u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x32ba68: 0x84860006  lh          $a2, 0x6($a0)
    ctx->pc = 0x32ba68u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x32ba6c: 0x94910008  lhu         $s1, 0x8($a0)
    ctx->pc = 0x32ba6cu;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x32ba70: 0x8490000a  lh          $s0, 0xA($a0)
    ctx->pc = 0x32ba70u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x32ba74: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x32BA74u;
    {
        const bool branch_taken_0x32ba74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32BA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BA74u;
        // 0x32ba78: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ba74) {
            ctx->pc = 0x32BA88u;
            goto label_32ba88;
        }
    }
    ctx->pc = 0x32BA7Cu;
    // 0x32ba7c: 0x86920002  lh          $s2, 0x2($s4)
    ctx->pc = 0x32ba7cu;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x32ba80: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x32BA80u;
    {
        const bool branch_taken_0x32ba80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32BA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BA80u;
        // 0x32ba84: 0x86840000  lh          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ba80) {
            ctx->pc = 0x32BAB8u;
            goto label_32bab8;
        }
    }
    ctx->pc = 0x32BA88u;
label_32ba88:
    // 0x32ba88: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x32ba88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x32ba8c: 0x86840000  lh          $a0, 0x0($s4)
    ctx->pc = 0x32ba8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x32ba90: 0x8445db30  lh          $a1, -0x24D0($v0)
    ctx->pc = 0x32ba90u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957872)));
    // 0x32ba94: 0x86830002  lh          $v1, 0x2($s4)
    ctx->pc = 0x32ba94u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x32ba98: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x32ba98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x32ba9c: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x32ba9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x32baa0: 0x8442db2c  lh          $v0, -0x24D4($v0)
    ctx->pc = 0x32baa0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957868)));
    // 0x32baa4: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x32baa4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x32baa8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x32baa8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x32baac: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x32baacu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32bab0: 0x2943c  dsll32      $s2, $v0, 16
    ctx->pc = 0x32bab0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 16));
    // 0x32bab4: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x32bab4u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
label_32bab8:
    // 0x32bab8: 0x62c3c  dsll32      $a1, $a2, 16
    ctx->pc = 0x32bab8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 16));
    // 0x32babc: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x32babcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x32bac0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x32bac0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x32bac4: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x32bac4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x32bac8: 0xc050e30  jal         func_1438C0
    ctx->pc = 0x32BAC8u;
    SET_GPR_U32(ctx, 31, 0x32BAD0u);
    ctx->pc = 0x32BACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BAC8u;
    // 0x32bacc: 0x30e6ffff  andi        $a2, $a3, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1438C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1438C0u, 0x32BAC8u, 0x32BAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BAD0u;
label_32bad0:
    // 0x32bad0: 0x102c3c  dsll32      $a1, $s0, 16
    ctx->pc = 0x32bad0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 16));
    // 0x32bad4: 0x12243c  dsll32      $a0, $s2, 16
    ctx->pc = 0x32bad4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 16));
    // 0x32bad8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x32bad8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x32badc: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x32badcu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x32bae0: 0x3226ffff  andi        $a2, $s1, 0xFFFF
    ctx->pc = 0x32bae0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x32bae4: 0xc050e30  jal         func_1438C0
    ctx->pc = 0x32BAE4u;
    SET_GPR_U32(ctx, 31, 0x32BAECu);
    ctx->pc = 0x32BAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BAE4u;
    // 0x32bae8: 0x3050ffff  andi        $s0, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1438C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1438C0u, 0x32BAE4u, 0x32BAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BAECu;
label_32baec:
    // 0x32baec: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x32BAECu;
    {
        const bool branch_taken_0x32baec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x32BAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BAECu;
        // 0x32baf0: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32baec) {
            ctx->pc = 0x32BB08u;
            goto label_32bb08;
        }
    }
    ctx->pc = 0x32BAF4u;
    // 0x32baf4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x32BAF4u;
    {
        const bool branch_taken_0x32baf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32baf4) {
            ctx->pc = 0x32BAF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32BAF4u;
            // 0x32baf8: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32BB0Cu;
            goto label_32bb0c;
        }
    }
    ctx->pc = 0x32BAFCu;
    // 0x32bafc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x32bafcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bb00: 0xc0caa14  jal         func_32A850
    ctx->pc = 0x32BB00u;
    SET_GPR_U32(ctx, 31, 0x32BB08u);
    ctx->pc = 0x32BB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BB00u;
    // 0x32bb04: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A850u, 0x32BB00u, 0x32BB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BB08u;
label_32bb08:
    // 0x32bb08: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x32bb08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_32bb0c:
    // 0x32bb0c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x32bb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x32bb10: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x32bb10u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32bb14: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x32bb14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32bb18: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32bb18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32bb1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32bb1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32bb20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32bb20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32bb24: 0x3e00008  jr          $ra
    ctx->pc = 0x32BB24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32BB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BB24u;
        // 0x32bb28: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32BB24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32BB2Cu;
    // 0x32bb2c: 0x0  nop
    ctx->pc = 0x32bb2cu;
    // NOP
    // 0x32bb30: 0x90a30274  lbu         $v1, 0x274($a1)
    ctx->pc = 0x32bb30u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 628)));
    // 0x32bb34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x32bb34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bb38: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x32bb38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x32bb3c: 0x3e00008  jr          $ra
    ctx->pc = 0x32BB3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32BB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BB3Cu;
        // 0x32bb40: 0xa0a30274  sb          $v1, 0x274($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 628), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32BB3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32BB44u;
    // 0x32bb44: 0x0  nop
    ctx->pc = 0x32bb44u;
    // NOP
    // 0x32bb48: 0x0  nop
    ctx->pc = 0x32bb48u;
    // NOP
    // 0x32bb4c: 0x0  nop
    ctx->pc = 0x32bb4cu;
    // NOP
    // 0x32bb50: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x32bb50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32bb54: 0xc4a0007c  lwc1        $f0, 0x7C($a1)
    ctx->pc = 0x32bb54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32bb58: 0x3c0901dd  lui         $t1, 0x1DD
    ctx->pc = 0x32bb58u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)477 << 16));
    // 0x32bb5c: 0x3c0801dd  lui         $t0, 0x1DD
    ctx->pc = 0x32bb5cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)477 << 16));
    // 0x32bb60: 0x3c0701dd  lui         $a3, 0x1DD
    ctx->pc = 0x32bb60u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)477 << 16));
    // 0x32bb64: 0x3c0601dd  lui         $a2, 0x1DD
    ctx->pc = 0x32bb64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)477 << 16));
    // 0x32bb68: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x32bb68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32bb6c: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x32bb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x32bb70: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x32bb70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32bb74: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x32bb74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x32bb78: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x32bb78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32bb7c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x32bb7cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x32bb80: 0x440a0000  mfc1        $t2, $f0
    ctx->pc = 0x32bb80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x32bb84: 0x0  nop
    ctx->pc = 0x32bb84u;
    // NOP
    // 0x32bb88: 0xa52af350  sh          $t2, -0xCB0($t1)
    ctx->pc = 0x32bb88u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 4294964048), (uint16_t)GPR_U32(ctx, 10));
    // 0x32bb8c: 0xc4a00080  lwc1        $f0, 0x80($a1)
    ctx->pc = 0x32bb8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32bb90: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x32bb90u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x32bb94: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x32bb94u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32bb98: 0x0  nop
    ctx->pc = 0x32bb98u;
    // NOP
    // 0x32bb9c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x32bb9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32bba0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x32bba0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32bba4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x32bba4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x32bba8: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x32bba8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x32bbac: 0x0  nop
    ctx->pc = 0x32bbacu;
    // NOP
    // 0x32bbb0: 0xa505f352  sh          $a1, -0xCAE($t0)
    ctx->pc = 0x32bbb0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 4294964050), (uint16_t)GPR_U32(ctx, 5));
    // 0x32bbb4: 0x94850004  lhu         $a1, 0x4($a0)
    ctx->pc = 0x32bbb4u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x32bbb8: 0xa4e5f354  sh          $a1, -0xCAC($a3)
    ctx->pc = 0x32bbb8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 4294964052), (uint16_t)GPR_U32(ctx, 5));
    // 0x32bbbc: 0x94850006  lhu         $a1, 0x6($a0)
    ctx->pc = 0x32bbbcu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x32bbc0: 0xa4c5f356  sh          $a1, -0xCAA($a2)
    ctx->pc = 0x32bbc0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4294964054), (uint16_t)GPR_U32(ctx, 5));
    // 0x32bbc4: 0x94840008  lhu         $a0, 0x8($a0)
    ctx->pc = 0x32bbc4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x32bbc8: 0x3e00008  jr          $ra
    ctx->pc = 0x32BBC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32BBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BBC8u;
        // 0x32bbcc: 0xa064f358  sb          $a0, -0xCA8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294964056), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32BBC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32BBD0u;
    // 0x32bbd0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x32bbd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x32bbd4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x32bbd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x32bbd8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x32bbd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x32bbdc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32bbdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x32bbe0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32bbe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32bbe4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32bbe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32bbe8: 0x90a20274  lbu         $v0, 0x274($a1)
    ctx->pc = 0x32bbe8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 628)));
    // 0x32bbec: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x32bbecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x32bbf0: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x32BBF0u;
    {
        const bool branch_taken_0x32bbf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32BBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BBF0u;
        // 0x32bbf4: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32bbf0) {
            ctx->pc = 0x32BD40u;
            goto label_32bd40;
        }
    }
    ctx->pc = 0x32BBF8u;
    // 0x32bbf8: 0x94850000  lhu         $a1, 0x0($a0)
    ctx->pc = 0x32bbf8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32bbfc: 0x94830002  lhu         $v1, 0x2($a0)
    ctx->pc = 0x32bbfcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x32bc00: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x32bc00u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x32bc04: 0xa7a5005c  sh          $a1, 0x5C($sp)
    ctx->pc = 0x32bc04u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 92), (uint16_t)GPR_U32(ctx, 5));
    // 0x32bc08: 0xa7a30058  sh          $v1, 0x58($sp)
    ctx->pc = 0x32bc08u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 88), (uint16_t)GPR_U32(ctx, 3));
    // 0x32bc0c: 0xa7a20054  sh          $v0, 0x54($sp)
    ctx->pc = 0x32bc0cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 84), (uint16_t)GPR_U32(ctx, 2));
    // 0x32bc10: 0x94850006  lhu         $a1, 0x6($a0)
    ctx->pc = 0x32bc10u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x32bc14: 0x94830008  lhu         $v1, 0x8($a0)
    ctx->pc = 0x32bc14u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x32bc18: 0x9482000a  lhu         $v0, 0xA($a0)
    ctx->pc = 0x32bc18u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x32bc1c: 0xa7a5005e  sh          $a1, 0x5E($sp)
    ctx->pc = 0x32bc1cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 94), (uint16_t)GPR_U32(ctx, 5));
    // 0x32bc20: 0xa7a3005a  sh          $v1, 0x5A($sp)
    ctx->pc = 0x32bc20u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 90), (uint16_t)GPR_U32(ctx, 3));
    // 0x32bc24: 0xc067c8c  jal         func_19F230
    ctx->pc = 0x32BC24u;
    SET_GPR_U32(ctx, 31, 0x32BC2Cu);
    ctx->pc = 0x32BC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BC24u;
    // 0x32bc28: 0xa7a20056  sh          $v0, 0x56($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 86), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F230u, 0x32BC24u, 0x32BC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BC2Cu;
label_32bc2c:
    // 0x32bc2c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x32bc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x32bc30: 0x3c0201dd  lui         $v0, 0x1DD
    ctx->pc = 0x32bc30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)477 << 16));
    // 0x32bc34: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x32bc34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32bc38: 0x0  nop
    ctx->pc = 0x32bc38u;
    // NOP
    // 0x32bc3c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x32bc3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32bc40: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x32bc40u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x32bc44: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x32bc44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x32bc48: 0xc067c8c  jal         func_19F230
    ctx->pc = 0x32BC48u;
    SET_GPR_U32(ctx, 31, 0x32BC50u);
    ctx->pc = 0x32BC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BC48u;
    // 0x32bc4c: 0x9450f354  lhu         $s0, -0xCAC($v0) (Delay Slot)
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294964052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F230u, 0x32BC48u, 0x32BC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BC50u;
label_32bc50:
    // 0x32bc50: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x32BC50u;
    {
        const bool branch_taken_0x32bc50 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x32bc50) {
            ctx->pc = 0x32BC54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32BC50u;
            // 0x32bc54: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32BC64u;
            goto label_32bc64;
        }
    }
    ctx->pc = 0x32BC58u;
    // 0x32bc58: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x32bc58u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32bc5c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x32BC5Cu;
    {
        const bool branch_taken_0x32bc5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32BC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BC5Cu;
        // 0x32bc60: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32bc5c) {
            ctx->pc = 0x32BC7Cu;
            goto label_32bc7c;
        }
    }
    ctx->pc = 0x32BC64u;
label_32bc64:
    // 0x32bc64: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x32bc64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x32bc68: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32bc68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32bc6c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x32bc6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32bc70: 0x0  nop
    ctx->pc = 0x32bc70u;
    // NOP
    // 0x32bc74: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x32bc74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32bc78: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x32bc78u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_32bc7c:
    // 0x32bc7c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x32bc7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32bc80: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x32bc80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x32bc84: 0x3c0201dd  lui         $v0, 0x1DD
    ctx->pc = 0x32bc84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)477 << 16));
    // 0x32bc88: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x32bc88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x32bc8c: 0x9453f356  lhu         $s3, -0xCAA($v0)
    ctx->pc = 0x32bc8cu;
    SET_GPR_U32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294964054)));
    // 0x32bc90: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x32bc90u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32bc94: 0x0  nop
    ctx->pc = 0x32bc94u;
    // NOP
    // 0x32bc98: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x32bc98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x32bc9c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x32bc9cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x32bca0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x32bca0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x32bca4: 0xc067c8c  jal         func_19F230
    ctx->pc = 0x32BCA4u;
    SET_GPR_U32(ctx, 31, 0x32BCACu);
    ctx->pc = 0x32BCA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BCA4u;
    // 0x32bca8: 0x438023  subu        $s0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F230u, 0x32BCA4u, 0x32BCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BCACu;
label_32bcac:
    // 0x32bcac: 0x6620004  bltzl       $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x32BCACu;
    {
        const bool branch_taken_0x32bcac = (GPR_S32(ctx, 19) < 0);
        if (branch_taken_0x32bcac) {
            ctx->pc = 0x32BCB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32BCACu;
            // 0x32bcb0: 0x131842  srl         $v1, $s3, 1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32BCC0u;
            goto label_32bcc0;
        }
    }
    ctx->pc = 0x32BCB4u;
    // 0x32bcb4: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x32bcb4u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32bcb8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x32BCB8u;
    {
        const bool branch_taken_0x32bcb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32BCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BCB8u;
        // 0x32bcbc: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32bcb8) {
            ctx->pc = 0x32BCD8u;
            goto label_32bcd8;
        }
    }
    ctx->pc = 0x32BCC0u;
label_32bcc0:
    // 0x32bcc0: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x32bcc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x32bcc4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32bcc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32bcc8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x32bcc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32bccc: 0x0  nop
    ctx->pc = 0x32bcccu;
    // NOP
    // 0x32bcd0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x32bcd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32bcd4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x32bcd4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_32bcd8:
    // 0x32bcd8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x32bcd8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32bcdc: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x32bcdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x32bce0: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x32bce0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x32bce4: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x32bce4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x32bce8: 0x5d3021  addu        $a2, $v0, $sp
    ctx->pc = 0x32bce8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x32bcec: 0x8463f350  lh          $v1, -0xCB0($v1)
    ctx->pc = 0x32bcecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294964048)));
    // 0x32bcf0: 0x3c0201dd  lui         $v0, 0x1DD
    ctx->pc = 0x32bcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)477 << 16));
    // 0x32bcf4: 0x94c50058  lhu         $a1, 0x58($a2)
    ctx->pc = 0x32bcf4u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 88)));
    // 0x32bcf8: 0x8442f352  lh          $v0, -0xCAE($v0)
    ctx->pc = 0x32bcf8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294964050)));
    // 0x32bcfc: 0x3268ffff  andi        $t0, $s3, 0xFFFF
    ctx->pc = 0x32bcfcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x32bd00: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x32bd00u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32bd04: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x32bd04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x32bd08: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x32bd08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x32bd0c: 0x94c4005c  lhu         $a0, 0x5C($a2)
    ctx->pc = 0x32bd0cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 92)));
    // 0x32bd10: 0x33c3c  dsll32      $a3, $v1, 16
    ctx->pc = 0x32bd10u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 16));
    // 0x32bd14: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x32bd14u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bd18: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x32bd18u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x32bd1c: 0x94c60054  lhu         $a2, 0x54($a2)
    ctx->pc = 0x32bd1cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 84)));
    // 0x32bd20: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x32bd20u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x32bd24: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x32bd24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x32bd28: 0x0  nop
    ctx->pc = 0x32bd28u;
    // NOP
    // 0x32bd2c: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x32bd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x32bd30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32bd30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32bd34: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x32bd34u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x32bd38: 0xc0caa8c  jal         func_32AA30
    ctx->pc = 0x32BD38u;
    SET_GPR_U32(ctx, 31, 0x32BD40u);
    ctx->pc = 0x32BD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BD38u;
    // 0x32bd3c: 0x8443f  dsra32      $t0, $t0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32AA30u;
    goto label_32aa30;
    ctx->pc = 0x32BD40u;
label_32bd40:
    // 0x32bd40: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x32bd40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32bd44: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x32bd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x32bd48: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x32bd48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32bd4c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32bd4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32bd50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32bd50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32bd54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32bd54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32bd58: 0x3e00008  jr          $ra
    ctx->pc = 0x32BD58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32BD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BD58u;
        // 0x32bd5c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32BD58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32BD60u;
    // 0x32bd60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x32bd60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x32bd64: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x32bd64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x32bd68: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x32bd68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x32bd6c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32bd6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x32bd70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32bd70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32bd74: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32bd74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32bd78: 0x90a20274  lbu         $v0, 0x274($a1)
    ctx->pc = 0x32bd78u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 628)));
    // 0x32bd7c: 0x94900000  lhu         $s0, 0x0($a0)
    ctx->pc = 0x32bd7cu;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32bd80: 0x94830002  lhu         $v1, 0x2($a0)
    ctx->pc = 0x32bd80u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x32bd84: 0x94930004  lhu         $s3, 0x4($a0)
    ctx->pc = 0x32bd84u;
    SET_GPR_U32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x32bd88: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x32bd88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x32bd8c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x32BD8Cu;
    {
        const bool branch_taken_0x32bd8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32BD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BD8Cu;
        // 0x32bd90: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32bd8c) {
            ctx->pc = 0x32BDC8u;
            goto label_32bdc8;
        }
    }
    ctx->pc = 0x32BD94u;
    // 0x32bd94: 0xc067c8c  jal         func_19F230
    ctx->pc = 0x32BD94u;
    SET_GPR_U32(ctx, 31, 0x32BD9Cu);
    ctx->pc = 0x32BD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BD94u;
    // 0x32bd98: 0x3072ffff  andi        $s2, $v1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F230u, 0x32BD94u, 0x32BD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BD9Cu;
label_32bd9c:
    // 0x32bd9c: 0x3262ffff  andi        $v0, $s3, 0xFFFF
    ctx->pc = 0x32bd9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x32bda0: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x32bda0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x32bda4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x32bda4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32bda8: 0x0  nop
    ctx->pc = 0x32bda8u;
    // NOP
    // 0x32bdac: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x32bdacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32bdb0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x32bdb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32bdb4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x32bdb4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x32bdb8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x32bdb8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x32bdbc: 0x0  nop
    ctx->pc = 0x32bdbcu;
    // NOP
    // 0x32bdc0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x32bdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x32bdc4: 0xa622023e  sh          $v0, 0x23E($s1)
    ctx->pc = 0x32bdc4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 574), (uint16_t)GPR_U32(ctx, 2));
label_32bdc8:
    // 0x32bdc8: 0x9623023c  lhu         $v1, 0x23C($s1)
    ctx->pc = 0x32bdc8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 572)));
    // 0x32bdcc: 0x9622023e  lhu         $v0, 0x23E($s1)
    ctx->pc = 0x32bdccu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 574)));
    // 0x32bdd0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x32bdd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x32bdd4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x32BDD4u;
    {
        const bool branch_taken_0x32bdd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32bdd4) {
            ctx->pc = 0x32BDD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32BDD4u;
            // 0x32bdd8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32BDECu;
            goto label_32bdec;
        }
    }
    ctx->pc = 0x32BDDCu;
    // 0x32bddc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32bddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bde0: 0xc0caa14  jal         func_32A850
    ctx->pc = 0x32BDE0u;
    SET_GPR_U32(ctx, 31, 0x32BDE8u);
    ctx->pc = 0x32BDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BDE0u;
    // 0x32bde4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A850u, 0x32BDE0u, 0x32BDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BDE8u;
label_32bde8:
    // 0x32bde8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x32bde8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_32bdec:
    // 0x32bdec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x32bdecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x32bdf0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x32bdf0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32bdf4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32bdf4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32bdf8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32bdf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32bdfc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32bdfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32be00: 0x3e00008  jr          $ra
    ctx->pc = 0x32BE00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32BE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BE00u;
        // 0x32be04: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32BE00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32BE08u;
    // 0x32be08: 0x0  nop
    ctx->pc = 0x32be08u;
    // NOP
    // 0x32be0c: 0x0  nop
    ctx->pc = 0x32be0cu;
    // NOP
    // 0x32be10: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x32be10u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32be14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32be14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32be18: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x32BE18u;
    {
        const bool branch_taken_0x32be18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x32be18) {
            ctx->pc = 0x32BE1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32BE18u;
            // 0x32be1c: 0x90a20078  lbu         $v0, 0x78($a1) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32BE3Cu;
            goto label_32be3c;
        }
    }
    ctx->pc = 0x32BE20u;
    // 0x32be20: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x32BE20u;
    {
        const bool branch_taken_0x32be20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32be20) {
            ctx->pc = 0x32BE24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32BE20u;
            // 0x32be24: 0x90a20078  lbu         $v0, 0x78($a1) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32BE30u;
            goto label_32be30;
        }
    }
    ctx->pc = 0x32BE28u;
    // 0x32be28: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x32BE28u;
    {
        const bool branch_taken_0x32be28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32BE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BE28u;
        // 0x32be2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32be28) {
            ctx->pc = 0x32BE48u;
            goto label_32be48;
        }
    }
    ctx->pc = 0x32BE30u;
label_32be30:
    // 0x32be30: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x32be30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x32be34: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x32BE34u;
    {
        const bool branch_taken_0x32be34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32BE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BE34u;
        // 0x32be38: 0xa0a20078  sb          $v0, 0x78($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 120), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32be34) {
            ctx->pc = 0x32BE44u;
            goto label_32be44;
        }
    }
    ctx->pc = 0x32BE3Cu;
label_32be3c:
    // 0x32be3c: 0x304200fd  andi        $v0, $v0, 0xFD
    ctx->pc = 0x32be3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)253);
    // 0x32be40: 0xa0a20078  sb          $v0, 0x78($a1)
    ctx->pc = 0x32be40u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 120), (uint8_t)GPR_U32(ctx, 2));
label_32be44:
    // 0x32be44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32be44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32be48:
    // 0x32be48: 0x3e00008  jr          $ra
    ctx->pc = 0x32BE48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32BE48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32BE50u;
    // 0x32be50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x32be50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x32be54: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x32be54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x32be58: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32be58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x32be5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32be5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32be60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32be60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32be64: 0x94900000  lhu         $s0, 0x0($a0)
    ctx->pc = 0x32be64u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32be68: 0x94920002  lhu         $s2, 0x2($a0)
    ctx->pc = 0x32be68u;
    SET_GPR_U32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x32be6c: 0xc067c8c  jal         func_19F230
    ctx->pc = 0x32BE6Cu;
    SET_GPR_U32(ctx, 31, 0x32BE74u);
    ctx->pc = 0x32BE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BE6Cu;
    // 0x32be70: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F230u, 0x32BE6Cu, 0x32BE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BE74u;
label_32be74:
    // 0x32be74: 0x6420004  bltzl       $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x32BE74u;
    {
        const bool branch_taken_0x32be74 = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x32be74) {
            ctx->pc = 0x32BE78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32BE74u;
            // 0x32be78: 0x121842  srl         $v1, $s2, 1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32BE88u;
            goto label_32be88;
        }
    }
    ctx->pc = 0x32BE7Cu;
    // 0x32be7c: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x32be7cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32be80: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x32BE80u;
    {
        const bool branch_taken_0x32be80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32BE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BE80u;
        // 0x32be84: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32be80) {
            ctx->pc = 0x32BEA0u;
            goto label_32bea0;
        }
    }
    ctx->pc = 0x32BE88u;
label_32be88:
    // 0x32be88: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x32be88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x32be8c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32be8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32be90: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x32be90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32be94: 0x0  nop
    ctx->pc = 0x32be94u;
    // NOP
    // 0x32be98: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x32be98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32be9c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x32be9cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_32bea0:
    // 0x32bea0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x32bea0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32bea4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x32bea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x32bea8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32bea8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32beac: 0x0  nop
    ctx->pc = 0x32beacu;
    // NOP
    // 0x32beb0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x32beb0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32beb4: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x32BEB4u;
    {
        const bool branch_taken_0x32beb4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x32beb4) {
            ctx->pc = 0x32BEB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32BEB4u;
            // 0x32beb8: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x32BECCu;
            goto label_32becc;
        }
    }
    ctx->pc = 0x32BEBCu;
    // 0x32bebc: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x32bebcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x32bec0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x32bec0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x32bec4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x32BEC4u;
    {
        const bool branch_taken_0x32bec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32BEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BEC4u;
        // 0x32bec8: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32bec4) {
            ctx->pc = 0x32BEE4u;
            goto label_32bee4;
        }
    }
    ctx->pc = 0x32BECCu;
label_32becc:
    // 0x32becc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x32beccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x32bed0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x32bed0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x32bed4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x32bed4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x32bed8: 0x0  nop
    ctx->pc = 0x32bed8u;
    // NOP
    // 0x32bedc: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x32bedcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x32bee0: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x32bee0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_32bee4:
    // 0x32bee4: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x32bee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x32bee8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32bee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32beec: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x32beecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x32bef0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x32bef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x32bef4: 0xa4640242  sh          $a0, 0x242($v1)
    ctx->pc = 0x32bef4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 578), (uint16_t)GPR_U32(ctx, 4));
    // 0x32bef8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x32bef8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32befc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32befcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32bf00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32bf00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32bf04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32bf04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32bf08: 0x3e00008  jr          $ra
    ctx->pc = 0x32BF08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32BF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BF08u;
        // 0x32bf0c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32BF08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32BF10u;
    // 0x32bf10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x32bf10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x32bf14: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x32bf14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x32bf18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32bf18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x32bf1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32bf1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32bf20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32bf20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32bf24: 0x94920000  lhu         $s2, 0x0($a0)
    ctx->pc = 0x32bf24u;
    SET_GPR_U32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32bf28: 0x94910002  lhu         $s1, 0x2($a0)
    ctx->pc = 0x32bf28u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x32bf2c: 0xc067c8c  jal         func_19F230
    ctx->pc = 0x32BF2Cu;
    SET_GPR_U32(ctx, 31, 0x32BF34u);
    ctx->pc = 0x32BF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BF2Cu;
    // 0x32bf30: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F230u, 0x32BF2Cu, 0x32BF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BF34u;
label_32bf34:
    // 0x32bf34: 0x6220004  bltzl       $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x32BF34u;
    {
        const bool branch_taken_0x32bf34 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x32bf34) {
            ctx->pc = 0x32BF38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32BF34u;
            // 0x32bf38: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32BF48u;
            goto label_32bf48;
        }
    }
    ctx->pc = 0x32BF3Cu;
    // 0x32bf3c: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x32bf3cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32bf40: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x32BF40u;
    {
        const bool branch_taken_0x32bf40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32BF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BF40u;
        // 0x32bf44: 0x468008e0  cvt.s.w     $f3, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32bf40) {
            ctx->pc = 0x32BF60u;
            goto label_32bf60;
        }
    }
    ctx->pc = 0x32BF48u;
label_32bf48:
    // 0x32bf48: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x32bf48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x32bf4c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32bf4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32bf50: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x32bf50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32bf54: 0x0  nop
    ctx->pc = 0x32bf54u;
    // NOP
    // 0x32bf58: 0x468008e0  cvt.s.w     $f3, $f1
    ctx->pc = 0x32bf58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x32bf5c: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x32bf5cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_32bf60:
    // 0x32bf60: 0x3242ffff  andi        $v0, $s2, 0xFFFF
    ctx->pc = 0x32bf60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x32bf64: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x32bf64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x32bf68: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x32bf68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x32bf6c: 0x94820242  lhu         $v0, 0x242($a0)
    ctx->pc = 0x32bf6cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 578)));
    // 0x32bf70: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x32BF70u;
    {
        const bool branch_taken_0x32bf70 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x32bf70) {
            ctx->pc = 0x32BF74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32BF70u;
            // 0x32bf74: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32BF84u;
            goto label_32bf84;
        }
    }
    ctx->pc = 0x32BF78u;
    // 0x32bf78: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x32bf78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32bf7c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x32BF7Cu;
    {
        const bool branch_taken_0x32bf7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32BF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BF7Cu;
        // 0x32bf80: 0x468008a0  cvt.s.w     $f2, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32bf7c) {
            ctx->pc = 0x32BF9Cu;
            goto label_32bf9c;
        }
    }
    ctx->pc = 0x32BF84u;
label_32bf84:
    // 0x32bf84: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x32bf84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x32bf88: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32bf88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32bf8c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x32bf8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32bf90: 0x0  nop
    ctx->pc = 0x32bf90u;
    // NOP
    // 0x32bf94: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x32bf94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x32bf98: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x32bf98u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_32bf9c:
    // 0x32bf9c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x32bf9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32bfa0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x32bfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x32bfa4: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x32bfa4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[2]));
    // 0x32bfa8: 0x4600185c  madd.s      $f1, $f3, $f0
    ctx->pc = 0x32bfa8u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x32bfac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32bfacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32bfb0: 0x0  nop
    ctx->pc = 0x32bfb0u;
    // NOP
    // 0x32bfb4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x32bfb4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32bfb8: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x32BFB8u;
    {
        const bool branch_taken_0x32bfb8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x32bfb8) {
            ctx->pc = 0x32BFBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32BFB8u;
            // 0x32bfbc: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x32BFD0u;
            goto label_32bfd0;
        }
    }
    ctx->pc = 0x32BFC0u;
    // 0x32bfc0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x32bfc0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x32bfc4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x32bfc4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x32bfc8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x32BFC8u;
    {
        const bool branch_taken_0x32bfc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32BFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BFC8u;
        // 0x32bfcc: 0x3063ffff  andi        $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32bfc8) {
            ctx->pc = 0x32BFE8u;
            goto label_32bfe8;
        }
    }
    ctx->pc = 0x32BFD0u;
label_32bfd0:
    // 0x32bfd0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x32bfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x32bfd4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x32bfd4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x32bfd8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x32bfd8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x32bfdc: 0x0  nop
    ctx->pc = 0x32bfdcu;
    // NOP
    // 0x32bfe0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32bfe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32bfe4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x32bfe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_32bfe8:
    // 0x32bfe8: 0xa4830242  sh          $v1, 0x242($a0)
    ctx->pc = 0x32bfe8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 578), (uint16_t)GPR_U32(ctx, 3));
    // 0x32bfec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32bfecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32bff0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x32bff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32bff4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32bff4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32bff8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32bff8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32bffc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32bffcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32c000: 0x3e00008  jr          $ra
    ctx->pc = 0x32C000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32C004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C000u;
        // 0x32c004: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32C008u;
    // 0x32c008: 0x0  nop
    ctx->pc = 0x32c008u;
    // NOP
    // 0x32c00c: 0x0  nop
    ctx->pc = 0x32c00cu;
    // NOP
    // 0x32c010: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x32c010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x32c014: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x32c014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x32c018: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32c018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x32c01c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32c01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32c020: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32c020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32c024: 0x94920000  lhu         $s2, 0x0($a0)
    ctx->pc = 0x32c024u;
    SET_GPR_U32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32c028: 0x94910002  lhu         $s1, 0x2($a0)
    ctx->pc = 0x32c028u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x32c02c: 0xc067c8c  jal         func_19F230
    ctx->pc = 0x32C02Cu;
    SET_GPR_U32(ctx, 31, 0x32C034u);
    ctx->pc = 0x32C030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C02Cu;
    // 0x32c030: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F230u, 0x32C02Cu, 0x32C034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C034u;
label_32c034:
    // 0x32c034: 0x6220004  bltzl       $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x32C034u;
    {
        const bool branch_taken_0x32c034 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x32c034) {
            ctx->pc = 0x32C038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32C034u;
            // 0x32c038: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32C048u;
            goto label_32c048;
        }
    }
    ctx->pc = 0x32C03Cu;
    // 0x32c03c: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x32c03cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32c040: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x32C040u;
    {
        const bool branch_taken_0x32c040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C040u;
        // 0x32c044: 0x468008e0  cvt.s.w     $f3, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c040) {
            ctx->pc = 0x32C060u;
            goto label_32c060;
        }
    }
    ctx->pc = 0x32C048u;
label_32c048:
    // 0x32c048: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x32c048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x32c04c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32c04cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32c050: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x32c050u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32c054: 0x0  nop
    ctx->pc = 0x32c054u;
    // NOP
    // 0x32c058: 0x468008e0  cvt.s.w     $f3, $f1
    ctx->pc = 0x32c058u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x32c05c: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x32c05cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_32c060:
    // 0x32c060: 0x3242ffff  andi        $v0, $s2, 0xFFFF
    ctx->pc = 0x32c060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x32c064: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x32c064u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x32c068: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x32c068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x32c06c: 0x94820242  lhu         $v0, 0x242($a0)
    ctx->pc = 0x32c06cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 578)));
    // 0x32c070: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x32C070u;
    {
        const bool branch_taken_0x32c070 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x32c070) {
            ctx->pc = 0x32C074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32C070u;
            // 0x32c074: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32C084u;
            goto label_32c084;
        }
    }
    ctx->pc = 0x32C078u;
    // 0x32c078: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x32c078u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32c07c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x32C07Cu;
    {
        const bool branch_taken_0x32c07c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C07Cu;
        // 0x32c080: 0x468008a0  cvt.s.w     $f2, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c07c) {
            ctx->pc = 0x32C09Cu;
            goto label_32c09c;
        }
    }
    ctx->pc = 0x32C084u;
label_32c084:
    // 0x32c084: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x32c084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x32c088: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32c088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32c08c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x32c08cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32c090: 0x0  nop
    ctx->pc = 0x32c090u;
    // NOP
    // 0x32c094: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x32c094u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x32c098: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x32c098u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_32c09c:
    // 0x32c09c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x32c09cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32c0a0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x32c0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x32c0a4: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x32c0a4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[2]));
    // 0x32c0a8: 0x4600185d  msub.s      $f1, $f3, $f0
    ctx->pc = 0x32c0a8u;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x32c0ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32c0acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32c0b0: 0x0  nop
    ctx->pc = 0x32c0b0u;
    // NOP
    // 0x32c0b4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x32c0b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32c0b8: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x32C0B8u;
    {
        const bool branch_taken_0x32c0b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x32c0b8) {
            ctx->pc = 0x32C0BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32C0B8u;
            // 0x32c0bc: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x32C0D0u;
            goto label_32c0d0;
        }
    }
    ctx->pc = 0x32C0C0u;
    // 0x32c0c0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x32c0c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x32c0c4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x32c0c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x32c0c8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x32C0C8u;
    {
        const bool branch_taken_0x32c0c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C0C8u;
        // 0x32c0cc: 0x3063ffff  andi        $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c0c8) {
            ctx->pc = 0x32C0E8u;
            goto label_32c0e8;
        }
    }
    ctx->pc = 0x32C0D0u;
label_32c0d0:
    // 0x32c0d0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x32c0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x32c0d4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x32c0d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x32c0d8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x32c0d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x32c0dc: 0x0  nop
    ctx->pc = 0x32c0dcu;
    // NOP
    // 0x32c0e0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32c0e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32c0e4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x32c0e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_32c0e8:
    // 0x32c0e8: 0xa4830242  sh          $v1, 0x242($a0)
    ctx->pc = 0x32c0e8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 578), (uint16_t)GPR_U32(ctx, 3));
    // 0x32c0ec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32c0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32c0f0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x32c0f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32c0f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32c0f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32c0f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32c0f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32c0fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32c0fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32c100: 0x3e00008  jr          $ra
    ctx->pc = 0x32C100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32C104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C100u;
        // 0x32c104: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32C108u;
    // 0x32c108: 0x0  nop
    ctx->pc = 0x32c108u;
    // NOP
    // 0x32c10c: 0x0  nop
    ctx->pc = 0x32c10cu;
    // NOP
    // 0x32c110: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x32c110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x32c114: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x32c114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x32c118: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32c118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x32c11c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32c11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32c120: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32c120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32c124: 0x94910000  lhu         $s1, 0x0($a0)
    ctx->pc = 0x32c124u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32c128: 0x94920002  lhu         $s2, 0x2($a0)
    ctx->pc = 0x32c128u;
    SET_GPR_U32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x32c12c: 0xc05567c  jal         func_1559F0
    ctx->pc = 0x32C12Cu;
    SET_GPR_U32(ctx, 31, 0x32C134u);
    ctx->pc = 0x32C130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C12Cu;
    // 0x32c130: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1559F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1559F0u, 0x32C12Cu, 0x32C134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C134u;
label_32c134:
    // 0x32c134: 0xc067c8c  jal         func_19F230
    ctx->pc = 0x32C134u;
    SET_GPR_U32(ctx, 31, 0x32C13Cu);
    ctx->pc = 0x32C138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C134u;
    // 0x32c138: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F230u, 0x32C134u, 0x32C13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C13Cu;
label_32c13c:
    // 0x32c13c: 0x6420004  bltzl       $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x32C13Cu;
    {
        const bool branch_taken_0x32c13c = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x32c13c) {
            ctx->pc = 0x32C140u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32C13Cu;
            // 0x32c140: 0x121842  srl         $v1, $s2, 1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32C150u;
            goto label_32c150;
        }
    }
    ctx->pc = 0x32C144u;
    // 0x32c144: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x32c144u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32c148: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x32C148u;
    {
        const bool branch_taken_0x32c148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C148u;
        // 0x32c14c: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c148) {
            ctx->pc = 0x32C168u;
            goto label_32c168;
        }
    }
    ctx->pc = 0x32C150u;
label_32c150:
    // 0x32c150: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x32c150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x32c154: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32c154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32c158: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x32c158u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32c15c: 0x0  nop
    ctx->pc = 0x32c15cu;
    // NOP
    // 0x32c160: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x32c160u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32c164: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x32c164u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_32c168:
    // 0x32c168: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x32c168u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32c16c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x32c16cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x32c170: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32c170u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32c174: 0x0  nop
    ctx->pc = 0x32c174u;
    // NOP
    // 0x32c178: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x32c178u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32c17c: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x32C17Cu;
    {
        const bool branch_taken_0x32c17c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x32c17c) {
            ctx->pc = 0x32C180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32C17Cu;
            // 0x32c180: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x32C194u;
            goto label_32c194;
        }
    }
    ctx->pc = 0x32C184u;
    // 0x32c184: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x32c184u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x32c188: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x32c188u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x32c18c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x32C18Cu;
    {
        const bool branch_taken_0x32c18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C18Cu;
        // 0x32c190: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c18c) {
            ctx->pc = 0x32C1ACu;
            goto label_32c1ac;
        }
    }
    ctx->pc = 0x32C194u;
label_32c194:
    // 0x32c194: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x32c194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x32c198: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x32c198u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x32c19c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x32c19cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x32c1a0: 0x0  nop
    ctx->pc = 0x32c1a0u;
    // NOP
    // 0x32c1a4: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x32c1a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x32c1a8: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x32c1a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_32c1ac:
    // 0x32c1ac: 0x3223ffff  andi        $v1, $s1, 0xFFFF
    ctx->pc = 0x32c1acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x32c1b0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32c1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32c1b4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x32c1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x32c1b8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x32c1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x32c1bc: 0xa4640242  sh          $a0, 0x242($v1)
    ctx->pc = 0x32c1bcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 578), (uint16_t)GPR_U32(ctx, 4));
    // 0x32c1c0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x32c1c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32c1c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32c1c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32c1c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32c1c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32c1cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32c1ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32c1d0: 0x3e00008  jr          $ra
    ctx->pc = 0x32C1D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32C1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C1D0u;
        // 0x32c1d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C1D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32C1D8u;
    // 0x32c1d8: 0x0  nop
    ctx->pc = 0x32c1d8u;
    // NOP
    // 0x32c1dc: 0x0  nop
    ctx->pc = 0x32c1dcu;
    // NOP
    // 0x32c1e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x32c1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x32c1e4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x32c1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x32c1e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32c1e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x32c1ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32c1ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32c1f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32c1f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32c1f4: 0x94920000  lhu         $s2, 0x0($a0)
    ctx->pc = 0x32c1f4u;
    SET_GPR_U32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32c1f8: 0x94910002  lhu         $s1, 0x2($a0)
    ctx->pc = 0x32c1f8u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x32c1fc: 0xc05567c  jal         func_1559F0
    ctx->pc = 0x32C1FCu;
    SET_GPR_U32(ctx, 31, 0x32C204u);
    ctx->pc = 0x32C200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C1FCu;
    // 0x32c200: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1559F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1559F0u, 0x32C1FCu, 0x32C204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C204u;
label_32c204:
    // 0x32c204: 0xc067c8c  jal         func_19F230
    ctx->pc = 0x32C204u;
    SET_GPR_U32(ctx, 31, 0x32C20Cu);
    ctx->pc = 0x32C208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C204u;
    // 0x32c208: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F230u, 0x32C204u, 0x32C20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C20Cu;
label_32c20c:
    // 0x32c20c: 0x6220004  bltzl       $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x32C20Cu;
    {
        const bool branch_taken_0x32c20c = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x32c20c) {
            ctx->pc = 0x32C210u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32C20Cu;
            // 0x32c210: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32C220u;
            goto label_32c220;
        }
    }
    ctx->pc = 0x32C214u;
    // 0x32c214: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x32c214u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32c218: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x32C218u;
    {
        const bool branch_taken_0x32c218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C218u;
        // 0x32c21c: 0x468008e0  cvt.s.w     $f3, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c218) {
            ctx->pc = 0x32C238u;
            goto label_32c238;
        }
    }
    ctx->pc = 0x32C220u;
label_32c220:
    // 0x32c220: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x32c220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x32c224: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32c224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32c228: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x32c228u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32c22c: 0x0  nop
    ctx->pc = 0x32c22cu;
    // NOP
    // 0x32c230: 0x468008e0  cvt.s.w     $f3, $f1
    ctx->pc = 0x32c230u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x32c234: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x32c234u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_32c238:
    // 0x32c238: 0x3242ffff  andi        $v0, $s2, 0xFFFF
    ctx->pc = 0x32c238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x32c23c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x32c23cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x32c240: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x32c240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x32c244: 0x94820242  lhu         $v0, 0x242($a0)
    ctx->pc = 0x32c244u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 578)));
    // 0x32c248: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x32C248u;
    {
        const bool branch_taken_0x32c248 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x32c248) {
            ctx->pc = 0x32C24Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32C248u;
            // 0x32c24c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32C25Cu;
            goto label_32c25c;
        }
    }
    ctx->pc = 0x32C250u;
    // 0x32c250: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x32c250u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32c254: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x32C254u;
    {
        const bool branch_taken_0x32c254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C254u;
        // 0x32c258: 0x468008a0  cvt.s.w     $f2, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c254) {
            ctx->pc = 0x32C274u;
            goto label_32c274;
        }
    }
    ctx->pc = 0x32C25Cu;
label_32c25c:
    // 0x32c25c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x32c25cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x32c260: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32c260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32c264: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x32c264u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32c268: 0x0  nop
    ctx->pc = 0x32c268u;
    // NOP
    // 0x32c26c: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x32c26cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x32c270: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x32c270u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_32c274:
    // 0x32c274: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x32c274u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32c278: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x32c278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x32c27c: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x32c27cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[2]));
    // 0x32c280: 0x4600185c  madd.s      $f1, $f3, $f0
    ctx->pc = 0x32c280u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x32c284: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32c284u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32c288: 0x0  nop
    ctx->pc = 0x32c288u;
    // NOP
    // 0x32c28c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x32c28cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32c290: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x32C290u;
    {
        const bool branch_taken_0x32c290 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x32c290) {
            ctx->pc = 0x32C294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32C290u;
            // 0x32c294: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x32C2A8u;
            goto label_32c2a8;
        }
    }
    ctx->pc = 0x32C298u;
    // 0x32c298: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x32c298u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x32c29c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x32c29cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x32c2a0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x32C2A0u;
    {
        const bool branch_taken_0x32c2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C2A0u;
        // 0x32c2a4: 0x3063ffff  andi        $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c2a0) {
            ctx->pc = 0x32C2C0u;
            goto label_32c2c0;
        }
    }
    ctx->pc = 0x32C2A8u;
label_32c2a8:
    // 0x32c2a8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x32c2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x32c2ac: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x32c2acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x32c2b0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x32c2b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x32c2b4: 0x0  nop
    ctx->pc = 0x32c2b4u;
    // NOP
    // 0x32c2b8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32c2b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32c2bc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x32c2bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_32c2c0:
    // 0x32c2c0: 0xa4830242  sh          $v1, 0x242($a0)
    ctx->pc = 0x32c2c0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 578), (uint16_t)GPR_U32(ctx, 3));
    // 0x32c2c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32c2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32c2c8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x32c2c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32c2cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32c2ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32c2d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32c2d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32c2d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32c2d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32c2d8: 0x3e00008  jr          $ra
    ctx->pc = 0x32C2D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32C2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C2D8u;
        // 0x32c2dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C2D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32C2E0u;
    // 0x32c2e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x32c2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x32c2e4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x32c2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x32c2e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32c2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x32c2ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32c2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32c2f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32c2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32c2f4: 0x94920000  lhu         $s2, 0x0($a0)
    ctx->pc = 0x32c2f4u;
    SET_GPR_U32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32c2f8: 0x94910002  lhu         $s1, 0x2($a0)
    ctx->pc = 0x32c2f8u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x32c2fc: 0xc05567c  jal         func_1559F0
    ctx->pc = 0x32C2FCu;
    SET_GPR_U32(ctx, 31, 0x32C304u);
    ctx->pc = 0x32C300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C2FCu;
    // 0x32c300: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1559F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1559F0u, 0x32C2FCu, 0x32C304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C304u;
label_32c304:
    // 0x32c304: 0xc067c8c  jal         func_19F230
    ctx->pc = 0x32C304u;
    SET_GPR_U32(ctx, 31, 0x32C30Cu);
    ctx->pc = 0x32C308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C304u;
    // 0x32c308: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F230u, 0x32C304u, 0x32C30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C30Cu;
label_32c30c:
    // 0x32c30c: 0x6220004  bltzl       $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x32C30Cu;
    {
        const bool branch_taken_0x32c30c = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x32c30c) {
            ctx->pc = 0x32C310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32C30Cu;
            // 0x32c310: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32C320u;
            goto label_32c320;
        }
    }
    ctx->pc = 0x32C314u;
    // 0x32c314: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x32c314u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32c318: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x32C318u;
    {
        const bool branch_taken_0x32c318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C318u;
        // 0x32c31c: 0x468008e0  cvt.s.w     $f3, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c318) {
            ctx->pc = 0x32C338u;
            goto label_32c338;
        }
    }
    ctx->pc = 0x32C320u;
label_32c320:
    // 0x32c320: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x32c320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x32c324: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32c324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32c328: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x32c328u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32c32c: 0x0  nop
    ctx->pc = 0x32c32cu;
    // NOP
    // 0x32c330: 0x468008e0  cvt.s.w     $f3, $f1
    ctx->pc = 0x32c330u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x32c334: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x32c334u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_32c338:
    // 0x32c338: 0x3242ffff  andi        $v0, $s2, 0xFFFF
    ctx->pc = 0x32c338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x32c33c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x32c33cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x32c340: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x32c340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x32c344: 0x94820242  lhu         $v0, 0x242($a0)
    ctx->pc = 0x32c344u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 578)));
    // 0x32c348: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x32C348u;
    {
        const bool branch_taken_0x32c348 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x32c348) {
            ctx->pc = 0x32C34Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32C348u;
            // 0x32c34c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32C35Cu;
            goto label_32c35c;
        }
    }
    ctx->pc = 0x32C350u;
    // 0x32c350: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x32c350u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32c354: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x32C354u;
    {
        const bool branch_taken_0x32c354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C354u;
        // 0x32c358: 0x468008a0  cvt.s.w     $f2, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c354) {
            ctx->pc = 0x32C374u;
            goto label_32c374;
        }
    }
    ctx->pc = 0x32C35Cu;
label_32c35c:
    // 0x32c35c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x32c35cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x32c360: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32c360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32c364: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x32c364u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32c368: 0x0  nop
    ctx->pc = 0x32c368u;
    // NOP
    // 0x32c36c: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x32c36cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x32c370: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x32c370u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_32c374:
    // 0x32c374: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x32c374u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32c378: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x32c378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x32c37c: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x32c37cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[2]));
    // 0x32c380: 0x4600185d  msub.s      $f1, $f3, $f0
    ctx->pc = 0x32c380u;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x32c384: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32c384u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32c388: 0x0  nop
    ctx->pc = 0x32c388u;
    // NOP
    // 0x32c38c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x32c38cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32c390: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x32C390u;
    {
        const bool branch_taken_0x32c390 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x32c390) {
            ctx->pc = 0x32C394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32C390u;
            // 0x32c394: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x32C3A8u;
            goto label_32c3a8;
        }
    }
    ctx->pc = 0x32C398u;
    // 0x32c398: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x32c398u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x32c39c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x32c39cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x32c3a0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x32C3A0u;
    {
        const bool branch_taken_0x32c3a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C3A0u;
        // 0x32c3a4: 0x3063ffff  andi        $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c3a0) {
            ctx->pc = 0x32C3C0u;
            goto label_32c3c0;
        }
    }
    ctx->pc = 0x32C3A8u;
label_32c3a8:
    // 0x32c3a8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x32c3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x32c3ac: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x32c3acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x32c3b0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x32c3b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x32c3b4: 0x0  nop
    ctx->pc = 0x32c3b4u;
    // NOP
    // 0x32c3b8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32c3b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32c3bc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x32c3bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_32c3c0:
    // 0x32c3c0: 0xa4830242  sh          $v1, 0x242($a0)
    ctx->pc = 0x32c3c0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 578), (uint16_t)GPR_U32(ctx, 3));
    // 0x32c3c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32c3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32c3c8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x32c3c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32c3cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32c3ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32c3d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32c3d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32c3d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32c3d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32c3d8: 0x3e00008  jr          $ra
    ctx->pc = 0x32C3D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32C3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C3D8u;
        // 0x32c3dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C3D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32C3E0u;
    // 0x32c3e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x32c3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x32c3e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x32c3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x32c3e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x32c3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x32c3ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32c3ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x32c3f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32c3f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32c3f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32c3f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32c3f8: 0x90a20274  lbu         $v0, 0x274($a1)
    ctx->pc = 0x32c3f8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 628)));
    // 0x32c3fc: 0x94930000  lhu         $s3, 0x0($a0)
    ctx->pc = 0x32c3fcu;
    SET_GPR_U32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32c400: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x32c400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x32c404: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x32C404u;
    {
        const bool branch_taken_0x32c404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C404u;
        // 0x32c408: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c404) {
            ctx->pc = 0x32C46Cu;
            goto label_32c46c;
        }
    }
    ctx->pc = 0x32C40Cu;
    // 0x32c40c: 0x3271ffff  andi        $s1, $s3, 0xFFFF
    ctx->pc = 0x32c40cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x32c410: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x32c410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32c414: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32c414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c418: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x32C418u;
    SET_GPR_U32(ctx, 31, 0x32C420u);
    ctx->pc = 0x32C41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C418u;
    // 0x32c41c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x32C418u, 0x32C420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C420u;
label_32c420:
    // 0x32c420: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x32c420u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c424: 0x52400012  beql        $s2, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x32C424u;
    {
        const bool branch_taken_0x32c424 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c424) {
            ctx->pc = 0x32C428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32C424u;
            // 0x32c428: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32C470u;
            goto label_32c470;
        }
    }
    ctx->pc = 0x32C42Cu;
    // 0x32c42c: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x32c42cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x32c430: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x32c430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c434: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x32c434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x32c438: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x32c438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32c43c: 0xc60c0004  lwc1        $f12, 0x4($s0)
    ctx->pc = 0x32c43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32c440: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x32c440u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x32c444: 0xc0c8bac  jal         func_322EB0
    ctx->pc = 0x32C444u;
    SET_GPR_U32(ctx, 31, 0x32C44Cu);
    ctx->pc = 0x32C448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C444u;
    // 0x32c448: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322EB0u, 0x32C444u, 0x32C44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C44Cu;
label_32c44c:
    // 0x32c44c: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x32c44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x32c450: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32c450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c454: 0x92030079  lbu         $v1, 0x79($s0)
    ctx->pc = 0x32c454u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 121)));
    // 0x32c458: 0xa443001a  sh          $v1, 0x1A($v0)
    ctx->pc = 0x32c458u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 26), (uint16_t)GPR_U32(ctx, 3));
    // 0x32c45c: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x32c45cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x32c460: 0x86060002  lh          $a2, 0x2($s0)
    ctx->pc = 0x32c460u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x32c464: 0xc0c8e08  jal         func_323820
    ctx->pc = 0x32C464u;
    SET_GPR_U32(ctx, 31, 0x32C46Cu);
    ctx->pc = 0x32C468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C464u;
    // 0x32c468: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323820u, 0x32C464u, 0x32C46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C46Cu;
label_32c46c:
    // 0x32c46c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x32c46cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_32c470:
    // 0x32c470: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32c470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32c474: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x32c474u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32c478: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32c478u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32c47c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32c47cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32c480: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32c480u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32c484: 0x3e00008  jr          $ra
    ctx->pc = 0x32C484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32C488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C484u;
        // 0x32c488: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32C48Cu;
    // 0x32c48c: 0x0  nop
    ctx->pc = 0x32c48cu;
    // NOP
    // 0x32c490: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x32c490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x32c494: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x32c494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x32c498: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x32c498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x32c49c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x32c49cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x32c4a0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x32c4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x32c4a4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x32c4a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x32c4a8: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x32c4a8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c4ac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x32c4acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x32c4b0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x32c4b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c4b4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x32c4b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x32c4b8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x32c4b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c4bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32c4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x32c4c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32c4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32c4c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32c4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32c4c8: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x32c4c8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x32c4cc: 0x94970000  lhu         $s7, 0x0($a0)
    ctx->pc = 0x32c4ccu;
    SET_GPR_U32(ctx, 23, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32c4d0: 0x84930004  lh          $s3, 0x4($a0)
    ctx->pc = 0x32c4d0u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x32c4d4: 0x84920006  lh          $s2, 0x6($a0)
    ctx->pc = 0x32c4d4u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x32c4d8: 0x84910008  lh          $s1, 0x8($a0)
    ctx->pc = 0x32c4d8u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x32c4dc: 0x8490000a  lh          $s0, 0xA($a0)
    ctx->pc = 0x32c4dcu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x32c4e0: 0x949e000c  lhu         $fp, 0xC($a0)
    ctx->pc = 0x32c4e0u;
    SET_GPR_U32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x32c4e4: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x32c4e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_32c4e8:
    // 0x32c4e8: 0xc062810  jal         func_18A040
    ctx->pc = 0x32C4E8u;
    SET_GPR_U32(ctx, 31, 0x32C4F0u);
    ctx->pc = 0x32C4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C4E8u;
    // 0x32c4ec: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A040u, 0x32C4E8u, 0x32C4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C4F0u;
label_32c4f0:
    // 0x32c4f0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x32C4F0u;
    {
        const bool branch_taken_0x32c4f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c4f0) {
            ctx->pc = 0x32C540u;
            goto label_32c540;
        }
    }
    ctx->pc = 0x32C4F8u;
    // 0x32c4f8: 0x84430002  lh          $v1, 0x2($v0)
    ctx->pc = 0x32c4f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x32c4fc: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x32c4fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32c500: 0x51082a  slt         $at, $v0, $s1
    ctx->pc = 0x32c500u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x32c504: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x32C504u;
    {
        const bool branch_taken_0x32c504 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x32c504) {
            ctx->pc = 0x32C540u;
            goto label_32c540;
        }
    }
    ctx->pc = 0x32C50Cu;
    // 0x32c50c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x32c50cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x32c510: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x32C510u;
    {
        const bool branch_taken_0x32c510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32c510) {
            ctx->pc = 0x32C540u;
            goto label_32c540;
        }
    }
    ctx->pc = 0x32C518u;
    // 0x32c518: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x32c518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
    // 0x32c51c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x32c51cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x32c520: 0x53082a  slt         $at, $v0, $s3
    ctx->pc = 0x32c520u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x32c524: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x32C524u;
    {
        const bool branch_taken_0x32c524 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x32c524) {
            ctx->pc = 0x32C540u;
            goto label_32c540;
        }
    }
    ctx->pc = 0x32C52Cu;
    // 0x32c52c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x32c52cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x32c530: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32C530u;
    {
        const bool branch_taken_0x32c530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32c530) {
            ctx->pc = 0x32C540u;
            goto label_32c540;
        }
    }
    ctx->pc = 0x32C538u;
    // 0x32c538: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x32c538u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x32c53c: 0x0  nop
    ctx->pc = 0x32c53cu;
    // NOP
label_32c540:
    // 0x32c540: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x32c540u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x32c544: 0x2aa20004  slti        $v0, $s5, 0x4
    ctx->pc = 0x32c544u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x32c548: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x32C548u;
    {
        const bool branch_taken_0x32c548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32c548) {
            ctx->pc = 0x32C4E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_32c4e8;
        }
    }
    ctx->pc = 0x32C550u;
    // 0x32c550: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x32c550u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x32c554: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x32C554u;
    {
        const bool branch_taken_0x32c554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c554) {
            ctx->pc = 0x32C5A0u;
            goto label_32c5a0;
        }
    }
    ctx->pc = 0x32C55Cu;
    // 0x32c55c: 0x13c00009  beqz        $fp, . + 4 + (0x9 << 2)
    ctx->pc = 0x32C55Cu;
    {
        const bool branch_taken_0x32c55c = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c55c) {
            ctx->pc = 0x32C584u;
            goto label_32c584;
        }
    }
    ctx->pc = 0x32C564u;
    // 0x32c564: 0x2a810002  slti        $at, $s4, 0x2
    ctx->pc = 0x32c564u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x32c568: 0x5020001c  beql        $at, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x32C568u;
    {
        const bool branch_taken_0x32c568 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c568) {
            ctx->pc = 0x32C56Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32C568u;
            // 0x32c56c: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32C5DCu;
            goto label_32c5dc;
        }
    }
    ctx->pc = 0x32C570u;
    // 0x32c570: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x32c570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c574: 0xc0caa14  jal         func_32A850
    ctx->pc = 0x32C574u;
    SET_GPR_U32(ctx, 31, 0x32C57Cu);
    ctx->pc = 0x32C578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C574u;
    // 0x32c578: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A850u, 0x32C574u, 0x32C57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C57Cu;
label_32c57c:
    // 0x32c57c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x32C57Cu;
    {
        const bool branch_taken_0x32c57c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c57c) {
            ctx->pc = 0x32C5D8u;
            goto label_32c5d8;
        }
    }
    ctx->pc = 0x32C584u;
label_32c584:
    // 0x32c584: 0x1a800014  blez        $s4, . + 4 + (0x14 << 2)
    ctx->pc = 0x32C584u;
    {
        const bool branch_taken_0x32c584 = (GPR_S32(ctx, 20) <= 0);
        if (branch_taken_0x32c584) {
            ctx->pc = 0x32C5D8u;
            goto label_32c5d8;
        }
    }
    ctx->pc = 0x32C58Cu;
    // 0x32c58c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x32c58cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c590: 0xc0caa14  jal         func_32A850
    ctx->pc = 0x32C590u;
    SET_GPR_U32(ctx, 31, 0x32C598u);
    ctx->pc = 0x32C594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C590u;
    // 0x32c594: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A850u, 0x32C590u, 0x32C598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C598u;
label_32c598:
    // 0x32c598: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x32C598u;
    {
        const bool branch_taken_0x32c598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c598) {
            ctx->pc = 0x32C5D8u;
            goto label_32c5d8;
        }
    }
    ctx->pc = 0x32C5A0u;
label_32c5a0:
    // 0x32c5a0: 0x53c00008  beql        $fp, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x32C5A0u;
    {
        const bool branch_taken_0x32c5a0 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c5a0) {
            ctx->pc = 0x32C5A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32C5A0u;
            // 0x32c5a4: 0x2a820002  slti        $v0, $s4, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x32C5C4u;
            goto label_32c5c4;
        }
    }
    ctx->pc = 0x32C5A8u;
    // 0x32c5a8: 0x1680000b  bnez        $s4, . + 4 + (0xB << 2)
    ctx->pc = 0x32C5A8u;
    {
        const bool branch_taken_0x32c5a8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x32c5a8) {
            ctx->pc = 0x32C5D8u;
            goto label_32c5d8;
        }
    }
    ctx->pc = 0x32C5B0u;
    // 0x32c5b0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x32c5b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c5b4: 0xc0caa14  jal         func_32A850
    ctx->pc = 0x32C5B4u;
    SET_GPR_U32(ctx, 31, 0x32C5BCu);
    ctx->pc = 0x32C5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C5B4u;
    // 0x32c5b8: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A850u, 0x32C5B4u, 0x32C5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C5BCu;
label_32c5bc:
    // 0x32c5bc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x32C5BCu;
    {
        const bool branch_taken_0x32c5bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c5bc) {
            ctx->pc = 0x32C5D8u;
            goto label_32c5d8;
        }
    }
    ctx->pc = 0x32C5C4u;
label_32c5c4:
    // 0x32c5c4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x32C5C4u;
    {
        const bool branch_taken_0x32c5c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32c5c4) {
            ctx->pc = 0x32C5D8u;
            goto label_32c5d8;
        }
    }
    ctx->pc = 0x32C5CCu;
    // 0x32c5cc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x32c5ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c5d0: 0xc0caa14  jal         func_32A850
    ctx->pc = 0x32C5D0u;
    SET_GPR_U32(ctx, 31, 0x32C5D8u);
    ctx->pc = 0x32C5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C5D0u;
    // 0x32c5d4: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A850u, 0x32C5D0u, 0x32C5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C5D8u;
label_32c5d8:
    // 0x32c5d8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x32c5d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_32c5dc:
    // 0x32c5dc: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x32c5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x32c5e0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x32c5e0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x32c5e4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x32c5e4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x32c5e8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x32c5e8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x32c5ec: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x32c5ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x32c5f0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x32c5f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32c5f4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x32c5f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32c5f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32c5f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32c5fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32c5fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32c600: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32c600u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32c604: 0x3e00008  jr          $ra
    ctx->pc = 0x32C604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32C608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C604u;
        // 0x32c608: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32C60Cu;
    // 0x32c60c: 0x0  nop
    ctx->pc = 0x32c60cu;
    // NOP
    // 0x32c610: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x32c610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x32c614: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x32c614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x32c618: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x32c618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x32c61c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x32c61cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x32c620: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x32c620u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c624: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32c624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x32c628: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32c628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32c62c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x32c62cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c630: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32c630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32c634: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x32c634u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c638: 0x94930000  lhu         $s3, 0x0($a0)
    ctx->pc = 0x32c638u;
    SET_GPR_U32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32c63c: 0x84900002  lh          $s0, 0x2($a0)
    ctx->pc = 0x32c63cu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_32c640:
    // 0x32c640: 0xc062810  jal         func_18A040
    ctx->pc = 0x32C640u;
    SET_GPR_U32(ctx, 31, 0x32C648u);
    ctx->pc = 0x32C644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C640u;
    // 0x32c644: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A040u, 0x32C640u, 0x32C648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C648u;
label_32c648:
    // 0x32c648: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x32C648u;
    {
        const bool branch_taken_0x32c648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c648) {
            ctx->pc = 0x32C6A8u;
            goto label_32c6a8;
        }
    }
    ctx->pc = 0x32C650u;
    // 0x32c650: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x32c650u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32c654: 0x70082a  slt         $at, $v1, $s0
    ctx->pc = 0x32c654u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x32c658: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x32C658u;
    {
        const bool branch_taken_0x32c658 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C658u;
        // 0x32c65c: 0x8444000a  lh          $a0, 0xA($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c658) {
            ctx->pc = 0x32C680u;
            goto label_32c680;
        }
    }
    ctx->pc = 0x32C660u;
    // 0x32c660: 0x4143c  dsll32      $v0, $a0, 16
    ctx->pc = 0x32c660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 16));
    // 0x32c664: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x32c664u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x32c668: 0x50082a  slt         $at, $v0, $s0
    ctx->pc = 0x32c668u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x32c66c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x32C66Cu;
    {
        const bool branch_taken_0x32c66c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x32c66c) {
            ctx->pc = 0x32C680u;
            goto label_32c680;
        }
    }
    ctx->pc = 0x32C674u;
    // 0x32c674: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x32C674u;
    {
        const bool branch_taken_0x32c674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C674u;
        // 0x32c678: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c674) {
            ctx->pc = 0x32C6A8u;
            goto label_32c6a8;
        }
    }
    ctx->pc = 0x32C67Cu;
    // 0x32c67c: 0x0  nop
    ctx->pc = 0x32c67cu;
    // NOP
label_32c680:
    // 0x32c680: 0x4143c  dsll32      $v0, $a0, 16
    ctx->pc = 0x32c680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 16));
    // 0x32c684: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x32c684u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x32c688: 0x202082a  slt         $at, $s0, $v0
    ctx->pc = 0x32c688u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x32c68c: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x32C68Cu;
    {
        const bool branch_taken_0x32c68c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x32c68c) {
            ctx->pc = 0x32C6A8u;
            goto label_32c6a8;
        }
    }
    ctx->pc = 0x32C694u;
    // 0x32c694: 0x203082a  slt         $at, $s0, $v1
    ctx->pc = 0x32c694u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x32c698: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x32C698u;
    {
        const bool branch_taken_0x32c698 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c698) {
            ctx->pc = 0x32C6A8u;
            goto label_32c6a8;
        }
    }
    ctx->pc = 0x32C6A0u;
    // 0x32c6a0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x32c6a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x32c6a4: 0x0  nop
    ctx->pc = 0x32c6a4u;
    // NOP
label_32c6a8:
    // 0x32c6a8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x32c6a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x32c6ac: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x32c6acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x32c6b0: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x32C6B0u;
    {
        const bool branch_taken_0x32c6b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32c6b0) {
            ctx->pc = 0x32C640u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_32c640;
        }
    }
    ctx->pc = 0x32C6B8u;
    // 0x32c6b8: 0x52400005  beql        $s2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x32C6B8u;
    {
        const bool branch_taken_0x32c6b8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c6b8) {
            ctx->pc = 0x32C6BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32C6B8u;
            // 0x32c6bc: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32C6D0u;
            goto label_32c6d0;
        }
    }
    ctx->pc = 0x32C6C0u;
    // 0x32c6c0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x32c6c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c6c4: 0xc0caa14  jal         func_32A850
    ctx->pc = 0x32C6C4u;
    SET_GPR_U32(ctx, 31, 0x32C6CCu);
    ctx->pc = 0x32C6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C6C4u;
    // 0x32c6c8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A850u, 0x32C6C4u, 0x32C6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C6CCu;
label_32c6cc:
    // 0x32c6cc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x32c6ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_32c6d0:
    // 0x32c6d0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32c6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32c6d4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x32c6d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32c6d8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x32c6d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32c6dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32c6dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32c6e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32c6e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32c6e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32c6e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32c6e8: 0x3e00008  jr          $ra
    ctx->pc = 0x32C6E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32C6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C6E8u;
        // 0x32c6ec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C6E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32C6F0u;
    // 0x32c6f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32c6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32c6f4: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x32c6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x32c6f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32c6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32c6fc: 0x9442f348  lhu         $v0, -0xCB8($v0)
    ctx->pc = 0x32c6fcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294964040)));
    // 0x32c700: 0x94830002  lhu         $v1, 0x2($a0)
    ctx->pc = 0x32c700u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x32c704: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x32c704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x32c708: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x32C708u;
    {
        const bool branch_taken_0x32c708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C708u;
        // 0x32c70c: 0x94860000  lhu         $a2, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c708) {
            ctx->pc = 0x32C730u;
            goto label_32c730;
        }
    }
    ctx->pc = 0x32C710u;
    // 0x32c710: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x32c710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x32c714: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x32c714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x32c718: 0x9042efdc  lbu         $v0, -0x1024($v0)
    ctx->pc = 0x32c718u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294963164)));
    // 0x32c71c: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x32C71Cu;
    {
        const bool branch_taken_0x32c71c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x32c71c) {
            ctx->pc = 0x32C720u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32C71Cu;
            // 0x32c720: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32C734u;
            goto label_32c734;
        }
    }
    ctx->pc = 0x32C724u;
    // 0x32c724: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x32c724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c728: 0xc0caa14  jal         func_32A850
    ctx->pc = 0x32C728u;
    SET_GPR_U32(ctx, 31, 0x32C730u);
    ctx->pc = 0x32C72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C728u;
    // 0x32c72c: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A850u, 0x32C728u, 0x32C730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C730u;
label_32c730:
    // 0x32c730: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32c730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_32c734:
    // 0x32c734: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32c734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32c738: 0x3e00008  jr          $ra
    ctx->pc = 0x32C738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32C73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C738u;
        // 0x32c73c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32C740u;
    // 0x32c740: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32c740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32c744: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x32c744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x32c748: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32c748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32c74c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32c74cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32c750: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x32c750u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c754: 0x94900000  lhu         $s0, 0x0($a0)
    ctx->pc = 0x32c754u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32c758: 0x94840002  lhu         $a0, 0x2($a0)
    ctx->pc = 0x32c758u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x32c75c: 0xc0c8ed0  jal         func_323B40
    ctx->pc = 0x32C75Cu;
    SET_GPR_U32(ctx, 31, 0x32C764u);
    ctx->pc = 0x32C760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C75Cu;
    // 0x32c760: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323B40u, 0x32C75Cu, 0x32C764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C764u;
label_32c764:
    // 0x32c764: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x32C764u;
    {
        const bool branch_taken_0x32c764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c764) {
            ctx->pc = 0x32C768u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32C764u;
            // 0x32c768: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32C77Cu;
            goto label_32c77c;
        }
    }
    ctx->pc = 0x32C76Cu;
    // 0x32c76c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32c76cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c770: 0xc0caa14  jal         func_32A850
    ctx->pc = 0x32C770u;
    SET_GPR_U32(ctx, 31, 0x32C778u);
    ctx->pc = 0x32C774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C770u;
    // 0x32c774: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A850u, 0x32C770u, 0x32C778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C778u;
label_32c778:
    // 0x32c778: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x32c778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_32c77c:
    // 0x32c77c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32c77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32c780: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32c780u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32c784: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32c784u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32c788: 0x3e00008  jr          $ra
    ctx->pc = 0x32C788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32C78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C788u;
        // 0x32c78c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32C790u;
}
