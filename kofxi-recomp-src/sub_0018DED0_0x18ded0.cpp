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

// Function: sub_0018DED0
// Address: 0x18ded0 - 0x18e020
void sub_0018DED0_0x18ded0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018DED0_0x18ded0");
#endif

    switch (ctx->pc) {
        case 0x18def4u: goto label_18def4;
        default: break;
    }

    ctx->pc = 0x18ded0u;

    // 0x18ded0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18ded0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18ded4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18ded4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18ded8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18ded8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18dedc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18dedcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18dee0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x18dee0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dee4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18dee4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dee8: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x18dee8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x18deec: 0xc06378c  jal         func_18DE30
    ctx->pc = 0x18DEECu;
    SET_GPR_U32(ctx, 31, 0x18DEF4u);
    ctx->pc = 0x18DEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DEECu;
    // 0x18def0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DE30u, 0x18DEECu, 0x18DEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DEF4u;
label_18def4:
    // 0x18def4: 0x50400042  beql        $v0, $zero, . + 4 + (0x42 << 2)
    ctx->pc = 0x18DEF4u;
    {
        const bool branch_taken_0x18def4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18def4) {
            ctx->pc = 0x18DEF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18DEF4u;
            // 0x18def8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E000u;
            goto label_18e000;
        }
    }
    ctx->pc = 0x18DEFCu;
    // 0x18defc: 0x322400ff  andi        $a0, $s1, 0xFF
    ctx->pc = 0x18defcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x18df00: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x18df00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x18df04: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x18df04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x18df08: 0x90639780  lbu         $v1, -0x6880($v1)
    ctx->pc = 0x18df08u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940544)));
    // 0x18df0c: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x18df0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18df10: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x18df10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x18df14: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x18DF14u;
    {
        const bool branch_taken_0x18df14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x18DF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DF14u;
        // 0x18df18: 0x94850000  lhu         $a1, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18df14) {
            ctx->pc = 0x18DF70u;
            goto label_18df70;
        }
    }
    ctx->pc = 0x18DF1Cu;
    // 0x18df1c: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x18df1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x18df20: 0x9044b240  lbu         $a0, -0x4DC0($v0)
    ctx->pc = 0x18df20u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947392)));
    // 0x18df24: 0x54800007  bnel        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x18DF24u;
    {
        const bool branch_taken_0x18df24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x18df24) {
            ctx->pc = 0x18DF28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18DF24u;
            // 0x18df28: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18DF44u;
            goto label_18df44;
        }
    }
    ctx->pc = 0x18DF2Cu;
    // 0x18df2c: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x18df2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x18df30: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x18df30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x18df34: 0x9042b241  lbu         $v0, -0x4DBF($v0)
    ctx->pc = 0x18df34u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947393)));
    // 0x18df38: 0x50430005  beql        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x18DF38u;
    {
        const bool branch_taken_0x18df38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x18df38) {
            ctx->pc = 0x18DF3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18DF38u;
            // 0x18df3c: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x18DF50u;
            goto label_18df50;
        }
    }
    ctx->pc = 0x18DF40u;
    // 0x18df40: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18df40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18df44:
    // 0x18df44: 0x54820005  bnel        $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18DF44u;
    {
        const bool branch_taken_0x18df44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x18df44) {
            ctx->pc = 0x18DF48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18DF44u;
            // 0x18df48: 0x30a2ffff  andi        $v0, $a1, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x18DF5Cu;
            goto label_18df5c;
        }
    }
    ctx->pc = 0x18DF4Cu;
    // 0x18df4c: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x18df4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_18df50:
    // 0x18df50: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x18df50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18df54: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x18DF54u;
    {
        const bool branch_taken_0x18df54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DF54u;
        // 0x18df58: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18df54) {
            ctx->pc = 0x18E000u;
            goto label_18e000;
        }
    }
    ctx->pc = 0x18DF5Cu;
label_18df5c:
    // 0x18df5c: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x18df5cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x18df60: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18df60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18df64: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x18df64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18df68: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x18DF68u;
    {
        const bool branch_taken_0x18df68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DF68u;
        // 0x18df6c: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18df68) {
            ctx->pc = 0x18E000u;
            goto label_18e000;
        }
    }
    ctx->pc = 0x18DF70u;
label_18df70:
    // 0x18df70: 0x32020100  andi        $v0, $s0, 0x100
    ctx->pc = 0x18df70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)256);
    // 0x18df74: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x18DF74u;
    {
        const bool branch_taken_0x18df74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18df74) {
            ctx->pc = 0x18DF78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18DF74u;
            // 0x18df78: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18DF94u;
            goto label_18df94;
        }
    }
    ctx->pc = 0x18DF7Cu;
    // 0x18df7c: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x18df7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x18df80: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x18df80u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x18df84: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18df84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18df88: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x18df88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18df8c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x18DF8Cu;
    {
        const bool branch_taken_0x18df8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DF8Cu;
        // 0x18df90: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18df8c) {
            ctx->pc = 0x18E000u;
            goto label_18e000;
        }
    }
    ctx->pc = 0x18DF94u;
label_18df94:
    // 0x18df94: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18DF94u;
    {
        const bool branch_taken_0x18df94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18df94) {
            ctx->pc = 0x18DFACu;
            goto label_18dfac;
        }
    }
    ctx->pc = 0x18DF9Cu;
    // 0x18df9c: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x18df9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x18dfa0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x18dfa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18dfa4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x18DFA4u;
    {
        const bool branch_taken_0x18dfa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DFA4u;
        // 0x18dfa8: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dfa4) {
            ctx->pc = 0x18E000u;
            goto label_18e000;
        }
    }
    ctx->pc = 0x18DFACu;
label_18dfac:
    // 0x18dfac: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x18dfacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x18dfb0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18dfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18dfb4: 0x9044f35a  lbu         $a0, -0xCA6($v0)
    ctx->pc = 0x18dfb4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964058)));
    // 0x18dfb8: 0x54830007  bnel        $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x18DFB8u;
    {
        const bool branch_taken_0x18dfb8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x18dfb8) {
            ctx->pc = 0x18DFBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18DFB8u;
            // 0x18dfbc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18DFD8u;
            goto label_18dfd8;
        }
    }
    ctx->pc = 0x18DFC0u;
    // 0x18dfc0: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x18dfc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x18dfc4: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x18dfc4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x18dfc8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18dfc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18dfcc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x18dfccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18dfd0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x18DFD0u;
    {
        const bool branch_taken_0x18dfd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DFD0u;
        // 0x18dfd4: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dfd0) {
            ctx->pc = 0x18E000u;
            goto label_18e000;
        }
    }
    ctx->pc = 0x18DFD8u;
label_18dfd8:
    // 0x18dfd8: 0x54820007  bnel        $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18DFD8u;
    {
        const bool branch_taken_0x18dfd8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x18dfd8) {
            ctx->pc = 0x18DFDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18DFD8u;
            // 0x18dfdc: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x18DFF8u;
            goto label_18dff8;
        }
    }
    ctx->pc = 0x18DFE0u;
    // 0x18dfe0: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x18dfe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x18dfe4: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x18dfe4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x18dfe8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18dfe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18dfec: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x18dfecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18dff0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18DFF0u;
    {
        const bool branch_taken_0x18dff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DFF0u;
        // 0x18dff4: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dff0) {
            ctx->pc = 0x18E000u;
            goto label_18e000;
        }
    }
    ctx->pc = 0x18DFF8u;
label_18dff8:
    // 0x18dff8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x18dff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18dffc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x18dffcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_18e000:
    // 0x18e000: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18e000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18e004: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18e004u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e008: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18e008u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e00c: 0x3e00008  jr          $ra
    ctx->pc = 0x18E00Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E00Cu;
        // 0x18e010: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E00Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18E014u;
    // 0x18e014: 0x0  nop
    ctx->pc = 0x18e014u;
    // NOP
    // 0x18e018: 0x0  nop
    ctx->pc = 0x18e018u;
    // NOP
    // 0x18e01c: 0x0  nop
    ctx->pc = 0x18e01cu;
    // NOP
    if (ctx->pc == 0x18e01cu) { ctx->pc = 0x18e020u; }
}
