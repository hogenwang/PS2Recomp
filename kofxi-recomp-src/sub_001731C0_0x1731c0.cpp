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

// Function: sub_001731C0
// Address: 0x1731c0 - 0x173260
void sub_001731C0_0x1731c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001731C0_0x1731c0");
#endif

    ctx->pc = 0x1731c0u;

    // 0x1731c0: 0x41940  sll         $v1, $a0, 5
    ctx->pc = 0x1731c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x1731c4: 0x642823  subu        $a1, $v1, $a0
    ctx->pc = 0x1731c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1731c8: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1731c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1731cc: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x1731ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x1731d0: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1731d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1731d4: 0x246348c0  addiu       $v1, $v1, 0x48C0
    ctx->pc = 0x1731d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18624));
    // 0x1731d8: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x1731d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1731dc: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1731dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1731e0: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x1731e0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1731e4: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x1731e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x1731e8: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1731E8u;
    {
        const bool branch_taken_0x1731e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1731e8) {
            ctx->pc = 0x1731ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1731E8u;
            // 0x1731ec: 0x94830004  lhu         $v1, 0x4($a0) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1731F8u;
            goto label_1731f8;
        }
    }
    ctx->pc = 0x1731F0u;
    // 0x1731f0: 0xa480000e  sh          $zero, 0xE($a0)
    ctx->pc = 0x1731f0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x1731f4: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x1731f4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_1731f8:
    // 0x1731f8: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x1731f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x1731fc: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1731FCu;
    {
        const bool branch_taken_0x1731fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1731fc) {
            ctx->pc = 0x173200u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1731FCu;
            // 0x173200: 0x94830004  lhu         $v1, 0x4($a0) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17320Cu;
            goto label_17320c;
        }
    }
    ctx->pc = 0x173204u;
    // 0x173204: 0xa4800010  sh          $zero, 0x10($a0)
    ctx->pc = 0x173204u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x173208: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x173208u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_17320c:
    // 0x17320c: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x17320cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x173210: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x173210u;
    {
        const bool branch_taken_0x173210 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x173210) {
            ctx->pc = 0x173214u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x173210u;
            // 0x173214: 0x94830004  lhu         $v1, 0x4($a0) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x173220u;
            goto label_173220;
        }
    }
    ctx->pc = 0x173218u;
    // 0x173218: 0xa4800012  sh          $zero, 0x12($a0)
    ctx->pc = 0x173218u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 18), (uint16_t)GPR_U32(ctx, 0));
    // 0x17321c: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x17321cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_173220:
    // 0x173220: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x173220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x173224: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x173224u;
    {
        const bool branch_taken_0x173224 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x173224) {
            ctx->pc = 0x173228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x173224u;
            // 0x173228: 0x94830004  lhu         $v1, 0x4($a0) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x173234u;
            goto label_173234;
        }
    }
    ctx->pc = 0x17322Cu;
    // 0x17322c: 0xa4800014  sh          $zero, 0x14($a0)
    ctx->pc = 0x17322cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x173230: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x173230u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_173234:
    // 0x173234: 0x30631000  andi        $v1, $v1, 0x1000
    ctx->pc = 0x173234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x173238: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x173238u;
    {
        const bool branch_taken_0x173238 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x173238) {
            ctx->pc = 0x17323Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x173238u;
            // 0x17323c: 0x94830004  lhu         $v1, 0x4($a0) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x173248u;
            goto label_173248;
        }
    }
    ctx->pc = 0x173240u;
    // 0x173240: 0xa4800016  sh          $zero, 0x16($a0)
    ctx->pc = 0x173240u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 22), (uint16_t)GPR_U32(ctx, 0));
    // 0x173244: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x173244u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_173248:
    // 0x173248: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x173248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x17324c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x17324Cu;
    {
        const bool branch_taken_0x17324c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17324c) {
            ctx->pc = 0x173258u;
            goto label_173258;
        }
    }
    ctx->pc = 0x173254u;
    // 0x173254: 0xa4800018  sh          $zero, 0x18($a0)
    ctx->pc = 0x173254u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 24), (uint16_t)GPR_U32(ctx, 0));
label_173258:
    // 0x173258: 0x3e00008  jr          $ra
    ctx->pc = 0x173258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x173260u;
}
