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

// Function: sub_00206190
// Address: 0x206190 - 0x2062c0
void sub_00206190_0x206190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206190_0x206190");
#endif

    switch (ctx->pc) {
        case 0x2061a0u: goto label_2061a0;
        default: break;
    }

    ctx->pc = 0x206190u;

    // 0x206190: 0x24890002  addiu       $t1, $a0, 0x2
    ctx->pc = 0x206190u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x206194: 0x24a40002  addiu       $a0, $a1, 0x2
    ctx->pc = 0x206194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x206198: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x206198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20619c: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x20619cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_2061a0:
    // 0x2061a0: 0x952e0000  lhu         $t6, 0x0($t1)
    ctx->pc = 0x2061a0u;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2061a4: 0x31cb7c00  andi        $t3, $t6, 0x7C00
    ctx->pc = 0x2061a4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)31744);
    // 0x2061a8: 0x31ca03e0  andi        $t2, $t6, 0x3E0
    ctx->pc = 0x2061a8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)992);
    // 0x2061ac: 0xb5a83  sra         $t3, $t3, 10
    ctx->pc = 0x2061acu;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 10));
    // 0x2061b0: 0xa5143  sra         $t2, $t2, 5
    ctx->pc = 0x2061b0u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 5));
    // 0x2061b4: 0xb6e3c  dsll32      $t5, $t3, 24
    ctx->pc = 0x2061b4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 11) << (32 + 24));
    // 0x2061b8: 0xa663c  dsll32      $t4, $t2, 24
    ctx->pc = 0x2061b8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 10) << (32 + 24));
    // 0x2061bc: 0xd6e3f  dsra32      $t5, $t5, 24
    ctx->pc = 0x2061bcu;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 13) >> (32 + 24));
    // 0x2061c0: 0x31cb001f  andi        $t3, $t6, 0x1F
    ctx->pc = 0x2061c0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)31);
    // 0x2061c4: 0x1a65021  addu        $t2, $t5, $a2
    ctx->pc = 0x2061c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 6)));
    // 0x2061c8: 0xc663f  dsra32      $t4, $t4, 24
    ctx->pc = 0x2061c8u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 24));
    // 0x2061cc: 0xb6e3c  dsll32      $t5, $t3, 24
    ctx->pc = 0x2061ccu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 11) << (32 + 24));
    // 0x2061d0: 0x5410003  bgez        $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2061D0u;
    {
        const bool branch_taken_0x2061d0 = (GPR_S32(ctx, 10) >= 0);
        ctx->pc = 0x2061D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2061D0u;
        // 0x2061d4: 0xd6e3f  dsra32      $t5, $t5, 24 (Delay Slot)
        SET_GPR_S64(ctx, 13, GPR_S64(ctx, 13) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2061d0) {
            ctx->pc = 0x2061E0u;
            goto label_2061e0;
        }
    }
    ctx->pc = 0x2061D8u;
    // 0x2061d8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2061D8u;
    {
        const bool branch_taken_0x2061d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2061DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2061D8u;
        // 0x2061dc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2061d8) {
            ctx->pc = 0x2061F4u;
            goto label_2061f4;
        }
    }
    ctx->pc = 0x2061E0u;
label_2061e0:
    // 0x2061e0: 0x29410020  slti        $at, $t2, 0x20
    ctx->pc = 0x2061e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x2061e4: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2061E4u;
    {
        const bool branch_taken_0x2061e4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2061e4) {
            ctx->pc = 0x2061F4u;
            goto label_2061f4;
        }
    }
    ctx->pc = 0x2061ECu;
    // 0x2061ec: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2061ECu;
    {
        const bool branch_taken_0x2061ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2061F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2061ECu;
        // 0x2061f0: 0x60502d  daddu       $t2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2061ec) {
            ctx->pc = 0x2061F4u;
            goto label_2061f4;
        }
    }
    ctx->pc = 0x2061F4u;
label_2061f4:
    // 0x2061f4: 0xa5e3c  dsll32      $t3, $t2, 24
    ctx->pc = 0x2061f4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 10) << (32 + 24));
    // 0x2061f8: 0xc563c  dsll32      $t2, $t4, 24
    ctx->pc = 0x2061f8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 12) << (32 + 24));
    // 0x2061fc: 0xa563f  dsra32      $t2, $t2, 24
    ctx->pc = 0x2061fcu;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 24));
    // 0x206200: 0x1475021  addu        $t2, $t2, $a3
    ctx->pc = 0x206200u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x206204: 0x5410003  bgez        $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x206204u;
    {
        const bool branch_taken_0x206204 = (GPR_S32(ctx, 10) >= 0);
        ctx->pc = 0x206208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206204u;
        // 0x206208: 0xb5e3f  dsra32      $t3, $t3, 24 (Delay Slot)
        SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206204) {
            ctx->pc = 0x206214u;
            goto label_206214;
        }
    }
    ctx->pc = 0x20620Cu;
    // 0x20620c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x20620Cu;
    {
        const bool branch_taken_0x20620c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20620Cu;
        // 0x206210: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20620c) {
            ctx->pc = 0x206228u;
            goto label_206228;
        }
    }
    ctx->pc = 0x206214u;
label_206214:
    // 0x206214: 0x29410020  slti        $at, $t2, 0x20
    ctx->pc = 0x206214u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x206218: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x206218u;
    {
        const bool branch_taken_0x206218 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x206218) {
            ctx->pc = 0x206228u;
            goto label_206228;
        }
    }
    ctx->pc = 0x206220u;
    // 0x206220: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x206220u;
    {
        const bool branch_taken_0x206220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206220u;
        // 0x206224: 0x60502d  daddu       $t2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206220) {
            ctx->pc = 0x206228u;
            goto label_206228;
        }
    }
    ctx->pc = 0x206228u;
label_206228:
    // 0x206228: 0xa663c  dsll32      $t4, $t2, 24
    ctx->pc = 0x206228u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 10) << (32 + 24));
    // 0x20622c: 0xd563c  dsll32      $t2, $t5, 24
    ctx->pc = 0x20622cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 13) << (32 + 24));
    // 0x206230: 0xa563f  dsra32      $t2, $t2, 24
    ctx->pc = 0x206230u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 24));
    // 0x206234: 0x1485021  addu        $t2, $t2, $t0
    ctx->pc = 0x206234u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x206238: 0x5410003  bgez        $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x206238u;
    {
        const bool branch_taken_0x206238 = (GPR_S32(ctx, 10) >= 0);
        ctx->pc = 0x20623Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206238u;
        // 0x20623c: 0xc663f  dsra32      $t4, $t4, 24 (Delay Slot)
        SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206238) {
            ctx->pc = 0x206248u;
            goto label_206248;
        }
    }
    ctx->pc = 0x206240u;
    // 0x206240: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x206240u;
    {
        const bool branch_taken_0x206240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206240u;
        // 0x206244: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206240) {
            ctx->pc = 0x20625Cu;
            goto label_20625c;
        }
    }
    ctx->pc = 0x206248u;
label_206248:
    // 0x206248: 0x29410020  slti        $at, $t2, 0x20
    ctx->pc = 0x206248u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x20624c: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x20624Cu;
    {
        const bool branch_taken_0x20624c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x20624c) {
            ctx->pc = 0x20625Cu;
            goto label_20625c;
        }
    }
    ctx->pc = 0x206254u;
    // 0x206254: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x206254u;
    {
        const bool branch_taken_0x206254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206254u;
        // 0x206258: 0x60502d  daddu       $t2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206254) {
            ctx->pc = 0x20625Cu;
            goto label_20625c;
        }
    }
    ctx->pc = 0x20625Cu;
label_20625c:
    // 0x20625c: 0xa6e3c  dsll32      $t5, $t2, 24
    ctx->pc = 0x20625cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 10) << (32 + 24));
    // 0x206260: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x206260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x206264: 0xb563c  dsll32      $t2, $t3, 24
    ctx->pc = 0x206264u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) << (32 + 24));
    // 0x206268: 0xd6e3f  dsra32      $t5, $t5, 24
    ctx->pc = 0x206268u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 13) >> (32 + 24));
    // 0x20626c: 0xa563f  dsra32      $t2, $t2, 24
    ctx->pc = 0x20626cu;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 24));
    // 0x206270: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x206270u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x206274: 0xa5a80  sll         $t3, $t2, 10
    ctx->pc = 0x206274u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 10), 10));
    // 0x206278: 0xc563c  dsll32      $t2, $t4, 24
    ctx->pc = 0x206278u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 12) << (32 + 24));
    // 0x20627c: 0xa48b0000  sh          $t3, 0x0($a0)
    ctx->pc = 0x20627cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 11));
    // 0x206280: 0xa563f  dsra32      $t2, $t2, 24
    ctx->pc = 0x206280u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 24));
    // 0x206284: 0x948b0000  lhu         $t3, 0x0($a0)
    ctx->pc = 0x206284u;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x206288: 0xa5140  sll         $t2, $t2, 5
    ctx->pc = 0x206288u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
    // 0x20628c: 0x314cffff  andi        $t4, $t2, 0xFFFF
    ctx->pc = 0x20628cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x206290: 0x16c5825  or          $t3, $t3, $t4
    ctx->pc = 0x206290u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 12));
    // 0x206294: 0x28aa0010  slti        $t2, $a1, 0x10
    ctx->pc = 0x206294u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x206298: 0xa48b0000  sh          $t3, 0x0($a0)
    ctx->pc = 0x206298u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 11));
    // 0x20629c: 0x948b0000  lhu         $t3, 0x0($a0)
    ctx->pc = 0x20629cu;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2062a0: 0x16d5825  or          $t3, $t3, $t5
    ctx->pc = 0x2062a0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 13));
    // 0x2062a4: 0xa48b0000  sh          $t3, 0x0($a0)
    ctx->pc = 0x2062a4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 11));
    // 0x2062a8: 0x1540ffbd  bnez        $t2, . + 4 + (-0x43 << 2)
    ctx->pc = 0x2062A8u;
    {
        const bool branch_taken_0x2062a8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x2062ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2062A8u;
        // 0x2062ac: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2062a8) {
            ctx->pc = 0x2061A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2061a0;
        }
    }
    ctx->pc = 0x2062B0u;
    // 0x2062b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2062B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2062B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2062B8u;
    // 0x2062b8: 0x0  nop
    ctx->pc = 0x2062b8u;
    // NOP
    // 0x2062bc: 0x0  nop
    ctx->pc = 0x2062bcu;
    // NOP
    if (ctx->pc == 0x2062bcu) { ctx->pc = 0x2062c0u; }
}
