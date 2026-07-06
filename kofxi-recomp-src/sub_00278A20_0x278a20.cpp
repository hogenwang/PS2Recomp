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

// Function: sub_00278A20
// Address: 0x278a20 - 0x278be8
void sub_00278A20_0x278a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00278A20_0x278a20");
#endif

    switch (ctx->pc) {
        case 0x278a54u: goto label_278a54;
        case 0x278aa0u: goto label_278aa0;
        case 0x278ae0u: goto label_278ae0;
        case 0x278ae4u: goto label_278ae4;
        case 0x278b00u: goto label_278b00;
        case 0x278b44u: goto label_278b44;
        case 0x278b78u: goto label_278b78;
        case 0x278b88u: goto label_278b88;
        case 0x278b98u: goto label_278b98;
        case 0x278bb0u: goto label_278bb0;
        default: break;
    }

    ctx->pc = 0x278a20u;

    // 0x278a20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x278a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x278a24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x278a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x278a28: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x278a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x278a2c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x278a2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278a30: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x278a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x278a34: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x278a34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278a38: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x278a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x278a3c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x278a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x278a40: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x278a40u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278a44: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x278a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x278a48: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x278a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x278a4c: 0xc09d36c  jal         func_274DB0
    ctx->pc = 0x278A4Cu;
    SET_GPR_U32(ctx, 31, 0x278A54u);
    ctx->pc = 0x278A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278A4Cu;
    // 0x278a50: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274DB0u, 0x278A4Cu, 0x278A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278A54u;
label_278a54:
    // 0x278a54: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x278a54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x278a58: 0x2828021  addu        $s0, $s4, $v0
    ctx->pc = 0x278a58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x278a5c: 0x24732d78  addiu       $s3, $v1, 0x2D78
    ctx->pc = 0x278a5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 11640));
    // 0x278a60: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x278a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x278a64: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x278a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x278a68: 0x90420699  lbu         $v0, 0x699($v0)
    ctx->pc = 0x278a68u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1689)));
    // 0x278a6c: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x278A6Cu;
    {
        const bool branch_taken_0x278a6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x278A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278A6Cu;
        // 0x278a70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278a6c) {
            ctx->pc = 0x278B80u;
            goto label_278b80;
        }
    }
    ctx->pc = 0x278A74u;
    // 0x278a74: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x278a74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x278a78: 0x24638ac0  addiu       $v1, $v1, -0x7540
    ctx->pc = 0x278a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937280));
    // 0x278a7c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x278a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x278a80: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x278A80u;
    {
        const bool branch_taken_0x278a80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x278a80) {
            ctx->pc = 0x278AA0u;
            goto label_278aa0;
        }
    }
    ctx->pc = 0x278A88u;
    // 0x278a88: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x278a88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x278a8c: 0x24848ad4  addiu       $a0, $a0, -0x752C
    ctx->pc = 0x278a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937300));
    // 0x278a90: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x278a90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x278a94: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x278a94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x278a98: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x278A98u;
    SET_GPR_U32(ctx, 31, 0x278AA0u);
    ctx->pc = 0x278A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278A98u;
    // 0x278a9c: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E050u, 0x278A98u, 0x278AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278AA0u;
label_278aa0:
    // 0x278aa0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x278AA0u;
    {
        const bool branch_taken_0x278aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x278aa0) {
            ctx->pc = 0x278AD4u;
            goto label_278ad4;
        }
    }
    ctx->pc = 0x278AA8u;
    // 0x278aa8: 0xfd0c7002  sd          $t4, 0x7002($t0)
    ctx->pc = 0x278aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 28674), GPR_U64(ctx, 12));
    // 0x278aac: 0xfedf9b5a  sd          $ra, -0x64A6($s6)
    ctx->pc = 0x278aacu;
    WRITE64(ADD32(GPR_U32(ctx, 22), 4294941530), GPR_U64(ctx, 31));
    // 0x278ab0: 0x8c9a966d  lw          $k0, -0x6993($a0)
    ctx->pc = 0x278ab0u;
    SET_GPR_S32(ctx, 26, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294940269)));
    // 0x278ab4: 0x855345ab  lh          $s3, 0x45AB($t2)
    ctx->pc = 0x278ab4u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 17835)));
    // 0x278ab8: 0xa3134551  sb          $s3, 0x4551($t8)
    ctx->pc = 0x278ab8u;
    WRITE8(ADD32(GPR_U32(ctx, 24), 17745), (uint8_t)GPR_U32(ctx, 19));
    // 0x278abc: 0xfe5eb3d2  sd          $fp, -0x4C2E($s2)
    ctx->pc = 0x278abcu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 4294947794), GPR_U64(ctx, 30));
    // 0x278ac0: 0x0  nop
    ctx->pc = 0x278ac0u;
    // NOP
    // 0x278ac4: 0xd76aabd2  ldc1        $f10, -0x542E($k1)
    ctx->pc = 0x278ac4u;
    throw std::runtime_error("Unhandled opcode: 0x35 at 0x278AC4 raw=0xD76AABD2");
    // 0x278ac8: 0x0  nop
    ctx->pc = 0x278ac8u;
    // NOP
    // 0x278acc: 0xd76aab86  ldc1        $f10, -0x547A($k1)
    ctx->pc = 0x278accu;
    throw std::runtime_error("Unhandled opcode: 0x35 at 0x278ACC raw=0xD76AAB86");
    // 0x278ad0: 0x0  nop
    ctx->pc = 0x278ad0u;
    // NOP
label_278ad4:
    // 0x278ad4: 0x3fe2c13f  .word       0x3FE2C13F                   # lui         $v0, 0xC13F # 03E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x278ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49471 << 16));
    // 0x278ad8: 0xe62d13f  jal         func_98B44FC
    ctx->pc = 0x278AD8u;
    SET_GPR_U32(ctx, 31, 0x278AE0u);
    ctx->pc = 0x278ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278AD8u;
    // 0x278adc: 0xda5d0bd  jal         func_69742F4 (Delay Slot)
    // JAL 0x69742F4 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x98B44FCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x98B44FCu, 0x278AD8u, 0x278AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278AE0u;
label_278ae0:
    // 0x278ae0: 0x84a4d156  lh          $a0, -0x2EAA($a1)
    ctx->pc = 0x278ae0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4294955350)));
label_278ae4:
    // 0x278ae4: 0xeca4c13f  .word       0xECA4C13F                   # INVALID     $a1, $a0, -0x3EC1 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x278ae4u;
    throw std::runtime_error("Unhandled opcode: 0x3B at 0x278AE4 raw=0xECA4C13F");
    // 0x278ae8: 0x7fe2cecc  sq          $v0, -0x3134($ra)
    ctx->pc = 0x278ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 31), 4294954700), GPR_VEC(ctx, 2));
    // 0x278aec: 0x2f24c13f  sltiu       $a0, $t9, -0x3EC1
    ctx->pc = 0x278aecu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 25) < (uint64_t)(int64_t)(int32_t)4294951231) ? 1 : 0);
    // 0x278af0: 0x6ca6e13f  ldr         $a2, -0x1EC1($a1)
    ctx->pc = 0x278af0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 4294959423); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x278af4: 0x2fe2c13f  sltiu       $v0, $ra, -0x3EC1
    ctx->pc = 0x278af4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 31) < (uint64_t)(int64_t)(int32_t)4294951231) ? 1 : 0);
    // 0x278af8: 0xfe2c13f  jal         func_F8B04FC
    ctx->pc = 0x278AF8u;
    SET_GPR_U32(ctx, 31, 0x278B00u);
    ctx->pc = 0x278AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278AF8u;
    // 0x278afc: 0x8ca4c13f  lw          $a0, -0x3EC1($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294951231)));
    ctx->in_delay_slot = false;
    ctx->pc = 0xF8B04FCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xF8B04FCu, 0x278AF8u, 0x278B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278B00u;
label_278b00:
    // 0x278b00: 0x6fe2cecc  ldr         $v0, -0x3134($ra)
    ctx->pc = 0x278b00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 31), 4294954700); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x278b04: 0x9ca2e13f  lwu         $v0, -0x1EC1($a1)
    ctx->pc = 0x278b04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4294959423)));
    // 0x278b08: 0x1da2e13f  .word       0x1DA2E13F                   # bgtz        $t5, . + 4 + (-0x1EC1 << 2) # 00020000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x278B08u;
    {
        const bool branch_taken_0x278b08 = (GPR_S32(ctx, 13) > 0);
        ctx->pc = 0x278B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278B08u;
        // 0x278b0c: 0x1da2e13f  .word       0x1DA2E13F                   # bgtz        $t5, . + 4 + (-0x1EC1 << 2) # 00020000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x278B0C - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x278b08) {
            ctx->pc = 0x271008u;
            return;
        }
    }
    ctx->pc = 0x278B10u;
    // 0x278b10: 0x5ca4c13f  .word       0x5CA4C13F                   # bgtzl       $a1, . + 4 + (-0x3EC1 << 2) # 00040000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x278B10u;
    {
        const bool branch_taken_0x278b10 = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x278b10) {
            ctx->pc = 0x278B14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278B10u;
            // 0x278b14: 0x4fe2cecc  .word       0x4FE2CECC                   # INVALID     $ra, $v0, -0x3134 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x13 at 0x278B14 raw=0x4FE2CECC");
            ctx->in_delay_slot = false;
            ctx->pc = 0x269010u;
            return;
        }
    }
    ctx->pc = 0x278B18u;
    // 0x278b18: 0x5fe2c13f  .word       0x5FE2C13F                   # bgtzl       $ra, . + 4 + (-0x3EC1 << 2) # 00020000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x278B18u;
    {
        const bool branch_taken_0x278b18 = (GPR_S32(ctx, 31) > 0);
        if (branch_taken_0x278b18) {
            ctx->pc = 0x278B1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278B18u;
            // 0x278b1c: 0x3ce4c13f  .word       0x3CE4C13F                   # lui         $a0, 0xC13F # 00E00000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49471 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x269018u;
            return;
        }
    }
    ctx->pc = 0x278B20u;
    // 0x278b20: 0x5fe2cecc  .word       0x5FE2CECC                   # bgtzl       $ra, . + 4 + (-0x3134 << 2) # 00020000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x278B20u;
    {
        const bool branch_taken_0x278b20 = (GPR_S32(ctx, 31) > 0);
        if (branch_taken_0x278b20) {
            ctx->pc = 0x278B24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278B20u;
            // 0x278b24: 0x1746c13f  bne         $k0, $a2, . + 4 + (-0x3EC1 << 2) (Delay Slot)
            // Likely branch instruction at 0x278B24 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x26C654u;
            return;
        }
    }
    ctx->pc = 0x278B28u;
    // 0x278b28: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x278B28u;
    {
        const bool branch_taken_0x278b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x278b28) {
            ctx->pc = 0x278B58u;
            goto label_278b58;
        }
    }
    ctx->pc = 0x278B30u;
    // 0x278b30: 0x250d26f8  addiu       $t5, $t0, 0x26F8
    ctx->pc = 0x278b30u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 8), 9976));
    // 0x278b34: 0x86ef0f63  lh          $t7, 0xF63($s7)
    ctx->pc = 0x278b34u;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 3939)));
    // 0x278b38: 0xa3026571  sb          $v0, 0x6571($t8)
    ctx->pc = 0x278b38u;
    WRITE8(ADD32(GPR_U32(ctx, 24), 25969), (uint8_t)GPR_U32(ctx, 2));
    // 0x278b3c: 0xccb0097  jal         func_32C025C
    ctx->pc = 0x278B3Cu;
    SET_GPR_U32(ctx, 31, 0x278B44u);
    ctx->pc = 0x278B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278B3Cu;
    // 0x278b40: 0x8cee59cd  lw          $t6, 0x59CD($a3) (Delay Slot)
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 22989)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C025Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C025Cu, 0x278B3Cu, 0x278B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278B44u;
label_278b44:
    // 0x278b44: 0x25557998  addiu       $s5, $t2, 0x7998
    ctx->pc = 0x278b44u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 10), 31128));
    // 0x278b48: 0xd762dbaa  ldc1        $f2, -0x2456($k1)
    ctx->pc = 0x278b48u;
    throw std::runtime_error("Unhandled opcode: 0x35 at 0x278B48 raw=0xD762DBAA");
    // 0x278b4c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278b4cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x278B4C raw=0x00000001");
    // 0x278b50: 0xd762dbfe  ldc1        $f2, -0x2402($k1)
    ctx->pc = 0x278b50u;
    throw std::runtime_error("Unhandled opcode: 0x35 at 0x278B50 raw=0xD762DBFE");
    // 0x278b54: 0x0  nop
    ctx->pc = 0x278b54u;
    // NOP
label_278b58:
    // 0x278b58: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x278b58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x278b5c: 0x24428b48  addiu       $v0, $v0, -0x74B8
    ctx->pc = 0x278b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937416));
    // 0x278b60: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x278b60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x278b64: 0x24848b28  addiu       $a0, $a0, -0x74D8
    ctx->pc = 0x278b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937384));
    // 0x278b68: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x278b68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x278b6c: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x278b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x278b70: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x278B70u;
    SET_GPR_U32(ctx, 31, 0x278B78u);
    ctx->pc = 0x278B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278B70u;
    // 0x278b74: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E050u, 0x278B70u, 0x278B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278B78u;
label_278b78:
    // 0x278b78: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x278B78u;
    {
        const bool branch_taken_0x278b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278B78u;
        // 0x278b7c: 0x2141023  subu        $v0, $s0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278b78) {
            ctx->pc = 0x278BB8u;
            goto label_278bb8;
        }
    }
    ctx->pc = 0x278B80u;
label_278b80:
    // 0x278b80: 0xc09d460  jal         func_275180
    ctx->pc = 0x278B80u;
    SET_GPR_U32(ctx, 31, 0x278B88u);
    ctx->pc = 0x278B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278B80u;
    // 0x278b84: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275180u, 0x278B80u, 0x278B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278B88u;
label_278b88:
    // 0x278b88: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x278b88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278b8c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x278b8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x278b90: 0xc09d4a2  jal         func_275288
    ctx->pc = 0x278B90u;
    SET_GPR_U32(ctx, 31, 0x278B98u);
    ctx->pc = 0x278B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278B90u;
    // 0x278b94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275288u, 0x278B90u, 0x278B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278B98u;
label_278b98:
    // 0x278b98: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x278b98u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278b9c: 0x4600009  bltz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x278B9Cu;
    {
        const bool branch_taken_0x278b9c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x278BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278B9Cu;
        // 0x278ba0: 0x2038021  addu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278b9c) {
            ctx->pc = 0x278BC4u;
            goto label_278bc4;
        }
    }
    ctx->pc = 0x278BA4u;
    // 0x278ba4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x278ba4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278ba8: 0xc09d4fc  jal         func_2753F0
    ctx->pc = 0x278BA8u;
    SET_GPR_U32(ctx, 31, 0x278BB0u);
    ctx->pc = 0x278BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278BA8u;
    // 0x278bac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2753F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2753F0u, 0x278BA8u, 0x278BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278BB0u;
label_278bb0:
    // 0x278bb0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x278bb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x278bb4: 0x2141023  subu        $v0, $s0, $s4
    ctx->pc = 0x278bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
label_278bb8:
    // 0x278bb8: 0x2404ff96  addiu       $a0, $zero, -0x6A
    ctx->pc = 0x278bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967190));
    // 0x278bbc: 0x2a21826  xor         $v1, $s5, $v0
    ctx->pc = 0x278bbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) ^ GPR_U64(ctx, 2));
    // 0x278bc0: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x278bc0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_278bc4:
    // 0x278bc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x278bc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x278bc8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x278bc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x278bcc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x278bccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278bd0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x278bd0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x278bd4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x278bd4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x278bd8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x278bd8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x278bdc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x278bdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x278be0: 0x3e00008  jr          $ra
    ctx->pc = 0x278BE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x278BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278BE0u;
        // 0x278be4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278BE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x278BE8u;
}
