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

// Function: sub_0031FF10
// Address: 0x31ff10 - 0x3206c0
void sub_0031FF10_0x31ff10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031FF10_0x31ff10");
#endif

    switch (ctx->pc) {
        case 0x31ff5cu: goto label_31ff5c;
        case 0x31ffe0u: goto label_31ffe0;
        case 0x31ffe8u: goto label_31ffe8;
        case 0x31fff4u: goto label_31fff4;
        case 0x320018u: goto label_320018;
        case 0x320024u: goto label_320024;
        case 0x32006cu: goto label_32006c;
        case 0x320080u: goto label_320080;
        case 0x3200a8u: goto label_3200a8;
        case 0x3200b4u: goto label_3200b4;
        case 0x3200fcu: goto label_3200fc;
        case 0x320110u: goto label_320110;
        case 0x320180u: goto label_320180;
        case 0x3201a0u: goto label_3201a0;
        case 0x3201b0u: goto label_3201b0;
        case 0x3201d0u: goto label_3201d0;
        case 0x3201e0u: goto label_3201e0;
        case 0x320200u: goto label_320200;
        case 0x320210u: goto label_320210;
        case 0x320224u: goto label_320224;
        case 0x320244u: goto label_320244;
        case 0x320254u: goto label_320254;
        case 0x320274u: goto label_320274;
        case 0x320298u: goto label_320298;
        case 0x3202a8u: goto label_3202a8;
        case 0x3202c8u: goto label_3202c8;
        case 0x3202ecu: goto label_3202ec;
        case 0x3202fcu: goto label_3202fc;
        case 0x32031cu: goto label_32031c;
        case 0x320340u: goto label_320340;
        case 0x320350u: goto label_320350;
        case 0x320370u: goto label_320370;
        case 0x320394u: goto label_320394;
        case 0x3203a4u: goto label_3203a4;
        case 0x3203c4u: goto label_3203c4;
        case 0x3203d4u: goto label_3203d4;
        case 0x3203fcu: goto label_3203fc;
        case 0x320438u: goto label_320438;
        case 0x320448u: goto label_320448;
        case 0x320484u: goto label_320484;
        case 0x320494u: goto label_320494;
        case 0x3204d0u: goto label_3204d0;
        case 0x3204e0u: goto label_3204e0;
        case 0x32051cu: goto label_32051c;
        case 0x32052cu: goto label_32052c;
        case 0x320554u: goto label_320554;
        case 0x320574u: goto label_320574;
        case 0x3205c0u: goto label_3205c0;
        case 0x3205e0u: goto label_3205e0;
        case 0x3205f8u: goto label_3205f8;
        case 0x320610u: goto label_320610;
        case 0x320620u: goto label_320620;
        case 0x320630u: goto label_320630;
        case 0x320650u: goto label_320650;
        case 0x320660u: goto label_320660;
        case 0x320680u: goto label_320680;
        case 0x320688u: goto label_320688;
        default: break;
    }

    ctx->pc = 0x31ff10u;

label_31ff10:
    // 0x31ff10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31ff10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31ff14: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x31ff14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x31ff18: 0xc4610a00  lwc1        $f1, 0xA00($v1)
    ctx->pc = 0x31ff18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 2560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31ff1c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31ff1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ff20: 0x27a50000  addiu       $a1, $sp, 0x0
    ctx->pc = 0x31ff20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x31ff24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31ff24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ff28: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x31ff28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x31ff2c: 0xc4620a04  lwc1        $f2, 0xA04($v1)
    ctx->pc = 0x31ff2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 2564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31ff30: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x31ff30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x31ff34: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x31ff34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x31ff38: 0xc4600a08  lwc1        $f0, 0xA08($v1)
    ctx->pc = 0x31ff38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 2568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31ff3c: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x31ff3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x31ff40: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x31ff40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x31ff44: 0xc4610a0c  lwc1        $f1, 0xA0C($v1)
    ctx->pc = 0x31ff44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 2572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31ff48: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x31ff48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x31ff4c: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x31ff4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x31ff50: 0xc4600a10  lwc1        $f0, 0xA10($v1)
    ctx->pc = 0x31ff50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 2576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31ff54: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x31ff54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x31ff58: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x31ff58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_31ff5c:
    // 0x31ff5c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x31ff5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x31ff60: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31FF60u;
    {
        const bool branch_taken_0x31ff60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x31ff60) {
            ctx->pc = 0x31FF64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31FF60u;
            // 0x31ff64: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31FF70u;
            goto label_31ff70;
        }
    }
    ctx->pc = 0x31FF68u;
    // 0x31ff68: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x31FF68u;
    {
        const bool branch_taken_0x31ff68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FF68u;
        // 0x31ff6c: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ff68) {
            ctx->pc = 0x31FF80u;
            goto label_31ff80;
        }
    }
    ctx->pc = 0x31FF70u;
label_31ff70:
    // 0x31ff70: 0x28c30005  slti        $v1, $a2, 0x5
    ctx->pc = 0x31ff70u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x31ff74: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x31FF74u;
    {
        const bool branch_taken_0x31ff74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31FF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FF74u;
        // 0x31ff78: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ff74) {
            ctx->pc = 0x31FF5Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31ff5c;
        }
    }
    ctx->pc = 0x31FF7Cu;
    // 0x31ff7c: 0x0  nop
    ctx->pc = 0x31ff7cu;
    // NOP
label_31ff80:
    // 0x31ff80: 0x3e00008  jr          $ra
    ctx->pc = 0x31FF80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31FF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FF80u;
        // 0x31ff84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31FF80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31FF88u;
    // 0x31ff88: 0x0  nop
    ctx->pc = 0x31ff88u;
    // NOP
    // 0x31ff8c: 0x0  nop
    ctx->pc = 0x31ff8cu;
    // NOP
    // 0x31ff90: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x31ff90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x31ff94: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x31ff94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x31ff98: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x31ff98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x31ff9c: 0x2442db50  addiu       $v0, $v0, -0x24B0
    ctx->pc = 0x31ff9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957904));
    // 0x31ffa0: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x31ffa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x31ffa4: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x31ffa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x31ffa8: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x31ffa8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ffac: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x31ffacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x31ffb0: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x31ffb0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ffb4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x31ffb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x31ffb8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x31ffb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x31ffbc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x31ffbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x31ffc0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x31ffc0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ffc4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x31ffc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x31ffc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31ffc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31ffcc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x31ffccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ffd0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31ffd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31ffd4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x31ffd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ffd8: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x31ffd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x31ffdc: 0x8fb000a0  lw          $s0, 0xA0($sp)
    ctx->pc = 0x31ffdcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_31ffe0:
    // 0x31ffe0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x31ffe0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ffe4: 0x0  nop
    ctx->pc = 0x31ffe4u;
    // NOP
label_31ffe8:
    // 0x31ffe8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x31ffe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ffec: 0xc062828  jal         func_18A0A0
    ctx->pc = 0x31FFECu;
    SET_GPR_U32(ctx, 31, 0x31FFF4u);
    ctx->pc = 0x31FFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FFECu;
    // 0x31fff0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0A0u, 0x31FFECu, 0x31FFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FFF4u;
label_31fff4:
    // 0x31fff4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x31fff4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fff8: 0x12a00049  beqz        $s5, . + 4 + (0x49 << 2)
    ctx->pc = 0x31FFF8u;
    {
        const bool branch_taken_0x31fff8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x31fff8) {
            ctx->pc = 0x320120u;
            goto label_320120;
        }
    }
    ctx->pc = 0x320000u;
    // 0x320000: 0x92a2008c  lbu         $v0, 0x8C($s5)
    ctx->pc = 0x320000u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 140)));
    // 0x320004: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x320004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x320008: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x320008u;
    {
        const bool branch_taken_0x320008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x320008) {
            ctx->pc = 0x320090u;
            goto label_320090;
        }
    }
    ctx->pc = 0x320010u;
    // 0x320010: 0xc0c7fa8  jal         func_31FEA0
    ctx->pc = 0x320010u;
    SET_GPR_U32(ctx, 31, 0x320018u);
    ctx->pc = 0x320014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320010u;
    // 0x320014: 0x324400ff  andi        $a0, $s2, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FEA0u, 0x320010u, 0x320018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320018u;
label_320018:
    // 0x320018: 0x92040164  lbu         $a0, 0x164($s0)
    ctx->pc = 0x320018u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 356)));
    // 0x32001c: 0xc0c7fa8  jal         func_31FEA0
    ctx->pc = 0x32001Cu;
    SET_GPR_U32(ctx, 31, 0x320024u);
    ctx->pc = 0x320020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32001Cu;
    // 0x320020: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FEA0u, 0x32001Cu, 0x320024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320024u;
label_320024:
    // 0x320024: 0x2c2082a  slt         $at, $s6, $v0
    ctx->pc = 0x320024u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x320028: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x320028u;
    {
        const bool branch_taken_0x320028 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x320028) {
            ctx->pc = 0x320090u;
            goto label_320090;
        }
    }
    ctx->pc = 0x320030u;
    // 0x320030: 0x92120164  lbu         $s2, 0x164($s0)
    ctx->pc = 0x320030u;
    SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 356)));
    // 0x320034: 0x2e410010  sltiu       $at, $s2, 0x10
    ctx->pc = 0x320034u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x320038: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x320038u;
    {
        const bool branch_taken_0x320038 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x320038) {
            ctx->pc = 0x320090u;
            goto label_320090;
        }
    }
    ctx->pc = 0x320040u;
    // 0x320040: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x320040u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x320044: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x320044u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x320048: 0x24633dc0  addiu       $v1, $v1, 0x3DC0
    ctx->pc = 0x320048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15808));
    // 0x32004c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32004cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x320050: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x320050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x320054: 0x400008  jr          $v0
    ctx->pc = 0x320054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x320060u: goto label_320060;
            case 0x320078u: goto label_320078;
            case 0x320088u: goto label_320088;
            case 0x320090u: goto label_320090;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320054u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x32005Cu;
    // 0x32005c: 0x0  nop
    ctx->pc = 0x32005cu;
    // NOP
label_320060:
    // 0x320060: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x320060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320064: 0xc062828  jal         func_18A0A0
    ctx->pc = 0x320064u;
    SET_GPR_U32(ctx, 31, 0x32006Cu);
    ctx->pc = 0x320068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320064u;
    // 0x320068: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0A0u, 0x320064u, 0x32006Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32006Cu;
label_32006c:
    // 0x32006c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x32006Cu;
    {
        const bool branch_taken_0x32006c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32006Cu;
        // 0x320070: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32006c) {
            ctx->pc = 0x320090u;
            goto label_320090;
        }
    }
    ctx->pc = 0x320074u;
    // 0x320074: 0x0  nop
    ctx->pc = 0x320074u;
    // NOP
label_320078:
    // 0x320078: 0xc06281c  jal         func_18A070
    ctx->pc = 0x320078u;
    SET_GPR_U32(ctx, 31, 0x320080u);
    ctx->pc = 0x32007Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320078u;
    // 0x32007c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A070u, 0x320078u, 0x320080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320080u;
label_320080:
    // 0x320080: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x320080u;
    {
        const bool branch_taken_0x320080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320080u;
        // 0x320084: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320080) {
            ctx->pc = 0x320090u;
            goto label_320090;
        }
    }
    ctx->pc = 0x320088u;
label_320088:
    // 0x320088: 0x86020166  lh          $v0, 0x166($s0)
    ctx->pc = 0x320088u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 358)));
    // 0x32008c: 0xa7a200c0  sh          $v0, 0xC0($sp)
    ctx->pc = 0x32008cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 192), (uint16_t)GPR_U32(ctx, 2));
label_320090:
    // 0x320090: 0x92a2008c  lbu         $v0, 0x8C($s5)
    ctx->pc = 0x320090u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 140)));
    // 0x320094: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x320094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x320098: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x320098u;
    {
        const bool branch_taken_0x320098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x320098) {
            ctx->pc = 0x320120u;
            goto label_320120;
        }
    }
    ctx->pc = 0x3200A0u;
    // 0x3200a0: 0xc0c7fc4  jal         func_31FF10
    ctx->pc = 0x3200A0u;
    SET_GPR_U32(ctx, 31, 0x3200A8u);
    ctx->pc = 0x3200A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3200A0u;
    // 0x3200a4: 0x322400ff  andi        $a0, $s1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FF10u;
    goto label_31ff10;
    ctx->pc = 0x3200A8u;
label_3200a8:
    // 0x3200a8: 0x92040165  lbu         $a0, 0x165($s0)
    ctx->pc = 0x3200a8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 357)));
    // 0x3200ac: 0xc0c7fc4  jal         func_31FF10
    ctx->pc = 0x3200ACu;
    SET_GPR_U32(ctx, 31, 0x3200B4u);
    ctx->pc = 0x3200B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3200ACu;
    // 0x3200b0: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FF10u;
    goto label_31ff10;
    ctx->pc = 0x3200B4u;
label_3200b4:
    // 0x3200b4: 0x2a2082a  slt         $at, $s5, $v0
    ctx->pc = 0x3200b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3200b8: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x3200B8u;
    {
        const bool branch_taken_0x3200b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3200b8) {
            ctx->pc = 0x320120u;
            goto label_320120;
        }
    }
    ctx->pc = 0x3200C0u;
    // 0x3200c0: 0x92110165  lbu         $s1, 0x165($s0)
    ctx->pc = 0x3200c0u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 357)));
    // 0x3200c4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3200c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3200c8: 0x12220013  beq         $s1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3200C8u;
    {
        const bool branch_taken_0x3200c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x3200c8) {
            ctx->pc = 0x320118u;
            goto label_320118;
        }
    }
    ctx->pc = 0x3200D0u;
    // 0x3200d0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3200d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3200d4: 0x1222000c  beq         $s1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3200D4u;
    {
        const bool branch_taken_0x3200d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x3200d4) {
            ctx->pc = 0x320108u;
            goto label_320108;
        }
    }
    ctx->pc = 0x3200DCu;
    // 0x3200dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3200dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3200e0: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3200E0u;
    {
        const bool branch_taken_0x3200e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x3200e0) {
            ctx->pc = 0x3200F0u;
            goto label_3200f0;
        }
    }
    ctx->pc = 0x3200E8u;
    // 0x3200e8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3200E8u;
    {
        const bool branch_taken_0x3200e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3200e8) {
            ctx->pc = 0x320120u;
            goto label_320120;
        }
    }
    ctx->pc = 0x3200F0u;
label_3200f0:
    // 0x3200f0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3200f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3200f4: 0xc062828  jal         func_18A0A0
    ctx->pc = 0x3200F4u;
    SET_GPR_U32(ctx, 31, 0x3200FCu);
    ctx->pc = 0x3200F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3200F4u;
    // 0x3200f8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0A0u, 0x3200F4u, 0x3200FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3200FCu;
label_3200fc:
    // 0x3200fc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3200FCu;
    {
        const bool branch_taken_0x3200fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3200FCu;
        // 0x320100: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3200fc) {
            ctx->pc = 0x320120u;
            goto label_320120;
        }
    }
    ctx->pc = 0x320104u;
    // 0x320104: 0x0  nop
    ctx->pc = 0x320104u;
    // NOP
label_320108:
    // 0x320108: 0xc06281c  jal         func_18A070
    ctx->pc = 0x320108u;
    SET_GPR_U32(ctx, 31, 0x320110u);
    ctx->pc = 0x32010Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320108u;
    // 0x32010c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A070u, 0x320108u, 0x320110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320110u;
label_320110:
    // 0x320110: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x320110u;
    {
        const bool branch_taken_0x320110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320110u;
        // 0x320114: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320110) {
            ctx->pc = 0x320120u;
            goto label_320120;
        }
    }
    ctx->pc = 0x320118u;
label_320118:
    // 0x320118: 0x86020168  lh          $v0, 0x168($s0)
    ctx->pc = 0x320118u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 360)));
    // 0x32011c: 0xa7a200b0  sh          $v0, 0xB0($sp)
    ctx->pc = 0x32011cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 176), (uint16_t)GPR_U32(ctx, 2));
label_320120:
    // 0x320120: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x320120u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x320124: 0x2a620003  slti        $v0, $s3, 0x3
    ctx->pc = 0x320124u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x320128: 0x1440ffaf  bnez        $v0, . + 4 + (-0x51 << 2)
    ctx->pc = 0x320128u;
    {
        const bool branch_taken_0x320128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32012Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320128u;
        // 0x32012c: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320128) {
            ctx->pc = 0x31FFE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31ffe8;
        }
    }
    ctx->pc = 0x320130u;
    // 0x320130: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x320130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x320134: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x320134u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x320138: 0x24420248  addiu       $v0, $v0, 0x248
    ctx->pc = 0x320138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 584));
    // 0x32013c: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x32013cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x320140: 0x2a820004  slti        $v0, $s4, 0x4
    ctx->pc = 0x320140u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x320144: 0x5440ffa6  bnel        $v0, $zero, . + 4 + (-0x5A << 2)
    ctx->pc = 0x320144u;
    {
        const bool branch_taken_0x320144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x320144) {
            ctx->pc = 0x320148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x320144u;
            // 0x320148: 0x8fb000a0  lw          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31FFE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31ffe0;
        }
    }
    ctx->pc = 0x32014Cu;
    // 0x32014c: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x32014cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x320150: 0x2c410010  sltiu       $at, $v0, 0x10
    ctx->pc = 0x320150u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x320154: 0x102000fd  beqz        $at, . + 4 + (0xFD << 2)
    ctx->pc = 0x320154u;
    {
        const bool branch_taken_0x320154 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x320154) {
            ctx->pc = 0x32054Cu;
            goto label_32054c;
        }
    }
    ctx->pc = 0x32015Cu;
    // 0x32015c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x32015cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x320160: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x320160u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x320164: 0x24633d80  addiu       $v1, $v1, 0x3D80
    ctx->pc = 0x320164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15744));
    // 0x320168: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x320168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32016c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x32016cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x320170: 0x400008  jr          $v0
    ctx->pc = 0x320170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x320178u: goto label_320178;
            case 0x3201A8u: goto label_3201a8;
            case 0x3201D8u: goto label_3201d8;
            case 0x320208u: goto label_320208;
            case 0x320218u: goto label_320218;
            case 0x32024Cu: goto label_32024c;
            case 0x32027Cu: goto label_32027c;
            case 0x3202D0u: goto label_3202d0;
            case 0x320324u: goto label_320324;
            case 0x320378u: goto label_320378;
            case 0x3203CCu: goto label_3203cc;
            case 0x3203F4u: goto label_3203f4;
            case 0x32041Cu: goto label_32041c;
            case 0x320468u: goto label_320468;
            case 0x3204B4u: goto label_3204b4;
            case 0x320500u: goto label_320500;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320170u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x320178u;
label_320178:
    // 0x320178: 0xc0c7d98  jal         func_31F660
    ctx->pc = 0x320178u;
    SET_GPR_U32(ctx, 31, 0x320180u);
    ctx->pc = 0x31F660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31F660u, 0x320178u, 0x320180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320180u;
label_320180:
    // 0x320180: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x320180u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x320184: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x320184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x320188: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x320188u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x32018c: 0x8443db20  lh          $v1, -0x24E0($v0)
    ctx->pc = 0x32018cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957856)));
    // 0x320190: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x320190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x320194: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x320194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x320198: 0xc0c7f80  jal         func_31FE00
    ctx->pc = 0x320198u;
    SET_GPR_U32(ctx, 31, 0x3201A0u);
    ctx->pc = 0x32019Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320198u;
    // 0x32019c: 0xa443db20  sh          $v1, -0x24E0($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294957856), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FE00u, 0x320198u, 0x3201A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3201A0u;
label_3201a0:
    // 0x3201a0: 0x100000f5  b           . + 4 + (0xF5 << 2)
    ctx->pc = 0x3201A0u;
    {
        const bool branch_taken_0x3201a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3201A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3201A0u;
        // 0x3201a4: 0x322300ff  andi        $v1, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3201a0) {
            ctx->pc = 0x320578u;
            goto label_320578;
        }
    }
    ctx->pc = 0x3201A8u;
label_3201a8:
    // 0x3201a8: 0xc0c7ee0  jal         func_31FB80
    ctx->pc = 0x3201A8u;
    SET_GPR_U32(ctx, 31, 0x3201B0u);
    ctx->pc = 0x3201ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3201A8u;
    // 0x3201ac: 0x86e40012  lh          $a0, 0x12($s7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FB80u, 0x3201A8u, 0x3201B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3201B0u;
label_3201b0:
    // 0x3201b0: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x3201b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3201b4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x3201b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x3201b8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x3201b8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x3201bc: 0x8443db20  lh          $v1, -0x24E0($v0)
    ctx->pc = 0x3201bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957856)));
    // 0x3201c0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x3201c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x3201c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3201c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3201c8: 0xc0c7f80  jal         func_31FE00
    ctx->pc = 0x3201C8u;
    SET_GPR_U32(ctx, 31, 0x3201D0u);
    ctx->pc = 0x3201CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3201C8u;
    // 0x3201cc: 0xa443db20  sh          $v1, -0x24E0($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294957856), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FE00u, 0x3201C8u, 0x3201D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3201D0u;
label_3201d0:
    // 0x3201d0: 0x100000e8  b           . + 4 + (0xE8 << 2)
    ctx->pc = 0x3201D0u;
    {
        const bool branch_taken_0x3201d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3201d0) {
            ctx->pc = 0x320574u;
            goto label_320574;
        }
    }
    ctx->pc = 0x3201D8u;
label_3201d8:
    // 0x3201d8: 0xc0c7ee0  jal         func_31FB80
    ctx->pc = 0x3201D8u;
    SET_GPR_U32(ctx, 31, 0x3201E0u);
    ctx->pc = 0x3201DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3201D8u;
    // 0x3201dc: 0x86e40012  lh          $a0, 0x12($s7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FB80u, 0x3201D8u, 0x3201E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3201E0u;
label_3201e0:
    // 0x3201e0: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x3201e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3201e4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x3201e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x3201e8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x3201e8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x3201ec: 0x8443db20  lh          $v1, -0x24E0($v0)
    ctx->pc = 0x3201ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957856)));
    // 0x3201f0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x3201f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x3201f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3201f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3201f8: 0xc0c7f80  jal         func_31FE00
    ctx->pc = 0x3201F8u;
    SET_GPR_U32(ctx, 31, 0x320200u);
    ctx->pc = 0x3201FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3201F8u;
    // 0x3201fc: 0xa443db20  sh          $v1, -0x24E0($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294957856), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FE00u, 0x3201F8u, 0x320200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320200u;
label_320200:
    // 0x320200: 0x100000dc  b           . + 4 + (0xDC << 2)
    ctx->pc = 0x320200u;
    {
        const bool branch_taken_0x320200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320200) {
            ctx->pc = 0x320574u;
            goto label_320574;
        }
    }
    ctx->pc = 0x320208u;
label_320208:
    // 0x320208: 0xc0c7f80  jal         func_31FE00
    ctx->pc = 0x320208u;
    SET_GPR_U32(ctx, 31, 0x320210u);
    ctx->pc = 0x31FE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FE00u, 0x320208u, 0x320210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320210u;
label_320210:
    // 0x320210: 0x100000d8  b           . + 4 + (0xD8 << 2)
    ctx->pc = 0x320210u;
    {
        const bool branch_taken_0x320210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320210) {
            ctx->pc = 0x320574u;
            goto label_320574;
        }
    }
    ctx->pc = 0x320218u;
label_320218:
    // 0x320218: 0x87a200c0  lh          $v0, 0xC0($sp)
    ctx->pc = 0x320218u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x32021c: 0xc0c7ee0  jal         func_31FB80
    ctx->pc = 0x32021Cu;
    SET_GPR_U32(ctx, 31, 0x320224u);
    ctx->pc = 0x320220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32021Cu;
    // 0x320220: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FB80u, 0x32021Cu, 0x320224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320224u;
label_320224:
    // 0x320224: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x320224u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x320228: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x320228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x32022c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x32022cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x320230: 0x8443db20  lh          $v1, -0x24E0($v0)
    ctx->pc = 0x320230u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957856)));
    // 0x320234: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x320234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x320238: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x320238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x32023c: 0xc0c7f80  jal         func_31FE00
    ctx->pc = 0x32023Cu;
    SET_GPR_U32(ctx, 31, 0x320244u);
    ctx->pc = 0x320240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32023Cu;
    // 0x320240: 0xa443db20  sh          $v1, -0x24E0($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294957856), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FE00u, 0x32023Cu, 0x320244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320244u;
label_320244:
    // 0x320244: 0x100000cb  b           . + 4 + (0xCB << 2)
    ctx->pc = 0x320244u;
    {
        const bool branch_taken_0x320244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320244) {
            ctx->pc = 0x320574u;
            goto label_320574;
        }
    }
    ctx->pc = 0x32024Cu;
label_32024c:
    // 0x32024c: 0xc0c7f54  jal         func_31FD50
    ctx->pc = 0x32024Cu;
    SET_GPR_U32(ctx, 31, 0x320254u);
    ctx->pc = 0x31FD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FD50u, 0x32024Cu, 0x320254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320254u;
label_320254:
    // 0x320254: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x320254u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x320258: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x320258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x32025c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x32025cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x320260: 0x8443db20  lh          $v1, -0x24E0($v0)
    ctx->pc = 0x320260u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957856)));
    // 0x320264: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x320264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x320268: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x320268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x32026c: 0xc0c7f80  jal         func_31FE00
    ctx->pc = 0x32026Cu;
    SET_GPR_U32(ctx, 31, 0x320274u);
    ctx->pc = 0x320270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32026Cu;
    // 0x320270: 0xa443db20  sh          $v1, -0x24E0($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294957856), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FE00u, 0x32026Cu, 0x320274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320274u;
label_320274:
    // 0x320274: 0x100000bf  b           . + 4 + (0xBF << 2)
    ctx->pc = 0x320274u;
    {
        const bool branch_taken_0x320274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320274) {
            ctx->pc = 0x320574u;
            goto label_320574;
        }
    }
    ctx->pc = 0x32027Cu;
label_32027c:
    // 0x32027c: 0x92e2008c  lbu         $v0, 0x8C($s7)
    ctx->pc = 0x32027cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 140)));
    // 0x320280: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x320280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x320284: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x320284u;
    {
        const bool branch_taken_0x320284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x320284) {
            ctx->pc = 0x320288u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x320284u;
            // 0x320288: 0x86e20012  lh          $v0, 0x12($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 18)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3202A0u;
            goto label_3202a0;
        }
    }
    ctx->pc = 0x32028Cu;
    // 0x32028c: 0x86e20012  lh          $v0, 0x12($s7)
    ctx->pc = 0x32028cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 18)));
    // 0x320290: 0xc0c7ee0  jal         func_31FB80
    ctx->pc = 0x320290u;
    SET_GPR_U32(ctx, 31, 0x320298u);
    ctx->pc = 0x320294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320290u;
    // 0x320294: 0x2444fee0  addiu       $a0, $v0, -0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FB80u, 0x320290u, 0x320298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320298u;
label_320298:
    // 0x320298: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x320298u;
    {
        const bool branch_taken_0x320298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32029Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320298u;
        // 0x32029c: 0x2243c  dsll32      $a0, $v0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320298) {
            ctx->pc = 0x3202ACu;
            goto label_3202ac;
        }
    }
    ctx->pc = 0x3202A0u;
label_3202a0:
    // 0x3202a0: 0xc0c7ee0  jal         func_31FB80
    ctx->pc = 0x3202A0u;
    SET_GPR_U32(ctx, 31, 0x3202A8u);
    ctx->pc = 0x3202A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3202A0u;
    // 0x3202a4: 0x24440120  addiu       $a0, $v0, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FB80u, 0x3202A0u, 0x3202A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3202A8u;
label_3202a8:
    // 0x3202a8: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x3202a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
label_3202ac:
    // 0x3202ac: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x3202acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x3202b0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x3202b0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x3202b4: 0x8443db20  lh          $v1, -0x24E0($v0)
    ctx->pc = 0x3202b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957856)));
    // 0x3202b8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x3202b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x3202bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3202bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3202c0: 0xc0c7f80  jal         func_31FE00
    ctx->pc = 0x3202C0u;
    SET_GPR_U32(ctx, 31, 0x3202C8u);
    ctx->pc = 0x3202C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3202C0u;
    // 0x3202c4: 0xa443db20  sh          $v1, -0x24E0($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294957856), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FE00u, 0x3202C0u, 0x3202C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3202C8u;
label_3202c8:
    // 0x3202c8: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x3202C8u;
    {
        const bool branch_taken_0x3202c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3202c8) {
            ctx->pc = 0x320574u;
            goto label_320574;
        }
    }
    ctx->pc = 0x3202D0u;
label_3202d0:
    // 0x3202d0: 0x92e2008c  lbu         $v0, 0x8C($s7)
    ctx->pc = 0x3202d0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 140)));
    // 0x3202d4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3202d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3202d8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3202D8u;
    {
        const bool branch_taken_0x3202d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3202d8) {
            ctx->pc = 0x3202DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3202D8u;
            // 0x3202dc: 0x86e20012  lh          $v0, 0x12($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 18)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3202F4u;
            goto label_3202f4;
        }
    }
    ctx->pc = 0x3202E0u;
    // 0x3202e0: 0x86e20012  lh          $v0, 0x12($s7)
    ctx->pc = 0x3202e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 18)));
    // 0x3202e4: 0xc0c7ee0  jal         func_31FB80
    ctx->pc = 0x3202E4u;
    SET_GPR_U32(ctx, 31, 0x3202ECu);
    ctx->pc = 0x3202E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3202E4u;
    // 0x3202e8: 0x2444fee0  addiu       $a0, $v0, -0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FB80u, 0x3202E4u, 0x3202ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3202ECu;
label_3202ec:
    // 0x3202ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3202ECu;
    {
        const bool branch_taken_0x3202ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3202F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3202ECu;
        // 0x3202f0: 0x2243c  dsll32      $a0, $v0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3202ec) {
            ctx->pc = 0x320300u;
            goto label_320300;
        }
    }
    ctx->pc = 0x3202F4u;
label_3202f4:
    // 0x3202f4: 0xc0c7ee0  jal         func_31FB80
    ctx->pc = 0x3202F4u;
    SET_GPR_U32(ctx, 31, 0x3202FCu);
    ctx->pc = 0x3202F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3202F4u;
    // 0x3202f8: 0x24440120  addiu       $a0, $v0, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FB80u, 0x3202F4u, 0x3202FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3202FCu;
label_3202fc:
    // 0x3202fc: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x3202fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
label_320300:
    // 0x320300: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x320300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x320304: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x320304u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x320308: 0x8443db20  lh          $v1, -0x24E0($v0)
    ctx->pc = 0x320308u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957856)));
    // 0x32030c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x32030cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x320310: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x320310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x320314: 0xc0c7f80  jal         func_31FE00
    ctx->pc = 0x320314u;
    SET_GPR_U32(ctx, 31, 0x32031Cu);
    ctx->pc = 0x320318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320314u;
    // 0x320318: 0xa443db20  sh          $v1, -0x24E0($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294957856), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FE00u, 0x320314u, 0x32031Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32031Cu;
label_32031c:
    // 0x32031c: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x32031Cu;
    {
        const bool branch_taken_0x32031c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32031c) {
            ctx->pc = 0x320574u;
            goto label_320574;
        }
    }
    ctx->pc = 0x320324u;
label_320324:
    // 0x320324: 0x92e2008c  lbu         $v0, 0x8C($s7)
    ctx->pc = 0x320324u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 140)));
    // 0x320328: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x320328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x32032c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x32032Cu;
    {
        const bool branch_taken_0x32032c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32032c) {
            ctx->pc = 0x320330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32032Cu;
            // 0x320330: 0x86e20012  lh          $v0, 0x12($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 18)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x320348u;
            goto label_320348;
        }
    }
    ctx->pc = 0x320334u;
    // 0x320334: 0x86e20012  lh          $v0, 0x12($s7)
    ctx->pc = 0x320334u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 18)));
    // 0x320338: 0xc0c7ee0  jal         func_31FB80
    ctx->pc = 0x320338u;
    SET_GPR_U32(ctx, 31, 0x320340u);
    ctx->pc = 0x32033Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320338u;
    // 0x32033c: 0x24440120  addiu       $a0, $v0, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FB80u, 0x320338u, 0x320340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320340u;
label_320340:
    // 0x320340: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x320340u;
    {
        const bool branch_taken_0x320340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320340u;
        // 0x320344: 0x2243c  dsll32      $a0, $v0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320340) {
            ctx->pc = 0x320354u;
            goto label_320354;
        }
    }
    ctx->pc = 0x320348u;
label_320348:
    // 0x320348: 0xc0c7ee0  jal         func_31FB80
    ctx->pc = 0x320348u;
    SET_GPR_U32(ctx, 31, 0x320350u);
    ctx->pc = 0x32034Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320348u;
    // 0x32034c: 0x2444fee0  addiu       $a0, $v0, -0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FB80u, 0x320348u, 0x320350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320350u;
label_320350:
    // 0x320350: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x320350u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
label_320354:
    // 0x320354: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x320354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x320358: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x320358u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x32035c: 0x8443db20  lh          $v1, -0x24E0($v0)
    ctx->pc = 0x32035cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957856)));
    // 0x320360: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x320360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x320364: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x320364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x320368: 0xc0c7f80  jal         func_31FE00
    ctx->pc = 0x320368u;
    SET_GPR_U32(ctx, 31, 0x320370u);
    ctx->pc = 0x32036Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320368u;
    // 0x32036c: 0xa443db20  sh          $v1, -0x24E0($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294957856), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FE00u, 0x320368u, 0x320370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320370u;
label_320370:
    // 0x320370: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x320370u;
    {
        const bool branch_taken_0x320370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320370) {
            ctx->pc = 0x320574u;
            goto label_320574;
        }
    }
    ctx->pc = 0x320378u;
label_320378:
    // 0x320378: 0x92e2008c  lbu         $v0, 0x8C($s7)
    ctx->pc = 0x320378u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 140)));
    // 0x32037c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x32037cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x320380: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x320380u;
    {
        const bool branch_taken_0x320380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x320380) {
            ctx->pc = 0x320384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x320380u;
            // 0x320384: 0x86e20012  lh          $v0, 0x12($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 18)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32039Cu;
            goto label_32039c;
        }
    }
    ctx->pc = 0x320388u;
    // 0x320388: 0x86e20012  lh          $v0, 0x12($s7)
    ctx->pc = 0x320388u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 18)));
    // 0x32038c: 0xc0c7ee0  jal         func_31FB80
    ctx->pc = 0x32038Cu;
    SET_GPR_U32(ctx, 31, 0x320394u);
    ctx->pc = 0x320390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32038Cu;
    // 0x320390: 0x24440120  addiu       $a0, $v0, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FB80u, 0x32038Cu, 0x320394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320394u;
label_320394:
    // 0x320394: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x320394u;
    {
        const bool branch_taken_0x320394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320394u;
        // 0x320398: 0x2243c  dsll32      $a0, $v0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320394) {
            ctx->pc = 0x3203A8u;
            goto label_3203a8;
        }
    }
    ctx->pc = 0x32039Cu;
label_32039c:
    // 0x32039c: 0xc0c7ee0  jal         func_31FB80
    ctx->pc = 0x32039Cu;
    SET_GPR_U32(ctx, 31, 0x3203A4u);
    ctx->pc = 0x3203A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32039Cu;
    // 0x3203a0: 0x2444fee0  addiu       $a0, $v0, -0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FB80u, 0x32039Cu, 0x3203A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3203A4u;
label_3203a4:
    // 0x3203a4: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x3203a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
label_3203a8:
    // 0x3203a8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x3203a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x3203ac: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x3203acu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x3203b0: 0x8443db20  lh          $v1, -0x24E0($v0)
    ctx->pc = 0x3203b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957856)));
    // 0x3203b4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x3203b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x3203b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3203b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3203bc: 0xc0c7f80  jal         func_31FE00
    ctx->pc = 0x3203BCu;
    SET_GPR_U32(ctx, 31, 0x3203C4u);
    ctx->pc = 0x3203C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3203BCu;
    // 0x3203c0: 0xa443db20  sh          $v1, -0x24E0($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294957856), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FE00u, 0x3203BCu, 0x3203C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3203C4u;
label_3203c4:
    // 0x3203c4: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x3203C4u;
    {
        const bool branch_taken_0x3203c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3203c4) {
            ctx->pc = 0x320574u;
            goto label_320574;
        }
    }
    ctx->pc = 0x3203CCu;
label_3203cc:
    // 0x3203cc: 0xc0c7ee0  jal         func_31FB80
    ctx->pc = 0x3203CCu;
    SET_GPR_U32(ctx, 31, 0x3203D4u);
    ctx->pc = 0x3203D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3203CCu;
    // 0x3203d0: 0x86e40012  lh          $a0, 0x12($s7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FB80u, 0x3203CCu, 0x3203D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3203D4u;
label_3203d4:
    // 0x3203d4: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x3203d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3203d8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x3203d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x3203dc: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x3203dcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x3203e0: 0x8443db20  lh          $v1, -0x24E0($v0)
    ctx->pc = 0x3203e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957856)));
    // 0x3203e4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x3203e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x3203e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3203e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3203ec: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x3203ECu;
    {
        const bool branch_taken_0x3203ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3203F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3203ECu;
        // 0x3203f0: 0xa443db20  sh          $v1, -0x24E0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294957856), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3203ec) {
            ctx->pc = 0x320574u;
            goto label_320574;
        }
    }
    ctx->pc = 0x3203F4u;
label_3203f4:
    // 0x3203f4: 0xc0c7ee0  jal         func_31FB80
    ctx->pc = 0x3203F4u;
    SET_GPR_U32(ctx, 31, 0x3203FCu);
    ctx->pc = 0x3203F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3203F4u;
    // 0x3203f8: 0x86e40012  lh          $a0, 0x12($s7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FB80u, 0x3203F4u, 0x3203FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3203FCu;
label_3203fc:
    // 0x3203fc: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x3203fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x320400: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x320400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x320404: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x320404u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x320408: 0x8443db20  lh          $v1, -0x24E0($v0)
    ctx->pc = 0x320408u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957856)));
    // 0x32040c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x32040cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x320410: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x320410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x320414: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x320414u;
    {
        const bool branch_taken_0x320414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320414u;
        // 0x320418: 0xa443db20  sh          $v1, -0x24E0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294957856), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320414) {
            ctx->pc = 0x320574u;
            goto label_320574;
        }
    }
    ctx->pc = 0x32041Cu;
label_32041c:
    // 0x32041c: 0x92e2008c  lbu         $v0, 0x8C($s7)
    ctx->pc = 0x32041cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 140)));
    // 0x320420: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x320420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x320424: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x320424u;
    {
        const bool branch_taken_0x320424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x320424) {
            ctx->pc = 0x320428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x320424u;
            // 0x320428: 0x86e20012  lh          $v0, 0x12($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 18)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x320440u;
            goto label_320440;
        }
    }
    ctx->pc = 0x32042Cu;
    // 0x32042c: 0x86e20012  lh          $v0, 0x12($s7)
    ctx->pc = 0x32042cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 18)));
    // 0x320430: 0xc0c7ee0  jal         func_31FB80
    ctx->pc = 0x320430u;
    SET_GPR_U32(ctx, 31, 0x320438u);
    ctx->pc = 0x320434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320430u;
    // 0x320434: 0x2444fee0  addiu       $a0, $v0, -0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FB80u, 0x320430u, 0x320438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320438u;
label_320438:
    // 0x320438: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x320438u;
    {
        const bool branch_taken_0x320438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32043Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320438u;
        // 0x32043c: 0x2243c  dsll32      $a0, $v0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320438) {
            ctx->pc = 0x32044Cu;
            goto label_32044c;
        }
    }
    ctx->pc = 0x320440u;
label_320440:
    // 0x320440: 0xc0c7ee0  jal         func_31FB80
    ctx->pc = 0x320440u;
    SET_GPR_U32(ctx, 31, 0x320448u);
    ctx->pc = 0x320444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320440u;
    // 0x320444: 0x24440120  addiu       $a0, $v0, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FB80u, 0x320440u, 0x320448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320448u;
label_320448:
    // 0x320448: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x320448u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
label_32044c:
    // 0x32044c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x32044cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x320450: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x320450u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x320454: 0x8443db20  lh          $v1, -0x24E0($v0)
    ctx->pc = 0x320454u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957856)));
    // 0x320458: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x320458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x32045c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x32045cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x320460: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x320460u;
    {
        const bool branch_taken_0x320460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320460u;
        // 0x320464: 0xa443db20  sh          $v1, -0x24E0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294957856), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320460) {
            ctx->pc = 0x320574u;
            goto label_320574;
        }
    }
    ctx->pc = 0x320468u;
label_320468:
    // 0x320468: 0x92e2008c  lbu         $v0, 0x8C($s7)
    ctx->pc = 0x320468u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 140)));
    // 0x32046c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x32046cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x320470: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x320470u;
    {
        const bool branch_taken_0x320470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x320470) {
            ctx->pc = 0x320474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x320470u;
            // 0x320474: 0x86e20012  lh          $v0, 0x12($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 18)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32048Cu;
            goto label_32048c;
        }
    }
    ctx->pc = 0x320478u;
    // 0x320478: 0x86e20012  lh          $v0, 0x12($s7)
    ctx->pc = 0x320478u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 18)));
    // 0x32047c: 0xc0c7ee0  jal         func_31FB80
    ctx->pc = 0x32047Cu;
    SET_GPR_U32(ctx, 31, 0x320484u);
    ctx->pc = 0x320480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32047Cu;
    // 0x320480: 0x2444fee0  addiu       $a0, $v0, -0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FB80u, 0x32047Cu, 0x320484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320484u;
label_320484:
    // 0x320484: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x320484u;
    {
        const bool branch_taken_0x320484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320484u;
        // 0x320488: 0x2243c  dsll32      $a0, $v0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320484) {
            ctx->pc = 0x320498u;
            goto label_320498;
        }
    }
    ctx->pc = 0x32048Cu;
label_32048c:
    // 0x32048c: 0xc0c7ee0  jal         func_31FB80
    ctx->pc = 0x32048Cu;
    SET_GPR_U32(ctx, 31, 0x320494u);
    ctx->pc = 0x320490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32048Cu;
    // 0x320490: 0x24440120  addiu       $a0, $v0, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FB80u, 0x32048Cu, 0x320494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320494u;
label_320494:
    // 0x320494: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x320494u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
label_320498:
    // 0x320498: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x320498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x32049c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x32049cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x3204a0: 0x8443db20  lh          $v1, -0x24E0($v0)
    ctx->pc = 0x3204a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957856)));
    // 0x3204a4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x3204a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x3204a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3204a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3204ac: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x3204ACu;
    {
        const bool branch_taken_0x3204ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3204B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3204ACu;
        // 0x3204b0: 0xa443db20  sh          $v1, -0x24E0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294957856), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3204ac) {
            ctx->pc = 0x320574u;
            goto label_320574;
        }
    }
    ctx->pc = 0x3204B4u;
label_3204b4:
    // 0x3204b4: 0x92e2008c  lbu         $v0, 0x8C($s7)
    ctx->pc = 0x3204b4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 140)));
    // 0x3204b8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3204b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3204bc: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3204BCu;
    {
        const bool branch_taken_0x3204bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3204bc) {
            ctx->pc = 0x3204C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3204BCu;
            // 0x3204c0: 0x86e20012  lh          $v0, 0x12($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 18)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3204D8u;
            goto label_3204d8;
        }
    }
    ctx->pc = 0x3204C4u;
    // 0x3204c4: 0x86e20012  lh          $v0, 0x12($s7)
    ctx->pc = 0x3204c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 18)));
    // 0x3204c8: 0xc0c7ee0  jal         func_31FB80
    ctx->pc = 0x3204C8u;
    SET_GPR_U32(ctx, 31, 0x3204D0u);
    ctx->pc = 0x3204CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3204C8u;
    // 0x3204cc: 0x24440120  addiu       $a0, $v0, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FB80u, 0x3204C8u, 0x3204D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3204D0u;
label_3204d0:
    // 0x3204d0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3204D0u;
    {
        const bool branch_taken_0x3204d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3204D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3204D0u;
        // 0x3204d4: 0x2243c  dsll32      $a0, $v0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3204d0) {
            ctx->pc = 0x3204E4u;
            goto label_3204e4;
        }
    }
    ctx->pc = 0x3204D8u;
label_3204d8:
    // 0x3204d8: 0xc0c7ee0  jal         func_31FB80
    ctx->pc = 0x3204D8u;
    SET_GPR_U32(ctx, 31, 0x3204E0u);
    ctx->pc = 0x3204DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3204D8u;
    // 0x3204dc: 0x2444fee0  addiu       $a0, $v0, -0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FB80u, 0x3204D8u, 0x3204E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3204E0u;
label_3204e0:
    // 0x3204e0: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x3204e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
label_3204e4:
    // 0x3204e4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x3204e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x3204e8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x3204e8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x3204ec: 0x8443db20  lh          $v1, -0x24E0($v0)
    ctx->pc = 0x3204ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957856)));
    // 0x3204f0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x3204f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x3204f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3204f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3204f8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x3204F8u;
    {
        const bool branch_taken_0x3204f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3204FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3204F8u;
        // 0x3204fc: 0xa443db20  sh          $v1, -0x24E0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294957856), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3204f8) {
            ctx->pc = 0x320574u;
            goto label_320574;
        }
    }
    ctx->pc = 0x320500u;
label_320500:
    // 0x320500: 0x92e2008c  lbu         $v0, 0x8C($s7)
    ctx->pc = 0x320500u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 140)));
    // 0x320504: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x320504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x320508: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x320508u;
    {
        const bool branch_taken_0x320508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x320508) {
            ctx->pc = 0x32050Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x320508u;
            // 0x32050c: 0x86e20012  lh          $v0, 0x12($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 18)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x320524u;
            goto label_320524;
        }
    }
    ctx->pc = 0x320510u;
    // 0x320510: 0x86e20012  lh          $v0, 0x12($s7)
    ctx->pc = 0x320510u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 18)));
    // 0x320514: 0xc0c7ee0  jal         func_31FB80
    ctx->pc = 0x320514u;
    SET_GPR_U32(ctx, 31, 0x32051Cu);
    ctx->pc = 0x320518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320514u;
    // 0x320518: 0x24440120  addiu       $a0, $v0, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FB80u, 0x320514u, 0x32051Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32051Cu;
label_32051c:
    // 0x32051c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x32051Cu;
    {
        const bool branch_taken_0x32051c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32051Cu;
        // 0x320520: 0x2243c  dsll32      $a0, $v0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32051c) {
            ctx->pc = 0x320530u;
            goto label_320530;
        }
    }
    ctx->pc = 0x320524u;
label_320524:
    // 0x320524: 0xc0c7ee0  jal         func_31FB80
    ctx->pc = 0x320524u;
    SET_GPR_U32(ctx, 31, 0x32052Cu);
    ctx->pc = 0x320528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320524u;
    // 0x320528: 0x2444fee0  addiu       $a0, $v0, -0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FB80u, 0x320524u, 0x32052Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32052Cu;
label_32052c:
    // 0x32052c: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x32052cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
label_320530:
    // 0x320530: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x320530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x320534: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x320534u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x320538: 0x8443db20  lh          $v1, -0x24E0($v0)
    ctx->pc = 0x320538u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957856)));
    // 0x32053c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x32053cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x320540: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x320540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x320544: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x320544u;
    {
        const bool branch_taken_0x320544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320544u;
        // 0x320548: 0xa443db20  sh          $v1, -0x24E0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294957856), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320544) {
            ctx->pc = 0x320574u;
            goto label_320574;
        }
    }
    ctx->pc = 0x32054Cu;
label_32054c:
    // 0x32054c: 0xc0c7d98  jal         func_31F660
    ctx->pc = 0x32054Cu;
    SET_GPR_U32(ctx, 31, 0x320554u);
    ctx->pc = 0x31F660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31F660u, 0x32054Cu, 0x320554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320554u;
label_320554:
    // 0x320554: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x320554u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x320558: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x320558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x32055c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x32055cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x320560: 0x8443db20  lh          $v1, -0x24E0($v0)
    ctx->pc = 0x320560u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957856)));
    // 0x320564: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x320564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x320568: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x320568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x32056c: 0xc0c7f80  jal         func_31FE00
    ctx->pc = 0x32056Cu;
    SET_GPR_U32(ctx, 31, 0x320574u);
    ctx->pc = 0x320570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32056Cu;
    // 0x320570: 0xa443db20  sh          $v1, -0x24E0($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294957856), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FE00u, 0x32056Cu, 0x320574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320574u;
label_320574:
    // 0x320574: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x320574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_320578:
    // 0x320578: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x320578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x32057c: 0x5062002a  beql        $v1, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x32057Cu;
    {
        const bool branch_taken_0x32057c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x32057c) {
            ctx->pc = 0x320580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32057Cu;
            // 0x320580: 0x87a200b0  lh          $v0, 0xB0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x320628u;
            goto label_320628;
        }
    }
    ctx->pc = 0x320584u;
    // 0x320584: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x320584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x320588: 0x10620023  beq         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x320588u;
    {
        const bool branch_taken_0x320588 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x320588) {
            ctx->pc = 0x320618u;
            goto label_320618;
        }
    }
    ctx->pc = 0x320590u;
    // 0x320590: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x320590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x320594: 0x5062001a  beql        $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x320594u;
    {
        const bool branch_taken_0x320594 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x320594) {
            ctx->pc = 0x320598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x320594u;
            // 0x320598: 0x87c30014  lh          $v1, 0x14($fp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x320600u;
            goto label_320600;
        }
    }
    ctx->pc = 0x32059Cu;
    // 0x32059c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32059cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3205a0: 0x50620011  beql        $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3205A0u;
    {
        const bool branch_taken_0x3205a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3205a0) {
            ctx->pc = 0x3205A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3205A0u;
            // 0x3205a4: 0x87c30014  lh          $v1, 0x14($fp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3205E8u;
            goto label_3205e8;
        }
    }
    ctx->pc = 0x3205A8u;
    // 0x3205a8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3205A8u;
    {
        const bool branch_taken_0x3205a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3205a8) {
            ctx->pc = 0x3205B8u;
            goto label_3205b8;
        }
    }
    ctx->pc = 0x3205B0u;
    // 0x3205b0: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x3205B0u;
    {
        const bool branch_taken_0x3205b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3205b0) {
            ctx->pc = 0x320658u;
            goto label_320658;
        }
    }
    ctx->pc = 0x3205B8u;
label_3205b8:
    // 0x3205b8: 0xc0c7e7c  jal         func_31F9F0
    ctx->pc = 0x3205B8u;
    SET_GPR_U32(ctx, 31, 0x3205C0u);
    ctx->pc = 0x31F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31F9F0u, 0x3205B8u, 0x3205C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3205C0u;
label_3205c0:
    // 0x3205c0: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x3205c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3205c4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x3205c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x3205c8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x3205c8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x3205cc: 0x8443db22  lh          $v1, -0x24DE($v0)
    ctx->pc = 0x3205ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957858)));
    // 0x3205d0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x3205d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x3205d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3205d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3205d8: 0xc0c7f94  jal         func_31FE50
    ctx->pc = 0x3205D8u;
    SET_GPR_U32(ctx, 31, 0x3205E0u);
    ctx->pc = 0x3205DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3205D8u;
    // 0x3205dc: 0xa443db22  sh          $v1, -0x24DE($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294957858), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FE50u, 0x3205D8u, 0x3205E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3205E0u;
label_3205e0:
    // 0x3205e0: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x3205E0u;
    {
        const bool branch_taken_0x3205e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3205e0) {
            ctx->pc = 0x320680u;
            goto label_320680;
        }
    }
    ctx->pc = 0x3205E8u;
label_3205e8:
    // 0x3205e8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x3205e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x3205ec: 0x2463ff10  addiu       $v1, $v1, -0xF0
    ctx->pc = 0x3205ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967056));
    // 0x3205f0: 0xc0c7f94  jal         func_31FE50
    ctx->pc = 0x3205F0u;
    SET_GPR_U32(ctx, 31, 0x3205F8u);
    ctx->pc = 0x3205F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3205F0u;
    // 0x3205f4: 0xa443db22  sh          $v1, -0x24DE($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294957858), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FE50u, 0x3205F0u, 0x3205F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3205F8u;
label_3205f8:
    // 0x3205f8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x3205F8u;
    {
        const bool branch_taken_0x3205f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3205f8) {
            ctx->pc = 0x320680u;
            goto label_320680;
        }
    }
    ctx->pc = 0x320600u;
label_320600:
    // 0x320600: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x320600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x320604: 0x2463ff10  addiu       $v1, $v1, -0xF0
    ctx->pc = 0x320604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967056));
    // 0x320608: 0xc0c7f94  jal         func_31FE50
    ctx->pc = 0x320608u;
    SET_GPR_U32(ctx, 31, 0x320610u);
    ctx->pc = 0x32060Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320608u;
    // 0x32060c: 0xa443db22  sh          $v1, -0x24DE($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294957858), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FE50u, 0x320608u, 0x320610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320610u;
label_320610:
    // 0x320610: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x320610u;
    {
        const bool branch_taken_0x320610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320610) {
            ctx->pc = 0x320680u;
            goto label_320680;
        }
    }
    ctx->pc = 0x320618u;
label_320618:
    // 0x320618: 0xc0c7f94  jal         func_31FE50
    ctx->pc = 0x320618u;
    SET_GPR_U32(ctx, 31, 0x320620u);
    ctx->pc = 0x31FE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FE50u, 0x320618u, 0x320620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320620u;
label_320620:
    // 0x320620: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x320620u;
    {
        const bool branch_taken_0x320620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320620) {
            ctx->pc = 0x320680u;
            goto label_320680;
        }
    }
    ctx->pc = 0x320628u;
label_320628:
    // 0x320628: 0xc0c7ed0  jal         func_31FB40
    ctx->pc = 0x320628u;
    SET_GPR_U32(ctx, 31, 0x320630u);
    ctx->pc = 0x32062Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320628u;
    // 0x32062c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FB40u, 0x320628u, 0x320630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320630u;
label_320630:
    // 0x320630: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x320630u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x320634: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x320634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x320638: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x320638u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x32063c: 0x8443db22  lh          $v1, -0x24DE($v0)
    ctx->pc = 0x32063cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957858)));
    // 0x320640: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x320640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x320644: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x320644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x320648: 0xc0c7f94  jal         func_31FE50
    ctx->pc = 0x320648u;
    SET_GPR_U32(ctx, 31, 0x320650u);
    ctx->pc = 0x32064Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320648u;
    // 0x32064c: 0xa443db22  sh          $v1, -0x24DE($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294957858), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FE50u, 0x320648u, 0x320650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320650u;
label_320650:
    // 0x320650: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x320650u;
    {
        const bool branch_taken_0x320650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320650) {
            ctx->pc = 0x320680u;
            goto label_320680;
        }
    }
    ctx->pc = 0x320658u;
label_320658:
    // 0x320658: 0xc0c7e7c  jal         func_31F9F0
    ctx->pc = 0x320658u;
    SET_GPR_U32(ctx, 31, 0x320660u);
    ctx->pc = 0x31F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31F9F0u, 0x320658u, 0x320660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320660u;
label_320660:
    // 0x320660: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x320660u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x320664: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x320664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x320668: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x320668u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x32066c: 0x8443db22  lh          $v1, -0x24DE($v0)
    ctx->pc = 0x32066cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957858)));
    // 0x320670: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x320670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x320674: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x320674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x320678: 0xc0c7f94  jal         func_31FE50
    ctx->pc = 0x320678u;
    SET_GPR_U32(ctx, 31, 0x320680u);
    ctx->pc = 0x32067Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320678u;
    // 0x32067c: 0xa443db22  sh          $v1, -0x24DE($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294957858), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FE50u, 0x320678u, 0x320680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320680u;
label_320680:
    // 0x320680: 0xc0c7d30  jal         func_31F4C0
    ctx->pc = 0x320680u;
    SET_GPR_U32(ctx, 31, 0x320688u);
    ctx->pc = 0x31F4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31F4C0u, 0x320680u, 0x320688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320688u;
label_320688:
    // 0x320688: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x320688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x32068c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x32068cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320690: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x320690u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x320694: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x320694u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x320698: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x320698u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x32069c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x32069cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3206a0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3206a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3206a4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3206a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3206a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3206a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3206ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3206acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3206b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3206b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3206b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3206B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3206B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3206B4u;
        // 0x3206b8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3206B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3206BCu;
    // 0x3206bc: 0x0  nop
    ctx->pc = 0x3206bcu;
    // NOP
    if (ctx->pc == 0x3206bcu) { ctx->pc = 0x3206c0u; }
}
