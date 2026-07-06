#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00286728
// Address: 0x286728 - 0x286808
void sub_00286728_0x286728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00286728_0x286728");
#endif

    switch (ctx->pc) {
        case 0x286788u: goto label_286788;
        case 0x2867ecu: goto label_2867ec;
        default: break;
    }

    ctx->pc = 0x286728u;

    // 0x286728: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x286728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28672c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x28672cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x286730: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x286730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x286734: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x286734u;
    {
        const bool branch_taken_0x286734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x286734) {
            ctx->pc = 0x286784u;
            goto label_286784;
        }
    }
    ctx->pc = 0x28673Cu;
    // 0x28673c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x28673cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x286740: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x286740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x286744: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x286744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x286748: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x286748u;
    {
        const bool branch_taken_0x286748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28674Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286748u;
            // 0x28674c: 0x24030038  addiu       $v1, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286748) {
            ctx->pc = 0x286768u;
            goto label_286768;
        }
    }
    ctx->pc = 0x286750u;
    // 0x286750: 0x3402ff00  ori         $v0, $zero, 0xFF00
    ctx->pc = 0x286750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x286754: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x286754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x286758: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x286758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x28675c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x28675cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x286760: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x286760u;
    {
        const bool branch_taken_0x286760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286760u;
            // 0x286764: 0x62280b  movn        $a1, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286760) {
            ctx->pc = 0x2867BCu;
            goto label_2867bc;
        }
    }
    ctx->pc = 0x286768u;
label_286768:
    // 0x286768: 0x3402ff00  ori         $v0, $zero, 0xFF00
    ctx->pc = 0x286768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x28676c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x28676cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x286770: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x286770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x286774: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x286774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x286778: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x286778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x28677c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x28677Cu;
    {
        const bool branch_taken_0x28677c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28677Cu;
            // 0x286780: 0x62280b  movn        $a1, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28677c) {
            ctx->pc = 0x2867BCu;
            goto label_2867bc;
        }
    }
    ctx->pc = 0x286784u;
label_286784:
    // 0x286784: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x286784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_286788:
    // 0x286788: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x286788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x28678c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x28678cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x286790: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x286790u;
    {
        const bool branch_taken_0x286790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286790u;
            // 0x286794: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286790) {
            ctx->pc = 0x2867B0u;
            goto label_2867b0;
        }
    }
    ctx->pc = 0x286798u;
    // 0x286798: 0x3402ff00  ori         $v0, $zero, 0xFF00
    ctx->pc = 0x286798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x28679c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x28679cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2867a0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2867a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2867a4: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x2867a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2867a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2867A8u;
    {
        const bool branch_taken_0x2867a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2867ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2867A8u;
            // 0x2867ac: 0x62280b  movn        $a1, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2867a8) {
            ctx->pc = 0x2867BCu;
            goto label_2867bc;
        }
    }
    ctx->pc = 0x2867B0u;
label_2867b0:
    // 0x2867b0: 0x3082ff00  andi        $v0, $a0, 0xFF00
    ctx->pc = 0x2867b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65280);
    // 0x2867b4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2867b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2867b8: 0x2280a  movz        $a1, $zero, $v0
    ctx->pc = 0x2867b8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_2867bc:
    // 0x2867bc: 0xa42016  dsrlv       $a0, $a0, $a1
    ctx->pc = 0x2867bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (GPR_U32(ctx, 5) & 0x3F));
    // 0x2867c0: 0x308200f0  andi        $v0, $a0, 0xF0
    ctx->pc = 0x2867c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)240);
    // 0x2867c4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2867C4u;
    {
        const bool branch_taken_0x2867c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2867C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2867C4u;
            // 0x2867c8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2867c4) {
            ctx->pc = 0x2867ECu;
            goto label_2867ec;
        }
    }
    ctx->pc = 0x2867CCu;
    // 0x2867cc: 0x41f38  dsll        $v1, $a0, 28
    ctx->pc = 0x2867ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 28);
    // 0x2867d0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2867d0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2867d4: 0x2442a728  addiu       $v0, $v0, -0x58D8
    ctx->pc = 0x2867d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944552));
    // 0x2867d8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2867d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2867dc: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x2867dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2867e0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2867e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2867e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2867E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2867E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2867E4u;
            // 0x2867e8: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2867ECu;
label_2867ec:
    // 0x2867ec: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x2867ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2867f0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2867f0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2867f4: 0x2442a728  addiu       $v0, $v0, -0x58D8
    ctx->pc = 0x2867f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944552));
    // 0x2867f8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2867f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2867fc: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x2867fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x286800: 0x3e00008  jr          $ra
    ctx->pc = 0x286800u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286800u;
            // 0x286804: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x286808u;
    ctx->pc = 0x286808u;
}
