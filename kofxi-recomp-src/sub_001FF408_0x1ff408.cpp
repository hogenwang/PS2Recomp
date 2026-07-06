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

// Function: sub_001FF408
// Address: 0x1ff408 - 0x1ff6f0
void sub_001FF408_0x1ff408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FF408_0x1ff408");
#endif

    switch (ctx->pc) {
        case 0x1ff440u: goto label_1ff440;
        case 0x1ff45cu: goto label_1ff45c;
        case 0x1ff4fcu: goto label_1ff4fc;
        case 0x1ff514u: goto label_1ff514;
        case 0x1ff5d4u: goto label_1ff5d4;
        case 0x1ff628u: goto label_1ff628;
        case 0x1ff674u: goto label_1ff674;
        case 0x1ff6c4u: goto label_1ff6c4;
        default: break;
    }

    ctx->pc = 0x1ff408u;

    // 0x1ff408: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1ff408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1ff40c: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1ff40cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1ff410: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x1ff410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x1ff414: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ff414u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff418: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x1ff418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x1ff41c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1ff41cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff420: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x1ff420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x1ff424: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1ff424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff428: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1ff428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1ff42c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1ff42cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1ff430: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1ff430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1ff434: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1ff434u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x1ff438: 0xc07fcdc  jal         func_1FF370
    ctx->pc = 0x1FF438u;
    SET_GPR_U32(ctx, 31, 0x1FF440u);
    ctx->pc = 0x1FF43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF438u;
    // 0x1ff43c: 0x24500020  addiu       $s0, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF370u, 0x1FF438u, 0x1FF440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF440u;
label_1ff440:
    // 0x1ff440: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ff440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff444: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1ff444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1ff448: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1FF448u;
    {
        const bool branch_taken_0x1ff448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF448u;
        // 0x1ff44c: 0x27a60034  addiu       $a2, $sp, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff448) {
            ctx->pc = 0x1FF4B8u;
            goto label_1ff4b8;
        }
    }
    ctx->pc = 0x1FF450u;
    // 0x1ff450: 0x92130019  lbu         $s3, 0x19($s0)
    ctx->pc = 0x1ff450u;
    SET_GPR_U32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 25)));
    // 0x1ff454: 0xc07fdbc  jal         func_1FF6F0
    ctx->pc = 0x1FF454u;
    SET_GPR_U32(ctx, 31, 0x1FF45Cu);
    ctx->pc = 0x1FF458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF454u;
    // 0x1ff458: 0x92100018  lbu         $s0, 0x18($s0) (Delay Slot)
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF6F0u, 0x1FF454u, 0x1FF45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF45Cu;
label_1ff45c:
    // 0x1ff45c: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1ff45cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1ff460: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1FF460u;
    {
        const bool branch_taken_0x1ff460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF460u;
        // 0x1ff464: 0x701821  addu        $v1, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff460) {
            ctx->pc = 0x1FF4B8u;
            goto label_1ff4b8;
        }
    }
    ctx->pc = 0x1FF468u;
    // 0x1ff468: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1ff468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ff46c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1ff46cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1ff470: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x1ff470u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x1ff474: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1ff474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1ff478: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x1ff478u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1ff47c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ff47cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ff480: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1ff480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1ff484: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1ff484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1ff488: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1ff488u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1ff48c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1ff48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1ff490: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ff490u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ff494: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1ff494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1ff498: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1ff498u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1ff49c: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FF49Cu;
    {
        const bool branch_taken_0x1ff49c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ff49c) {
            ctx->pc = 0x1FF4A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF49Cu;
            // 0x1ff4a0: 0xae240000  sw          $a0, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF4B0u;
            goto label_1ff4b0;
        }
    }
    ctx->pc = 0x1FF4A4u;
    // 0x1ff4a4: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x1ff4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x1ff4a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FF4A8u;
    {
        const bool branch_taken_0x1ff4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF4A8u;
        // 0x1ff4ac: 0xae530000  sw          $s3, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff4a8) {
            ctx->pc = 0x1FF4B4u;
            goto label_1ff4b4;
        }
    }
    ctx->pc = 0x1FF4B0u;
label_1ff4b0:
    // 0x1ff4b0: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x1ff4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
label_1ff4b4:
    // 0x1ff4b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ff4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ff4b8:
    // 0x1ff4b8: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1ff4b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ff4bc: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x1ff4bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ff4c0: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x1ff4c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ff4c4: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x1ff4c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ff4c8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1ff4c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ff4cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF4CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF4CCu;
        // 0x1ff4d0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF4CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF4D4u;
    // 0x1ff4d4: 0x0  nop
    ctx->pc = 0x1ff4d4u;
    // NOP
    // 0x1ff4d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ff4d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ff4dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ff4dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ff4e0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1ff4e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff4e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ff4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ff4e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ff4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ff4ec: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x1ff4ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ff4f0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1ff4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1ff4f4: 0xc07fbea  jal         func_1FEFA8
    ctx->pc = 0x1FF4F4u;
    SET_GPR_U32(ctx, 31, 0x1FF4FCu);
    ctx->pc = 0x1FF4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF4F4u;
    // 0x1ff4f8: 0x245100e0  addiu       $s1, $v0, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEFA8u, 0x1FF4F4u, 0x1FF4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF4FCu;
label_1ff4fc:
    // 0x1ff4fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ff4fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff500: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ff500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff504: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1FF504u;
    {
        const bool branch_taken_0x1ff504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF504u;
        // 0x1ff508: 0x24060041  addiu       $a2, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff504) {
            ctx->pc = 0x1FF598u;
            goto label_1ff598;
        }
    }
    ctx->pc = 0x1FF50Cu;
    // 0x1ff50c: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1FF50Cu;
    SET_GPR_U32(ctx, 31, 0x1FF514u);
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x1FF50Cu, 0x1FF514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF514u;
label_1ff514:
    // 0x1ff514: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ff514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ff518: 0x6a230007  ldl         $v1, 0x7($s1)
    ctx->pc = 0x1ff518u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1ff51c: 0x6e230000  ldr         $v1, 0x0($s1)
    ctx->pc = 0x1ff51cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1ff520: 0x6a24000f  ldl         $a0, 0xF($s1)
    ctx->pc = 0x1ff520u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1ff524: 0x6e240008  ldr         $a0, 0x8($s1)
    ctx->pc = 0x1ff524u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1ff528: 0x6a250017  ldl         $a1, 0x17($s1)
    ctx->pc = 0x1ff528u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1ff52c: 0x6e250010  ldr         $a1, 0x10($s1)
    ctx->pc = 0x1ff52cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1ff530: 0x6a26001f  ldl         $a2, 0x1F($s1)
    ctx->pc = 0x1ff530u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1ff534: 0x6e260018  ldr         $a2, 0x18($s1)
    ctx->pc = 0x1ff534u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1ff538: 0xb2030007  sdl         $v1, 0x7($s0)
    ctx->pc = 0x1ff538u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ff53c: 0xb6030000  sdr         $v1, 0x0($s0)
    ctx->pc = 0x1ff53cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ff540: 0xb204000f  sdl         $a0, 0xF($s0)
    ctx->pc = 0x1ff540u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ff544: 0xb6040008  sdr         $a0, 0x8($s0)
    ctx->pc = 0x1ff544u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ff548: 0xb2050017  sdl         $a1, 0x17($s0)
    ctx->pc = 0x1ff548u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ff54c: 0xb6050010  sdr         $a1, 0x10($s0)
    ctx->pc = 0x1ff54cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ff550: 0xb206001f  sdl         $a2, 0x1F($s0)
    ctx->pc = 0x1ff550u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ff554: 0xb6060018  sdr         $a2, 0x18($s0)
    ctx->pc = 0x1ff554u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ff558: 0x6a230027  ldl         $v1, 0x27($s1)
    ctx->pc = 0x1ff558u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1ff55c: 0x6e230020  ldr         $v1, 0x20($s1)
    ctx->pc = 0x1ff55cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1ff560: 0x6a24002f  ldl         $a0, 0x2F($s1)
    ctx->pc = 0x1ff560u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1ff564: 0x6e240028  ldr         $a0, 0x28($s1)
    ctx->pc = 0x1ff564u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1ff568: 0x6a250037  ldl         $a1, 0x37($s1)
    ctx->pc = 0x1ff568u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1ff56c: 0x6e250030  ldr         $a1, 0x30($s1)
    ctx->pc = 0x1ff56cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1ff570: 0x6a26003f  ldl         $a2, 0x3F($s1)
    ctx->pc = 0x1ff570u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1ff574: 0x6e260038  ldr         $a2, 0x38($s1)
    ctx->pc = 0x1ff574u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1ff578: 0xb2030027  sdl         $v1, 0x27($s0)
    ctx->pc = 0x1ff578u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ff57c: 0xb6030020  sdr         $v1, 0x20($s0)
    ctx->pc = 0x1ff57cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ff580: 0xb204002f  sdl         $a0, 0x2F($s0)
    ctx->pc = 0x1ff580u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ff584: 0xb6040028  sdr         $a0, 0x28($s0)
    ctx->pc = 0x1ff584u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ff588: 0xb2050037  sdl         $a1, 0x37($s0)
    ctx->pc = 0x1ff588u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ff58c: 0xb6050030  sdr         $a1, 0x30($s0)
    ctx->pc = 0x1ff58cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ff590: 0xb206003f  sdl         $a2, 0x3F($s0)
    ctx->pc = 0x1ff590u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ff594: 0xb6060038  sdr         $a2, 0x38($s0)
    ctx->pc = 0x1ff594u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1ff598:
    // 0x1ff598: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ff598u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ff59c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ff59cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ff5a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ff5a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ff5a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF5A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF5A4u;
        // 0x1ff5a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF5A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF5ACu;
    // 0x1ff5ac: 0x0  nop
    ctx->pc = 0x1ff5acu;
    // NOP
    // 0x1ff5b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ff5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ff5b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ff5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ff5b8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ff5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ff5bc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ff5bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff5c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ff5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ff5c4: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1ff5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1ff5c8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1ff5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1ff5cc: 0xc07fbea  jal         func_1FEFA8
    ctx->pc = 0x1FF5CCu;
    SET_GPR_U32(ctx, 31, 0x1FF5D4u);
    ctx->pc = 0x1FF5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF5CCu;
    // 0x1ff5d0: 0x24500080  addiu       $s0, $v0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEFA8u, 0x1FF5CCu, 0x1FF5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF5D4u;
label_1ff5d4:
    // 0x1ff5d4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FF5D4u;
    {
        const bool branch_taken_0x1ff5d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff5d4) {
            ctx->pc = 0x1FF5D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF5D4u;
            // 0x1ff5d8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF5ECu;
            goto label_1ff5ec;
        }
    }
    ctx->pc = 0x1FF5DCu;
    // 0x1ff5dc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ff5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ff5e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ff5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ff5e4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1ff5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1ff5e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ff5e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ff5ec:
    // 0x1ff5ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ff5ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ff5f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ff5f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ff5f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF5F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF5F4u;
        // 0x1ff5f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF5F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF5FCu;
    // 0x1ff5fc: 0x0  nop
    ctx->pc = 0x1ff5fcu;
    // NOP
    // 0x1ff600: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ff600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ff604: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ff604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ff608: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ff608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ff60c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ff60cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ff610: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ff610u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff614: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ff614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ff618: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1ff618u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1ff61c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1ff61cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1ff620: 0xc07fbea  jal         func_1FEFA8
    ctx->pc = 0x1FF620u;
    SET_GPR_U32(ctx, 31, 0x1FF628u);
    ctx->pc = 0x1FF624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF620u;
    // 0x1ff624: 0x24700080  addiu       $s0, $v1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEFA8u, 0x1FF620u, 0x1FF628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF628u;
label_1ff628:
    // 0x1ff628: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FF628u;
    {
        const bool branch_taken_0x1ff628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff628) {
            ctx->pc = 0x1FF62Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF628u;
            // 0x1ff62c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF640u;
            goto label_1ff640;
        }
    }
    ctx->pc = 0x1FF630u;
    // 0x1ff630: 0x92030004  lbu         $v1, 0x4($s0)
    ctx->pc = 0x1ff630u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ff634: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ff634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ff638: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1ff638u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1ff63c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ff63cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ff640:
    // 0x1ff640: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ff640u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ff644: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ff644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ff648: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF648u;
        // 0x1ff64c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF650u;
    // 0x1ff650: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ff650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ff654: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ff654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ff658: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ff658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ff65c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ff65cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff660: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ff660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ff664: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1ff664u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1ff668: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1ff668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1ff66c: 0xc07fbea  jal         func_1FEFA8
    ctx->pc = 0x1FF66Cu;
    SET_GPR_U32(ctx, 31, 0x1FF674u);
    ctx->pc = 0x1FF670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF66Cu;
    // 0x1ff670: 0x24500080  addiu       $s0, $v0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEFA8u, 0x1FF66Cu, 0x1FF674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF674u;
label_1ff674:
    // 0x1ff674: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FF674u;
    {
        const bool branch_taken_0x1ff674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff674) {
            ctx->pc = 0x1FF678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF674u;
            // 0x1ff678: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF68Cu;
            goto label_1ff68c;
        }
    }
    ctx->pc = 0x1FF67Cu;
    // 0x1ff67c: 0x86030008  lh          $v1, 0x8($s0)
    ctx->pc = 0x1ff67cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1ff680: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ff680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ff684: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1ff684u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1ff688: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ff688u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ff68c:
    // 0x1ff68c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ff68cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ff690: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ff690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ff694: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF694u;
        // 0x1ff698: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF69Cu;
    // 0x1ff69c: 0x0  nop
    ctx->pc = 0x1ff69cu;
    // NOP
    // 0x1ff6a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ff6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ff6a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ff6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ff6a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ff6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ff6ac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ff6acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff6b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ff6b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ff6b4: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1ff6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1ff6b8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1ff6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1ff6bc: 0xc07fbea  jal         func_1FEFA8
    ctx->pc = 0x1FF6BCu;
    SET_GPR_U32(ctx, 31, 0x1FF6C4u);
    ctx->pc = 0x1FF6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF6BCu;
    // 0x1ff6c0: 0x24500080  addiu       $s0, $v0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEFA8u, 0x1FF6BCu, 0x1FF6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF6C4u;
label_1ff6c4:
    // 0x1ff6c4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FF6C4u;
    {
        const bool branch_taken_0x1ff6c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff6c4) {
            ctx->pc = 0x1FF6C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF6C4u;
            // 0x1ff6c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF6DCu;
            goto label_1ff6dc;
        }
    }
    ctx->pc = 0x1FF6CCu;
    // 0x1ff6cc: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1ff6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1ff6d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ff6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ff6d4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1ff6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1ff6d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ff6d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ff6dc:
    // 0x1ff6dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ff6dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ff6e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ff6e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ff6e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF6E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF6E4u;
        // 0x1ff6e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF6E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF6ECu;
    // 0x1ff6ec: 0x0  nop
    ctx->pc = 0x1ff6ecu;
    // NOP
    if (ctx->pc == 0x1ff6ecu) { ctx->pc = 0x1ff6f0u; }
}
