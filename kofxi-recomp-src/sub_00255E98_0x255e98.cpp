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

// Function: sub_00255E98
// Address: 0x255e98 - 0x255fc0
void sub_00255E98_0x255e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00255E98_0x255e98");
#endif

    ctx->pc = 0x255e98u;

    // 0x255e98: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x255e98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x255e9c: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x255e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x255ea0: 0x24c61308  addiu       $a2, $a2, 0x1308
    ctx->pc = 0x255ea0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4872));
    // 0x255ea4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x255ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x255ea8: 0xdcc30038  ld          $v1, 0x38($a2)
    ctx->pc = 0x255ea8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 56)));
    // 0x255eac: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x255eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x255eb0: 0x64630001  daddiu      $v1, $v1, 0x1
    ctx->pc = 0x255eb0u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)1);
    // 0x255eb4: 0xfcc30038  sd          $v1, 0x38($a2)
    ctx->pc = 0x255eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 56), GPR_U64(ctx, 3));
    // 0x255eb8: 0x948700a0  lhu         $a3, 0xA0($a0)
    ctx->pc = 0x255eb8u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 160)));
    // 0x255ebc: 0x71c00  sll         $v1, $a3, 16
    ctx->pc = 0x255ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x255ec0: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x255EC0u;
    {
        const bool branch_taken_0x255ec0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x255EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255EC0u;
        // 0x255ec4: 0x52c03  sra         $a1, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255ec0) {
            ctx->pc = 0x255F3Cu;
            goto label_255f3c;
        }
    }
    ctx->pc = 0x255EC8u;
    // 0x255ec8: 0x31cc3  sra         $v1, $v1, 19
    ctx->pc = 0x255ec8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 19));
    // 0x255ecc: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x255eccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x255ed0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x255ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x255ed4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x255ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x255ed8: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x255ed8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x255edc: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x255edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x255ee0: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x255ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x255ee4: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x255EE4u;
    {
        const bool branch_taken_0x255ee4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x255EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255EE4u;
        // 0x255ee8: 0xa48300a0  sh          $v1, 0xA0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 160), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255ee4) {
            ctx->pc = 0x255EF4u;
            goto label_255ef4;
        }
    }
    ctx->pc = 0x255EECu;
    // 0x255eec: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x255eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x255ef0: 0xa48200a0  sh          $v0, 0xA0($a0)
    ctx->pc = 0x255ef0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 160), (uint16_t)GPR_U32(ctx, 2));
label_255ef4:
    // 0x255ef4: 0x4c30005  bgezl       $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x255EF4u;
    {
        const bool branch_taken_0x255ef4 = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x255ef4) {
            ctx->pc = 0x255EF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255EF4u;
            // 0x255ef8: 0x948200a2  lhu         $v0, 0xA2($a0) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 162)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x255F0Cu;
            goto label_255f0c;
        }
    }
    ctx->pc = 0x255EFCu;
    // 0x255efc: 0x61023  negu        $v0, $a2
    ctx->pc = 0x255efcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x255f00: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x255f00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x255f04: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x255f04u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x255f08: 0x948200a2  lhu         $v0, 0xA2($a0)
    ctx->pc = 0x255f08u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 162)));
label_255f0c:
    // 0x255f0c: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x255f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x255f10: 0x31c83  sra         $v1, $v1, 18
    ctx->pc = 0x255f10u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 18));
    // 0x255f14: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x255f14u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x255f18: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x255f18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x255f1c: 0x33403  sra         $a2, $v1, 16
    ctx->pc = 0x255f1cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 16));
    // 0x255f20: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x255f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x255f24: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x255f24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x255f28: 0x1c600008  bgtz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x255F28u;
    {
        const bool branch_taken_0x255f28 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x255F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255F28u;
        // 0x255f2c: 0xa48200a2  sh          $v0, 0xA2($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 162), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255f28) {
            ctx->pc = 0x255F4Cu;
            goto label_255f4c;
        }
    }
    ctx->pc = 0x255F30u;
    // 0x255f30: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x255f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x255f34: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x255F34u;
    {
        const bool branch_taken_0x255f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255F34u;
        // 0x255f38: 0xa48200a2  sh          $v0, 0xA2($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 162), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255f34) {
            ctx->pc = 0x255F4Cu;
            goto label_255f4c;
        }
    }
    ctx->pc = 0x255F3Cu;
label_255f3c:
    // 0x255f3c: 0x51140  sll         $v0, $a1, 5
    ctx->pc = 0x255f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x255f40: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x255f40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x255f44: 0xa48200a0  sh          $v0, 0xA0($a0)
    ctx->pc = 0x255f44u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 160), (uint16_t)GPR_U32(ctx, 2));
    // 0x255f48: 0xa48300a2  sh          $v1, 0xA2($a0)
    ctx->pc = 0x255f48u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 162), (uint16_t)GPR_U32(ctx, 3));
label_255f4c:
    // 0x255f4c: 0x848600a4  lh          $a2, 0xA4($a0)
    ctx->pc = 0x255f4cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 164)));
    // 0x255f50: 0x24a30002  addiu       $v1, $a1, 0x2
    ctx->pc = 0x255f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x255f54: 0xa480009a  sh          $zero, 0x9A($a0)
    ctx->pc = 0x255f54u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 154), (uint16_t)GPR_U32(ctx, 0));
    // 0x255f58: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x255f58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x255f5c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x255F5Cu;
    {
        const bool branch_taken_0x255f5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x255F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255F5Cu;
        // 0x255f60: 0xa480001a  sh          $zero, 0x1A($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 26), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255f5c) {
            ctx->pc = 0x255F6Cu;
            goto label_255f6c;
        }
    }
    ctx->pc = 0x255F64u;
    // 0x255f64: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x255F64u;
    {
        const bool branch_taken_0x255f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255F64u;
        // 0x255f68: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255f64) {
            ctx->pc = 0x255F74u;
            goto label_255f74;
        }
    }
    ctx->pc = 0x255F6Cu;
label_255f6c:
    // 0x255f6c: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x255f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x255f70: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x255f70u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
label_255f74:
    // 0x255f74: 0x948200a0  lhu         $v0, 0xA0($a0)
    ctx->pc = 0x255f74u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 160)));
    // 0x255f78: 0x848300a2  lh          $v1, 0xA2($a0)
    ctx->pc = 0x255f78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 162)));
    // 0x255f7c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x255f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x255f80: 0x214c3  sra         $v0, $v0, 19
    ctx->pc = 0x255f80u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 19));
    // 0x255f84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x255f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x255f88: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x255f88u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x255f8c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x255f8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255f90: 0xc5182a  slt         $v1, $a2, $a1
    ctx->pc = 0x255f90u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x255f94: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x255F94u;
    {
        const bool branch_taken_0x255f94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x255F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255F94u;
        // 0x255f98: 0xa482001c  sh          $v0, 0x1C($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 28), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255f94) {
            ctx->pc = 0x255FA4u;
            goto label_255fa4;
        }
    }
    ctx->pc = 0x255F9Cu;
    // 0x255f9c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x255F9Cu;
    {
        const bool branch_taken_0x255f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255F9Cu;
        // 0x255fa0: 0xa485001c  sh          $a1, 0x1C($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 28), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255f9c) {
            ctx->pc = 0x255FB4u;
            goto label_255fb4;
        }
    }
    ctx->pc = 0x255FA4u;
label_255fa4:
    // 0x255fa4: 0x28c20081  slti        $v0, $a2, 0x81
    ctx->pc = 0x255fa4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x255fa8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x255FA8u;
    {
        const bool branch_taken_0x255fa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x255FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255FA8u;
        // 0x255fac: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255fa8) {
            ctx->pc = 0x255FB4u;
            goto label_255fb4;
        }
    }
    ctx->pc = 0x255FB0u;
    // 0x255fb0: 0xa482001c  sh          $v0, 0x1C($a0)
    ctx->pc = 0x255fb0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 28), (uint16_t)GPR_U32(ctx, 2));
label_255fb4:
    // 0x255fb4: 0x3e00008  jr          $ra
    ctx->pc = 0x255FB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x255FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255FB4u;
        // 0x255fb8: 0xa48000b2  sh          $zero, 0xB2($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 178), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255FB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x255FBCu;
    // 0x255fbc: 0x0  nop
    ctx->pc = 0x255fbcu;
    // NOP
    if (ctx->pc == 0x255fbcu) { ctx->pc = 0x255fc0u; }
}
