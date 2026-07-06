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

// Function: sub_002DA320
// Address: 0x2da320 - 0x2da430
void sub_002DA320_0x2da320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DA320_0x2da320");
#endif

    switch (ctx->pc) {
        case 0x2da334u: goto label_2da334;
        case 0x2da360u: goto label_2da360;
        case 0x2da3acu: goto label_2da3ac;
        case 0x2da3b4u: goto label_2da3b4;
        case 0x2da3c4u: goto label_2da3c4;
        case 0x2da3ecu: goto label_2da3ec;
        case 0x2da418u: goto label_2da418;
        default: break;
    }

    ctx->pc = 0x2da320u;

    // 0x2da320: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2da320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2da324: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2da324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2da328: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x2da328u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2da32c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2da32cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2da330: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2da330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2da334:
    // 0x2da334: 0x3c03002e  lui         $v1, 0x2E
    ctx->pc = 0x2da334u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)46 << 16));
    // 0x2da338: 0x2463a380  addiu       $v1, $v1, -0x5C80
    ctx->pc = 0x2da338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943616));
    // 0x2da33c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2da33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2da340: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DA340u;
    {
        const bool branch_taken_0x2da340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2da340) {
            ctx->pc = 0x2DA360u;
            goto label_2da360;
        }
    }
    ctx->pc = 0x2DA348u;
    // 0x2da348: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2da348u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2da34c: 0x2484a394  addiu       $a0, $a0, -0x5C6C
    ctx->pc = 0x2da34cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943636));
    // 0x2da350: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x2da350u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2da354: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2da354u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2da358: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2DA358u;
    SET_GPR_U32(ctx, 31, 0x2DA360u);
    ctx->pc = 0x2DA35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA358u;
    // 0x2da35c: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8FC0u, 0x2DA358u, 0x2DA360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA360u;
label_2da360:
    // 0x2da360: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2DA360u;
    {
        const bool branch_taken_0x2da360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da360) {
            ctx->pc = 0x2DA394u;
            goto label_2da394;
        }
    }
    ctx->pc = 0x2DA368u;
    // 0x2da368: 0x8daea3f5  lw          $t6, -0x5C0B($t5)
    ctx->pc = 0x2da368u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294943733)));
    // 0x2da36c: 0x26e27fe8  addiu       $v0, $s7, 0x7FE8
    ctx->pc = 0x2da36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 32744));
    // 0x2da370: 0x8fdf828d  lw          $ra, -0x7D73($fp)
    ctx->pc = 0x2da370u;
    SET_GPR_S32(ctx, 31, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294935181)));
    // 0x2da374: 0x24566100  addiu       $s6, $v0, 0x6100
    ctx->pc = 0x2da374u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 24832));
    // 0x2da378: 0xa2b4c271  sb          $s4, -0x3D8F($s5)
    ctx->pc = 0x2da378u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 4294951537), (uint8_t)GPR_U32(ctx, 20));
    // 0x2da37c: 0x87b042eb  lh          $s0, 0x42EB($sp)
    ctx->pc = 0x2da37cu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 17131)));
    // 0x2da380: 0x0  nop
    ctx->pc = 0x2da380u;
    // NOP
    // 0x2da384: 0xd7472c99  ldc1        $f7, 0x2C99($k0)
    ctx->pc = 0x2da384u;
    throw std::runtime_error("Unhandled opcode: 0x35 at 0x2DA384 raw=0xD7472C99");
    // 0x2da388: 0xc712d43e  lwc1        $f18, -0x2BC2($t8)
    ctx->pc = 0x2da388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294956094)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x2da38c: 0xd7472cad  ldc1        $f7, 0x2CAD($k0)
    ctx->pc = 0x2da38cu;
    throw std::runtime_error("Unhandled opcode: 0x35 at 0x2DA38C raw=0xD7472CAD");
    // 0x2da390: 0x0  nop
    ctx->pc = 0x2da390u;
    // NOP
label_2da394:
    // 0x2da394: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2da394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2da398: 0x245098b0  addiu       $s0, $v0, -0x6750
    ctx->pc = 0x2da398u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940848));
    // 0x2da39c: 0xa63f0d71  sh          $ra, 0xD71($s1)
    ctx->pc = 0x2da39cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 3441), (uint16_t)GPR_U32(ctx, 31));
    // 0x2da3a0: 0xa03f11d9  sb          $ra, 0x11D9($at)
    ctx->pc = 0x2da3a0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4569), (uint8_t)GPR_U32(ctx, 31));
    // 0x2da3a4: 0x833e8db1  lb          $fp, -0x724F($t9)
    ctx->pc = 0x2da3a4u;
    SET_GPR_S32(ctx, 30, (int8_t)READ8(ADD32(GPR_U32(ctx, 25), 4294938033)));
    // 0x2da3a8: 0x161f1de3  bne         $s0, $ra, . + 4 + (0x1DE3 << 2)
label_2da3ac:
    if (ctx->pc == 0x2DA3ACu) {
        ctx->pc = 0x2DA3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA3A8u;
        // 0x2da3ac: 0xc0b782c  jal         func_2DE0B0 (Delay Slot)
        // JAL 0x2DE0B0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA3B0u;
        goto label_fallthrough_0x2da3a8;
    }
    ctx->pc = 0x2DA3A8u;
    {
        const bool branch_taken_0x2da3a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 31));
        ctx->pc = 0x2DA3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA3A8u;
        // 0x2da3ac: 0xc0b782c  jal         func_2DE0B0 (Delay Slot)
        // JAL 0x2DE0B0 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da3a8) {
            ctx->pc = 0x2E1B38u;
            return;
        }
    }
label_fallthrough_0x2da3a8:
    ctx->pc = 0x2DA3B0u;
    // 0x2da3b0: 0xa23f1de1  sb          $ra, 0x1DE1($s1)
    ctx->pc = 0x2da3b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 7649), (uint8_t)GPR_U32(ctx, 31));
label_2da3b4:
    // 0x2da3b4: 0xb23e1df1  sdl         $fp, 0x1DF1($s1)
    ctx->pc = 0x2da3b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7665); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 30); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2da3b8: 0xa23f1de1  sb          $ra, 0x1DE1($s1)
    ctx->pc = 0x2da3b8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 7649), (uint8_t)GPR_U32(ctx, 31));
    // 0x2da3bc: 0xc09ecdc  jal         func_27B370
    ctx->pc = 0x2DA3BCu;
    SET_GPR_U32(ctx, 31, 0x2DA3C4u);
    ctx->pc = 0x2DA3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA3BCu;
    // 0x2da3c0: 0x161f1de3  bne         $s0, $ra, . + 4 + (0x1DE3 << 2) (Delay Slot)
    // Likely branch instruction at 0x2DA3C0 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B370u, 0x2DA3BCu, 0x2DA3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA3C4u;
label_2da3c4:
    // 0x2da3c4: 0xa03f1d59  sb          $ra, 0x1D59($at)
    ctx->pc = 0x2da3c4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 7513), (uint8_t)GPR_U32(ctx, 31));
    // 0x2da3c8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2DA3C8u;
    {
        const bool branch_taken_0x2da3c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da3c8) {
            ctx->pc = 0x2DA3F8u;
            goto label_2da3f8;
        }
    }
    ctx->pc = 0x2DA3D0u;
    // 0x2da3d0: 0x26dfb428  addiu       $ra, $s6, -0x4BD8
    ctx->pc = 0x2da3d0u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 22), 4294947880));
    // 0x2da3d4: 0xa18c88a9  sb          $t4, -0x7757($t4)
    ctx->pc = 0x2da3d4u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 4294936745), (uint8_t)GPR_U32(ctx, 12));
    // 0x2da3d8: 0xa1ca9fb1  sb          $t2, -0x604F($t6)
    ctx->pc = 0x2da3d8u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 4294942641), (uint8_t)GPR_U32(ctx, 10));
    // 0x2da3dc: 0xa3de9ac1  sb          $fp, -0x653F($fp)
    ctx->pc = 0x2da3dcu;
    WRITE8(ADD32(GPR_U32(ctx, 30), 4294941377), (uint8_t)GPR_U32(ctx, 30));
    // 0x2da3e0: 0xff844fc2  sd          $a0, 0x4FC2($gp)
    ctx->pc = 0x2da3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 20418), GPR_U64(ctx, 4));
    // 0x2da3e4: 0xcc3b003  jal         func_30EC00C
    ctx->pc = 0x2DA3E4u;
    SET_GPR_U32(ctx, 31, 0x2DA3ECu);
    ctx->pc = 0x2DA3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA3E4u;
    // 0x2da3e8: 0xd7499c27  ldc1        $f9, -0x63D9($k0) (Delay Slot)
    throw std::runtime_error("Unhandled opcode: 0x35 at 0x2DA3E8 raw=0xD7499C27");
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EC00Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EC00Cu, 0x2DA3E4u, 0x2DA3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA3ECu;
label_2da3ec:
    // 0x2da3ec: 0xc712d43f  lwc1        $f18, -0x2BC1($t8)
    ctx->pc = 0x2da3ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294956095)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x2da3f0: 0xd7499c13  ldc1        $f9, -0x63ED($k0)
    ctx->pc = 0x2da3f0u;
    throw std::runtime_error("Unhandled opcode: 0x35 at 0x2DA3F0 raw=0xD7499C13");
    // 0x2da3f4: 0x0  nop
    ctx->pc = 0x2da3f4u;
    // NOP
label_2da3f8:
    // 0x2da3f8: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x2da3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x2da3fc: 0x2442a3e8  addiu       $v0, $v0, -0x5C18
    ctx->pc = 0x2da3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943720));
    // 0x2da400: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2da400u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2da404: 0x2484a3c8  addiu       $a0, $a0, -0x5C38
    ctx->pc = 0x2da404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943688));
    // 0x2da408: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2da408u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2da40c: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2da40cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2da410: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2DA410u;
    SET_GPR_U32(ctx, 31, 0x2DA418u);
    ctx->pc = 0x2DA414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA410u;
    // 0x2da414: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8FC0u, 0x2DA410u, 0x2DA418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA418u;
label_2da418:
    // 0x2da418: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2da418u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da41c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2da41cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2da420: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2da420u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2da424: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2da424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2da428: 0x3e00008  jr          $ra
    ctx->pc = 0x2DA428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DA42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA428u;
        // 0x2da42c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DA428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DA430u;
}
